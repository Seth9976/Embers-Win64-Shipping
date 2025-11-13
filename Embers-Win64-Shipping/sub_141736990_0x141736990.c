// 函数: sub_141736990
// 地址: 0x141736990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x38)
int64_t result

if (rcx == 0)
    int64_t* i = *(arg1 + 0x10)
    result = sx.q(*(arg1 + 0x18))
    
    for (void* rsi_1 = &i[result]; i != rsi_1; i = &i[1])
        int64_t* rcx_8 = *i
        result = (*(*rcx_8 + 0x78))(rcx_8, arg2, arg3)
else
    int32_t* var_98
    sub_1415c6060(rcx + 0x1b0, &var_98, arg3, arg4)
    int32_t result_1
    int32_t rdx_2 = arg2[1].d + result_1
    
    if (rdx_2 s> *(arg2 + 0xc))
        sub_1405a52a0(arg2, rdx_2)
    
    int32_t* r15_1 = var_98
    int64_t rsi = 0
    result = sx.q(result_1)
    int32_t* r14_1 = r15_1
    void* rcx_3 = &r15_1[result]
    uint64_t rbx_4 = (rcx_3 - r15_1 + 3) u>> 2
    
    if (r15_1 u> rcx_3)
        rbx_4 = 0
    
    if (rbx_4 != 0)
        float zmm6[0x4]
        float var_28_1[0x4] = zmm6
        float zmm7[0x4]
        float var_38_1[0x4] = zmm7
        int128_t zmm8
        int128_t var_48_1 = zmm8
        
        do
            int64_t r9 = sx.q(*r14_1)
            int64_t zmm1_1 = (zx.o(0)).q
            void* r8 = *(arg1 + 0x38)
            int64_t rbp_1 = sx.q(arg2[1].d)
            zmm7 = data_14399f668
            int64_t rdx_3 = r9 * 3
            int64_t rcx_4 = *(r8 + 0x28)
            zmm8 = *((r9 << 4) + *(r8 + 0x68))
            int128_t zmm0_1 = *(rcx_4 + (rdx_3 << 2) + 8)
            int64_t rax_3 = *(r8 + 0x80)
            zmm6 = *(rcx_4 + (rdx_3 << 2))
            float temp0_1[0x4] = _mm_unpacklo_ps(*(rcx_4 + (rdx_3 << 2) + 4), zmm1_1)
            int64_t rcx_5 = *(rax_3 + (r9 << 3))
            int32_t rax_4 = (rbp_1 + 1).d
            float temp0_2[0x4] = _mm_unpacklo_ps(zmm6, zmm0_1.q)
            zmm0_1 = data_14399f670
            float temp0_3[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
            float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, zmm0_1.q), 
                _mm_unpacklo_ps(data_14399f66c, zmm1_1)[0].q)
            arg2[1].d = rax_4
            
            if (rax_4 s> *(arg2 + 0xc))
                sub_1405c4fe0(arg2)
            
            result = *arg2
            r14_1 = &r14_1[1]
            int64_t rdx_6 = rbp_1 << 6
            rsi += 1
            *(rdx_6 + result) = rcx_5.o
            *(rdx_6 + result + 0x10) = zmm8
            *(rdx_6 + result + 0x20) = temp0_3
            *(rdx_6 + result + 0x30) = temp0_6
        while (rsi != rbx_4)
    
    if (r15_1 != 0)
        return sub_140a74f90(r15_1)

return result
