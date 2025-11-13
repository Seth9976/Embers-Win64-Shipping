// 函数: sub_141b2fb50
// 地址: 0x141b2fb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = 1
int64_t rdi = sx.q(arg2)
int64_t rsi = rdi << 3
void* rdx = *(rsi + *(arg1 + 0x60))

if (*(arg1 + 0x58) == 0)
    sub_141a4c6a0(arg1 + 0x60, rdx, r8)
else
    sub_141a4c900(arg1 + 0x60, rdx, r8)

int32_t rcx_3 = *(arg1 + 0x68)
int32_t rax_2 = rcx_3 - rdi.d

if (rax_2 != 1)
    int64_t r9_1 = *(arg1 + 0x60)
    memmove(r9_1 + rsi, r9_1 + (sx.q((rdi + 1).d) << 3), (rax_2 - 1) << 3)
    rcx_3 = *(arg1 + 0x68)

*(arg1 + 0x68) = rcx_3 - 1
sub_1405c53d0(arg1 + 0x60)
return sub_141a69d10(arg1 + 0x60) __tailcall
