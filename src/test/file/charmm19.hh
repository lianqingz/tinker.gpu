namespace commit_11e84c69 {
const char* charmm19_prm = R"**(

      ##############################
      ##                          ##
      ##  Force Field Definition  ##
      ##                          ##
      ##############################


forcefield              CHARMM19

vdwtype                 LENNARD-JONES
radiusrule              ARITHMETIC
radiustype              R-MIN
radiussize              RADIUS
epsilonrule             GEOMETRIC
vdw-14-scale            1.0
chg-14-scale            0.4
electric                332.0716
dielectric              1.0


      #############################
      ##                         ##
      ##  Literature References  ##
      ##                         ##
      #############################


W. E. Reiher III, "Theoretical Studies of Hydrogen Bonding", Ph.D.
Thesis, Department of Chemistry, Harvard University, Cambridge, MA,
1985

L. Nilsson and M. Karplus, "Empirical Energy Functions for Energy
Minimizations and Dynamics of Nucleic Acids", J. Comput. Chem., 7,
591-616 (1986)

E. Neria, S. Fischer and M. Karplus, "Simulation of Activation Free
Energies in Molecular Systems", J. Chem. Phys., 105, 1902-1921 (1996)


      #############################
      ##                         ##
      ##  Atom Type Definitions  ##
      ##                         ##
      #############################


   ######################################################
   ##                                                  ##
   ##  Tinker Atom Class Numbers to CHARMM Atom Names  ##
   ##                                                  ##
   ##    1  H        7  CH3     13  NH3     19  OH1    ##
   ##    2  HC       8  CM      14  NC2     20  OM     ##
   ##    3  HT       9  CR1     15  NP      21  OT     ##
   ##    4  C       10  N       16  NR      22  S      ##
   ##    5  CH1     11  NH1     17  O       23  SH1    ##
   ##    6  CH2     12  NH2     18  OC      24  FE     ##
   ##                                                  ##
   ######################################################


atom          1    1    H     "Amide CONHR Hydrogen"         1     1.008    1
atom          2    1    H     "Amide CONH2 Hydrogen"         1     1.008    1
atom          3    1    H     "HIP Imidazolium HN"           1     1.008    1
atom          4    1    H     "Hydroxyl Hydrogen"            1     1.008    1
atom          5    2    HC    "LYS/ARG/N-Term H"             1     1.008    1
atom          6    3    HT    "Modified TIP3P H"             1     1.008    1
atom          7    4    C     "Amide Carbon"                 6    12.011    3
atom          8    4    C     "Carboxylate Carbon"           6    12.011    3
atom          9    4    C     "C-Terminal Carbon"            6    12.011    3
atom         10    4    C     "PHE CG/TYR CG"                6    12.011    3
atom         11    4    C     "TYR CZ Carbon"                6    12.011    3
atom         12    4    C     "TRP CG Carbon"                6    12.011    3
atom         13    4    C     "TRP CE2 Carbon"               6    12.011    3
atom         14    4    C     "HID CG/HIE CG"                6    12.011    3
atom         15    4    C     "HIP CG Carbon"                6    12.011    3
atom         16    4    C     "ARG CZ Carbon"                6    12.011    3
atom         17    4    C     "Heme Alpha Carbon"            6    12.011    3
atom         18    4    C     "Heme Beta Carbon"             6    12.011    3
atom         19    4    C     "Heme CD Carbon"               6    12.011    3
atom         20    5    CH1   "Aliphatic Methine"            6    13.019    3
atom         21    5    CH1   "Backbone CA Methine"          6    13.019    3
atom         22    5    CH1   "N-Term CA/THR CB"             6    13.019    3
atom         23    6    CH2   "Aliphatic Methylene"          6    14.027    2
atom         24    6    CH2   "MET CG Methylene"             6    14.027    2
atom         25    6    CH2   "GLY CA/PRO CD"                6    14.027    2
atom         26    6    CH2   "CYS CB Methylene"             6    14.027    2
atom         27    6    CH2   "SER CB/HIP CB/LYS CE"         6    14.027    2
atom         28    6    CH2   "ASP CB/GLU CG"                6    14.027    2
atom         29    6    CH2   "Heme H2C= Carbon"             6    14.027    1
atom         30    6    CH2   "Heme CB Carbon"               6    14.027    2
atom         31    6    CH2   "Heme CG Carbon"               6    14.027    2
atom         32    7    CH3   "Aliphatic Methyl"             6    15.035    1
atom         33    7    CH3   "MET CE Methyl"                6    15.035    1
atom         34    7    CH3   "N-Me Amide Methyl"            6    15.035    1
atom         35    7    CH3   "Heme Methyl Carbon"           6    15.035    1
atom         36    8    CM    "Heme CO Carbon"               6    12.011    1
atom         37    9    CR1   "Aromatic Methine"             6    13.019    2
atom         38    9    CR1   "TRP CE3 Methine"              6    13.019    2
atom         39    9    CR1   "TRP CD1 Methine"              6    13.019    2
atom         40    9    CR1   "HID CD2/HIE CD2"              6    13.019    2
atom         41    9    CR1   "HID CE1/HIE CE1"              6    13.019    2
atom         42    9    CR1   "HIP CD2 Methine"              6    13.019    2
atom         43    9    CR1   "HIP CE1 Methine"              6    13.019    2
atom         44    9    CR1   "Heme Meso Carbon"             6    13.019    2
atom         45    9    CR1   "Heme RHC= Carbon"             6    13.019    2
atom         46   10    N     "PRO Nitrogen"                 7    14.007    3
atom         47   11    NH1   "Amide NHR Nitrogen"           7    15.015    3
atom         48   11    NH1   "HIP ND1/HIP NE2"              7    15.015    3
atom         49   11    NH1   "TRP NE1 Nitrogen"             7    15.015    3
atom         50   11    NH1   "ARG NE/HIDE NH"               7    15.015    3
atom         51   12    NH2   "Amide NH2 Nitrogen"           7    16.023    3
atom         52   13    NH3   "Ammonium Nitrogen"            7    17.031    4
atom         53   13    NH3   "N-Terminal PRO N"             7    17.031    4
atom         54   14    NC2   "ARG NH2 Nitrogen"             7    16.023    3
atom         55   15    NP    "Heme Pyrrole Nitrogen"        7    14.007    3
atom         56   16    NR    "HID NE2/HIE ND1"              7    14.007    2
atom         57   17    O     "Amide Oxygen"                 8    15.999    1
atom         58   18    OC    "Carboxylate Oxygen"           8    15.999    1
atom         59   18    OC    "C-Terminal Oxygen"            8    15.999    1
atom         60   18    OC    "Heme OD Oxygen"               8    15.999    1
atom         61   19    OH1   "Hydroxyl Oxygen"              8    15.999    2
atom         62   20    OM    "Heme CO Oxygen"               8    15.999    1
atom         63   20    OM    "Heme O2 Oxygen"               8    15.999    1
atom         64   21    OT    "Modified TIP3P O"             8    15.999    2
atom         65   22    S     "MET Sulfide Sulfur"          16    32.060    2
atom         66   22    S     "CYS Disulfide Sulfur"        16    32.060    2
atom         67   23    SH1   "CYS Thiol Sulfur"            16    33.068    1
atom         68   24    FE    "Heme Iron"                   26    55.847    4
atom         69   25    LX    "Heme VDW Ligand"             18    32.000    0


      ################################
      ##                            ##
      ##  Van der Waals Parameters  ##
      ##                            ##
      ################################


vdw           1               0.8000    -0.0498
vdw           2               0.6000    -0.0498
vdw           3               0.8000    -0.0498
vdw           4               2.1000    -0.1200
vdw           5               2.3650    -0.0486
vdw           6               2.2350    -0.1142
vdw           7               2.1650    -0.1811
vdw           8               2.4900    -0.0262
vdw           9               2.1000    -0.1200
vdw          10               1.6000    -0.2384
vdw          11               1.6000    -0.2384
vdw          12               1.6000    -0.2384
vdw          13               1.6000    -0.2384
vdw          14               1.6000    -0.2384
vdw          15               1.6000    -0.2384
vdw          16               1.6000    -0.2384
vdw          17               1.6000    -0.1591
vdw          18               1.6000    -0.6469
vdw          19               1.6000    -0.1591
vdw          20               1.6000    -0.1591
vdw          21               1.6000    -0.1591
vdw          22               1.8900    -0.0430
vdw          23               1.8900    -0.0430
vdw          24               0.6500     0.0000
vdw          25               1.4000    -0.0200


      ####################################
      ##                                ##
      ##  1-4 Van der Waals Parameters  ##
      ##                                ##
      ####################################


vdw14         4               1.9000    -0.1000
vdw14         5               1.9000    -0.1000
vdw14         6               1.9000    -0.1000
vdw14         7               1.9000    -0.1000
vdw14         8               1.9000    -0.1000
vdw14         9               1.9000    -0.1000


      #####################################
      ##                                 ##
      ##  Van der Waals Pair Parameters  ##
      ##                                 ##
      #####################################


vdwpr         3    3          0.4490    -0.04598
vdwpr         3   21          1.9927    -0.08363
vdwpr        21   21          3.5365    -0.152073


      ##################################
      ##                              ##
      ##  Bond Stretching Parameters  ##
      ##                              ##
      ##################################


bond          1   11          405.00     0.9800
bond          1   12          405.00     0.9800
bond          1   19          450.00     0.9600
bond          2   11          405.00     0.9800
bond          2   13          405.00     1.0400
bond          2   14          405.00     1.0000
bond          3   21          450.00     0.9572
bond          4    4          450.00     1.3800
bond          4    5          405.00     1.5200
bond          4    6          405.00     1.5200
bond          4    7          405.00     1.5200
bond          4    9          450.00     1.3800
bond          4   10          471.00     1.3300
bond          4   11          471.00     1.3300
bond          4   12          471.00     1.3300
bond          4   14          400.00     1.3300
bond          4   15          471.00     1.3300
bond          4   16          471.00     1.3300
bond          4   17          580.00     1.2300
bond          4   18          580.00     1.2300
bond          4   19          450.00     1.3800
bond          5    5          225.00     1.5300
bond          5    6          225.00     1.5200
bond          5    7          225.00     1.5200
bond          5   10          422.00     1.4500
bond          5   11          422.00     1.4500
bond          5   12          422.00     1.4500
bond          5   13          422.00     1.4500
bond          5   19          400.00     1.4200
bond          6    6          225.00     1.5200
bond          6    7          225.00     1.5400
bond          6    9          250.00     1.4500
bond          6   10          422.00     1.4500
bond          6   11          422.00     1.4500
bond          6   12          422.00     1.4500
bond          6   13          422.00     1.4500
bond          6   19          400.00     1.4200
bond          6   22          450.00     1.8100
bond          6   23          450.00     1.8100
bond          7   11          422.00     1.4900
bond          7   16          422.00     1.4900
bond          7   22          450.00     1.7700
bond          9    9          450.00     1.3800
bond          9   11          450.00     1.3050
bond          9   16          450.00     1.3050
bond         15   24          500.00     2.0900
bond         18   22          400.00     1.4300
bond         22   22          500.00     2.0200


      ################################
      ##                            ##
      ##  Angle Bending Parameters  ##
      ##                            ##
      ################################


angle         4    4    4      70.00     106.50
angle         4    4    6      65.00     126.50
angle         4    4    7      65.00     126.50
angle         4    4    9      70.00     122.50
angle         4    4   11      65.00     109.00
angle         4    4   15      65.00     112.50
angle         4    4   16      65.00     112.50
angle         4    4   17      65.00     119.00
angle         4    4   19      65.00     119.00
angle         5    4   10      20.00     117.50
angle         5    4   11      20.00     117.50
angle         5    4   17      85.00     121.50
angle         5    4   18      85.00     117.50
angle         5    4   19      85.00     120.00
angle         6    4    9      70.00     121.50
angle         6    4   10      20.00     117.50
angle         6    4   11      20.00     117.50
angle         6    4   12      20.00     117.50
angle         6    4   14      20.00     117.50
angle         6    4   16      60.00     116.00
angle         6    4   17      85.00     121.60
angle         6    4   18      85.00     118.50
angle         6    4   19      85.00     120.00
angle         7    4   10      20.00     117.50
angle         7    4   11      20.00     117.50
angle         7    4   17      85.00     121.50
angle         9    4    9      65.00     120.50
angle         9    4   11      65.00     110.50
angle         9    4   15      65.00     122.50
angle         9    4   16      65.00     122.50
angle         9    4   19      65.00     119.00
angle        10    4   17      85.00     121.00
angle        11    4   16      70.00     120.00
angle        11    4   17      65.00     121.00
angle        12    4   17      65.00     121.00
angle        11    4   14      70.00     120.00
angle        14    4   14      70.00     120.00
angle        17    4   19      85.00     120.00
angle        18    4   18      85.00     122.50
angle         4    5    5      70.00     110.00
angle         4    5    6      70.00     109.50
angle         4    5    7      70.00     106.50
angle         4    5   10      45.00     111.60
angle         4    5   11      45.00     111.60
angle         4    5   12      45.00     111.60
angle         4    5   13      45.00     111.60
angle         5    5    6      45.00     112.50
angle         5    5    7      45.00     111.00
angle         5    5   11      50.00     110.00
angle         5    5   12      50.00     109.50
angle         5    5   13      50.00     107.50
angle         5    5   19      50.00     104.50
angle         6    5    7      50.00     111.50
angle         6    5   10      65.00     104.00
angle         6    5   11      65.00     110.00
angle         6    5   12      65.00     110.00
angle         6    5   13      65.00     110.00
angle         7    5    7      50.00     111.00
angle         7    5   11      65.00     108.50
angle         7    5   12      65.00     109.50
angle         7    5   13      65.00     109.50
angle         7    5   19      60.00     110.50
angle         4    6    5      70.00     112.50
angle         4    6    6      70.00     113.00
angle         4    6   11      70.00     111.60
angle         4    6   12      70.00     111.60
angle         4    6   13      70.00     111.60
angle         5    6    5      45.00     117.00
angle         5    6    6      45.00     112.50
angle         5    6    7      45.00     113.00
angle         5    6   19      45.00     111.00
angle         5    6   22      50.00     112.50
angle         5    6   23      50.00     112.50
angle         6    6    6      45.00     110.00
angle         6    6    7      45.00     111.00
angle         6    6   10      65.00     105.00
angle         6    6   11      65.00     111.00
angle         6    6   12      65.00     109.50
angle         6    6   13      65.00     110.50
angle         6    6   22      50.00     112.50
angle         7    6   19      45.00     111.00
angle         4    9    4      90.00     126.50
angle         4    9    6      90.00     122.00
angle         4    9    9      90.00     119.00
angle         4    9   11      90.00     109.50
angle         4    9   16      90.00     106.50
angle         9    9    9      90.00     120.50
angle        11    9   11      70.00     109.00
angle        11    9   16      70.00     109.00
angle         4   10    5      80.00     120.00
angle         4   10    6      80.00     120.00
angle         5   10    6      60.00     110.00
angle         5   10    7      60.00     110.00
angle         6   10    7      60.00     109.50
angle         1   11    4      30.00     120.00
angle         4   11    5      77.50     120.00
angle         4   11    6      77.50     120.00
angle         4   11    7      77.50     120.00
angle         4   11    9      60.00     108.00
angle         1   11    5      35.00     120.00
angle         5   11    7      60.00     120.00
angle         1   11    6      35.00     120.00
angle         6   11    7      60.00     120.00
angle         1   11    7      35.00     120.00
angle         1   11    9      35.00     120.00
angle         9   11    9      65.00     110.00
angle         1   12    1      40.00     125.00
angle         1   12    4      30.00     120.00
angle         1   12    5      35.00     120.00
angle         1   12    6      35.00     120.00
angle         2   12    2      40.00     120.00
angle         5   12    6      60.00     120.00
angle         2   13    2      40.00     109.50
angle         2   13    5      35.00     109.50
angle         5   13    6      35.00     109.50
angle         2   13    6      35.00     109.50
angle         2   14    2      40.00     120.00
angle         2   14    4      35.00     120.00
angle         4   16    4      70.00     102.50
angle         4   16    9      70.00     109.50
angle         4   16    7      70.00     109.50
angle         7   16    9      70.00     109.50
angle         9   16    9      65.00     110.00
angle         1   19    4      50.00     109.50
angle         1   19    5      35.00     109.50
angle         1   19    6      35.00     109.50
angle         3   21    3      55.00     104.52
angle         6   22    7      50.00      99.50
angle         6   22   22      50.00     104.20
angle        18   22   18      85.00     109.50
angle         4   15    4      70.00     102.50
angle         4   15   24      50.00     128.00
anglef       15   24   15      50.00     180.00        4.0


      ####################################
      ##                                ##
      ##  Improper Dihedral Parameters  ##
      ##                                ##
      ####################################


improper      4    4    4    7            90.00       0.00
improper      4    5   10   17           100.00       0.00
improper      4    5   11   17           100.00       0.00
improper      4    6   10   17           100.00       0.00
improper      4    6   11   17           100.00       0.00
improper      4    7   10   17           100.00       0.00
improper      4    7   11   17           100.00       0.00
improper      4    9    4    6            90.00       0.00
improper      4    9    9    6            90.00       0.00
improper      4    9    9   19           150.00       0.00
improper      4   11    9    6            90.00       0.00
improper      4   14   14   11           100.00       0.00
improper      4   16    9    6            90.00       0.00
improper      4   17   12    6            90.00       0.00
improper      4   18   18    5           100.00       0.00
improper      4   18   18    6           100.00       0.00
improper      5    6    7    5            55.00      35.26439
improper      5    7    7    5            55.00      35.26439
improper      5    7    7    6            55.00      35.26439
improper      5   10    4    6            55.00      35.26439
improper      5   11    4    5            55.00      35.26439
improper      5   11    4    6            55.00      35.26439
improper      5   11    4    7            55.00      35.26439
improper      5   19    7    5            55.00      35.26439
improper     10    5    6    4            45.00       0.00
improper     11    4    5    1            45.00       0.00
improper     11    4    6    1            45.00       0.00
improper     11    4    7    1            45.00       0.00
improper     11    9    4    1            45.00       0.00
improper     11    9    9    1            45.00       0.00
improper     12    1    1    4            45.00       0.00
improper     14    4    2    2            45.00       0.00


   ##########################################################
   ##                                                      ##
   ##  The following improper dihedral parameters are to   ##
   ##  replace the CHARMM19 improper dihedrals for TRP at  ##
   ##  CD2 and CE2 which do not involve directly bonded    ##
   ##  atoms in the authentic CHARMM19 parameter set       ##
   ##                                                      ##
   ##########################################################


improper      4    4    4    9            90.00       0.00
improper      4   11    4    9            90.00       0.00


      ############################
      ##                        ##
      ##  Torsional Parameters  ##
      ##                        ##
      ############################


   ############################################################
   ##                                                        ##
   ##  All torsional parameters have been reduced as needed  ##
   ##  to account for degeneracy; authentic CHARMM19 uses    ##
   ##  at most one torsion across each pair of bonded atoms  ##
   ##  while Tinker has a torsion for each four atom set     ##
   ##  across a bond; for example, the generic CHARMM19      ##
   ##  parameter between two trigonal atoms is reduced by a  ##
   ##  factor of (3-1)x(3-1)=4 for use with the Tinker code  ##
   ##                                                        ##
   ############################################################


torsion       4    4    4    4
torsion       4    4    4    6
torsion       4    4    4    7
torsion       4    4    4    9            2.500  180.0  2
torsion       4    4    4   11
torsion       4    4    4   15
torsion       6    4    4    7
torsion       6    4    4    9
torsion       6    4    4   15
torsion       7    4    4    9
torsion       7    4    4   15
torsion       9    4    4    9            5.000  180.0  2
torsion       9    4    4   11            2.500  180.0  2
torsion       9    4    4   15
torsion      10    4    5    5
torsion      10    4    5    6
torsion      10    4    5    7
torsion      10    4    5   10
torsion      10    4    5   11
torsion      10    4    5   13
torsion      11    4    5    5
torsion      11    4    5    6
torsion      11    4    5    7
torsion      11    4    5   10
torsion      11    4    5   11
torsion      11    4    5   13
torsion      17    4    5    5
torsion      17    4    5    6
torsion      17    4    5    7
torsion      17    4    5   10
torsion      17    4    5   11
torsion      17    4    5   13
torsion      18    4    5    5
torsion      18    4    5    6
torsion      18    4    5    7
torsion      18    4    5   10
torsion      18    4    5   11
torsion       4    4    6    5
torsion       4    4    6    6
torsion       9    4    6    5
torsion      10    4    6   11
torsion      11    4    6    5
torsion      11    4    6   11
torsion      11    4    6   13
torsion      12    4    6    5
torsion      12    4    6    6
torsion      16    4    6    5
torsion      17    4    6    5
torsion      17    4    6    6
torsion      17    4    6   11
torsion      17    4    6   13
torsion      18    4    6    5
torsion      18    4    6    6
torsion      18    4    6   11
torsion       4    4    9    4            5.000  180.0  2
torsion       4    4    9    6            5.000  180.0  2
torsion       4    4    9    9            5.000  180.0  2
torsion       4    4    9   11            5.000  180.0  2
torsion       6    4    9    9            5.000  180.0  2
torsion       6    4    9   11            5.000  180.0  2
torsion       6    4    9   16            5.000  180.0  2
torsion       9    4    9    9            5.000  180.0  2
torsion      11    4    9    9            5.000  180.0  2
torsion      11    4    9   11            5.000  180.0  2
torsion      11    4    9   16            5.000  180.0  2
torsion      15    4    9    4            5.000  180.0  2
torsion      16    4    9   11            5.000  180.0  2
torsion      19    4    9    9            5.000  180.0  2
torsion       5    4   10    5            2.500  180.0  2
torsion       5    4   10    6            2.500  180.0  2
torsion       6    4   10    5            2.500  180.0  2
torsion       6    4   10    6            2.500  180.0  2
torsion       7    4   10    5            2.050  180.0  2
torsion       7    4   10    6            2.050  180.0  2
torsion      17    4   10    5            2.050  180.0  2
torsion      17    4   10    6            2.050  180.0  2
torsion       4    4   11    1            2.050  180.0  2
torsion       4    4   11    9            2.050  180.0  2
torsion       5    4   11    1            2.050  180.0  2
torsion       5    4   11    5            2.050  180.0  2
torsion       5    4   11    6            2.050  180.0  2
torsion       5    4   11    7            2.050  180.0  2
torsion       6    4   11    1            2.050  180.0  2
torsion       6    4   11    5            2.050  180.0  2
torsion       6    4   11    6            2.050  180.0  2
torsion       6    4   11    7            2.050  180.0  2
torsion       6    4   11    9            2.050  180.0  2
torsion       7    4   11    1            2.050  180.0  2
torsion       7    4   11    5            2.050  180.0  2
torsion       7    4   11    6            2.050  180.0  2
torsion       9    4   11    1            2.050  180.0  2
torsion       9    4   11    9            2.050  180.0  2
torsion      14    4   11    1            2.050  180.0  2
torsion      14    4   11    6            2.050  180.0  2
torsion      17    4   11    1            2.050  180.0  2
torsion      17    4   11    5            2.050  180.0  2
torsion      17    4   11    6            2.050  180.0  2
torsion      17    4   11    7            2.050  180.0  2
torsion       6    4   12    1            2.050  180.0  2
torsion      17    4   12    1            2.050  180.0  2
torsion      11    4   14    2            2.050  180.0  2
torsion      14    4   14    2            2.050  180.0  2
torsion       4    4   15    4
torsion       4    4   15   24
torsion       9    4   15    4
torsion       9    4   15   24
torsion       6    4   16    9
torsion       9    4   16    9
torsion       9    4   19    1            0.900  180.0  2
torsion       4    5    5    6            0.400    0.0  3
torsion       4    5    5    7            0.400    0.0  3
torsion       4    5    5   19            0.400    0.0  3
torsion       6    5    5   11            0.400    0.0  3
torsion       6    5    5   13            0.400    0.0  3
torsion       7    5    5   11            0.400    0.0  3
torsion       7    5    5   13            0.400    0.0  3
torsion      11    5    5   19            0.400    0.0  3
torsion      13    5    5   19            0.400    0.0  3
torsion       4    5    6    4            0.800    0.0  3
torsion       4    5    6    5            0.800    0.0  3
torsion       4    5    6    6            0.800    0.0  3
torsion       4    5    6   19            0.800    0.0  3
torsion       4    5    6   22            0.800    0.0  3
torsion       4    5    6   23            0.800    0.0  3
torsion       5    5    6    7            0.800    0.0  3
torsion       7    5    6    5            0.800    0.0  3
torsion       7    5    6    7            0.800    0.0  3
torsion      10    5    6    6            0.800    0.0  3
torsion      11    5    6    4            0.800    0.0  3
torsion      11    5    6    5            0.800    0.0  3
torsion      11    5    6    6            0.800    0.0  3
torsion      11    5    6   19            0.800    0.0  3
torsion      11    5    6   22            0.800    0.0  3
torsion      11    5    6   23            0.800    0.0  3
torsion      13    5    6    4            0.800    0.0  3
torsion      13    5    6    5            0.800    0.0  3
torsion      13    5    6    6            0.800    0.0  3
torsion      13    5    6   19            0.800    0.0  3
torsion      13    5    6   23            0.800    0.0  3
torsion       4    5   10    4            0.075    0.0  3
torsion       4    5   10    6            0.075    0.0  3
torsion       6    5   10    4            0.075    0.0  3
torsion       6    5   10    6            0.075    0.0  3
torsion       4    5   11    1            0.075    0.0  3
torsion       4    5   11    4            0.075    0.0  3
torsion       5    5   11    1            0.075    0.0  3
torsion       5    5   11    4            0.075    0.0  3
torsion       6    5   11    1            0.075    0.0  3
torsion       6    5   11    4            0.075    0.0  3
torsion       7    5   11    1            0.075    0.0  3
torsion       7    5   11    4            0.075    0.0  3
torsion       4    5   13    2            0.100    0.0  3
torsion       4    5   13    6            0.100    0.0  3
torsion       5    5   13    2            0.100    0.0  3
torsion       6    5   13    2            0.100    0.0  3
torsion       6    5   13    6            0.100    0.0  3
torsion       7    5   13    2            0.100    0.0  3
torsion       5    5   19    1            0.250    0.0  3
torsion       7    5   19    1            0.250    0.0  3
torsion       5    6   19    1            0.500    0.0  3
torsion       4    6    6    4            1.600    0.0  3
torsion       4    6    6    5            1.600    0.0  3
torsion       5    6    6    6            1.600    0.0  3
torsion       5    6    6   22            1.600    0.0  3
torsion       6    6    6    6            1.600    0.0  3
torsion       6    6    6   10            1.600    0.0  3
torsion       6    6    6   11            1.600    0.0  3
torsion       6    6    6   13            1.600    0.0  3
torsion       6    6   10    4            0.150    0.0  3
torsion       6    6   10    5            0.150    0.0  3
torsion       4    6   11    1            0.150    0.0  3
torsion       4    6   11    4            0.150    0.0  3
torsion       6    6   11    1            0.150    0.0  3
torsion       6    6   11    4            0.150    0.0  3
torsion       4    6   13    2            0.200    0.0  3
torsion       6    6   13    2            0.200    0.0  3
torsion       6    6   13    5            0.200    0.0  3
torsion       5    6   22   22            1.200    0.0  2
torsion       6    6   22    7            1.200    0.0  2
torsion       4   15   24   15
torsion       6   22   22    6            4.000    0.0  2


   #############################################################
   ##                                                         ##
   ##  The following torsional parameters involving aromatic  ##
   ##  carbons are all set to zero in the authentic CHARMM19  ##
   ##  parameter set, but set to large 2-fold barriers here   ##
   ##  to replace improper dihedrals that do not involve      ##
   ##  the three atoms bonded to a trigonal center and thus   ##
   ##  cannot be handled by the Tinker improper formulation   ##
   ##                                                         ##
   #############################################################


torsion       4    9    9    4           10.000  180.0  2
torsion       4    9    9    9           10.000  180.0  2
torsion       9    9    9    9           10.000  180.0  2
torsion       4    9   11    1            4.100  180.0  2
torsion       4    9   11    4            4.100  180.0  2
torsion       4    9   11    9            4.100  180.0  2
torsion      11    9   11    1            4.100  180.0  2
torsion      11    9   11    4            4.100  180.0  2
torsion      11    9   11    9            4.100  180.0  2
torsion      16    9   11    1            4.100  180.0  2
torsion      16    9   11    4            4.100  180.0  2
torsion      16    9   11    9            4.100  180.0  2
torsion       4    9   16    9            8.200  180.0  2
torsion      11    9   16    4            8.200  180.0  2
torsion      11    9   16    9            8.200  180.0  2


      ########################################
      ##                                    ##
      ##  Atomic Partial Charge Parameters  ##
      ##                                    ##
      ########################################


charge        1               0.2500
charge        2               0.3000
charge        3               0.3500
charge        4               0.4000
charge        5               0.3500
charge        6               0.4170
charge        7               0.5500
charge        8               0.3600
charge        9               0.1400
charge       10               0.0000
charge       11               0.2500
charge       12              -0.0300
charge       13              -0.0400
charge       14               0.1000
charge       15               0.1500
charge       16               0.5000
charge       17               0.0250
charge       18              -0.0075
charge       19               0.3000
charge       20               0.0000
charge       21               0.1000
charge       22               0.2500
charge       23               0.0000
charge       24               0.0600
charge       25               0.1000
charge       26               0.1900
charge       27               0.2500
charge       28              -0.1600
charge       29              -0.1000
charge       30               0.0400
charge       31              -0.1000
charge       32               0.0000
charge       33               0.0600
charge       34               0.1000
charge       35              -0.0400
charge       36               0.0210
charge       37               0.0000
charge       38              -0.0300
charge       39               0.0600
charge       40               0.1000
charge       41               0.3000
charge       42               0.2000
charge       43               0.4500
charge       44               0.0400
charge       45               0.0300
charge       46              -0.2000
charge       47              -0.3500
charge       48              -0.3000
charge       49              -0.3600
charge       50              -0.4000
charge       51              -0.6000
charge       52              -0.3000
charge       53              -0.2000
charge       54              -0.4500
charge       55              -0.1800
charge       56              -0.4000
charge       57              -0.5500
charge       58              -0.6000
charge       59              -0.5700
charge       60              -0.5000
charge       61              -0.6500
charge       62              -0.0210
charge       63               0.0000
charge       64              -0.8340
charge       65              -0.1200
charge       66              -0.1900
charge       67              -0.1900
charge       68               0.2400
charge       69               0.0000


      ########################################
      ##                                    ##
      ##  Biopolymer Atom Type Conversions  ##
      ##                                    ##
      ########################################


biotype       1    N       "Glycine"                          47
biotype       2    CA      "Glycine"                          25
biotype       3    C       "Glycine"                           7
biotype       4    HN      "Glycine"                           1
biotype       5    O       "Glycine"                          57
biotype       6    HA      "Glycine"                           0
biotype       7    N       "Alanine"                          47
biotype       8    CA      "Alanine"                          21
biotype       9    C       "Alanine"                           7
biotype      10    HN      "Alanine"                           1
biotype      11    O       "Alanine"                          57
biotype      12    HA      "Alanine"                           0
biotype      13    CB      "Alanine"                          32
biotype      14    HB      "Alanine"                           0
biotype      15    N       "Valine"                           47
biotype      16    CA      "Valine"                           21
biotype      17    C       "Valine"                            7
biotype      18    HN      "Valine"                            1
biotype      19    O       "Valine"                           57
biotype      20    HA      "Valine"                            0
biotype      21    CB      "Valine"                           20
biotype      22    HB      "Valine"                            0
biotype      23    CG1     "Valine"                           32
biotype      24    HG1     "Valine"                            0
biotype      25    CG2     "Valine"                           32
biotype      26    HG2     "Valine"                            0
biotype      27    N       "Leucine"                          47
biotype      28    CA      "Leucine"                          21
biotype      29    C       "Leucine"                           7
biotype      30    HN      "Leucine"                           1
biotype      31    O       "Leucine"                          57
biotype      32    HA      "Leucine"                           0
biotype      33    CB      "Leucine"                          23
biotype      34    HB      "Leucine"                           0
biotype      35    CG      "Leucine"                          20
biotype      36    HG      "Leucine"                           0
biotype      37    CD1     "Leucine"                          32
biotype      38    HD1     "Leucine"                           0
biotype      39    CD2     "Leucine"                          32
biotype      40    HD2     "Leucine"                           0
biotype      41    N       "Isoleucine"                       47
biotype      42    CA      "Isoleucine"                       21
biotype      43    C       "Isoleucine"                        7
biotype      44    HN      "Isoleucine"                        1
biotype      45    O       "Isoleucine"                       57
biotype      46    HA      "Isoleucine"                        0
biotype      47    CB      "Isoleucine"                       20
biotype      48    HB      "Isoleucine"                        0
biotype      49    CG1     "Isoleucine"                       23
biotype      50    HG1     "Isoleucine"                        0
biotype      51    CG2     "Isoleucine"                       32
biotype      52    HG2     "Isoleucine"                        0
biotype      53    CD      "Isoleucine"                       32
biotype      54    HD      "Isoleucine"                        0
biotype      55    N       "Serine"                           47
biotype      56    CA      "Serine"                           21
biotype      57    C       "Serine"                            7
biotype      58    HN      "Serine"                            1
biotype      59    O       "Serine"                           57
biotype      60    HA      "Serine"                            0
biotype      61    CB      "Serine"                           27
biotype      62    HB      "Serine"                            0
biotype      63    OG      "Serine"                           61
biotype      64    HG      "Serine"                            4
biotype      65    N       "Threonine"                        47
biotype      66    CA      "Threonine"                        21
biotype      67    C       "Threonine"                         7
biotype      68    HN      "Threonine"                         1
biotype      69    O       "Threonine"                        57
biotype      70    HA      "Threonine"                         0
biotype      71    CB      "Threonine"                        22
biotype      72    HB      "Threonine"                         0
biotype      73    OG1     "Threonine"                        61
biotype      74    HG1     "Threonine"                         4
biotype      75    CG2     "Threonine"                        32
biotype      76    HG2     "Threonine"                         0
biotype      77    N       "Cysteine (SH)"                    47
biotype      78    CA      "Cysteine (SH)"                    21
biotype      79    C       "Cysteine (SH)"                     7
biotype      80    HN      "Cysteine (SH)"                     1
biotype      81    O       "Cysteine (SH)"                    57
biotype      82    HA      "Cysteine (SH)"                     0
biotype      83    CB      "Cysteine (SH)"                    26
biotype      84    HB      "Cysteine (SH)"                     0
biotype      85    SG      "Cysteine (SH)"                    67
biotype      86    HG      "Cysteine (SH)"                     0
biotype      87    N       "Cystine (SS)"                     47
biotype      88    CA      "Cystine (SS)"                     21
biotype      89    C       "Cystine (SS)"                      7
biotype      90    HN      "Cystine (SS)"                      1
biotype      91    O       "Cystine (SS)"                     57
biotype      92    HA      "Cystine (SS)"                      0
biotype      93    CB      "Cystine (SS)"                     26
biotype      94    HB      "Cystine (SS)"                      0
biotype      95    SG      "Cystine (SS)"                     66
biotype      96    N       "Cysteine (S-)"                    -1
biotype      97    CA      "Cysteine (S-)"                    -1
biotype      98    C       "Cysteine (S-)"                    -1
biotype      99    HN      "Cysteine (S-)"                    -1
biotype     100    O       "Cysteine (S-)"                    -1
biotype     101    HA      "Cysteine (S-)"                     0
biotype     102    CB      "Cysteine (S-)"                    -1
biotype     103    HB      "Cysteine (S-)"                     0
biotype     104    SG      "Cysteine (S-)"                    -1
biotype     105    N       "Proline"                          46
biotype     106    CA      "Proline"                          21
biotype     107    C       "Proline"                           7
biotype     108    O       "Proline"                          57
biotype     109    HA      "Proline"                           0
biotype     110    CB      "Proline"                          23
biotype     111    HB      "Proline"                           0
biotype     112    CG      "Proline"                          23
biotype     113    HG      "Proline"                           0
biotype     114    CD      "Proline"                          25
biotype     115    HD      "Proline"                           0
biotype     116    N       "Phenylalanine"                    47
biotype     117    CA      "Phenylalanine"                    21
biotype     118    C       "Phenylalanine"                     7
biotype     119    HN      "Phenylalanine"                     1
biotype     120    O       "Phenylalanine"                    57
biotype     121    HA      "Phenylalanine"                     0
biotype     122    CB      "Phenylalanine"                    23
biotype     123    HB      "Phenylalanine"                     0
biotype     124    CG      "Phenylalanine"                    10
biotype     125    CD      "Phenylalanine"                    37
biotype     126    HD      "Phenylalanine"                     0
biotype     127    CE      "Phenylalanine"                    37
biotype     128    HE      "Phenylalanine"                     0
biotype     129    CZ      "Phenylalanine"                    37
biotype     130    HZ      "Phenylalanine"                     0
biotype     131    N       "Tyrosine"                         47
biotype     132    CA      "Tyrosine"                         21
biotype     133    C       "Tyrosine"                          7
biotype     134    HN      "Tyrosine"                          1
biotype     135    O       "Tyrosine"                         57
biotype     136    HA      "Tyrosine"                          0
biotype     137    CB      "Tyrosine"                         23
biotype     138    HB      "Tyrosine"                          0
biotype     139    CG      "Tyrosine"                         10
biotype     140    CD      "Tyrosine"                         37
biotype     141    HD      "Tyrosine"                          0
biotype     142    CE      "Tyrosine"                         37
biotype     143    HE      "Tyrosine"                          0
biotype     144    CZ      "Tyrosine"                         11
biotype     145    OH      "Tyrosine"                         61
biotype     146    HH      "Tyrosine"                          4
biotype     147    N       "Tyrosine (O-)"                    -1
biotype     148    CA      "Tyrosine (O-)"                    -1
biotype     149    C       "Tyrosine (O-)"                    -1
biotype     150    HN      "Tyrosine (O-)"                    -1
biotype     151    O       "Tyrosine (O-)"                    -1
biotype     152    HA      "Tyrosine (O-)"                     0
biotype     153    CB      "Tyrosine (O-)"                    -1
biotype     154    HB      "Tyrosine (O-)"                     0
biotype     155    CG      "Tyrosine (O-)"                    -1
biotype     156    CD      "Tyrosine (O-)"                    -1
biotype     157    HD      "Tyrosine (O-)"                     0
biotype     158    CE      "Tyrosine (O-)"                    -1
biotype     159    HE      "Tyrosine (O-)"                     0
biotype     160    CZ      "Tyrosine (O-)"                    -1
biotype     161    OH      "Tyrosine (O-)"                    -1
biotype     162    N       "Tryptophan"                       47
biotype     163    CA      "Tryptophan"                       21
biotype     164    C       "Tryptophan"                        7
biotype     165    HN      "Tryptophan"                        1
biotype     166    O       "Tryptophan"                       57
biotype     167    HA      "Tryptophan"                        0
biotype     168    CB      "Tryptophan"                       23
biotype     169    HB      "Tryptophan"                        0
biotype     170    CG      "Tryptophan"                       12
biotype     171    CD1     "Tryptophan"                       39
biotype     172    HD1     "Tryptophan"                        0
biotype     173    CD2     "Tryptophan"                       14
biotype     174    NE1     "Tryptophan"                       49
biotype     175    HE1     "Tryptophan"                        2
biotype     176    CE2     "Tryptophan"                       13
biotype     177    CE3     "Tryptophan"                       38
biotype     178    HE3     "Tryptophan"                        0
biotype     179    CZ2     "Tryptophan"                       37
biotype     180    HZ2     "Tryptophan"                        0
biotype     181    CZ3     "Tryptophan"                       37
biotype     182    HZ3     "Tryptophan"                        0
biotype     183    CH2     "Tryptophan"                       37
biotype     184    HH2     "Tryptophan"                        0
biotype     185    N       "Histidine (+)"                    47
biotype     186    CA      "Histidine (+)"                    21
biotype     187    C       "Histidine (+)"                     7
biotype     188    HN      "Histidine (+)"                     1
biotype     189    O       "Histidine (+)"                    57
biotype     190    HA      "Histidine (+)"                     0
biotype     191    CB      "Histidine (+)"                    25
biotype     192    HB      "Histidine (+)"                     0
biotype     193    CG      "Histidine (+)"                    15
biotype     194    ND1     "Histidine (+)"                    48
biotype     195    HD1     "Histidine (+)"                     3
biotype     196    CD2     "Histidine (+)"                    42
biotype     197    HD2     "Histidine (+)"                     0
biotype     198    CE1     "Histidine (+)"                    43
biotype     199    HE1     "Histidine (+)"                     0
biotype     200    NE2     "Histidine (+)"                    48
biotype     201    HE2     "Histidine (+)"                     3
biotype     202    N       "Histidine (HD)"                   47
biotype     203    CA      "Histidine (HD)"                   21
biotype     204    C       "Histidine (HD)"                    7
biotype     205    HN      "Histidine (HD)"                    1
biotype     206    O       "Histidine (HD)"                   57
biotype     207    HA      "Histidine (HD)"                    0
biotype     208    CB      "Histidine (HD)"                   23
biotype     209    HB      "Histidine (HD)"                    0
biotype     210    CG      "Histidine (HD)"                   14
biotype     211    ND1     "Histidine (HD)"                   50
biotype     212    HD1     "Histidine (HD)"                    2
biotype     213    CD2     "Histidine (HD)"                   40
biotype     214    HD2     "Histidine (HD)"                    0
biotype     215    CE1     "Histidine (HD)"                   41
biotype     216    HE1     "Histidine (HD)"                    0
biotype     217    NE2     "Histidine (HD)"                   56
biotype     218    N       "Histidine (HE)"                   47
biotype     219    CA      "Histidine (HE)"                   21
biotype     220    C       "Histidine (HE)"                    7
biotype     221    HN      "Histidine (HE)"                    1
biotype     222    O       "Histidine (HE)"                   57
biotype     223    HA      "Histidine (HE)"                    0
biotype     224    CB      "Histidine (HE)"                   23
biotype     225    HB      "Histidine (HE)"                    0
biotype     226    CG      "Histidine (HE)"                   14
biotype     227    ND1     "Histidine (HE)"                   56
biotype     228    CD2     "Histidine (HE)"                   40
biotype     229    HD2     "Histidine (HE)"                    0
biotype     230    CE1     "Histidine (HE)"                   41
biotype     231    HE1     "Histidine (HE)"                    0
biotype     232    NE2     "Histidine (HE)"                   50
biotype     233    HE2     "Histidine (HE)"                    2
biotype     234    N       "Aspartic Acid"                    47
biotype     235    CA      "Aspartic Acid"                    21
biotype     236    C       "Aspartic Acid"                     7
biotype     237    HN      "Aspartic Acid"                     1
biotype     238    O       "Aspartic Acid"                    57
biotype     239    HA      "Aspartic Acid"                     0
biotype     240    CB      "Aspartic Acid"                    28
biotype     241    HB      "Aspartic Acid"                     0
biotype     242    CG      "Aspartic Acid"                     8
biotype     243    OD      "Aspartic Acid"                    58
biotype     244    N       "Aspartic Acid (COOH)"             -1
biotype     245    CA      "Aspartic Acid (COOH)"             -1
biotype     246    C       "Aspartic Acid (COOH)"             -1
biotype     247    HN      "Aspartic Acid (COOH)"             -1
biotype     248    O       "Aspartic Acid (COOH)"             -1
biotype     249    HA      "Aspartic Acid (COOH)"              0
biotype     250    CB      "Aspartic Acid (COOH)"             -1
biotype     251    HB      "Aspartic Acid (COOH)"              0
biotype     252    CG      "Aspartic Acid (COOH)"             -1
biotype     253    OD1     "Aspartic Acid (COOH)"             -1
biotype     254    OD2     "Aspartic Acid (COOH)"             -1
biotype     255    HD2     "Aspartic Acid (COOH)"             -1
biotype     256    N       "Asparagine"                       47
biotype     257    CA      "Asparagine"                       21
biotype     258    C       "Asparagine"                        7
biotype     259    HN      "Asparagine"                        1
biotype     260    O       "Asparagine"                       57
biotype     261    HA      "Asparagine"                        0
biotype     262    CB      "Asparagine"                       23
biotype     263    HB      "Asparagine"                        0
biotype     264    CG      "Asparagine"                        7
biotype     265    OD1     "Asparagine"                       57
biotype     266    ND2     "Asparagine"                       51
biotype     267    HD2     "Asparagine"                        2
biotype     268    N       "Glutamic Acid"                    47
biotype     269    CA      "Glutamic Acid"                    21
biotype     270    C       "Glutamic Acid"                     7
biotype     271    HN      "Glutamic Acid"                     1
biotype     272    O       "Glutamic Acid"                    57
biotype     273    HA      "Glutamic Acid"                     0
biotype     274    CB      "Glutamic Acid"                    23
biotype     275    HB      "Glutamic Acid"                     0
biotype     276    CG      "Glutamic Acid"                    28
biotype     277    HG      "Glutamic Acid"                     0
biotype     278    CD      "Glutamic Acid"                     8
biotype     279    OE      "Glutamic Acid"                    58
biotype     280    N       "Glutamic Acid (COOH)"             -1
biotype     281    CA      "Glutamic Acid (COOH)"             -1
biotype     282    C       "Glutamic Acid (COOH)"             -1
biotype     283    HN      "Glutamic Acid (COOH)"             -1
biotype     284    O       "Glutamic Acid (COOH)"             -1
biotype     285    HA      "Glutamic Acid (COOH)"              0
biotype     286    CB      "Glutamic Acid (COOH)"             -1
biotype     287    HB      "Glutamic Acid (COOH)"              0
biotype     288    CG      "Glutamic Acid (COOH)"             -1
biotype     289    HG      "Glutamic Acid (COOH)"              0
biotype     290    CD      "Glutamic Acid (COOH)"             -1
biotype     291    OE1     "Glutamic Acid (COOH)"             -1
biotype     292    OE2     "Glutamic Acid (COOH)"             -1
biotype     293    HE2     "Glutamic Acid (COOH)"             -1
biotype     294    N       "Glutamine"                        47
biotype     295    CA      "Glutamine"                        21
biotype     296    C       "Glutamine"                         7
biotype     297    HN      "Glutamine"                         1
biotype     298    O       "Glutamine"                        57
biotype     299    HA      "Glutamine"                         0
biotype     300    CB      "Glutamine"                        23
biotype     301    HB      "Glutamine"                         0
biotype     302    CG      "Glutamine"                        23
biotype     303    HG      "Glutamine"                         0
biotype     304    CD      "Glutamine"                         7
biotype     305    OE1     "Glutamine"                        57
biotype     306    NE2     "Glutamine"                        51
biotype     307    HE2     "Glutamine"                         2
biotype     308    N       "Methionine"                       47
biotype     309    CA      "Methionine"                       21
biotype     310    C       "Methionine"                        7
biotype     311    HN      "Methionine"                        1
biotype     312    O       "Methionine"                       57
biotype     313    HA      "Methionine"                        0
biotype     314    CB      "Methionine"                       23
biotype     315    HB      "Methionine"                        0
biotype     316    CG      "Methionine"                       24
biotype     317    HG      "Methionine"                        0
biotype     318    SD      "Methionine"                       65
biotype     319    CE      "Methionine"                       33
biotype     320    HE      "Methionine"                        0
biotype     321    N       "Lysine"                           47
biotype     322    CA      "Lysine"                           21
biotype     323    C       "Lysine"                            7
biotype     324    HN      "Lysine"                            1
biotype     325    O       "Lysine"                           57
biotype     326    HA      "Lysine"                            0
biotype     327    CB      "Lysine"                           23
biotype     328    HB      "Lysine"                            0
biotype     329    CG      "Lysine"                           23
biotype     330    HG      "Lysine"                            0
biotype     331    CD      "Lysine"                           23
biotype     332    HD      "Lysine"                            0
biotype     333    CE      "Lysine"                           27
biotype     334    HE      "Lysine"                            0
biotype     335    NZ      "Lysine"                           52
biotype     336    HZ      "Lysine"                            5
biotype     337    N       "Lysine (NH2)"                     -1
biotype     338    CA      "Lysine (NH2)"                     -1
biotype     339    C       "Lysine (NH2)"                     -1
biotype     340    HN      "Lysine (NH2)"                     -1
biotype     341    O       "Lysine (NH2)"                     -1
biotype     342    HA      "Lysine (NH2)"                      0
biotype     343    CB      "Lysine (NH2)"                     -1
biotype     344    HB      "Lysine (NH2)"                      0
biotype     345    CG      "Lysine (NH2)"                     -1
biotype     346    HG      "Lysine (NH2)"                      0
biotype     347    CD      "Lysine (NH2)"                     -1
biotype     348    HD      "Lysine (NH2)"                      0
biotype     349    CE      "Lysine (NH2)"                     -1
biotype     350    HE      "Lysine (NH2)"                      0
biotype     351    NZ      "Lysine (NH2)"                     -1
biotype     352    HZ      "Lysine (NH2)"                     -1
biotype     353    N       "Arginine"                         47
biotype     354    CA      "Arginine"                         21
biotype     355    C       "Arginine"                          7
biotype     356    HN      "Arginine"                          1
biotype     357    O       "Arginine"                         57
biotype     358    HA      "Arginine"                          0
biotype     359    CB      "Arginine"                         23
biotype     360    HB      "Arginine"                          0
biotype     361    CG      "Arginine"                         23
biotype     362    HG      "Arginine"                          0
biotype     363    CD      "Arginine"                         25
biotype     364    HD      "Arginine"                          0
biotype     365    NE      "Arginine"                         50
biotype     366    HE      "Arginine"                          2
biotype     367    CZ      "Arginine"                         16
biotype     368    NH      "Arginine"                         54
biotype     369    HH      "Arginine"                          5
biotype     370    N       "Ornithine"                        47
biotype     371    CA      "Ornithine"                        21
biotype     372    C       "Ornithine"                         7
biotype     373    HN      "Ornithine"                         1
biotype     374    O       "Ornithine"                        57
biotype     375    HA      "Ornithine"                         0
biotype     376    CB      "Ornithine"                        23
biotype     377    HB      "Ornithine"                         0
biotype     378    CG      "Ornithine"                        23
biotype     379    HG      "Ornithine"                         0
biotype     380    CD      "Ornithine"                        27
biotype     381    HD      "Ornithine"                         0
biotype     382    NE      "Ornithine"                        52
biotype     383    HE      "Ornithine"                         5
biotype     384    N       "MethylAlanine (AIB)"              -1
biotype     385    CA      "MethylAlanine (AIB)"              -1
biotype     386    C       "MethylAlanine (AIB)"              -1
biotype     387    HN      "MethylAlanine (AIB)"              -1
biotype     388    O       "MethylAlanine (AIB)"              -1
biotype     389    CB      "MethylAlanine (AIB)"              -1
biotype     390    HB      "MethylAlanine (AIB)"               0
biotype     391    N       "Pyroglutamic Acid"                -1
biotype     392    CA      "Pyroglutamic Acid"                -1
biotype     393    C       "Pyroglutamic Acid"                -1
biotype     394    HN      "Pyroglutamic Acid"                -1
biotype     395    O       "Pyroglutamic Acid"                -1
biotype     396    HA      "Pyroglutamic Acid"                 0
biotype     397    CB      "Pyroglutamic Acid"                -1
biotype     398    HB      "Pyroglutamic Acid"                 0
biotype     399    CG      "Pyroglutamic Acid"                -1
biotype     400    HG      "Pyroglutamic Acid"                 0
biotype     401    CD      "Pyroglutamic Acid"                -1
biotype     402    OE      "Pyroglutamic Acid"                -1
biotype     403    N       "N-Terminal GLY"                   52
biotype     404    CA      "N-Terminal GLY"                   27
biotype     405    C       "N-Terminal GLY"                    7
biotype     406    HN      "N-Terminal GLY"                    5
biotype     407    O       "N-Terminal GLY"                   57
biotype     408    HA      "N-Terminal GLY"                    0
biotype     409    N       "N-Terminal ALA"                   52
biotype     410    CA      "N-Terminal ALA"                   22
biotype     411    C       "N-Terminal ALA"                    7
biotype     412    HN      "N-Terminal ALA"                    5
biotype     413    O       "N-Terminal ALA"                   57
biotype     414    HA      "N-Terminal ALA"                    0
biotype     415    N       "N-Terminal VAL"                   52
biotype     416    CA      "N-Terminal VAL"                   22
biotype     417    C       "N-Terminal VAL"                    7
biotype     418    HN      "N-Terminal VAL"                    5
biotype     419    O       "N-Terminal VAL"                   57
biotype     420    HA      "N-Terminal VAL"                    0
biotype     421    N       "N-Terminal LEU"                   52
biotype     422    CA      "N-Terminal LEU"                   22
biotype     423    C       "N-Terminal LEU"                    7
biotype     424    HN      "N-Terminal LEU"                    5
biotype     425    O       "N-Terminal LEU"                   57
biotype     426    HA      "N-Terminal LEU"                    0
biotype     427    N       "N-Terminal ILE"                   52
biotype     428    CA      "N-Terminal ILE"                   22
biotype     429    C       "N-Terminal ILE"                    7
biotype     430    HN      "N-Terminal ILE"                    5
biotype     431    O       "N-Terminal ILE"                   57
biotype     432    HA      "N-Terminal ILE"                    0
biotype     433    N       "N-Terminal SER"                   52
biotype     434    CA      "N-Terminal SER"                   22
biotype     435    C       "N-Terminal SER"                    7
biotype     436    HN      "N-Terminal SER"                    5
biotype     437    O       "N-Terminal SER"                   57
biotype     438    HA      "N-Terminal SER"                    0
biotype     439    N       "N-Terminal THR"                   52
biotype     440    CA      "N-Terminal THR"                   22
biotype     441    C       "N-Terminal THR"                    7
biotype     442    HN      "N-Terminal THR"                    5
biotype     443    O       "N-Terminal THR"                   57
biotype     444    HA      "N-Terminal THR"                    0
biotype     445    N       "N-Terminal CYS (SH)"              52
biotype     446    CA      "N-Terminal CYS (SH)"              22
biotype     447    C       "N-Terminal CYS (SH)"               7
biotype     448    HN      "N-Terminal CYS (SH)"               5
biotype     449    O       "N-Terminal CYS (SH)"              57
biotype     450    HA      "N-Terminal CYS (SH)"               0
biotype     451    N       "N-Terminal CYX (SS)"              52
biotype     452    CA      "N-Terminal CYX (SS)"              22
biotype     453    C       "N-Terminal CYX (SS)"               7
biotype     454    HN      "N-Terminal CYX (SS)"               5
biotype     455    O       "N-Terminal CYX (SS)"              57
biotype     456    HA      "N-Terminal CYX (SS)"               0
biotype     457    N       "N-Terminal CYD (S-)"              -1
biotype     458    CA      "N-Terminal CYD (S-)"              -1
biotype     459    C       "N-Terminal CYD (S-)"              -1
biotype     460    HN      "N-Terminal CYD (S-)"              -1
biotype     461    O       "N-Terminal CYD (S-)"              -1
biotype     462    HA      "N-Terminal CYD (S-)"               0
biotype     463    N       "N-Terminal PRO"                   53
biotype     464    CA      "N-Terminal PRO"                   22
biotype     465    C       "N-Terminal PRO"                    7
biotype     466    HN      "N-Terminal PRO"                    5
biotype     467    O       "N-Terminal PRO"                   57
biotype     468    HA      "N-Terminal PRO"                    0
biotype     469    CD      "N-Terminal PRO"                   27
biotype     470    HD      "N-Terminal PRO"                    0
biotype     471    N       "N-Terminal PHE"                   52
biotype     472    CA      "N-Terminal PHE"                   22
biotype     473    C       "N-Terminal PHE"                    7
biotype     474    HN      "N-Terminal PHE"                    5
biotype     475    O       "N-Terminal PHE"                   57
biotype     476    HA      "N-Terminal PHE"                    0
biotype     477    N       "N-Terminal TYR"                   52
biotype     478    CA      "N-Terminal TYR"                   22
biotype     479    C       "N-Terminal TYR"                    7
biotype     480    HN      "N-Terminal TYR"                    5
biotype     481    O       "N-Terminal TYR"                   57
biotype     482    HA      "N-Terminal TYR"                    0
biotype     483    N       "N-Terminal TYD (O-)"              -1
biotype     484    CA      "N-Terminal TYD (O-)"              -1
biotype     485    C       "N-Terminal TYD (O-)"              -1
biotype     486    HN      "N-Terminal TYD (O-)"              -1
biotype     487    O       "N-Terminal TYD (O-)"              -1
biotype     488    HA      "N-Terminal TYD (O-)"               0
biotype     489    N       "N-Terminal TRP"                   52
biotype     490    CA      "N-Terminal TRP"                   22
biotype     491    C       "N-Terminal TRP"                    7
biotype     492    HN      "N-Terminal TRP"                    5
biotype     493    O       "N-Terminal TRP"                   57
biotype     494    HA      "N-Terminal TRP"                    0
biotype     495    N       "N-Terminal HIS (+)"               52
biotype     496    CA      "N-Terminal HIS (+)"               22
biotype     497    C       "N-Terminal HIS (+)"                7
biotype     498    HN      "N-Terminal HIS (+)"                5
biotype     499    O       "N-Terminal HIS (+)"               57
biotype     500    HA      "N-Terminal HIS (+)"                0
biotype     501    N       "N-Terminal HIS (HD)"              52
biotype     502    CA      "N-Terminal HIS (HD)"              22
biotype     503    C       "N-Terminal HIS (HD)"               7
biotype     504    HN      "N-Terminal HIS (HD)"               5
biotype     505    O       "N-Terminal HIS (HD)"              57
biotype     506    HA      "N-Terminal HIS (HD)"               0
biotype     507    N       "N-Terminal HIS (HE)"              52
biotype     508    CA      "N-Terminal HIS (HE)"              22
biotype     509    C       "N-Terminal HIS (HE)"               7
biotype     510    HN      "N-Terminal HIS (HE)"               5
biotype     511    O       "N-Terminal HIS (HE)"              57
biotype     512    HA      "N-Terminal HIS (HE)"               0
biotype     513    N       "N-Terminal ASP"                   52
biotype     514    CA      "N-Terminal ASP"                   22
biotype     515    C       "N-Terminal ASP"                    7
biotype     516    HN      "N-Terminal ASP"                    5
biotype     517    O       "N-Terminal ASP"                   57
biotype     518    HA      "N-Terminal ASP"                    0
biotype     519    N       "N-Terminal ASH (COOH)"            -1
biotype     520    CA      "N-Terminal ASH (COOH)"            -1
biotype     521    C       "N-Terminal ASH (COOH)"            -1
biotype     522    HN      "N-Terminal ASH (COOH)"            -1
biotype     523    O       "N-Terminal ASH (COOH)"            -1
biotype     524    HA      "N-Terminal ASH (COOH)"             0
biotype     525    N       "N-Terminal ASN"                   52
biotype     526    CA      "N-Terminal ASN"                   22
biotype     527    C       "N-Terminal ASN"                    7
biotype     528    HN      "N-Terminal ASN"                    5
biotype     529    O       "N-Terminal ASN"                   57
biotype     530    HA      "N-Terminal ASN"                    0
biotype     531    N       "N-Terminal GLU"                   52
biotype     532    CA      "N-Terminal GLU"                   22
biotype     533    C       "N-Terminal GLU"                    7
biotype     534    HN      "N-Terminal GLU"                    5
biotype     535    O       "N-Terminal GLU"                   57
biotype     536    HA      "N-Terminal GLU"                    0
biotype     537    N       "N-Terminal GLH (COOH)"            -1
biotype     538    CA      "N-Terminal GLH (COOH)"            -1
biotype     539    C       "N-Terminal GLH (COOH)"            -1
biotype     540    HN      "N-Terminal GLH (COOH)"            -1
biotype     541    O       "N-Terminal GLH (COOH)"            -1
biotype     542    HA      "N-Terminal GLH (COOH)"             0
biotype     543    N       "N-Terminal GLN"                   52
biotype     544    CA      "N-Terminal GLN"                   22
biotype     545    C       "N-Terminal GLN"                    7
biotype     546    HN      "N-Terminal GLN"                    5
biotype     547    O       "N-Terminal GLN"                   57
biotype     548    HA      "N-Terminal GLN"                    0
biotype     549    N       "N-Terminal MET"                   52
biotype     550    CA      "N-Terminal MET"                   22
biotype     551    C       "N-Terminal MET"                    7
biotype     552    HN      "N-Terminal MET"                    5
biotype     553    O       "N-Terminal MET"                   57
biotype     554    HA      "N-Terminal MET"                    0
biotype     555    N       "N-Terminal LYS"                   52
biotype     556    CA      "N-Terminal LYS"                   22
biotype     557    C       "N-Terminal LYS"                    7
biotype     558    HN      "N-Terminal LYS"                    5
biotype     559    O       "N-Terminal LYS"                   57
biotype     560    HA      "N-Terminal LYS"                    0
biotype     561    N       "N-Terminal LYD (NH2)"             -1
biotype     562    CA      "N-Terminal LYD (NH2)"             -1
biotype     563    C       "N-Terminal LYD (NH2)"             -1
biotype     564    HN      "N-Terminal LYD (NH2)"             -1
biotype     565    O       "N-Terminal LYD (NH2)"             -1
biotype     566    HA      "N-Terminal LYD (NH2)"              0
biotype     567    N       "N-Terminal ARG"                   52
biotype     568    CA      "N-Terminal ARG"                   22
biotype     569    C       "N-Terminal ARG"                    7
biotype     570    HN      "N-Terminal ARG"                    5
biotype     571    O       "N-Terminal ARG"                   57
biotype     572    HA      "N-Terminal ARG"                    0
biotype     573    N       "N-Terminal ORN"                   52
biotype     574    CA      "N-Terminal ORN"                   22
biotype     575    C       "N-Terminal ORN"                    7
biotype     576    HN      "N-Terminal ORN"                    5
biotype     577    O       "N-Terminal ORN"                   57
biotype     578    HA      "N-Terminal ORN"                    0
biotype     579    N       "N-Terminal AIB"                   -1
biotype     580    CA      "N-Terminal AIB"                   -1
biotype     581    C       "N-Terminal AIB"                   -1
biotype     582    HN      "N-Terminal AIB"                   -1
biotype     583    O       "N-Terminal AIB"                   -1
biotype     584    N       "C-Terminal GLY"                   47
biotype     585    CA      "C-Terminal GLY"                   25
biotype     586    C       "C-Terminal GLY"                    9
biotype     587    HN      "C-Terminal GLY"                    1
biotype     588    OXT     "C-Terminal GLY"                   59
biotype     589    HA      "C-Terminal GLY"                    0
biotype     590    N       "C-Terminal ALA"                   47
biotype     591    CA      "C-Terminal ALA"                   21
biotype     592    C       "C-Terminal ALA"                    9
biotype     593    HN      "C-Terminal ALA"                    1
biotype     594    OXT     "C-Terminal ALA"                   59
biotype     595    HA      "C-Terminal ALA"                    0
biotype     596    N       "C-Terminal VAL"                   47
biotype     597    CA      "C-Terminal VAL"                   21
biotype     598    C       "C-Terminal VAL"                    9
biotype     599    HN      "C-Terminal VAL"                    1
biotype     600    OXT     "C-Terminal VAL"                   59
biotype     601    HA      "C-Terminal VAL"                    0
biotype     602    N       "C-Terminal LEU"                   47
biotype     603    CA      "C-Terminal LEU"                   21
biotype     604    C       "C-Terminal LEU"                    9
biotype     605    HN      "C-Terminal LEU"                    1
biotype     606    OXT     "C-Terminal LEU"                   59
biotype     607    HA      "C-Terminal LEU"                    0
biotype     608    N       "C-Terminal ILE"                   47
biotype     609    CA      "C-Terminal ILE"                   21
biotype     610    C       "C-Terminal ILE"                    9
biotype     611    HN      "C-Terminal ILE"                    1
biotype     612    OXT     "C-Terminal ILE"                   59
biotype     613    HA      "C-Terminal ILE"                    0
biotype     614    N       "C-Terminal SER"                   47
biotype     615    CA      "C-Terminal SER"                   21
biotype     616    C       "C-Terminal SER"                    9
biotype     617    HN      "C-Terminal SER"                    1
biotype     618    OXT     "C-Terminal SER"                   59
biotype     619    HA      "C-Terminal SER"                    0
biotype     620    N       "C-Terminal THR"                   47
biotype     621    CA      "C-Terminal THR"                   21
biotype     622    C       "C-Terminal THR"                    9
biotype     623    HN      "C-Terminal THR"                    1
biotype     624    OXT     "C-Terminal THR"                   59
biotype     625    HA      "C-Terminal THR"                    0
biotype     626    N       "C-Terminal CYS (SH)"              47
biotype     627    CA      "C-Terminal CYS (SH)"              21
biotype     628    C       "C-Terminal CYS (SH)"               9
biotype     629    HN      "C-Terminal CYS (SH)"               1
biotype     630    OXT     "C-Terminal CYS (SH)"              59
biotype     631    HA      "C-Terminal CYS (SH)"               0
biotype     632    N       "C-Terminal CYX (SS)"              47
biotype     633    CA      "C-Terminal CYX (SS)"              21
biotype     634    C       "C-Terminal CYX (SS)"               9
biotype     635    HN      "C-Terminal CYX (SS)"               1
biotype     636    OXT     "C-Terminal CYX (SS)"              59
biotype     637    HA      "C-Terminal CYX (SS)"               0
biotype     638    N       "C-Terminal CYD (S-)"              -1
biotype     639    CA      "C-Terminal CYD (S-)"              -1
biotype     640    C       "C-Terminal CYD (S-)"              -1
biotype     641    HN      "C-Terminal CYD (S-)"              -1
biotype     642    OXT     "C-Terminal CYD (S-)"              -1
biotype     643    HA      "C-Terminal CYD (S-)"               0
biotype     644    N       "C-Terminal PRO"                   46
biotype     645    CA      "C-Terminal PRO"                   21
biotype     646    C       "C-Terminal PRO"                    9
biotype     647    OXT     "C-Terminal PRO"                   59
biotype     648    HA      "C-Terminal PRO"                    0
biotype     649    N       "C-Terminal PHE"                   47
biotype     650    CA      "C-Terminal PHE"                   21
biotype     651    C       "C-Terminal PHE"                    9
biotype     652    HN      "C-Terminal PHE"                    1
biotype     653    OXT     "C-Terminal PHE"                   59
biotype     654    HA      "C-Terminal PHE"                    0
biotype     655    N       "C-Terminal TYR"                   47
biotype     656    CA      "C-Terminal TYR"                   21
biotype     657    C       "C-Terminal TYR"                    9
biotype     658    HN      "C-Terminal TYR"                    1
biotype     659    OXT     "C-Terminal TYR"                   59
biotype     660    HA      "C-Terminal TYR"                    0
biotype     661    N       "C-Terminal TYD (O-)"              -1
biotype     662    CA      "C-Terminal TYD (O-)"              -1
biotype     663    C       "C-Terminal TYD (O-)"              -1
biotype     664    HN      "C-Terminal TYD (O-)"              -1
biotype     665    OXT     "C-Terminal TYD (O-)"              -1
biotype     666    HA      "C-Terminal TYD (O-)"               0
biotype     667    N       "C-Terminal TRP"                   47
biotype     668    CA      "C-Terminal TRP"                   21
biotype     669    C       "C-Terminal TRP"                    9
biotype     670    HN      "C-Terminal TRP"                    1
biotype     671    OXT     "C-Terminal TRP"                   59
biotype     672    HA      "C-Terminal TRP"                    0
biotype     673    N       "C-Terminal HIS (+)"               47
biotype     674    CA      "C-Terminal HIS (+)"               21
biotype     675    C       "C-Terminal HIS (+)"                9
biotype     676    HN      "C-Terminal HIS (+)"                1
biotype     677    OXT     "C-Terminal HIS (+)"               59
biotype     678    HA      "C-Terminal HIS (+)"                0
biotype     679    N       "C-Terminal HIS (HD)"              47
biotype     680    CA      "C-Terminal HIS (HD)"              21
biotype     681    C       "C-Terminal HIS (HD)"               9
biotype     682    HN      "C-Terminal HIS (HD)"               1
biotype     683    OXT     "C-Terminal HIS (HD)"              59
biotype     684    HA      "C-Terminal HIS (HD)"               0
biotype     685    N       "C-Terminal HIS (HE)"              47
biotype     686    CA      "C-Terminal HIS (HE)"              21
biotype     687    C       "C-Terminal HIS (HE)"               9
biotype     688    HN      "C-Terminal HIS (HE)"               1
biotype     689    OXT     "C-Terminal HIS (HE)"              59
biotype     690    HA      "C-Terminal HIS (HE)"               0
biotype     691    N       "C-Terminal ASP"                   47
biotype     692    CA      "C-Terminal ASP"                   21
biotype     693    C       "C-Terminal ASP"                    9
biotype     694    HN      "C-Terminal ASP"                    1
biotype     695    OXT     "C-Terminal ASP"                   59
biotype     696    HA      "C-Terminal ASP"                    0
biotype     697    N       "C-Terminal ASH (COOH)"            -1
biotype     698    CA      "C-Terminal ASH (COOH)"            -1
biotype     699    C       "C-Terminal ASH (COOH)"            -1
biotype     700    HN      "C-Terminal ASH (COOH)"            -1
biotype     701    OXT     "C-Terminal ASH (COOH)"            -1
biotype     702    HA      "C-Terminal ASH (COOH)"             0
biotype     703    N       "C-Terminal ASN"                   47
biotype     704    CA      "C-Terminal ASN"                   21
biotype     705    C       "C-Terminal ASN"                    9
biotype     706    HN      "C-Terminal ASN"                    1
biotype     707    OXT     "C-Terminal ASN"                   59
biotype     708    HA      "C-Terminal ASN"                    0
biotype     709    N       "C-Terminal GLU"                   47
biotype     710    CA      "C-Terminal GLU"                   21
biotype     711    C       "C-Terminal GLU"                    9
biotype     712    HN      "C-Terminal GLU"                    1
biotype     713    OXT     "C-Terminal GLU"                   59
biotype     714    HA      "C-Terminal GLU"                    0
biotype     715    N       "C-Terminal GLH (COOH)"            -1
biotype     716    CA      "C-Terminal GLH (COOH)"            -1
biotype     717    C       "C-Terminal GLH (COOH)"            -1
biotype     718    HN      "C-Terminal GLH (COOH)"            -1
biotype     719    OXT     "C-Terminal GLH (COOH)"            -1
biotype     720    HA      "C-Terminal GLH (COOH)"             0
biotype     721    N       "C-Terminal GLN"                   47
biotype     722    CA      "C-Terminal GLN"                   21
biotype     723    C       "C-Terminal GLN"                    9
biotype     724    HN      "C-Terminal GLN"                    1
biotype     725    OXT     "C-Terminal GLN"                   59
biotype     726    HA      "C-Terminal GLN"                    0
biotype     727    N       "C-Terminal MET"                   47
biotype     728    CA      "C-Terminal MET"                   21
biotype     729    C       "C-Terminal MET"                    9
biotype     730    HN      "C-Terminal MET"                    1
biotype     731    OXT     "C-Terminal MET"                   59
biotype     732    HA      "C-Terminal MET"                    0
biotype     733    N       "C-Terminal LYS"                   47
biotype     734    CA      "C-Terminal LYS"                   21
biotype     735    C       "C-Terminal LYS"                    9
biotype     736    HN      "C-Terminal LYS"                    1
biotype     737    OXT     "C-Terminal LYS"                   59
biotype     738    HA      "C-Terminal LYS"                    0
biotype     739    N       "C-Terminal LYD (NH2)"             -1
biotype     740    CA      "C-Terminal LYD (NH2)"             -1
biotype     741    C       "C-Terminal LYD (NH2)"             -1
biotype     742    HN      "C-Terminal LYD (NH2)"             -1
biotype     743    OXT     "C-Terminal LYD (NH2)"             -1
biotype     744    HA      "C-Terminal LYD (NH2)"              0
biotype     745    N       "C-Terminal ARG"                   47
biotype     746    CA      "C-Terminal ARG"                   21
biotype     747    C       "C-Terminal ARG"                    9
biotype     748    HN      "C-Terminal ARG"                    1
biotype     749    OXT     "C-Terminal ARG"                   59
biotype     750    HA      "C-Terminal ARG"                    0
biotype     751    N       "C-Terminal ORN"                   47
biotype     752    CA      "C-Terminal ORN"                   21
biotype     753    C       "C-Terminal ORN"                    9
biotype     754    HN      "C-Terminal ORN"                    1
biotype     755    OXT     "C-Terminal ORN"                   59
biotype     756    HA      "C-Terminal ORN"                    0
biotype     757    N       "C-Terminal AIB"                   -1
biotype     758    CA      "C-Terminal AIB"                   -1
biotype     759    C       "C-Terminal AIB"                   -1
biotype     760    HN      "C-Terminal AIB"                   -1
biotype     761    OXT     "C-Terminal AIB"                   -1
biotype     762    N       "Deprotonated N-Terminus"          -1
biotype     763    H       "Deprotonated N-Terminus"          -1
biotype     764    C       "Formyl N-Terminus"                 7
biotype     765    H       "Formyl N-Terminus"                 0
biotype     766    O       "Formyl N-Terminus"                57
biotype     767    CH3     "Acetyl N-Terminus"                32
biotype     768    H       "Acetyl N-Terminus"                 0
biotype     769    C       "Acetyl N-Terminus"                 7
biotype     770    O       "Acetyl N-Terminus"                57
biotype     771    C       "Protonated C-Terminus"            -1
biotype     772    O       "Protonated C-Terminus"            -1
biotype     773    OH      "Protonated C-Terminus"            -1
biotype     774    HO      "Protonated C-Terminus"            -1
biotype     775    N       "Amide C-Terminus"                 51
biotype     776    HN      "Amide C-Terminus"                  2
biotype     777    N       "N-MeAmide C-Terminus"             47
biotype     778    HN      "N-MeAmide C-Terminus"              1
biotype     779    CH3     "N-MeAmide C-Terminus"             34
biotype     780    H       "N-MeAmide C-Terminus"              0
biotype    2001    O       "Water"                            64
biotype    2002    H       "Water"                             6
biotype    2004    NA      "Sodium Ion"                       -1
biotype    2005    K       "Potassium Ion"                    -1
biotype    2008    MG      "Magnesium Ion"                    -1
biotype    2009    CA      "Calcium Ion"                      -1
biotype    2013    CL      "Chloride Ion"                     -1
)**";
}
