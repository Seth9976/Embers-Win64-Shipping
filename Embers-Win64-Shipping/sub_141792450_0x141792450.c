// 函数: sub_141792450
// 地址: 0x141792450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = 1f / arg1[9]
int128_t zmm7 = *arg4
int128_t zmm6
zmm6.d = 1f / arg1[0xa]
float zmm4 = 1f / arg1[0xb]
float zmm1 = zmm7.d - *arg1
int128_t zmm8 = *(arg4 + 4)
int128_t zmm9 = *(arg4 + 8)
float zmm2 = zmm8.d - arg1[1]
float zmm3 = zmm9.d - arg1[2]
int32_t r11 = int.d(zmm5 * zmm1)
int32_t r9 = int.d(zmm6.d * zmm2)
int32_t r8 = int.d(zmm4 * zmm3)

if (not(zmm1 >= 0f))
    r11 -= 1

if (not(zmm2 >= 0f))
    r9 -= 1

if (not(zmm3 >= 0f))
    r8 -= 1

if (zmm7.d f<= (float.s(r11) + 0.5f) * arg1[9] + *arg1)
    r11 -= 1

int32_t var_58 = r11

if (zmm8.d f<= (float.s(r9) + 0.5f) * arg1[0xa] + arg1[1])
    r9 -= 1

int32_t var_54 = r9

if (zmm9.d f<= (float.s(r8) + 0.5f) * arg1[0xb] + arg1[2])
    r8 -= 1

int32_t rdx = 0
int32_t var_50 = r8
zmm7.d = zmm7.d f- ((float.s(r11) + 0.5f) * arg1[9] + *arg1)
zmm7.d = zmm7.d f* zmm5
int32_t var_68 = zmm7.d
zmm8.d = zmm8.d f- ((float.s(r9) + 0.5f) * arg1[0xa] + arg1[1])
zmm8.d = zmm8.d f* zmm6.d
int32_t var_64 = zmm8.d
zmm9.d = zmm9.d f- ((float.s(r8) + 0.5f) * arg1[0xb] + arg1[2])
zmm9.d = zmm9.d f* zmm4
int32_t var_60 = zmm9.d

if (r11 == 0xffffffff)
    var_58 = 0
    var_68 = 0

int32_t rbx = arg1[6]
int32_t rcx = 0

if (r11 != 0xffffffff)
    rcx = r11

if (rcx == rbx - 1)
    var_68 = 0x3f800000
    var_58 = rbx - 2

if (r9 == 0xffffffff)
    int32_t var_54_1 = 0
    int32_t var_64_1 = 0

int32_t r11_1 = arg1[7]
int32_t rcx_1 = 0

if (r9 != 0xffffffff)
    rcx_1 = r9

if (rcx_1 == r11_1 - 1)
    int32_t var_64_2 = 0x3f800000
    int32_t var_54_2 = r11_1 - 2

if (r8 == 0xffffffff)
    int32_t var_50_1 = 0
    int32_t var_60_1 = 0

int32_t rcx_2 = arg1[8]

if (r8 != 0xffffffff)
    rdx = r8

if (rdx == rcx_2 - 1)
    int32_t var_60_2 = 0x3f800000
    int32_t var_50_2 = rcx_2 - 2

sub_1417926c0(arg2, arg3, &var_58, &var_68)
return arg2
