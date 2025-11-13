// 函数: sub_140615390
// 地址: 0x140615390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
*arg1 = arg2
int64_t rcx = *(arg1 + 8)
int32_t i = arg2

if (rcx != 0)
    j_sub_140a74f90(rcx)
    i = *arg1

int32_t i_2 = 0
*(arg1 + 8) = 0
char* result

if (i != 0)
    arg1[4] = 0
    int128_t var_28 = zx.o(0)
    int32_t rdx = 0
    
    while (i s> 0)
        int64_t rdx_1 = sx.q(arg1[4])
        int32_t rcx_2 = i & 0x7f
        i s>>= 7
        *(&var_28 + (rdx_1 << 2)) = rcx_2
        rdx = rdx_1.d + 1
        arg1[4] = rdx
        
        if (rdx s>= 4)
            break
    
    if (rdx s> 1)
        void* rcx_3 = &var_28:4
        uint64_t i_3 = zx.q(rdx - 1)
        uint64_t i_1
        
        do
            *rcx_3 |= 0x80
            rcx_3 += 4
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    result = j_sub_140a82f30(sx.q(rdx))
    *(arg1 + 8) = result
    
    if (arg1[4] s> 0)
        int64_t r8 = 0
        
        do
            r8 += 1
            int64_t rcx_5 = sx.q(arg1[4] - i_2)
            i_2 += 1
            char var_2c[0x4]
            result = zx.q((&var_2c)[rcx_5][0])
            *(r8 + *(arg1 + 8) - 1) = result.b
        while (i_2 s< arg1[4])
else
    arg1[4] = 1
    result = j_sub_140a82f30(1)
    *(arg1 + 8) = result
    *result = 0

__security_check_cookie(rax_1 ^ &var_48)
return result
