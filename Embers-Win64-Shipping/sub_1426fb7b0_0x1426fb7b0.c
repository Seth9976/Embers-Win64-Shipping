// 函数: sub_1426fb7b0
// 地址: 0x1426fb7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_44 = 0x41200000
int32_t i_1 = 0
int32_t var_50 = 0xc1200000
int32_t* result = arg2
arg2[3].b = 1
*arg2 = _mm_unpacklo_ps(zx.o(0), 0)
arg2[1].d = 0xc1200000
*(arg2 + 0xc) = _mm_unpacklo_ps(zx.o(0), 0)
*(arg2 + 0x14) = var_44
int32_t i = 0
int32_t zmm2
int32_t zmm3
int32_t zmm4
int32_t zmm5

if (*(arg1 + 0x238) s> 0)
    zmm2 = result[1]
    int64_t rcx = 0
    zmm3 = result[2]
    zmm4 = result[4]
    zmm5 = result[5]
    float zmm6[0x4] = result[3]
    
    do
        int64_t rax_1 = *(arg1 + 0x230)
        rcx += 0x48
        i += 1
        int64_t temp0_2 = __minss_xmmss_memss((*(rcx + rax_1 - 0x18)).d, *result)
        *result = temp0_2.d
        int32_t temp0_3 = __minss_xmmss_memss(zmm2, *(rcx + rax_1 - 0x14))
        result[1] = temp0_3
        int32_t temp0_4 = __minss_xmmss_memss(zmm3, *(rcx + rax_1 - 0x10))
        result[2] = temp0_4
        int64_t temp0_5 = _mm_max_ss((*(rcx + rax_1 - 0x18)).d, zmm6[0])
        result[3] = temp0_5.d
        int32_t temp0_6 = __maxss_xmmss_memss(zmm4, *(rcx + rax_1 - 0x14))
        result[4] = temp0_6
        int32_t temp0_7 = __maxss_xmmss_memss(zmm5, *(rcx + rax_1 - 0x10))
        result[5] = temp0_7
        *result = __minss_xmmss_memss(temp0_2.d, *(rcx + rax_1 - 0xc)).d
        zmm2 = __minss_xmmss_memss(temp0_3, *(rcx + rax_1 - 8))
        result[1] = zmm2
        zmm3 = __minss_xmmss_memss(temp0_4, *(rcx + rax_1 - 4))
        result[2] = zmm3
        zmm6 = _mm_max_ss((*(rcx + rax_1 - 0xc))[0], temp0_5.d)
        result[3] = zmm6[0]
        zmm4 = __maxss_xmmss_memss(temp0_6, *(rcx + rax_1 - 8))
        result[4] = zmm4
        zmm5 = __maxss_xmmss_memss(temp0_7, *(rcx + rax_1 - 4))
        result[5] = zmm5
    while (i s< *(arg1 + 0x238))

if (*(arg1 + 0x248) s> 0)
    int64_t zmm1 = result[1]
    int64_t rcx_1 = 0
    zmm2 = result[2]
    zmm3 = result[3]
    zmm4 = result[4]
    zmm5 = result[5]
    
    do
        int64_t rax_2 = *(arg1 + 0x240)
        rcx_1 += 0x60
        i_1 += 1
        int64_t temp0_14 = __minss_xmmss_memss((*result).d, *(rcx_1 + rax_2 - 0x30))
        *result = temp0_14.d
        int64_t temp0_15 = __minss_xmmss_memss(zmm1.d, *(rcx_1 + rax_2 - 0x2c))
        result[1] = temp0_15.d
        int32_t temp0_16 = __minss_xmmss_memss(zmm2, *(rcx_1 + rax_2 - 0x28))
        result[2] = temp0_16
        int32_t temp0_17 = __maxss_xmmss_memss(zmm3, *(rcx_1 + rax_2 - 0x30))
        result[3] = temp0_17
        int32_t temp0_18 = __maxss_xmmss_memss(zmm4, *(rcx_1 + rax_2 - 0x2c))
        result[4] = temp0_18
        int32_t temp0_19 = __maxss_xmmss_memss(zmm5, *(rcx_1 + rax_2 - 0x28))
        result[5] = temp0_19
        int64_t temp0_20 = __minss_xmmss_memss(temp0_14.d, *(rcx_1 + rax_2 - 0x24))
        *result = temp0_20.d
        int64_t temp0_21 = __minss_xmmss_memss(temp0_15.d, *(rcx_1 + rax_2 - 0x20))
        result[1] = temp0_21.d
        int32_t temp0_22 = __minss_xmmss_memss(temp0_16, *(rcx_1 + rax_2 - 0x1c))
        result[2] = temp0_22
        int32_t temp0_23 = __maxss_xmmss_memss(temp0_17, *(rcx_1 + rax_2 - 0x24))
        result[3] = temp0_23
        int32_t temp0_24 = __maxss_xmmss_memss(temp0_18, *(rcx_1 + rax_2 - 0x20))
        result[4] = temp0_24
        int32_t temp0_25 = __maxss_xmmss_memss(temp0_19, *(rcx_1 + rax_2 - 0x1c))
        result[5] = temp0_25
        int64_t temp0_26 = __minss_xmmss_memss(temp0_20.d, *(rcx_1 + rax_2 - 0x18))
        *result = temp0_26.d
        int64_t temp0_27 = __minss_xmmss_memss(temp0_21.d, *(rcx_1 + rax_2 - 0x14))
        result[1] = temp0_27.d
        int32_t temp0_28 = __minss_xmmss_memss(temp0_22, *(rcx_1 + rax_2 - 0x10))
        result[2] = temp0_28
        int32_t temp0_29 = __maxss_xmmss_memss(temp0_23, *(rcx_1 + rax_2 - 0x18))
        result[3] = temp0_29
        int32_t temp0_30 = __maxss_xmmss_memss(temp0_24, *(rcx_1 + rax_2 - 0x14))
        result[4] = temp0_30
        int32_t temp0_31 = __maxss_xmmss_memss(temp0_25, *(rcx_1 + rax_2 - 0x10))
        result[5] = temp0_31
        *result = __minss_xmmss_memss(temp0_26.d, *(rcx_1 + rax_2 - 0xc)).d
        zmm1 = __minss_xmmss_memss(temp0_27.d, *(rcx_1 + rax_2 - 8))
        result[1] = zmm1.d
        zmm2 = __minss_xmmss_memss(temp0_28, *(rcx_1 + rax_2 - 4))
        result[2] = zmm2
        zmm3 = __maxss_xmmss_memss(temp0_29, *(rcx_1 + rax_2 - 0xc))
        result[3] = zmm3
        zmm4 = __maxss_xmmss_memss(temp0_30, *(rcx_1 + rax_2 - 8))
        result[4] = zmm4
        zmm5 = __maxss_xmmss_memss(temp0_31, *(rcx_1 + rax_2 - 4))
        result[5] = zmm5
    while (i_1 s< *(arg1 + 0x248))

uint64_t var_40[0x5]
uint64_t* rax_3 = sub_140ae2c60(result, &var_40, *(arg1 + 0x130) + 0x1c0)
*result = *rax_3
*(result + 0x10) = rax_3[2]
result[6] = rax_3[3].d
int64_t* rcx_3 = *(arg1 + 0x250)

if (rcx_3 != 0 && (*(*rcx_3 + 0x3e0))(rcx_3) != 0)
    float var_4c
    float* rax_7 = sub_14265bbd0(*(arg1 + 0x250), &var_4c)
    
    if (result[6].b == 0)
        *(result + 0xc) = *rax_7
        int32_t rax_8 = rax_7[2]
        result[5] = rax_8
        *result = *(result + 0xc)
        result[2] = rax_8
        result[6].b = 1
    else
        int64_t temp0_38 = __minss_xmmss_memss((*result).d, *rax_7)
        int32_t zmm1_2 = result[3]
        *result = temp0_38.d
        result[1] = __minss_xmmss_memss(rax_7[1].d, result[1]).d
        result[2] = __minss_xmmss_memss(rax_7[2].d, result[2]).d
        int32_t temp0_41 = __maxss_xmmss_memss(zmm1_2, *rax_7)
        int64_t zmm0_2 = result[4]
        result[3] = temp0_41
        result[4] = __maxss_xmmss_memss(zmm0_2.d, rax_7[1]).d
        result[5] = __maxss_xmmss_memss(rax_7[2], result[5])
    
    float* rax_9 = sub_142657790(*(arg1 + 0x250), &var_4c)
    
    if (result[6].b != 0)
        int64_t temp0_44 = __minss_xmmss_memss((*result).d, *rax_9)
        int32_t zmm1_3 = result[3]
        *result = temp0_44.d
        result[1] = __minss_xmmss_memss(rax_9[1].d, result[1]).d
        result[2] = __minss_xmmss_memss(rax_9[2].d, result[2]).d
        int32_t temp0_47 = __maxss_xmmss_memss(zmm1_3, *rax_9)
        int64_t zmm0_3 = result[4]
        result[3] = temp0_47
        result[4] = __maxss_xmmss_memss(zmm0_3.d, rax_9[1]).d
        result[5] = __maxss_xmmss_memss(rax_9[2], result[5])
        return result
    
    *(result + 0xc) = *rax_9
    int32_t rax_11 = rax_9[2]
    result[5] = rax_11
    *result = *(result + 0xc)
    result[2] = rax_11
    result[6].b = 1

return result
