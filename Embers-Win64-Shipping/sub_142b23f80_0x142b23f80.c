// 函数: sub_142b23f80
// 地址: 0x142b23f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0 || arg2 == 0)
    return 

int64_t rcx = sx.q(arg1[3].d)

if (rcx.d s> 0)
    int32_t rax_1 = rcx.d
    int32_t rax_2 = rax_1 - arg3
    
    if (rax_1 - arg3 s>= 0)
        arg1[3].d = rax_2
        return 
    
    arg2 += rcx
    arg1[3].d = 0
    arg3 = neg.d(rax_2)

int64_t r9_1 = sx.q(*(arg1 + 0x14))
int64_t rcx_2 = r9_1 + arg1[1]
*(arg1 + 0x14) = r9_1.d + arg3

if (rcx_2 == arg2)
    return 

if (arg3 s> arg1[2].d - r9_1.d)
    jump(*(*arg1 + 0x20))

return memcpy(rcx_2, arg2, arg3) __tailcall
