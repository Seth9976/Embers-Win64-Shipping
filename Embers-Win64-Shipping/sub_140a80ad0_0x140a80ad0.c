// 函数: sub_140a80ad0
// 地址: 0x140a80ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t r10 = 0
int32_t rsi = 0
uint64_t i = arg1

if (arg1 != 0 && arg8 s> 0)
    void* rcx = &var_98
    
    while (i != 0)
        if (arg2 != 0)
            char rax_2 = arg3
            arg3 -= 1
            
            if (rax_2 == 0)
                r10 += 1
                *rcx = arg5
                rcx += 2
                arg3 = arg4 - 1
        
        r10 += 1
        rsi += 1
        int16_t rax_6 = arg6[i u% 0xa]
        i u/= 0xa
        *rcx = rax_6
        rcx += 2
        
        if (rsi s>= arg8)
            break

uint64_t i_2 = zx.q(0x14 - rsi)
int32_t i_3 = arg7 - rsi

if (i_3 s<= i_2.d)
    i_2 = zx.q(i_3)

if (i_2.d s> 0)
    int16_t r11_1 = *arg6
    void* rcx_1 = &var_98 + (sx.q(r10) << 1)
    uint64_t i_1
    
    do
        if (arg2 != 0)
            char rax_9 = arg3
            arg3 -= 1
            
            if (rax_9 == 0)
                r10 += 1
                *rcx_1 = arg5
                rcx_1 += 2
                arg3 = arg4
        
        *rcx_1 = r11_1
        r10 += 1
        rcx_1 += 2
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int64_t r8 = sx.q(r10)

if (r10 s> 0)
    int64_t rax_10 = 0
    void* rdx_2 = &var_98 + (r8 << 1) - 2
    
    do
        int16_t rcx_2 = *rdx_2
        rdx_2 -= 2
        *(arg9 + (rax_10 << 1)) = rcx_2
        rax_10 += 1
    while (rax_10 s< r8)

*(arg9 + (r8 << 1)) = 0
__security_check_cookie(rax_1 ^ &var_98)
return zx.q(r10)
