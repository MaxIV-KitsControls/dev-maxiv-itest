import PyTango
from symbol import try_stmt
import unittest
import time
import exceptions


class Itest2811ChannelTestCase(unittest.TestCase):

    def setUp(self):
        self.devices = []
        for device in ["test/itest/2811-A-1", "test/itest/2811-A-1"]:
            self.devices += [PyTango.DeviceProxy(device)]


    def testReset(self):
        expected = 0.0
        for device in self.devices :
            "when :"
            device.Current = .5
            device.Reset()
            actual = device.Current

            "then :"
            self.assertEquals(expected, actual, "**ERROR** Reset has no effect : %s   (expected %s)" % (actual, expected) )


    def testStateOn(self):
        expected = PyTango.DevState.ON
        for device in self.devices :
            "when:"
            device.On()
            actual = device.state()

            "then:"
            self.assertEquals(expected, actual, "The state is not correctly set after the On command  : %s (expected : %s)" % (actual, expected))

    def testStateOff(self):
        expected = PyTango.DevState.OFF
        for device in self.devices :
            "when:"
            device.Off()
            actual = device.state()

            "then:"
            self.assertEquals(expected, actual, "The state is not correctly set after the Off command  : %s (expected : %s)" % (actual, expected))
    
    def testOn(self):
        for device in self.devices :
            "setup:"
            if device.state()==PyTango.DevState.ON :
                device.Off()

            "when: On command is call twice"
            device.On()

            "then: No effect"
            self.assertNotRaises(PyTango.DevFailed, lambda : device.On() )

    def testOff(self):
        for device in self.devices :
            "setup:"
            if device.state()==PyTango.DevState.OFF :
                device.On()

            "when: Off command is call twice"
            device.Off()

            "then: No effect"
            self.assertNotRaises(PyTango.DevFailed, lambda : device.Off() )

    def testCurrent(self):
        attribute = "Current"
        # Absolute random valuess
        values = [-2.0, -0.45, 0.0, 1.38, 2.0]
        for device in self.devices :
            for expected in values :
                self._write_read_test(device, attribute, expected)


    def testWrongCurrent(self):
        attribute = "Current"
        wrong_values = [-20.0, 5.01]
        for device in self.devices :
            for wrong in wrong_values :
                "when:"
                self.assertRaises(PyTango.DevFailed, lambda : device.write_attribute(attribute, wrong) )


    def testVoltageAndImpedance(self):
        attribute = "Voltage"
        # Absolute random valuess
        values = [-2.0, -0.45, 0.0, 1.38, 2.0]
        for device in self.devices :
            for value in values :
                "when:"
                device.Current = value
                actual = device.Voltage
                # Considering only the resistance of impedance ?
                expected = device.Impedance * device.Current

                "then:"
                self.assertEquals(expected, actual, "The voltage (or Impedance) doesn't correspond to the current : %s (expected : %s)" % (actual, expected))


#TEST UTILITIES
    def _write_read_test(self, device, attribute, expected ):
            "when:"
            print "%s %s %s" % (device.name(), attribute, expected)
            #setattr(device, attribute, expected)
            device.write_attribute(attribute, expected)
            actual = getattr(device, attribute)

            "then:"
            self.assertEquals(expected, actual, "%s is not set correctly : %s (expected : %s)" % (attribute, actual, expected))


if __name__ == '__main__':
    #suiteFew = unittest.TestSuite()
    #suiteFew.addTest(Itest2811ChannelTestCase("testCurrent"))
    #unittest.TextTestRunner(verbosity=2).run(suiteFew)
    unittest.TextTestRunner(verbosity=2).run(unittest.makeSuite(Itest2811ChannelTestCase))

