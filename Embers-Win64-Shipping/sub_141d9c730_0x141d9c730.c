// 函数: sub_141d9c730
// 地址: 0x141d9c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t result = __security_cookie ^ &var_e8
uint64_t result_1 = result
void** i = *(arg1 + 0x180)
int64_t* i_1 = i
void* rcx_2 = &i[sx.q(*(arg1 + 0x188)) * 2]

if (i != rcx_2)
    do
        result = *i_1
        
        if (*(result + 0x18) == 0xa)
            goto label_141d9c9d5
        
        i_1 = &i_1[2]
    while (i_1 != rcx_2)

void* r8 = *(arg1 + 0x190)

if (r8 == 0 || *(r8 + 0x18) != 0xa)
    for (; i != rcx_2; i = &i[2])
        result = *i
        
        if (*(result + 0x18) == 7)
            goto label_141d9c9d5
    
    if (r8 == 0 || *(r8 + 0x18) != 7)
        result = zx.q(*(arg1 + 0x158))
        
        if (result.d s>= 0 && result.d s< *(arg1 + 0x140))
            int32_t rax_1 = *(arg1 + 0x174)
            int64_t performanceCount
            uint128_t zmm0
            
            if (rax_1 == 0 || *(arg1 + 0x14c) u>= rax_1)
                result = QueryPerformanceCounter(&performanceCount)
                zmm0.q = float.d(performanceCount)
                zmm0.q = zmm0.q f* data_143d796f8
                zmm0.q = zmm0.q f+ 16777216.0
                zmm0.q = zmm0.q f- *(arg1 + 0x160)
                
                if (not(zmm0.q f< 3.0))
                    int32_t rax_2 = *(arg1 + 0x14c)
                    int32_t rdx = *(arg1 + 0x148)
                    
                    if (rax_2 u<= rdx)
                        goto label_141d9c8e1
                    
                    int32_t rcx_4 = *(arg1 + 0x2e0)
                    
                    if (rcx_4 s<= 0)
                        goto label_141d9c8e1
                    
                    uint128_t zmm1 = zx.o(*(arg1 + 0x2e8))
                    result = zx.q(rax_2 - rdx)
                    bool cond:0_1 = data_143de5480 == 0
                    int64_t rdi_1 = data_143f38800
                    uint128_t zmm6
                    zmm6.d = float.s(result)
                    zmm0 = _mm_cvtepi32_ps(zx.o(rcx_4))
                    zmm6.d = zmm6.d f* 0.00100000005f
                    zmm1.d = _mm_cvtepi32_ps(zmm1).d f/ zmm0.d
                    zmm0.d = zmm6.d f* zmm1.d
                    zmm6.d = zmm6.d f- zmm0.d
                    int64_t rcx_5
                    
                    if (cond:0_1)
                        rcx_5 = 0
                    else
                        result = GetCurrentThreadId()
                        rcx_5.b = result.d != data_143de5470
                    
                    zmm0.d = (*(rdi_1 + (rcx_5 << 2))).d f* 0.5f
                    
                    if (not(zmm6.d f> zmm0.d))
                        goto label_141d9c8e1
            else
            label_141d9c8e1:
                int64_t rax_3 = sx.q(*(arg1 + 0x158))
                int32_t var_b0_1 = rax_3.d
                void** const var_48 = &data_142d42ed8
                performanceCount = arg1
                zmm0 = performanceCount.o
                void* const var_68 = &data_141d9be20
                void** const var_88 = &data_142d42ed8
                int64_t (* var_a8)(int64_t* arg1, void* arg2) = j_sub_141d98250
                uint128_t var_40_1 = zmm0
                int32_t var_b0_2 = rax_3.d
                int64_t rax_4 = *(arg1 + 0x138)
                void*** var_58_1 = nullptr
                void*** var_98_1 = nullptr
                int64_t* var_c8_1 = &var_68
                performanceCount = arg1
                uint128_t var_80_1 = performanceCount.o
                sub_141d92490(arg1, 7, *(rax_4 + rax_3 * 0x28), &var_a8, var_c8_1)
                
                if (var_a8 != 0)
                    void** const* rcx_8 = &var_88
                    
                    if (var_98_1 != 0)
                        rcx_8 = var_98_1
                    
                    (*rcx_8)[2](rcx_8)
                
                if (var_68 != 0)
                    void** const* rcx_9 = &var_48
                    
                    if (var_58_1 != 0)
                        rcx_9 = var_58_1
                    
                    (*rcx_9)[2](rcx_9)
                
                result = QueryPerformanceCounter(&performanceCount)
                *(arg1 + 0x160) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

label_141d9c9d5:
__security_check_cookie(result_1 ^ &var_e8)
return result
