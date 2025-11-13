// 函数: sub_1410f8450
// 地址: 0x1410f8450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
bool cond:0 = arg2[0x1f] == 9
arg2[0x1e] = 0

if (not(cond:0))
    sub_141105170(arg2, 9)

int32_t i = 0
uint64_t result

if (data_1439b55b0 != 0)
    void* rbp_1 = &data_1439b5b30
    
    do
        int64_t rdi_2 = sx.q(arg2[0x1e])
        int32_t rax_3 = (rdi_2 + 1).d
        arg2[0x1e] = rax_3
        
        if (rax_3 s> arg2[0x1f])
            sub_141104f10(arg2, rdi_2.d)
        
        float* rax_4 = *(arg2 + 0x70)
        int64_t rcx_4 = rdi_2 * 3
        float* rdx_3 = arg2
        
        if (rax_4 != 0)
            rdx_3 = rax_4
        
        i += 1
        *(rdx_3 + (rcx_4 << 2)) = *rbp_1
        result = zx.q(*(rbp_1 + 8))
        rbp_1 += 0xc
        rdx_3[rcx_4 + 2] = result.d
    while (i u< 9)
else
    void* rbp = &data_1439b5ac0
    
    do
        int64_t rdi_1 = sx.q(arg2[0x1e])
        int32_t rax_1 = (rdi_1 + 1).d
        arg2[0x1e] = rax_1
        
        if (rax_1 s> arg2[0x1f])
            sub_141104f10(arg2, rdi_1.d)
        
        float* rax_2 = *(arg2 + 0x70)
        int64_t rcx_2 = rdi_1 * 3
        float* rdx_1 = arg2
        
        if (rax_2 != 0)
            rdx_1 = rax_2
        
        i += 1
        *(rdx_1 + (rcx_2 << 2)) = *rbp
        result = zx.q(*(rbp + 8))
        rbp += 0xc
        rdx_1[rcx_2 + 2] = result.d
    while (i u< 9)

if (data_143e51024 != 0)
    float zmm2 = (zx.o(0)).d
    float zmm1 = 0.5f
    int32_t i_3 = arg1 & 0x3ff
    uint128_t zmm0
    
    if (i_3 u> 0)
        int32_t i_1
        
        do
            int32_t rcx_6 = i_3 & 0x80000001
            
            if (rcx_6 s< 0)
                rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i_3)
            i_1 = (temp1_1 - temp0_1) s>> 1
            i_3 = i_1
            zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_6)).d f* zmm1
            zmm1 = zmm1 * 0.5f
            zmm2 = zmm2 f+ zmm0.d
        while (i_1 s> 0)
    
    zmm0.d = zmm2 * 6.28318548f
    float zmm0_1[0x4]
    result, zmm0_1 = __libm_sse2_sincosf_(zmm0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
    
    if (arg2[0x1e] s> 0)
        int64_t rdx_5 = 0
        
        do
            float* rax_8 = *(arg2 + 0x70)
            float* rcx_9 = arg2
            float zmm2_1 = temp0_3[0]
            float zmm3_1 = temp0_3[0]
            
            if (rax_8 != 0)
                rcx_9 = rax_8
            
            result = arg2
            int64_t zmm4_1 = *(rcx_9 + rdx_5)
            zmm0_1[0] = zmm0_1[0] f* zmm4_1:4.d
            zmm2_1 = zmm2_1 f* zmm4_1.d - zmm0_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm4_1.d
            *(rcx_9 + rdx_5) = zmm2_1
            uint64_t result_1 = *(arg2 + 0x70)
            
            if (result_1 != 0)
                result = result_1
            
            i_2 += 1
            *(result + rdx_5 + 4) = zmm3_1 f* zmm4_1:4.d + zmm0_1[0]
            rdx_5 += 0xc
        while (i_2 s< arg2[0x1e])

return result
