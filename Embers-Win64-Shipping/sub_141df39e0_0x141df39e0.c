// 函数: sub_141df39e0
// 地址: 0x141df39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)

if (rsi.d == 0xffffffff)
    return 

int64_t* rcx = *(arg1 + 0xa8)

if (rcx != 0)
    int64_t* rax_2
    int64_t rdx
    rax_2, rdx = (*(*rcx + 0x18))(rcx)
    sub_141e140b0(arg1 + 0x210, rsi * 0xb8 + *rax_2, sub_141df8410(*(arg1 + 0xa8), rdx))
