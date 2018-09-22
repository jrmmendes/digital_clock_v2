TITLE "D2256";

SUBDESIGN d2256 (
  bcd_hours[4..0], 
  bcd_minutes[6..0], 
  bcd_seconds[6..0], 
  bcd_dseconds[4..0]
  : INPUT;
  
  % 13..7 -> dezenas, 6..0 -> unidades %
  7seg_hours[13..0], 
  7seg_minutes[13..0], 
  7seg_seconds[13..0], 
  7seg_dseconds[13..0]
  : OUTPUT;
)

% Representacao dos numeros no display de 7 segmentos %

CONSTANT 7S0[6..0] = B"0000000";
CONSTANT 7S1[6..0] = B"0110000";
CONSTANT 7S2[6..0] = B"1001101";
CONSTANT 7S3[6..0] = B"1111001";
CONSTANT 7S4[6..0] = B"0110011";
CONSTANT 7S5[6..0] = B"1011011";
CONSTANT 7S6[6..0] = B"1011111";
CONSTANT 7S7[6..0] = B"1110000";
CONSTANT 7S8[6..0] = B"1111111";
CONSTANT 7S9[6..0] = B"1111011";

BEGIN 
  
  % horas %
  TABLE
    bcd_hours[] => 7seg_hours[13..7], 7seg_hours[6..0];
    0           => 7S0, 7S0;  
    1           => 7S0, 7S1;
    2           => 7S0, 7S2;
    3           => 7S0, 7S3;
    4           => 7S0, 7S4;
    5           => 7S0, 7S5;
    6           => 7S0, 7S6;
    7           => 7S0, 7S7;
    8           => 7S0, 7S8;
    9           => 7S0, 7S9;
    10          => 7S1, 7S0;
    11          => 7S1, 7S1;
    12          => 7S1, 7S2;
    13          => 7S1, 7S3;
    14          => 7S1, 7S4;
    15          => 7S1, 7S5;
    16          => 7S1, 7S6;
    17          => 7S1, 7S7;
    18          => 7S1, 7S8;
    19          => 7S1, 7S9;
    20          => 7S2, 7S0;
    21          => 7S2, 7S1;
    22          => 7S2, 7S2;
    23          => 7S2, 7S3;
  END TABLE;
  
  % minutos %
  TABLE
    bcd_minutes[] => 7seg_minutes[13..7], 7seg_minutes[6..0];
    0             => 7S0, 7S0;  
    1             => 7S0, 7S1;
    2             => 7S0, 7S2;
    3             => 7S0, 7S3;
    4             => 7S0, 7S4;
    5             => 7S0, 7S5;
    6             => 7S0, 7S6;
    7             => 7S0, 7S7;
    8             => 7S0, 7S8;
    9             => 7S0, 7S9;
    10            => 7S1, 7S0;
    11            => 7S1, 7S1;
    12            => 7S1, 7S2;
    13            => 7S1, 7S3;
    14            => 7S1, 7S4;
    15            => 7S1, 7S5;
    16            => 7S1, 7S6;
    17            => 7S1, 7S7;
    18            => 7S1, 7S8;
    19            => 7S1, 7S9;
    20            => 7S2, 7S0;
    21            => 7S2, 7S1;
    22            => 7S2, 7S2;
    23            => 7S2, 7S3;
    24            => 7S2, 7S4;
    25            => 7S2, 7S5;
    26            => 7S2, 7S6;
    27            => 7S2, 7S7;
    28            => 7S2, 7S8;
    29            => 7S2, 7S9;
    30            => 7S3, 7S0;
    31            => 7S3, 7S1;
    32            => 7S3, 7S2;
    33            => 7S3, 7S3;
    34            => 7S3, 7S4;
    35            => 7S3, 7S5;
    36            => 7S3, 7S6;
    37            => 7S3, 7S7;
    38            => 7S3, 7S8;
    39            => 7S3, 7S9;
    40            => 7S4, 7S0;
    41            => 7S4, 7S1;
    42            => 7S4, 7S2;
    43            => 7S4, 7S3;
    44            => 7S4, 7S4;
    45            => 7S4, 7S5;
    46            => 7S4, 7S6;
    47            => 7S4, 7S7;
    48            => 7S4, 7S8;
    49            => 7S4, 7S9;
    50            => 7S5, 7S0;
    51            => 7S5, 7S1;
    52            => 7S5, 7S2;
    53            => 7S5, 7S3;
    54            => 7S5, 7S4;
    55            => 7S5, 7S5;
    56            => 7S5, 7S6;
    57            => 7S5, 7S7;
    58            => 7S5, 7S8;
    59            => 7S5, 7S9;
  END TABLE;
  
  % segundos %
  TABLE
    bcd_seconds[] => 7seg_seconds[13..7], 7seg_seconds[6..0];
    0             => 7S0, 7S0;  
    1             => 7S0, 7S1;
    2             => 7S0, 7S2;
    3             => 7S0, 7S3;
    4             => 7S0, 7S4;
    5             => 7S0, 7S5;
    6             => 7S0, 7S6;
    7             => 7S0, 7S7;
    8             => 7S0, 7S8;
    9             => 7S0, 7S9;
    10            => 7S1, 7S0;
    11            => 7S1, 7S1;
    12            => 7S1, 7S2;
    13            => 7S1, 7S3;
    14            => 7S1, 7S4;
    15            => 7S1, 7S5;
    16            => 7S1, 7S6;
    17            => 7S1, 7S7;
    18            => 7S1, 7S8;
    19            => 7S1, 7S9;
    20            => 7S2, 7S0;
    21            => 7S2, 7S1;
    22            => 7S2, 7S2;
    23            => 7S2, 7S3;
    24            => 7S2, 7S4;
    25            => 7S2, 7S5;
    26            => 7S2, 7S6;
    27            => 7S2, 7S7;
    28            => 7S2, 7S8;
    29            => 7S2, 7S9;
    30            => 7S3, 7S0;
    31            => 7S3, 7S1;
    32            => 7S3, 7S2;
    33            => 7S3, 7S3;
    34            => 7S3, 7S4;
    35            => 7S3, 7S5;
    36            => 7S3, 7S6;
    37            => 7S3, 7S7;
    38            => 7S3, 7S8;
    39            => 7S3, 7S9;
    40            => 7S4, 7S0;
    41            => 7S4, 7S1;
    42            => 7S4, 7S2;
    43            => 7S4, 7S3;
    44            => 7S4, 7S4;
    45            => 7S4, 7S5;
    46            => 7S4, 7S6;
    47            => 7S4, 7S7;
    48            => 7S4, 7S8;
    49            => 7S4, 7S9;
    50            => 7S5, 7S0;
    51            => 7S5, 7S1;
    52            => 7S5, 7S2;
    53            => 7S5, 7S3;
    54            => 7S5, 7S4;
    55            => 7S5, 7S5;
    56            => 7S5, 7S6;
    57            => 7S5, 7S7;
    58            => 7S5, 7S8;
    59            => 7S5, 7S9;
  END TABLE;
  
  % decimos de segundo %
  TABLE
    bcd_dseconds[] => 7seg_dseconds[13..7], 7seg_dseconds[6..0];
    0              => 7S0, 7S0;  
    1              => 7S0, 7S1;
    2              => 7S0, 7S2;
    3              => 7S0, 7S3;
    4              => 7S0, 7S4;
    5              => 7S0, 7S5;
    6              => 7S0, 7S6;
    7              => 7S0, 7S7;
    8              => 7S0, 7S8;
    9              => 7S0, 7S9;
    10             => 7S1, 7S0;
    11             => 7S1, 7S1;
    12             => 7S1, 7S2;
    13             => 7S1, 7S3;
    14             => 7S1, 7S4;
    15             => 7S1, 7S5;
    16             => 7S1, 7S6;
    17             => 7S1, 7S7;
    18             => 7S1, 7S8;
    19             => 7S1, 7S9;
    20             => 7S2, 7S0;
    21             => 7S2, 7S1;
    22             => 7S2, 7S2;
    23             => 7S2, 7S3;
    24             => 7S2, 7S4;
    25             => 7S2, 7S5;
    26             => 7S2, 7S6;
    27             => 7S2, 7S7;
    28             => 7S2, 7S8;
    29             => 7S2, 7S9;
    30             => 7S3, 7S0;
    31             => 7S3, 7S1;
    32             => 7S3, 7S2;
    33             => 7S3, 7S3;
    34             => 7S3, 7S4;
    35             => 7S3, 7S5;
    36             => 7S3, 7S6;
    37             => 7S3, 7S7;
    38             => 7S3, 7S8;
    39             => 7S3, 7S9;
    40             => 7S4, 7S0;
    41             => 7S4, 7S1;
    42             => 7S4, 7S2;
    43             => 7S4, 7S3;
    44             => 7S4, 7S4;
    45             => 7S4, 7S5;
    46             => 7S4, 7S6;
    47             => 7S4, 7S7;
    48             => 7S4, 7S8;
    49             => 7S4, 7S9;
    50             => 7S5, 7S0;
    51             => 7S5, 7S1;
    52             => 7S5, 7S2;
    53             => 7S5, 7S3;
    54             => 7S5, 7S4;
    55             => 7S5, 7S5;
    56             => 7S5, 7S6;
    57             => 7S5, 7S7;
    58             => 7S5, 7S8;
    59             => 7S5, 7S9;
    60             => 7S6, 7S0;
    61             => 7S6, 7S1;
    62             => 7S6, 7S2;
    63             => 7S6, 7S3;
    64             => 7S6, 7S4;
    65             => 7S6, 7S5;
    66             => 7S6, 7S6;
    67             => 7S6, 7S7;
    68             => 7S6, 7S8;
    69             => 7S6, 7S9;
    70             => 7S7, 7S0;
    71             => 7S7, 7S1;
    72             => 7S7, 7S2;
    73             => 7S7, 7S3;
    74             => 7S7, 7S4;
    75             => 7S7, 7S5;
    76             => 7S7, 7S6;
    77             => 7S7, 7S7;
    78             => 7S7, 7S8;
    79             => 7S7, 7S9;
    80             => 7S8, 7S0;
    81             => 7S8, 7S1;
    82             => 7S8, 7S2;
    83             => 7S8, 7S3;
    84             => 7S8, 7S4;
    85             => 7S8, 7S5;
    86             => 7S8, 7S6;
    87             => 7S8, 7S7;
    88             => 7S8, 7S8;
    89             => 7S8, 7S9;
    90             => 7S9, 7S0;
    91             => 7S9, 7S1;
    92             => 7S9, 7S2;
    93             => 7S9, 7S3;
    94             => 7S9, 7S4;
    95             => 7S9, 7S5;
    96             => 7S9, 7S6;
    97             => 7S9, 7S7;
    98             => 7S9, 7S8;
    99             => 7S9, 7S9;
  END TABLE;
  
END;