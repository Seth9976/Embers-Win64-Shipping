// 函数: sub_142005cc0
// 地址: 0x142005cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(*(arg1 + 0x30))
uint128_t result = zx.o(0)
uint128_t zmm0

if (rdx == 0)
    int64_t r8_2 = sx.q(*(arg1 + 0x130))
    int32_t rbx_1 = 1
    int64_t i = 0
    int32_t r9_2 = 0
    
    if (r8_2.d s> 0 && r8_2.d u>= 8 && data_143ccb970 s>= 2)
        int32_t zmm1[0x4] = data_142d3f5b0
        int64_t r10_1 = *(arg1 + 0x128)
        int32_t zmm2[0x4] = zmm1
        int32_t rdx_5 = r8_2.d & 0x80000007
        
        if (rdx_5 s< 0)
            rdx_5 = ((rdx_5 - 1) | 0xfffffff8) + 1
        
        do
            r9_2 += 8
            zmm1 = _mm_max_epi32(zmm1, *(r10_1 + (i << 2)))
            zmm0 = *(r10_1 + (i << 2) + 0x10)
            i += 8
            zmm2 = _mm_max_epi32(zmm2, zmm0)
        while (i s< sx.q(r8_2.d - rdx_5))
        
        int32_t temp0_5[0x4] = _mm_max_epi32(zmm1, zmm2)
        int32_t temp0_7[0x4] = _mm_max_epi32(temp0_5, _mm_bsrli_si128(temp0_5, 8))
        rbx_1 = _mm_max_epi32(temp0_7, _mm_bsrli_si128(temp0_7, 4))[0]
    
    int64_t rcx_8 = sx.q(r9_2)
    
    while (rcx_8 s< r8_2)
        int32_t rax_11 = *(*(arg1 + 0x128) + (rcx_8 << 2))
        
        if (rbx_1 s>= rax_11)
            rax_11 = rbx_1
        
        rcx_8 += 1
        rbx_1 = rax_11
    
    return _mm_cvtepi32_ps(zx.o(rbx_1))

if (rdx != 1)
    return zx.o(0)

void* var_98
sub_142411870(sub_14240f390(), &var_98)

if (var_98 != 0)
    zmm0 = data_14399f5e0
    int32_t r8_1 = *(arg1 + 0x13c)
    int64_t arg_8 = 0
    int32_t var_88 = 0
    int16_t var_84_1 = 0
    int64_t var_80_1 = 0
    uint128_t var_78_1 = zmm0
    void var_68
    sub_140d93a40(&var_68, arg1, r8_1, &arg_8, &var_88)
    result = _mm_cvtepi32_ps(zx.o(sub_140da8a70(sub_140da4220(var_98, &var_68, 0x3f800000[0], 
        &data_143e20dd8))))
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp3_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t temp2_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_90 + 8))(var_90, 1)

return result
