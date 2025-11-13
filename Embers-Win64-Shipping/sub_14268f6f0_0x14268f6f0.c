// 函数: sub_14268f6f0
// 地址: 0x14268f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
uint64_t var_a0 = __security_cookie ^ &var_1c8
bool cond:0 = arg1[1] != 0
int128_t* var_188 = arg4
uint64_t result

if (cond:0)
    int64_t* rcx = *arg1
    int64_t r14
    r14.b = 0
    void* rax_2 = (*(*rcx + 0x150))(rcx)
    void* const rbx_1
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(rax_2 + 0x120)
        
        if (rbx_1 == 0)
            rbx_1 = nullptr
        else
            void* rax_3 = sub_14269bba0()
            void* rdx = *(rbx_1 + 0x10)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                rbx_1 = nullptr
    
    void* const var_150_1 = rbx_1
    void** const var_158 = &data_143459760
    void var_148
    sub_140d3a3a0(&var_148, arg6)
    int64_t var_140_1 = 0
    void var_138
    sub_1426022c0(&var_138)
    uint32_t rax_6
    void* rbx_2
    
    if (data_143de5480 != 0)
        rbx_2 = &var_138
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_6.b != 0)
        rbx_2 = &arg1[0xc]
    
    sub_142611af0(rbx_2, arg1[1], 0, &var_158)
    void* rax_7 = *(arg5 + 0x10)
    
    if (rax_7 != 0 && rax_7 != -8)
        int128_t* rcx_5 = var_188
        float temp0_1[0x4] = _mm_max_ss((*(*arg1 + 0x480))[0], 0)
        int32_t var_190_1 = 0
        float zmm10[0x4] = *rcx_5
        float zmm8[0x4] = *(rcx_5 + 4) ^ 0x80000000
        temp0_1[0] = temp0_1[0] f+ *(rcx_5 + 8)
        int128_t* var_198_1 = nullptr
        int32_t var_b8
        int32_t* var_1a0_1 = &var_b8
        int64_t* var_1a8_1 = &var_188
        float var_178 = _mm_and_ps(zmm10 ^ 0x80000000, 0x7fffffff)[0]
        float var_174_1 = _mm_and_ps(temp0_1, 0x7fffffff)[0]
        float var_170_1 = _mm_and_ps(zmm8, 0x7fffffff)[0]
        float zmm0_1[0x4] = arg2[2]
        int32_t var_168 = (*arg2 ^ 0x80000000).d
        float var_164_1 = zmm0_1[0]
        int32_t var_160_1 = (arg2[1] ^ 0x80000000).d
        int128_t zmm6_1
        uint128_t zmm7_1
        int32_t zmm8_1
        int32_t zmm9_1
        int32_t zmm10_1
        int32_t zmm11_1
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_14260a910(rbx_2, &var_168, &var_178, 
            rax_7 + 8, var_1a8_1, var_1a0_1, var_198_1, var_190_1)
        int128_t* rax_9 = var_188
        
        if (rax_9 != 0)
            uint128_t zmm1_2 = var_b8 ^ zmm6_1
            int32_t var_b0
            uint128_t zmm0_2 = var_b0 ^ zmm6_1
            var_188.d = zmm1_2.d
            zmm1_2.d = zmm1_2.d f- *arg2
            var_188:4.d = zmm0_2.d
            zmm0_2.d = zmm0_2.d f- arg2[1]
            float var_b4
            float zmm2_1 = var_b4 f- arg2[2]
            
            if (not(zmm11_1 f> zmm1_2.d) && not(zmm1_2.d f> zmm10_1) && not(zmm8_1 f> zmm0_2.d)
                    && not(zmm0_2.d f> zmm9_1) && not((zmm7_1 ^ zmm6_1).d f> zmm2_1)
                    && not(zmm2_1 f> zmm7_1.d))
                r14.b = 1
                float var_b0_1 = var_b4
                zmm0_2.q = var_188
                *arg3 = zmm0_2
                arg3[1].q = rax_9
    
    sub_142602500(&var_138)
    result = zx.q(r14.b)
else
    result.b = 0

__security_check_cookie(var_a0 ^ &var_1c8)
return result
