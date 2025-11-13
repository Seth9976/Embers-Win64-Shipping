// 函数: sub_140917060
// 地址: 0x140917060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t i = arg2
int64_t rsi_1 = sx.q(arg4) + arg3

if (arg3 u>= rsi_1)
    return 

while (i s> 0)
    int32_t rax_1 = sub_14060e800(&arg_18, rsi_1.d - arg3.d)
    int32_t rax
    
    if (rax_1 - 0x10000 u> 0xfffff)
        if (rax_1 u> 0x10ffff)
            rax_1 = 0x3f
        
        **arg1 = rax_1.w
        rax = -1
    else if (i s< 2)
        **arg1 = 0x3f.w
        rax = -1
    else
        int32_t rdx_2
        rdx_2.w = (rax_1 - 0x10000).w & 0x3ff
        **arg1 = ((rax_1 - 0x10000) u>> 0xa).w - 0x2800
        *arg1 += 2
        rdx_2.w -= 0x2400
        **arg1 = rdx_2.w
        rax = -2
    
    *arg1 += 2
    i += rax
    arg3 = arg_18
    
    if (arg3 u>= rsi_1)
        break
