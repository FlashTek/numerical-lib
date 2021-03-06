set term pngcairo enhanced
set output "task5.png"
dx = 1.0/30.0
set xrange[0:150]

set xlabel "P�clet-Zahl Pe"
set ylabel "Maximaler Zeitschritt {/Symbol D}t_{max}"

plot 4*dx**2/(16+(pi*x*dx)**2) t "Verlauf nach von-Neumann-Analyse" lt 2
