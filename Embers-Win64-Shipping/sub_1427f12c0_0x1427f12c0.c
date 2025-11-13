// 函数: sub_1427f12c0
// 地址: 0x1427f12c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = arg3.d
int128_t zmm1
zmm1.d = arg3.d f* zmm4
int128_t zmm7
zmm7.d = arg3.d f* 4.18879032f
zmm1.d = zmm1.d f* zmm4
int128_t zmm6
zmm6.d = arg4.d f* arg4.d
zmm1.d = zmm1.d f* 0.533333361f
float zmm5 = arg3.d * 3.14159274f * zmm4
zmm7.d = zmm7.d f* zmm4
zmm7.d = zmm7.d f* zmm4
zmm7.d = zmm7.d f+ (arg4.d f+ arg4.d) * zmm5
float zmm0 = arg3.d f* arg4.d
arg3 = zmm6
zmm6.d = zmm6.d f* zmm4
arg3.d = arg3.d f* arg4.d
zmm0 = zmm0 * zmm4
zmm6.d = zmm6.d f* 1.33333337f
arg1[0xc] = zmm7.d
int128_t zmm8
zmm8.d = zmm1.d f+ zmm0
*(arg1 + 4) = 0
zmm8.d = zmm8.d f* zmm5
zmm0 = zmm0 * 1.5f f+ zmm1.d
zmm1 = arg3
arg3.d = arg3.d f* 0.333333343f
zmm1.d = zmm1.d f* 0.333333343f
zmm6.d = zmm6.d f+ zmm0
zmm1.d = zmm1.d f+ arg3.d
zmm6.d = zmm6.d f+ zmm1.d
zmm6.d = zmm6.d f* zmm5

if (arg2 == 0)
    *arg1 = zmm8.d
    arg1[4] = zmm6.d
    arg1[3] = 0
    *(arg1 + 0x14) = 0
    arg1[8] = zmm6.d
else
    *arg1 = zmm6.d
    arg1[3] = 0
    *(arg1 + 0x14) = 0
    
    if (arg2 == 1)
        arg1[4] = zmm8.d
        arg1[8] = zmm6.d
    else
        arg1[4] = zmm6.d
        arg1[8] = zmm8.d

arg1[7] = 0
arg1[0xb] = 0
*(arg1 + 0x24) = 0
return 0
