// 函数: sub_142681b90
// 地址: 0x142681b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
bool cond:0 = arg1[1] == 0
uint128_t* var_198 = arg3
uint64_t result

if (cond:0)
    result = 1
else
    int64_t* rcx = *arg1
    
    if (rcx == 0)
        result = 1
    else
        void* rax_2 = *(arg5 + 0x10)
        
        if (rax_2 == 0 || rax_2 == -8)
            result = 1
        else
            void* rax_4 = (*(*rcx + 0x150))()
            void* const rdi_1
            
            if (rax_4 == 0)
                rdi_1 = nullptr
            else
                rdi_1 = *(rax_4 + 0x120)
                
                if (rdi_1 == 0)
                    rdi_1 = nullptr
                else
                    void* rax_5 = sub_14269bba0()
                    void* rdx = *(rdi_1 + 0x10)
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                        rdi_1 = nullptr
            
            void* const var_100_1 = rdi_1
            void** const var_108 = &data_143459760
            void var_f8
            sub_140d3a3a0(&var_f8, arg6)
            int64_t var_f0_1 = 0
            void var_e8
            sub_1426022c0(&var_e8)
            uint32_t rax_8
            void* rdi_2
            
            if (data_143de5480 != 0)
                rdi_2 = &var_e8
                rax_8.b = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rax_8.b != 0)
                rdi_2 = &arg1[0xc]
            
            sub_142611af0(rdi_2, arg1[1], *(arg5 + 0x20), &var_108)
            uint128_t* var_1b0
            int64_t var_188
            float var_168
            int64_t var_148
            char rax_9
            int32_t zmm6_1
            rax_9, zmm6_1 = sub_14268a160(arg1, arg2, var_198, rdi_2, rax_2 + 8, &var_1b0, 
                &var_188, &var_168, &var_148)
            int32_t result_1
            
            if (rax_9 != 0)
                int64_t r8_3 = var_148
                int64_t rdx_4 = var_188
                int32_t* var_1d8_2 = nullptr
                int64_t* var_158
                int64_t* var_1e0_2 = &var_158
                int32_t* var_1f0_1
                var_1f0_1.d = zmm6_1
                float* var_1f8_2 = &var_168
                var_158 = nullptr
                int32_t var_150_1 = 0
                int32_t rax_10 = sub_14260b290(rdi_2, rdx_4, r8_3, &var_1b0, var_1f8_2, 
                    var_1f0_1.d, rax_2 + 8, var_1e0_2, var_1d8_2)
                int32_t var_1a8
                
                if (var_150_1 != 1 || ((rax_10 u>> 6).b & 1) == 0)
                    uint128_t* zmm0_1 = var_168.q
                    int32_t var_160
                    int32_t var_190_1 = var_160
                    int32_t var_130_1 = var_1a8
                    float temp0_4[0x4] =
                        _mm_unpacklo_ps(var_168 ^ 0x80000000, (var_160 ^ 0x80000000).q)
                    var_198 = zmm0_1
                    zmm0_1 = var_1b0
                    int64_t var_128 = temp0_4.q
                    float zmm1_1[0x4] = var_1b0.d
                    uint128_t* var_138 = zmm0_1
                    int32_t var_164
                    int32_t var_120_1 = var_164.d
                    int32_t var_170_4 = var_1b0:4.d.d
                    int64_t* var_1c0_1 = &var_158
                    int64_t* var_1c8_1 = &var_198
                    int64_t var_1d0_1 = &var_138
                    int64_t* var_1d8_3 = &var_128
                    int64_t var_178
                    float* var_1e0_3 = &var_178
                    int64_t rax_25 = var_148
                    int64_t rax_26 = var_188
                    var_178 = (_mm_unpacklo_ps(zmm1_1 ^ 0x80000000, (var_1a8 ^ 0x80000000).q)).q
                    sub_14268dcf0(arg1, rax_10, arg4, rdi_2, rax_2 + 8, rax_26, rax_25, var_1e0_3, 
                        var_1d8_3, var_1d0_1, var_1c8_1, var_1c0_1)
                else
                    sub_142604ad0(rdi_2, var_188, &var_168, &var_198)
                    int64_t* rax_11 = sub_14266df20(0x20, arg4 + 0x28)
                    
                    if (rax_11 != 0)
                        int64_t rcx_10 = var_188
                        float var_170_1 = var_1b0:4.d[0]
                        *rax_11 =
                            (_mm_unpacklo_ps(var_1b0.d ^ 0x80000000, (var_1a8 ^ 0x80000000).q)).q
                        rax_11[1].d = var_170_1
                        rax_11[2] = rcx_10
                        rax_11[3] = 0
                    
                    int64_t* rax_13 = sub_14266df20(0x20, arg4 + 0x28)
                    int32_t var_190
                    
                    if (rax_13 != 0)
                        int64_t rcx_11 = var_188
                        float var_170_2 = var_198:4.d[0]
                        *rax_13 =
                            (_mm_unpacklo_ps(var_198.d ^ 0x80000000, (var_190 ^ 0x80000000).q)).q
                        rax_13[1].d = var_170_2
                        rax_13[2] = rcx_11
                        rax_13[3] = 0
                    
                    int64_t r15_1 = sx.q(*(arg4 + 0x108))
                    int64_t r13_1 = *var_158
                    int32_t rax_16 = (r15_1 + 1).d
                    *(arg4 + 0x108) = rax_16
                    
                    if (rax_16 s> *(arg4 + 0x10c))
                        sub_1405a4d70(arg4 + 0x100)
                    
                    int64_t rax_17 = *(arg4 + 0x100)
                    char var_1b8 = 0x3f
                    *(rax_17 + (r15_1 << 3)) = r13_1
                    sub_1426101c0(arg1[1], var_188, &var_1b8)
                    int128_t zmm1_2 = var_1b0.d
                    float zmm2_2[0x4] = var_1b0:4.d
                    zmm2_2[0] = zmm2_2[0] f- var_198:4.d
                    zmm1_2.d = zmm1_2.d f- var_198.d
                    float zmm0_3[0x4] = var_1a8
                    zmm0_3[0] = zmm0_3[0] f- var_190
                    uint64_t rax_18 = zx.q(var_1b8)
                    int64_t r14_1 = sx.q(*(arg4 + 0x118))
                    zmm2_2[0] = zmm2_2[0] * zmm2_2[0]
                    zmm1_2.d = zmm1_2.d f* zmm1_2.d
                    zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
                    zmm2_2[0] = zmm2_2[0] f+ zmm1_2.d
                    zmm2_2[0] = zmm2_2[0] + zmm0_3[0]
                    float zmm6_2 = _mm_sqrt_ss(0, zmm2_2[0]) f* *(rax_2 + 8 + (rax_18 << 2) + 8)
                    int32_t rax_19 = (r14_1 + 1).d
                    *(arg4 + 0x118) = rax_19
                    
                    if (rax_19 s> *(arg4 + 0x11c))
                        sub_1406105e0(arg4 + 0x110)
                    
                    *(*(arg4 + 0x110) + (r14_1 << 2)) = zmm6_2
                int32_t rcx_21
                
                if (((rax_10 u>> 6).b & 1) == 0)
                    rcx_21 = *(arg4 + 0x98)
                else
                    rcx_21 =
                        (((zx.d((rax_10 u>> 5).b) << 3 ^ *(arg4 + 0x98)) & 8) ^ *(arg4 + 0x98)) | 4
                
                *(arg4 + 0x98) = rcx_21 | 2
                result_1 = sub_142677d70(rax_10)
                sub_142609160(var_158)
            else
                result_1 = 1
            
            sub_142602500(&var_e8)
            result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_218)
return result
