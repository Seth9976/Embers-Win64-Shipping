// 函数: sub_142960b90
// 地址: 0x142960b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax = *(arg1 + 0x70)
uint64_t rbp = 0x40
uint64_t rbx = arg3
int64_t r14 = 0x40 - rax
void* rsi = arg2

if (arg3 u> r14)
    if (rax != 0)
        memcpy(&arg1[0xc] + rax, arg2, r14.d)
        sub_142960c60(arg1, &arg1[0xc], 0x40)
        rax = 0
        rsi += r14
        *(arg1 + 0x70) = 0
        rbx -= r14
    
    if (rbx u> 0x40)
        uint64_t rax_2 = zx.q(rbx.d) & 0x3f
        
        if (rax_2.d != 0)
            rbp = rax_2
        
        uint64_t rbx_1 = rbx - rbp
        sub_142960c60(arg1, rsi, rbx_1)
        rax = *(arg1 + 0x70)
        rsi += rbx_1
        rbx = rbp

memcpy(&arg1[0xc] + rax, rsi, rbx.d)
*(arg1 + 0x70) += rbx
return 1
