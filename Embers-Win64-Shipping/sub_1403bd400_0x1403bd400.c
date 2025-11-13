// 函数: sub_1403bd400
// 地址: 0x1403bd400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3

if (arg5 == 4)
    int32_t i_9 = arg6
    int32_t i
    
    do
        zmm0 = zx.o(*arg1)
        zmm1 = zx.o(*(arg1 + arg2))
        zmm2 = zx.o(*(arg1 + (arg2 << 1)))
        zmm3 = zx.o(*(arg1 + arg2 * 3))
        arg1 += arg2 << 2
        *arg3 = zmm0.d
        *(arg3 + arg4) = zmm1.d
        *(arg3 + (arg4 << 1)) = zmm2.d
        *(arg3 + arg4 * 3) = zmm3.d
        arg3 += arg4 << 2
        i = i_9
        i_9 -= 4
    while (i != 4)
    return 

if (arg5 == 8)
    int32_t i_8 = arg6
    int32_t i_1
    
    do
        zmm0 = zx.o(*arg1)
        zmm1 = zx.o(*(arg1 + arg2))
        zmm2 = zx.o(*(arg1 + (arg2 << 1)))
        zmm3 = zx.o(*(arg1 + arg2 * 3))
        arg1 += arg2 << 2
        *arg3 = zmm0.q
        *(arg3 + arg4) = zmm1.q
        *(arg3 + (arg4 << 1)) = zmm2.q
        *(arg3 + arg4 * 3) = zmm3.q
        arg3 += arg4 << 2
        i_1 = i_8
        i_8 -= 4
    while (i_1 != 4)
    return 

if (arg5 == 0x10)
    int32_t i_7 = arg6
    int32_t i_2
    
    do
        zmm0 = *arg1
        zmm1 = *(arg1 + arg2)
        zmm2 = *(arg1 + (arg2 << 1))
        zmm3 = *(arg1 + arg2 * 3)
        arg1 += arg2 << 2
        *arg3 = zmm0
        *(arg3 + arg4) = zmm1
        *(arg3 + (arg4 << 1)) = zmm2
        *(arg3 + arg4 * 3) = zmm3
        arg3 += arg4 << 2
        i_2 = i_7
        i_7 -= 4
    while (i_2 != 4)
    return 

if (arg5 == 0x20)
    int32_t i_6 = arg6
    int32_t i_3
    
    do
        zmm0 = *arg1
        zmm1 = arg1[1]
        zmm2 = *(arg1 + arg2)
        zmm3 = *(arg1 + arg2 + 0x10)
        arg1 += arg2 << 1
        *arg3 = zmm0
        arg3[1] = zmm1
        *(arg3 + arg4) = zmm2
        *(arg3 + arg4 + 0x10) = zmm3
        arg3 += arg4 << 1
        i_3 = i_6
        i_6 -= 2
    while (i_3 != 2)
    return 

int32_t i_5 = arg6
int32_t i_4

do
    zmm0 = *arg1
    zmm1 = arg1[1]
    zmm2 = arg1[2]
    zmm3 = arg1[3]
    arg1 += arg2
    *arg3 = zmm0
    arg3[1] = zmm1
    arg3[2] = zmm2
    arg3[3] = zmm3
    arg3 += arg4
    i_4 = i_5
    i_5 -= 1
while (i_4 != 1)
