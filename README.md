
## > EGG INCUBATOR WITH LabVIEW

Hi everyone !

## LabVIEW Diagram

In this project, I made an egg incubator over Labview and sharing it with you.

,![enter image description here](https://raw.githubusercontent.com/fath9010yasar/Egg-Incubator/main/egg_git.png)

As seen in the diagram, I have reached the temperature and humidity values with the data I received from the serial port with the Dht 11 sensor.

It can cause bad results when the temperature is below 25 degrees and above 50 degrees. In this case, the red LED lights up as a warning.

Likewise, when the temperature is below 50 degrees, or above 35 and 40 degrees, the orange LED, which means dangerous situation, lights up.

Finally, when the temperature is between 35 and 40 degrees, the green LED, which means the safe temperature range, turns on.

## LabVIEW INTERFACE

In order to make my work better, I designed an interface for this project.

The values taken on the first page are seen numerically and depending on these values, the LEDs described in the first section light up.


![enter image description here](https://raw.githubusercontent.com/fath9010yasar/Egg-Incubator/main/egg_interface.png)


On the second page, where the graphs and thermometers, I made a visualization of the received data.


![enter image description here](https://raw.githubusercontent.com/fath9010yasar/Egg-Incubator/main/egg_interface_2.png)

Thanks for reading this article, if you have a question, you can send me an e-mail (fth10ysr@gmail.com).



