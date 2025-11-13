// 函数: sub_14295e3a0
// 地址: 0x14295e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax = arg1[0x1c]
uint64_t rsi = 0x80
uint64_t rbx = arg3
int64_t r14 = 0x80 - rax
int64_t rbp = arg2

if (arg3 u> r14)
    if (rax != 0)
        memcpy(&arg1[0xc] + rax, arg2, r14.d)
        sub_14295e480(arg1, &arg1[0xc], 0x80)
        rax = 0
        rbp += r14
        arg1[0x1c] = 0
        rbx -= r14
    
    if (rbx u> 0x80)
        uint64_t rax_2 = zx.q(rbx.d) & 0x7f
        
        if (rax_2.d != 0)
            rsi = rax_2
        
        uint64_t rbx_1 = rbx - rsi
        sub_14295e480(arg1, rbp, rbx_1)
        rax = arg1[0x1c]
        rbp += rbx_1
        rbx = rsi

memcpy(&arg1[0xc] + rax, rbp, rbx.d)
arg1[0x1c] += rbx
return 1
