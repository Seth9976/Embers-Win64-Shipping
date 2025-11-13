// 函数: sub_141e6c390
// 地址: 0x141e6c390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg1[1].d)
int64_t rdi = *arg1
int64_t rsi = rdx * 9
int32_t rcx = (rdx - 1).d

if (*(arg1 + 0x2c) f>= *(rdi + (rsi << 3) - 0x34))
    if (rcx != 0)
        arg1[1].d = rcx
        sub_141d264e0(arg1)
    
    return 

if (rcx s> 0)
    int32_t rax_2 = rdx.d - (rcx - 1)
    
    if (rax_2 != 1)
        memmove(rdi + sx.q(rcx - 1) * 0x48, rdi + sx.q(rcx) * 0x48, (rax_2 - 1) * 0x48)
        rdx = zx.q(arg1[1].d)
    
    arg1[1].d = (rdx - 1).d
    sub_141d264e0(arg1)

*(arg1 + 0x2c) = *(rdi + (rsi << 3) - 0x34)
*(rdi + (rsi << 3) - 4) = 0x40400000
