// 函数: sub_142b54fd0
// 地址: 0x142b54fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
uint32_t zmm7[0x4] = arg1
uint128_t zmm9 = 0x3ff0000000000000
uint32_t zmm10[0x4] = arg1

do
    double zmm0 = sin(zmm7[0].q) f* arg2[0].q
    zmm7[0].q = zmm7[0].q f- zmm0
    zmm7[0].q = zmm7[0].q f- zmm10[0].q
    uint32_t zmm0_1[0x4] = cos(zmm7[0].q)
    zmm0_1[0].q = zmm0_1[0].q f* arg2[0].q
    zmm7[0].q = zmm7[0].q f/ (zmm9.q f- zmm0_1[0].q)
    zmm7[0].q = zmm7[0].q f- zmm7[0].q
    arg1 = sub_142a4b9a0(zmm7)
while (arg1[0].q f> 0x3ee4f8b588e368f1)

arg2[0].q = arg2[0].q f+ zmm9.q
zmm9.q = zmm9.q f- arg2[0].q
arg2[0].q = arg2[0].q f/ zmm9.q
uint32_t zmm0_2[0x4] = sqrt(arg2[0].q)
zmm7[0].q = zmm7[0].q f* 0.5
double zmm0_3 = tan(zmm7[0].q)
zmm0_2[0].q = zmm0_2[0].q f* zmm0_3
return atan(zmm0_2[0].q) * 2.0
