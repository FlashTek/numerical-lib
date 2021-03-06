reset
set term pngcairo enhanced

set palette maxcolors 128
set xlabel "x"
set ylabel "y"
set cbrange[0:1]
set key outside;
set key top center box opaque
set xrange[0:30]
set yrange[0:30]

set output "grid05.png"
plot "out05.dat" matrix w image t "Temperatur T zu t = 0.5"

set output "grid005.png"
plot "out005.dat" matrix w image t "Temperatur T zu t = 0.05"

set output "grid0005.png"
plot "out0005.dat" matrix w image t "Temperatur T zu t = 0.005"

set output "test.png"
plot "test.dat" matrix w image
