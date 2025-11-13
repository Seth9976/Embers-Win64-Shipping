// 函数: sub_141fd2af0
// 地址: 0x141fd2af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
arg1[3].d = 0
*arg1 = 0
*(arg1 + 0x1c) = 0
uint64_t result
int64_t var_70
int32_t zmm0

if ((*(*arg2 + 0x290))(arg2) != 0)
    int32_t var_78
    int32_t var_74
    (*(arg2[5] + 0x48))(&arg2[5], &var_78, &var_74)
    int128_t zmm6
    zmm6.d = var_74.d f- var_78
    zmm6.d = zmm6.d f* 0.00787401572f
    char rax_9 = (*(*arg2 + 0x268))(arg2)
    int64_t rdx_2 = *arg2
    int32_t j_1 = 6
    char rbp_1 = 3
    
    if (rax_9 == 1)
        j_1 = 3
    
    char rax_10 = (*(rdx_2 + 0x270))(arg2, rdx_2)
    arg1[3].b = rax_9
    zmm0 = (zx.o(0)).d
    *(arg1 + 0x19) = 0x80
    
    if (rax_9 == 1)
        rbp_1 = 0
    
    *(arg1 + 0x1a) = j_1.b
    *(arg1 + 0x1b) = rbp_1
    
    if (not(zmm6.d f<= 0f))
        zmm0 = 1f f/ zmm6.d
    
    *arg1 = zmm0
    *(arg1 + 4) = var_78
    int32_t rbp_2 = 0
    int32_t r14_2 = j_1 << 7
    arg1[2].d = 0
    
    if (*(arg1 + 0x14) != r14_2)
        sub_1405dadb0(&arg1[1], r14_2)
        rbp_2 = arg1[2].d
    
    int32_t rax_11 = r14_2 + rbp_2
    arg1[2].d = rax_11
    
    if (rax_11 s> *(arg1 + 0x14))
        sub_1406105e0(&arg1[1])
    
    memset(arg1[1] + (sx.q(rbp_2) << 2), 0, zx.q(r14_2) << 2)
    *(arg1 + 0x1c) = rax_10
    int32_t i = 0
    int32_t rsi_1 = 0
    
    do
        result = (*(*arg2 + 0x278))(arg2, float.s(zx.q(i)) f* zmm6.d f+ var_78, &var_70)
        uint64_t r8_5 = 0
        
        if (rax_9 != 1)
            int32_t r10_1 = rsi_1
            void* r9_1 = &var_70:4
            uint64_t rax_16 = zx.q(((j_1 - 4) u>> 2) + 1)
            uint64_t j_2 = zx.q(rax_16.d)
            r8_5 = zx.q((rax_16 << 2).d)
            uint64_t j
            
            do
                int32_t rax_17 = *(r9_1 - 4)
                r9_1 += 0x10
                int64_t rdx_6 = sx.q(r10_1)
                r10_1 += 4
                *(arg1[1] + (rdx_6 << 2)) = rax_17
                *(arg1[1] + (rdx_6 << 2) + 4) = *(r9_1 - 0x10)
                *(arg1[1] + (rdx_6 << 2) + 8) = *(r9_1 - 0xc)
                result = zx.q(*(r9_1 - 8))
                *(arg1[1] + (rdx_6 << 2) + 0xc) = result.d
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        if (r8_5.d u< j_1)
            int32_t* r9_2 = &var_70 + (r8_5 << 2)
            
            do
                int64_t rdx_7 = sx.q(rsi_1 + r8_5.d)
                r8_5 = zx.q(r8_5.d + 1)
                result = zx.q(*r9_2)
                r9_2 = &r9_2[1]
                *(arg1[1] + (rdx_7 << 2)) = result.d
            while (r8_5.d u< j_1)
        
        i += 1
        rsi_1 += j_1
    while (i u< 0x80)
else
    arg1[2].d = 0
    bool cond:3_1 = *(arg1 + 0x14) == 3
    int32_t rdx = 0
    var_70 = 0
    int32_t var_68_1 = 0
    
    if (not(cond:3_1))
        sub_1405dadb0(&arg1[1], 3)
        rdx = arg1[2].d
    
    arg1[2].d = rdx + 3
    
    if (rdx + 3 s> *(arg1 + 0x14))
        sub_1406105e0(&arg1[1])
    
    int32_t* rax_5 = arg1[1]
    zmm0 = var_70.d
    float zmm1 = var_70:4.d
    arg1[3].d = 0x30101
    *arg1 = 0
    *rax_5 = zmm0
    *(arg1[1] + 4) = zmm1
    result = arg1[1]
    *(result + 8) = var_68_1
__security_check_cookie(rax_1 ^ &var_98)
return result
