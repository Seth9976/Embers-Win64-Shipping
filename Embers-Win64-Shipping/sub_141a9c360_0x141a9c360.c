// 函数: sub_141a9c360
// 地址: 0x141a9c360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
sub_140dd5b90(&var_188, *arg2)
int64_t var_180
__builtin_memset(&var_180, 0, 0x33)
char var_148 = 0
sub_141e295c0(&var_188)
void var_138
sub_140dd5b90(&var_138, *arg2)
int64_t var_130
__builtin_memset(&var_130, 0, 0x33)
char var_f8 = 0
sub_141e295c0(&var_138)
sub_141a997c0(&arg2[1], &var_180)
sub_141a997c0(&arg2[1], &var_130)
int64_t var_168

if (&var_168 != &arg2[0xa])
    int64_t rbx_3 = sx.q(arg2[0xb].d)
    int64_t r14_1 = arg2[0xa]
    int64_t var_160
    int32_t r8_1 = var_160:4.d
    var_160.d = rbx_3.d
    
    if (rbx_3.d != 0 || r8_1 != 0)
        sub_14119a550(&var_168, rbx_3.d, r8_1)
        memcpy(var_168, r14_1, (rbx_3 << 3).d)
    else
        var_160:4.d = 0

int64_t rax = arg2[0xc]
int16_t rcx_8 = arg2[0xd].w
char rdx_8 = *(arg2 + 0x6a)
int64_t var_158 = rax
int16_t var_150 = rcx_8
char var_14e = rdx_8
int64_t var_118

if (&var_118 != &arg2[0xa])
    int64_t rbx_4 = sx.q(arg2[0xb].d)
    int64_t r14_2 = arg2[0xa]
    int64_t var_110
    int32_t r8_4 = var_110:4.d
    var_110.d = rbx_4.d
    
    if (rbx_4.d != 0 || r8_4 != 0)
        sub_14119a550(&var_118, rbx_4.d, r8_4)
        memcpy(var_118, r14_2, (rbx_4 << 3).d)
        rax = arg2[0xc]
        rcx_8 = arg2[0xd].w
        rdx_8 = *(arg2 + 0x6a)
    else
        var_110:4.d = 0

int64_t i_1 = sx.q(*(arg1 + 0xd0))
int64_t var_108 = rax
uint64_t result_1
uint64_t result = result_1
int16_t var_100 = rcx_8
char var_fe = rdx_8
char arg_8 = 0

if (i_1 s> 0)
    int64_t rsi_1 = 0
    int32_t* rbx_5 = nullptr
    uint64_t result_3 = result
    char rcx_16
    int128_t zmm0_1
    int128_t zmm6_1
    int64_t i
    
    do
        int64_t rdx_11 = *(arg1 + 0xc8)
        int32_t rax_1 = *(rbx_5 + rdx_11 + 0x20)
        int32_t rax_5
        
        if (rax_1 s>= 0)
            rax_5 = *(rbx_5 + rdx_11 + 0x24)
        else
            int32_t rcx_11 = rax_1 * 2
            
            if ((rcx_11 & 0xfffffffe) == 0xfffffffe)
                rax_5 = -1
            else
                rax_5 = *(*(result_3 + 0x80) + (sx.q(rcx_11) s>> 1 << 2))
        
        int64_t r12_1 = var_180
        int128_t* rax_6 = *(arg1 + 0xd8)
        int64_t r15_2 = sx.q(rax_5) * 6
        int128_t var_68 = *(r12_1 + (r15_2 << 3))
        zmm0_1.d = (*(rax_6 + rsi_1)).d f+ *(rbx_5 + rdx_11 + 0xc)
        float zmm1_1 = *(rax_6 + rsi_1 + 4) f+ *(rbx_5 + rdx_11 + 0x10)
        float zmm2_1 = *(rax_6 + rsi_1 + 8) f+ *(rbx_5 + rdx_11 + 0x14)
        int32_t var_e8 = zmm0_1.d
        float var_e4_1 = zmm1_1
        float var_e0_1 = zmm2_1
        zmm0_1.d = (*(rax_6 + rsi_1)).d f+ *(rbx_5 + rdx_11)
        float zmm3_1 = *(rax_6 + rsi_1 + 8) f+ *(rbx_5 + rdx_11 + 8)
        zmm1_1 = *(rax_6 + rsi_1 + 4) f+ *(rbx_5 + rdx_11 + 4)
        int64_t rax_7 = *(result_3 + 0xa0)
        int32_t var_dc = zmm0_1.d
        float var_d4_1 = zmm3_1
        int128_t var_58 = *(rax_7 + (r15_2 << 3))
        float var_d8_1 = zmm1_1
        result, zmm6_1 = sub_141a7f930(&var_68, &var_58, &var_dc, &var_e8)
        
        if (result.b == 0)
            rcx_16 = arg_8
        else
            rcx_16 = 1
            *(r12_1 + (r15_2 << 3)) = var_68
            arg_8 = 1
        
        rbx_5 = &rbx_5[0xa]
        rsi_1 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (rcx_16 != 0)
        zmm0_1 = *(arg1 + 0x24)
        
        if (not(zmm0_1.d f< 0f))
            __minss_xmmss_memss(zmm0_1.d, 0x3f800000)
        
        void var_c8
        sub_140dd5b90(&var_c8, *arg2)
        int64_t var_c0
        __builtin_memset(&var_c0, 0, 0x24)
        int64_t var_98_1 = 0
        int16_t var_90_1 = 0
        char result_2 = 0
        char var_88_1 = 0
        int64_t var_a8
        sub_141de4b20(&var_180, &var_130, &var_168, &var_118, sub_141e295c0(&var_c8), &var_c0, 
            &var_a8)
        sub_141ac0820(&arg2[1], &var_c0)
        int512_t zmm6_3
        zmm6_3.o = zmm6_1
        
        if (&arg2[0xa] != &var_a8)
            int32_t var_a0
            int64_t rbx_8 = sx.q(var_a0)
            int64_t rsi_2 = var_a8
            int32_t r8_9 = *(arg2 + 0x5c)
            arg2[0xb].d = rbx_8.d
            
            if (rbx_8.d != 0 || r8_9 != 0)
                sub_14119a550(&arg2[0xa], rbx_8.d, r8_9)
                memcpy(arg2[0xa], rsi_2, (rbx_8 << 3).d)
            else
                *(arg2 + 0x5c) = 0
        
        arg2[0xc] = var_98_1
        arg2[0xd].w = var_90_1
        result = zx.q(result_2)
        *(arg2 + 0x6a) = result.b

return result
