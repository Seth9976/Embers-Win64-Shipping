// 函数: sub_141a7e8d0
// 地址: 0x141a7e8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
float var_78[0x4]
int128_t zmm6 = sub_140ad7d70(arg2, &var_78, arg4)
int64_t result
float var_68[0x4]
float var_58[0x4]

if ((*(*arg1 + 0x28))(arg1) == 0)
    int128_t var_38_1 = zmm6
    zmm6 = arg5
    float var_a8
    
    if ((*(*arg1 + 0x18))(arg1) != 0)
        bool cond:0_1 = arg1[1].b != 0
        var_a8 = var_68[0]
        float temp0_1[0x4] = _mm_shuffle_ps(var_68, var_68, 0x55)
        float var_a0_1 = _mm_shuffle_ps(var_68, var_68, 0xaa)[0]
        float var_a4_1 = temp0_1[0]
        
        if (not(cond:0_1))
            var_a8 = 0f
        
        if (*(arg1 + 9) == 0)
            int32_t var_a4_2 = 0
        
        if (*(arg1 + 0xa) == 0)
            var_a0_1 = 0f
        
        int64_t r14_1 = sx.q(arg6[3].d)
        int32_t rax_10 = (r14_1 + 1).d
        arg6[3].d = rax_10
        
        if (rax_10 s> *(arg6 + 0x1c))
            sub_140638a00(&arg6[2])
        
        int64_t rcx_8 = arg6[2]
        int64_t rdx_4 = r14_1 * 3
        *(rcx_8 + (rdx_4 << 2)) = var_a8.q
        *(rcx_8 + (rdx_4 << 2) + 8) = var_a0_1
        int64_t r14_2 = sx.q(arg6[0xb].d)
        int32_t rax_12 = (r14_2 + 1).d
        arg6[0xb].d = rax_12
        
        if (rax_12 s> *(arg6 + 0x5c))
            sub_1406105e0(&arg6[0xa])
        
        *(arg6[0xa] + (r14_2 << 2)) = zmm6.d
    
    if ((*(*arg1 + 0x10))(arg1) != 0)
        float var_98[0x4] = var_78
        sub_140adf5d0(&var_98, &var_a8)
        
        if (arg1[1].b == 0)
            int32_t var_a0_2 = 0
        
        if (*(arg1 + 9) == 0)
            var_a8 = 0f
        
        if (*(arg1 + 0xa) == 0)
            int32_t var_a4_3 = 0
        
        float var_88[0x4]
        float (* rax_16)[0x4]
        rax_16, zmm6 = sub_140ade170(&var_a8, &var_88)
        int64_t r14_3 = sx.q(arg6[5].d)
        float zmm0_1[0x4] = *rax_16
        int32_t rax_17 = (r14_3 + 1).d
        var_98 = zmm0_1
        arg6[5].d = rax_17
        
        if (rax_17 s> *(arg6 + 0x2c))
            sub_1405a4f90(&arg6[4])
            zmm0_1 = var_98
        
        *(arg6[4] + r14_3 * 0x10) = zmm0_1
        int64_t r14_4 = sx.q(arg6[0xd].d)
        int32_t rax_19 = (r14_4 + 1).d
        arg6[0xd].d = rax_19
        
        if (rax_19 s> *(arg6 + 0x6c))
            sub_1406105e0(&arg6[0xc])
        
        *(arg6[0xc] + (r14_4 << 2)) = zmm6.d
    
    result = (*(*arg1 + 0x20))(arg1)
    
    if (result.b != 0)
        bool cond:1_1 = arg1[1].b != 0
        var_a8 = var_58[0]
        float temp0_3[0x4] = _mm_shuffle_ps(var_58, var_58, 0x55)
        float var_a0_3 = _mm_shuffle_ps(var_58, var_58, 0xaa)[0]
        float var_a4_4 = temp0_3[0]
        
        if (not(cond:1_1))
            var_a8 = 0f
        
        if (*(arg1 + 9) == 0)
            int32_t var_a4_5 = 0
        
        if (*(arg1 + 0xa) == 0)
            var_a0_3 = 0f
        
        int64_t rsi_1 = sx.q(arg6[7].d)
        int32_t rax_22 = (rsi_1 + 1).d
        arg6[7].d = rax_22
        
        if (rax_22 s> *(arg6 + 0x3c))
            sub_140638a00(&arg6[6])
        
        int64_t rcx_19 = arg6[6]
        int64_t rdx_11 = rsi_1 * 3
        *(rcx_19 + (rdx_11 << 2)) = var_a8.q
        *(rcx_19 + (rdx_11 << 2) + 8) = var_a0_3
        int64_t rbx_3 = sx.q(arg6[0xf].d)
        int32_t rax_24 = (rbx_3 + 1).d
        arg6[0xf].d = rax_24
        
        if (rax_24 s> *(arg6 + 0x7c))
            sub_1406105e0(&arg6[0xe])
        
        result = arg6[0xe]
        *(result + (rbx_3 << 2)) = zmm6.d
else
    int64_t rbx_1 = sx.q(arg6[1].d)
    int32_t rax_5 = (rbx_1 + 1).d
    arg6[1].d = rax_5
    
    if (rax_5 s> *(arg6 + 0xc))
        sub_140638970(arg6)
    
    int64_t rax_6 = *arg6
    int64_t rcx_4 = rbx_1 * 6
    *(rax_6 + (rcx_4 << 3)) = var_78
    *(rax_6 + (rcx_4 << 3) + 0x10) = var_68
    *(rax_6 + (rcx_4 << 3) + 0x20) = var_58
    int64_t rbx_2 = sx.q(arg6[9].d)
    int32_t rax_7 = (rbx_2 + 1).d
    arg6[9].d = rax_7
    
    if (rax_7 s> *(arg6 + 0x4c))
        sub_1406105e0(&arg6[8])
    
    result = arg6[8]
    *(result + (rbx_2 << 2)) = arg5[0]
__security_check_cookie(rax_1 ^ &var_c8)
return result
