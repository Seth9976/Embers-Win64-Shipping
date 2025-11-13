// 函数: sub_140b9d980
// 地址: 0x140b9d980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t result = __security_cookie ^ &var_f8
uint64_t result_1 = result

if (*(arg1 + 0x238) == 6 && *(arg1 + 0x4f8) == 0 && (*(arg1 + 0x248) != 0 || *(arg1 + 0x258) != 0
        || *(arg1 + 0x268) != 0 || *(arg1 + 0x278) != 0 || *(arg1 + 0x288) != 0
        || *(arg1 + 0x298) != 0))
    bool cond:1_1 = *(arg1 + 0x298) == 0
    int32_t rdi_1 = -1
    *(arg1 + 0x4f8) = 1
    
    if (not(cond:1_1))
        rdi_1 = -2
    else if (*(arg1 + 0x278) != 0 && *(arg1 + 0x2a8) - *(arg1 + 0x2d4) s< 2)
        rdi_1 = -3
    
    int64_t rax_3 = *(arg1 + 0x14)
    int64_t rsi_1 = *(arg1 + 0x1d8)
    int32_t r14_1 = *(arg1 + 0x23c)
    
    if (data_143e1a350 != 0)
        sub_140baa830(0x7fffffff)
    
    int32_t r8_1
    
    if (data_143e1a350 == 0 || data_143e1a350 == 0)
        r8_1 = *(arg1 + 0x23c)
    else
        r8_1 = sub_140baa830(0x7fffffff)
    
    int32_t rcx_1 = *(rsi_1 + 0x328) + 1
    void** const var_98 = &data_142e345d8
    int64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) = j_sub_140b98470
    int32_t var_78 = *(arg1 + 0x44)
    *(rsi_1 + 0x328) = rcx_1
    int32_t var_74_1 = r8_1
    int32_t var_6c_1 = rcx_1
    int32_t var_c8_1 = r14_1
    int128_t zmm0
    zmm0.q = rax_3
    int32_t var_70_1 = rdi_1
    int128_t* var_58_1 = nullptr
    uint128_t zmm1 = zmm0
    zmm0 = var_98.o
    zmm1 = _mm_unpacklo_pd(zmm1, rsi_1)
    void*** var_a8_1 = nullptr
    int128_t var_48 = zmm0
    int128_t var_90_1 = zmm1
    uint128_t var_38_1 = zmm1
    result = sub_140b93350(rsi_1 + 0x330, &var_78)
    
    if (var_68_1 != 0)
        int128_t* rcx_3 = &var_48
        
        if (var_58_1 != 0)
            rcx_3 = var_58_1
        
        result = (*(*rcx_3 + 0x10))(rcx_3)
    
    if (nullptr != 0)
        void** const* rcx_4 = &var_98
        
        if (var_a8_1 != 0)
            rcx_4 = var_a8_1
        
        result = (*rcx_4)[2](rcx_4)

__security_check_cookie(result_1 ^ &var_f8)
return result
