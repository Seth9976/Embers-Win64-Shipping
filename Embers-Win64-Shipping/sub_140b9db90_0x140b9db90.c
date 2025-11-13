// 函数: sub_140b9db90
// 地址: 0x140b9db90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t result = __security_cookie ^ &var_e8
uint64_t result_1 = result

if (*(arg1 + 0x4f9) == 0)
    result = zx.q(*(arg1 + 0x448))
    
    if (result.d == *(arg1 + 0x474))
        int64_t rax_1 = *(arg1 + 0x14)
        int32_t rbx_1 = *(arg1 + 0x23c)
        int32_t rsi_1 = *(arg1 + 0x44)
        *(arg1 + 0x4f9) = 1
        int64_t rdi_1 = *(arg1 + 0x1d8)
        int32_t rdx_1
        
        if (data_143e1a350 == 0)
            rdx_1 = rbx_1
        else
            rdx_1 = sub_140baa830(0x7fffffff)
        
        void** const var_88 = &data_142e345d8
        int32_t rax_4 = *(rdi_1 + 0x328) + 1
        int32_t var_64_1 = rdx_1
        void* const var_58_1 = &data_140b9bec0
        int32_t var_60_1 = 0
        int128_t* var_48_1 = nullptr
        void*** var_98_1 = nullptr
        int32_t var_b8_1 = rbx_1
        int128_t zmm0
        zmm0.q = rax_1
        *(rdi_1 + 0x328) = rax_4
        int32_t var_68 = rsi_1
        double zmm1[0x2] = zmm0
        zmm0 = var_88.o
        double temp0_1[0x2] = _mm_unpacklo_pd(zmm1, rdi_1)
        int32_t var_5c_1 = rax_4
        int128_t var_38 = zmm0
        int128_t var_80_1 = temp0_1
        double var_28_1[0x2] = temp0_1
        result = sub_140b93350(rdi_1 + 0x330, &var_68)
        
        if (var_58_1 != 0)
            int128_t* rcx_2 = &var_38
            
            if (var_48_1 != 0)
                rcx_2 = var_48_1
            
            result = (*(*rcx_2 + 0x10))(rcx_2)
        
        if (nullptr != 0)
            void** const* rcx_3 = &var_88
            
            if (var_98_1 != 0)
                rcx_3 = var_98_1
            
            result = (*rcx_3)[2](rcx_3)

__security_check_cookie(result_1 ^ &var_e8)
return result
