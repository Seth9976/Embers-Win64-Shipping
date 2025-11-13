// 函数: sub_141804ad0
// 地址: 0x141804ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
int32_t rbx = 0
void* arg_8 = arg2
void* rax = arg2
int32_t i = 0x7fffffff
void* rsi = arg2 + r15

if (arg2 u< rsi)
    while (i s> 0)
        int32_t rax_3
        int32_t rcx_1
        
        if (sub_14060e800(&arg_8, rsi.d - rax.d) - 0x10000 u> 0xfffff || i s< 2)
            rax_3 = 1
            rcx_1 = -1
        else
            rax_3 = 2
            rcx_1 = -2
        
        rbx += rax_3
        i += rcx_1
        rax = arg_8
        
        if (rax u>= rsi)
            break

*(arg1 + 0x110) = rbx
int32_t rbx_1 = rbx + arg4
sub_140a88670(arg1, 0, rbx_1, 2)
void* rax_4 = *(arg1 + 0x100)
void* rcx_3 = arg1

if (rax_4 != 0)
    rcx_3 = rax_4

*(arg1 + 0x108) = rcx_3
arg_8 = rcx_3
return sub_140917060(&arg_8, rbx_1, arg2, r15.d + arg4)
