// 函数: sub_1405c1f50
// 地址: 0x1405c1f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t result = __security_cookie ^ &var_f8
uint64_t result_1 = result

if (arg2 == 0 || *(arg1 + 0x68) s<= 1 || *(arg1 + 0x78) s<= 1)
    *(arg1 + 0x8c) = 0
else
    if (*(arg1 + 0x8c) != 0)
        double zmm2 = data_14399f938 f+ *(arg1 + 0x90)
        *(arg1 + 0x90) = zmm2
        result.b =
            zmm2 >= _mm_cvtepi32_pd(zx.q(*(arg1 + 0x84))) f/ _mm_cvtepi32_pd(zx.q(*(arg1 + 0x80)))
    
    if (*(arg1 + 0x8c) == 0 || result.b != 0)
        char var_98 = 3
        void var_94
        sub_140d3a3a0(&var_94, nullptr)
        uint64_t r8_1 = zx.q(*(arg1 + 0x8c))
        uint32_t var_84_1 = zx.d(*(arg1 + 0x88))
        int64_t var_8c_1 = 0
        int64_t var_78_1 = 0
        void* var_68_1 = nullptr
        var_98 = 3
        int16_t var_80_1 = 0x101
        int16_t* var_a8
        sub_140a2e390(&var_a8, u"%04d", r8_1)
        int16_t* const r9_1 = &data_142d40450
        int32_t r15_1 = 1
        int32_t var_a0
        
        if (var_a0 != 0)
            r9_1 = var_a8
        
        int16_t* var_b8
        sub_140a300d0(arg1 + 0x70, &var_b8, u"{frame}", r9_1, 1)
        int32_t var_b0
        int32_t r14_2
        
        if (var_b0 == 0)
            r14_2 = 0
        else
            r14_2 = var_b0 - 1
        
        int32_t rsi_1 = *(arg1 + 0x68)
        
        if (rsi_1 == 0 && r14_2 != 0xffffffff)
            r15_1 = 2
        
        int64_t var_c8 = 0
        int32_t rax_3 = r14_2 + r15_1
        int64_t r15_2 = *(arg1 + 0x60)
        int32_t var_c0_1 = rsi_1
        
        if (rsi_1 != 0 || rax_3 != 0)
            sub_1405a4c70(&var_c8, rsi_1 + rax_3, 0)
            memcpy(var_c8, r15_2, rsi_1 * 2)
        else
            int32_t var_bc_1 = 0
        
        sub_140a2cf70(&var_c8, var_b8, r14_2)
        result = sub_14106c8e0(arg2, &var_c8, &var_98)
        int64_t rcx_7 = var_c8
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        *(arg1 + 0x8c) += 1
        int16_t* rcx_8 = var_b8
        *(arg1 + 0x90) = 0
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        int16_t* rcx_9 = var_a8
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        if (var_78_1 != 0)
            void var_58
            void* rcx_10 = &var_58
            
            if (var_68_1 != 0)
                rcx_10 = var_68_1
            
            result = (*(*rcx_10 + 0x10))(rcx_10)

__security_check_cookie(result_1 ^ &var_f8)
return result
