// 函数: sub_140b09da0
// 地址: 0x140b09da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int64_t rsi = sx.q(arg3)
*(arg1 + 0x100) = 0

if (arg2 == 0)
    *(arg1 + 0x108) = 0
    *(arg1 + 0x110) = 0
    return arg1

int32_t r15 = 0

if (arg3 s> 0 && *(arg2 + (rsi << 2) - 4) == 0)
    r15 = 1
    rsi = zx.q(rsi.d - 1)

int32_t r8 = (rsi * 2).d
void* arg_8

if (rsi.d s> 0)
    int64_t i = 0
    
    do
        int32_t rcx = *(arg2 + (i << 2))
        int32_t rax_6
        
        if (rcx u>= 0x110000 || rcx - 0xfffe u<= 1 || rcx - 0xd800 u<= 0x3ff
                || rcx - 0xdc00 u<= 0x3ff)
            arg_8.d = 0x3f
            rax_6 = 1
        else if (rcx - 0x10000 u> 0xfffff)
            rax_6 = 1
        else
            rax_6 = sbb.d(rcx - 0x10000, rcx - 0x10000, r8 u< 2) + 2
        
        r9 += rax_6
        r8 -= rax_6
        i += 1
    while (i s< sx.q(rsi.d))

int32_t rbx = r9 + r15
*(arg1 + 0x110) = r9
sub_140a88670(arg1, 0, rbx, 2)
void* rax_7 = *(arg1 + 0x100)
void* rcx_2 = arg1

if (rax_7 != 0)
    rcx_2 = rax_7

*(arg1 + 0x108) = rcx_2
arg_8 = rcx_2
sub_140b08120(&arg_8, rbx, arg2, r15 + rsi.d)
return arg1
