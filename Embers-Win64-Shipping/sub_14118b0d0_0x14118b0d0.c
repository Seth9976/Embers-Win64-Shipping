// 函数: sub_14118b0d0
// 地址: 0x14118b0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10_2 = *(arg1 + 0x10)

if (not(1f f> *(r10_2 + 0x2bc)))
    void* rax_1 = *(arg1 + 8)
    arg4.d = arg4.d f/ __minss_xmmss_memss(*(rax_1 + 0x294), *(rax_1 + 0x280))

void* const rcx = 0x1b10

if (arg5 == 0)
    rcx = 0x18e0

void* rax_2 = *(arg1 + 0x18)
void* rcx_1 = rcx + r10_2

if (rax_2 == 0)
    return sub_141e932a0(rcx_1, arg2, arg4, arg3, 0xffffffff) __tailcall

arg5.d = *(rax_2 + 0x18)
return sub_141e932a0(rcx_1, arg2, arg4, arg3, arg5) __tailcall
