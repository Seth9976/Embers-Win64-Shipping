// 函数: sub_141fd28b0
// 地址: 0x141fd28b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
arg1[3].d = 0
*arg1 = 0
*(arg1 + 0x1c) = 0
int32_t* result
int64_t var_70
int32_t zmm0

if ((*(*arg2 + 0x288))(arg2) != 0)
    int32_t var_78
    int32_t var_74
    (*(arg2[5] + 0x48))(&arg2[5], &var_78, &var_74)
    int128_t zmm6
    zmm6.d = var_74.d f- var_78
    zmm6.d = zmm6.d f* 0.00787401572f
    char rax_7 = (*(*arg2 + 0x268))(arg2)
    int64_t rdx_2 = *arg2
    int32_t rsi_1
    rsi_1.b = rax_7 != 1
    char rax_8 = (*(rdx_2 + 0x270))(arg2, rdx_2)
    arg1[3].b = rax_7
    zmm0 = (zx.o(0)).d
    *(arg1 + 0x19) = 0x80
    *(arg1 + 0x1a) = (rax_7 != 1) + 1
    *(arg1 + 0x1b) = rax_7 != 1
    
    if (not(zmm6.d f<= 0f))
        zmm0 = 1f f/ zmm6.d
    
    *arg1 = zmm0
    *(arg1 + 4) = var_78
    int32_t r15_1 = 0x100
    arg1[2].d = 0
    
    if (rax_7 == 1)
        r15_1 = 0x80
    
    int32_t rbp_1 = 0
    
    if (*(arg1 + 0x14) != r15_1)
        sub_1405dadb0(&arg1[1], r15_1)
        rbp_1 = arg1[2].d
    
    int32_t rax_9 = r15_1 + rbp_1
    arg1[2].d = rax_9
    
    if (rax_9 s> *(arg1 + 0x14))
        sub_1406105e0(&arg1[1])
    
    memset(arg1[1] + (sx.q(rbp_1) << 2), 0, zx.q(r15_1) << 2)
    int32_t i = 0
    *(arg1 + 0x1c) = rax_8
    int32_t rbx_1 = 0
    
    do
        (*(*arg2 + 0x278))(arg2, float.s(zx.q(i)) f* zmm6.d f+ var_78, &var_70)
        int32_t j = 0
        int32_t* r9_1 = &var_70
        
        do
            int64_t rdx_6 = sx.q(rbx_1 + j)
            j += 1
            result = zx.q(*r9_1)
            r9_1 = &r9_1[1]
            *(arg1[1] + (rdx_6 << 2)) = result.d
        while (j u< rsi_1 + 1)
        
        i += 1
        rbx_1 += rsi_1 + 1
    while (i u< 0x80)
else
    arg1[2].d = 0
    bool cond:4_1 = *(arg1 + 0x14) == 1
    int32_t rdx = 0
    var_70 = 0
    
    if (not(cond:4_1))
        sub_1405dadb0(&arg1[1], 1)
        rdx = arg1[2].d
    
    arg1[2].d = rdx + 1
    
    if (rdx + 1 s> *(arg1 + 0x14))
        sub_1406105e0(&arg1[1])
    
    result = arg1[1]
    zmm0 = var_70.d
    arg1[3].d = 0x10101
    *arg1 = 0
    *result = zmm0
__security_check_cookie(rax_1 ^ &var_98)
return result
