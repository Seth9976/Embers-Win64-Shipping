// 函数: sub_142690270
// 地址: 0x142690270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t* result = __security_cookie ^ &var_1c8
int64_t* result_1 = result
uint64_t var_98 = arg4

if (arg1[1] != 0)
    int64_t* rcx_1 = *arg1
    
    if (rcx_1 != 0)
        void* r15_1 = *(arg4 + 0x10)
        
        if (r15_1 != 0 && r15_1 != -8)
            void* rax_2 = (*(*rcx_1 + 0x150))()
            int32_t rdi_1 = 0
            void* const rsi_1
            
            if (rax_2 == 0)
                rsi_1 = nullptr
            else
                rsi_1 = *(rax_2 + 0x120)
                
                if (rsi_1 == 0)
                    rsi_1 = nullptr
                else
                    void* rax_3 = sub_14269bba0()
                    void* rdx = *(rsi_1 + 0x10)
                    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                        rsi_1 = nullptr
            
            void** const var_140 = &data_143459760
            void* const var_138_1 = rsi_1
            void var_130
            sub_140d3a3a0(&var_130, arg5)
            int64_t var_128_1 = 0
            void var_118
            sub_1426022c0(&var_118)
            uint32_t rax_6
            void* rsi_2
            
            if (data_143de5480 != 0)
                rsi_2 = &var_118
                rax_6.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rax_6.b != 0)
                rsi_2 = &arg1[0xc]
            
            sub_142611af0(rsi_2, arg1[1], *(var_98 + 0x20), &var_140)
            void* rcx_6 = *arg1
            int128_t zmm1_1 = _mm_max_ss((*(rcx_6 + 0x480)).d, 0)
            uint128_t zmm2 = zx.o(*(rcx_6 + 0x26c))
            int32_t rax_8 = *(rcx_6 + 0x274)
            int32_t var_80_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
            zmm1_1.d = zmm1_1.d f+ rax_8
            int32_t var_158 = (*arg2 ^ 0x80000000).d
            int32_t var_154_1 = (*(arg2 + 8)).d
            int32_t var_84_1 = zmm1_1.d
            zmm1_1 = *(arg2 + 4) ^ 0x80000000
            int32_t var_168 = (*arg3 ^ 0x80000000).d
            uint128_t zmm0_1 = *(arg3 + 8)
            int32_t var_150_1 = zmm1_1.d
            zmm1_1 = *(arg3 + 4) ^ 0x80000000
            int32_t var_88 = zmm2.d
            int32_t var_160_1 = zmm1_1.d
            int32_t var_164_1 = zmm0_1.d
            var_98 = zmm2.q
            int64_t arg_38
            
            if (arg_38 == 0)
                sub_14260a640(rsi_2, &var_158, &var_88, r15_1 + 8, &arg_38, nullptr)
            
            int32_t* var_1a0_2 = nullptr
            int64_t var_148
            int64_t* var_1a8_2 = &var_148
            var_148 = 0
            uint128_t zmm7_1
            uint128_t zmm8_1
            zmm7_1, zmm8_1 =
                sub_14260a640(rsi_2, &var_168, &var_88, r15_1 + 8, var_1a8_2, var_1a0_2)
            int64_t rdx_5 = arg_38
            
            if (rdx_5 == 0)
                *(arg6 + 0x604) = 0
                float zmm6_1 = *(arg2 + 8) f- *(arg3 + 8)
                uint128_t var_58_1 = zmm7_1
                zmm7_1.d = (*arg2).d f- *arg3
                uint128_t var_68_1 = zmm8_1
                zmm8_1.d = (*(arg2 + 4)).d f- *(arg3 + 4)
                uint128_t zmm0_2
                zmm0_2.d = zmm7_1.d f* zmm7_1.d
                uint128_t zmm2_1
                zmm2_1.d = zmm8_1.d f* zmm8_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                zmm2_1.d = zmm2_1.d f+ zmm6_1 * zmm6_1
                float var_90_2
                
                if (not(zmm2_1.d f!= 1f))
                    var_98.d = zmm7_1.d
                    var_98:4.d = zmm8_1.d
                    var_90_2 = zmm6_1
                else if (zmm2_1.d f>= 9.99999994e-09f)
                    float zmm3_1 = zmm2_1.d
                    uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1)
                    zmm3_1 = zmm3_1 * 0.5f
                    zmm0_2.d = zmm5_1.d f* zmm5_1.d
                    zmm2_1.d = 0.5f - zmm3_1 f* zmm0_2.d
                    zmm0_2.d = zmm5_1.d f* zmm2_1.d
                    zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                    zmm0_2.d = zmm5_1.d f* (0.5f - zmm3_1 * zmm5_1.d f* zmm5_1.d)
                    zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                    zmm0_2.d = zmm5_1.d f* zmm7_1.d
                    var_98.d = zmm0_2.d
                    var_98:4.d = zmm5_1.d f* zmm8_1.d
                    var_90_2 = zmm6_1 f* zmm5_1.d
                else
                    var_98.d = data_143dbb1f8.d
                    var_90_2 = data_143dbb200.d
                    var_98:4.d = data_143dbb1fc
                
                *(arg6 + 0x608) = var_98
                *(arg6 + 0x610) = var_90_2
            else
                int32_t rax_10
                int128_t zmm6_2
                rax_10, zmm6_2 = sub_1426150f0(rsi_2, rdx_5, &var_158, &var_168, r15_1 + 8, 
                    arg6 + 0x604, &var_98, arg6, arg6 + 0x600, 0x80)
                int32_t zmm0_3 = var_98:4.d
                *(arg6 + 0x608) = (_mm_unpacklo_ps(var_98.d ^ zmm6_2, (rax_8 ^ zmm6_2).q)).q
                *(arg6 + 0x610) = zmm0_3
                
                if (((rax_10 u>> 0x1e).b & 1) != 0)
                    int64_t rax_12 = sx.q(*(arg6 + 0x600))
                    int64_t rcx_12
                    
                    if (rax_12.d s<= 0)
                        rcx_12 = 0
                    else
                        rcx_12 = *(arg6 + (rax_12 << 3) - 8)
                    
                    if (rcx_12 == var_148)
                        rdi_1 = 1
                
                *(arg6 + 0x614) &= 0xfffffffe
                *(arg6 + 0x614) |= rdi_1
            
            result = sub_142602500(&var_118)

__security_check_cookie(result_1 ^ &var_1c8)
return result
