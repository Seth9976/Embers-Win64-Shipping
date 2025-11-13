// 函数: sub_1403bd580
// 地址: 0x1403bd580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t zmm6[0x10]
uint8_t arg_8[0x10] = zmm6
uint8_t zmm7[0x10]
uint8_t arg_18[0x10] = zmm7
uint8_t zmm0[0x10]
uint8_t zmm1[0x10]
uint8_t zmm2[0x10]
uint8_t zmm3[0x10]
uint128_t zmm5

if (arg5 == 4)
    int32_t i_9 = arg6
    int64_t rax_2 = arg4 * 3
    int32_t i
    
    do
        zmm0 = zx.o(*arg1)
        zmm1 = zx.o(*(arg1 + arg2))
        zmm2 = zx.o(*(arg1 + (arg2 << 1)))
        zmm3 = zx.o(*(arg1 + arg2 * 3))
        arg1 += arg2 << 2
        zmm5 = zx.o(*(arg3 + arg4))
        zmm6 = zx.o(*(arg3 + (arg4 << 1)))
        zmm7 = zx.o(*(arg3 + rax_2))
        uint8_t temp0_17[0x10] = _mm_avg_epu8(zmm0, zx.o(*arg3))
        uint8_t temp0_18[0x10] = _mm_avg_epu8(zmm1, zmm5)
        uint8_t temp0_19[0x10] = _mm_avg_epu8(zmm2, zmm6)
        uint8_t temp0_20[0x10] = _mm_avg_epu8(zmm3, zmm7)
        *arg3 = temp0_17[0].d
        *(arg3 + arg4) = temp0_18[0].d
        *(arg3 + (arg4 << 1)) = temp0_19[0].d
        *(arg3 + rax_2) = temp0_20[0].d
        arg3 = &(*arg3)[arg4 << 2]
        i = i_9
        i_9 -= 4
    while (i != 4)
    return 

if (arg5 == 8)
    int32_t i_8 = arg6
    int64_t rax_1 = arg4 * 3
    int32_t i_1
    
    do
        zmm0 = zx.o(*arg1)
        zmm1 = zx.o(*(arg1 + arg2))
        zmm2 = zx.o(*(arg1 + (arg2 << 1)))
        zmm3 = zx.o(*(arg1 + arg2 * 3))
        arg1 += arg2 << 2
        zmm5 = zx.o(*(arg3 + arg4))
        zmm6 = zx.o(*(arg3 + (arg4 << 1)))
        zmm7 = zx.o(*(arg3 + rax_1))
        uint8_t temp0_13[0x10] = _mm_avg_epu8(zmm0, zx.o(*arg3))
        uint8_t temp0_14[0x10] = _mm_avg_epu8(zmm1, zmm5)
        uint8_t temp0_15[0x10] = _mm_avg_epu8(zmm2, zmm6)
        uint8_t temp0_16[0x10] = _mm_avg_epu8(zmm3, zmm7)
        *arg3 = temp0_13[0].q
        *(arg3 + arg4) = temp0_14[0].q
        *(arg3 + (arg4 << 1)) = temp0_15[0].q
        *(arg3 + rax_1) = temp0_16[0].q
        arg3 = &(*arg3)[arg4 << 2]
        i_1 = i_8
        i_8 -= 4
    while (i_1 != 4)
    return 

if (arg5 == 0x10)
    int32_t i_7 = arg6
    int64_t rax = arg4 * 3
    int32_t i_2
    
    do
        zmm0 = *arg1
        zmm1 = *(arg1 + arg2)
        zmm2 = *(arg1 + (arg2 << 1))
        zmm3 = *(arg1 + arg2 * 3)
        arg1 += arg2 << 2
        uint8_t temp0_9[0x10] = __pavgb_xmmdq_memdq(zmm0, *arg3)
        uint8_t temp0_10[0x10] = __pavgb_xmmdq_memdq(zmm1, *(arg3 + arg4))
        uint8_t temp0_11[0x10] = __pavgb_xmmdq_memdq(zmm2, *(arg3 + (arg4 << 1)))
        uint8_t temp0_12[0x10] = __pavgb_xmmdq_memdq(zmm3, *(arg3 + rax))
        *arg3 = temp0_9
        *(arg3 + arg4) = temp0_10
        *(arg3 + (arg4 << 1)) = temp0_11
        *(arg3 + rax) = temp0_12
        arg3 = &(*arg3)[arg4 << 2]
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
        uint8_t temp0_5[0x10] = __pavgb_xmmdq_memdq(zmm0, *arg3)
        uint8_t temp0_6[0x10] = __pavgb_xmmdq_memdq(zmm1, arg3[1])
        uint8_t temp0_7[0x10] = __pavgb_xmmdq_memdq(zmm2, *(arg3 + arg4))
        uint8_t temp0_8[0x10] = __pavgb_xmmdq_memdq(zmm3, *(arg3 + arg4 + 0x10))
        *arg3 = temp0_5
        arg3[1] = temp0_6
        *(arg3 + arg4) = temp0_7
        *(arg3 + arg4 + 0x10) = temp0_8
        arg3 = &(*arg3)[arg4 << 1]
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
    uint8_t temp0_1[0x10] = __pavgb_xmmdq_memdq(zmm0, *arg3)
    uint8_t temp0_2[0x10] = __pavgb_xmmdq_memdq(zmm1, arg3[1])
    uint8_t temp0_3[0x10] = __pavgb_xmmdq_memdq(zmm2, arg3[2])
    uint8_t temp0_4[0x10] = __pavgb_xmmdq_memdq(zmm3, arg3[3])
    *arg3 = temp0_1
    arg3[1] = temp0_2
    arg3[2] = temp0_3
    arg3[3] = temp0_4
    arg3 = &(*arg3)[arg4]
    i_4 = i_5
    i_5 -= 1
while (i_4 != 1)
