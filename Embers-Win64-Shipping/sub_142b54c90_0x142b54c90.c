// 函数: sub_142b54c90
// 地址: 0x142b54c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm6[0x2]
double var_18[0x2] = zmm6
double zmm7[0x2]
double var_28[0x2] = zmm7
double zmm8[0x2]
double var_38[0x2] = zmm8
uint128_t zmm9 = 0x401921fb54442d18
double zmm10[0x2]
double var_58[0x2] = zmm10
uint128_t zmm11
uint128_t var_68 = zmm11
uint128_t zmm12 = 0x400921fb54442d18
uint128_t zmm13 = zx.o(arg6)
int128_t zmm15
zmm15.q = arg4.q f* 86400000.0

while (true)
    (**arg2)(arg2, arg1)
    arg3[0] = arg3[0] - arg5[0]
    arg3[0] = arg3[0] f/ zmm9.q
    double zmm0 = sub_142a4b9b0(arg3[0]) f* zmm9.q
    arg3[0] = arg3[0] - zmm0
    
    if (arg7 == 0)
        zmm10 = -0x3fe6de04abbbd2e8
    else
        zmm10 = zx.o(0)
    
    zmm11 = zx.o(*arg1)
    zmm10[0] = zmm10[0] + arg3[0]
    arg6 = zmm11.q
    zmm10[0] = zmm10[0] f* zmm15.q
    zmm10[0] = zmm10[0] f/ zmm9.q
    *arg1 = sub_142a4b990(zmm10[0]) + *arg1
    double zmm0_2[0x2] = sub_142a4bbb0()
    double temp0_1[0x2] = _mm_unpacklo_pd(zmm0_2, zmm0_2[0])
    *(arg1 + 0x20) = temp0_1
    arg1[0x10].b = 0
    *(arg1 + 0x30) = temp0_1
    *(arg1 + 0x40) = temp0_1
    *(arg1 + 0x50) = temp0_1
    *(arg1 + 0x60) = temp0_1
    (**arg2)(arg2, arg1)
    zmm8 = temp0_1
    temp0_1[0] = temp0_1[0] - arg5[0]
    temp0_1[0] = temp0_1[0] f+ zmm12.q
    temp0_1[0] = temp0_1[0] f/ zmm9.q
    uint32_t zmm0_3[0x4] = sub_142a4b9b0(temp0_1[0])
    zmm0_3[0].q = zmm0_3[0].q f* zmm9.q
    temp0_1[0] = temp0_1[0] f- zmm0_3[0].q
    zmm0_3 = zmm10
    temp0_1[0] = temp0_1[0] f- zmm12.q
    zmm0_3[0].q = zmm0_3[0].q f/ temp0_1[0]
    zmm6 = sub_142a4b9a0(zmm0_3)
    zmm7 = arg3
    zmm7[0] = zmm7[0] - zmm8[0]
    zmm7[0] = zmm7[0] f+ zmm12.q
    zmm7[0] = zmm7[0] f/ zmm9.q
    double zmm0_5[0x2] = sub_142a4b9b0(zmm7[0])
    zmm0_5[0] = zmm0_5[0] f* zmm9.q
    zmm7[0] = zmm7[0] - zmm0_5[0]
    zmm7[0] = zmm7[0] f- zmm12.q
    zmm7[0] = zmm7[0] * zmm6[0]
    zmm6 = sub_142a4b9a0(zmm7)
    double i = sub_142a4b9a0(zmm10)
    
    if (not(zmm6[0] > i))
        do
            zmm10 = zmm7
            zmm11 = zmm8
            *arg1 = sub_142a4b990(zmm7[0]) + *arg1
            double zmm0_8[0x2] = sub_142a4bbb0()
            double temp0_2[0x2] = _mm_unpacklo_pd(zmm0_8, zmm0_8[0])
            *(arg1 + 0x20) = temp0_2
            arg1[0x10].b = 0
            *(arg1 + 0x30) = temp0_2
            *(arg1 + 0x40) = temp0_2
            *(arg1 + 0x50) = temp0_2
            *(arg1 + 0x60) = temp0_2
            uint128_t zmm0_9 = sub_142a4b9a0(zmm7)
            
            if (zmm0_9.q f<= zmm13.q)
                return zx.o(*arg1)
            
            (**arg2)(arg2, arg1)
            zmm6 = zmm0_9
            zmm8 = zmm0_9
            zmm6[0] = zmm6[0] f- zmm11.q
            zmm6[0] = zmm6[0] f+ zmm12.q
            zmm0_9.q = zmm6.q f/ zmm9.q
            double zmm0_10[0x2] = sub_142a4b9b0(zmm0_9.q)
            zmm0_10[0] = zmm0_10[0] f* zmm9.q
            zmm6[0] = zmm6[0] - zmm0_10[0]
            zmm6[0] = zmm6[0] f- zmm12.q
            zmm7[0] = zmm7[0] / zmm6[0]
            zmm6 = sub_142a4b9a0(zmm7)
            zmm7 = arg3
            zmm7[0] = zmm7[0] - zmm8[0]
            zmm7[0] = zmm7[0] f+ zmm12.q
            zmm7[0] = zmm7[0] f/ zmm9.q
            double zmm0_12[0x2] = sub_142a4b9b0(zmm7[0])
            zmm0_12[0] = zmm0_12[0] f* zmm9.q
            zmm7[0] = zmm7[0] - zmm0_12[0]
            zmm7[0] = zmm7[0] f- zmm12.q
            zmm7[0] = zmm7[0] * zmm6[0]
            zmm6 = sub_142a4b9a0(zmm7)
            i = sub_142a4b9a0(zmm10)
        while (zmm6[0] <= i)
        
        zmm11 = zx.o(arg6)
    
    int128_t zmm0_14 = sub_142a4b990(zmm15.q * 0.125)
    
    if (arg7 == 0)
        zmm0_14 ^= data_142d8e3c0
    
    zmm0_14.q = zmm0_14.q f+ zmm11.q
    *arg1 = zmm0_14.q
    arg5 = sub_142a4bbb0()
    arg5 = _mm_unpacklo_pd(arg5, arg5[0])
    *(arg1 + 0x20) = arg5
    arg1[0x10].b = 0
    *(arg1 + 0x30) = arg5
    *(arg1 + 0x40) = arg5
    *(arg1 + 0x50) = arg5
    *(arg1 + 0x60) = arg5
