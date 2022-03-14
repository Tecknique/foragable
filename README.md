# forageable

first push, changing code from python to c++, for learning purposes. 3/14/2022

forageable is a project that identifies variables of various forageable objects, and their environmental features,
and illuminates the location on a map based on each day of the season.

The main environmental variables are:

location
elevation
aspect slope of the coordinate
time of season
streetway
rivers

this was originally an art installation to educate people on what part of the mountain, and elevation they should
go on a given day to find morel mushrooms upon selection of 4 latitude and longitude coordinates, and evolved into 
a larger project.

The aspect slope is the angle towards north, east, south, west that the slope of the coodinate is facing. It is basically a representation
of the degrees of a circle in colors (0-360). The elevation has to be factored into the aspect, because mushroom seasons start
from the south facing side, making its way increasing elevation, then throughout the season, the lower elevation of directions start
to be more prolific because the ground is heated up more by where the sun is facing during that specific time in the season.



This is a sped up gif of the art installation:
![](https://imgur.com/a/FKf4dwS)
It's a 3d projector, projecting 8 6x6 squares of 3d printed topography. The colors
represent the aspect slope, and the lines are elevation. Whereever the color illuminates 
is where in the season people should focus on for finding morel mushrooms. 

My data comes from personal experience, I have been foraging morels for 5 years, so I accept any criticism, and will be extremely happy to receive advice from people that have more experience then me on how I should change my equations. The equations are not linear, because it involves angles as well as elevation.

If you have any questions, or advice I'd be very excited to answer them. Please feel free to ask anything.
