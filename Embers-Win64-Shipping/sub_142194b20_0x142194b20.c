// 函数: sub_142194b20
// 地址: 0x142194b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421b9fc0(arg1, arg2, arg3)
void* rax

if (*(arg2 + 0x48) s> 0)
    rax = **(arg2 + 0x40)
else
    rax = nullptr

void* rcx = *(rax + 0x48)
*(arg1 + 0x1d0) = rcx
void* rdx = *(rax + 0x30)
char rax_2 = *(rdx + 0x59)

if ((rax_2 & 1) != 0)
    *(rdx + 0x59) = rax_2 & 0xfe
    rcx = *(arg1 + 0x1d0)

__builtin_memset(arg1 + 0x1d8, 0, 0x20)
*(arg1 + 0x200) = 0

if (*(rcx + 0x40) == 0)
    *(rcx + 0x40) = 1
    rcx = *(arg1 + 0x1d0)

*(arg1 + 0x230) = *(rcx + 0x40)
int32_t rsi = 0
*(arg1 + 0x20c) = 1
*(arg1 + 0x210) = 0
*(arg1 + 0x218) = zx.d(*(rcx + 0x30))
*(arg1 + 0x228) = 0

if (*(arg1 + 0x22c) != 0)
    sub_1405dadb0(arg1 + 0x220, 0)
    rsi = *(arg1 + 0x228)

void* r14 = *(arg1 + 0x1d0)
*(arg1 + 0x228) = rsi + 1

if (rsi + 1 s> *(arg1 + 0x22c))
    sub_1405a4cf0(arg1 + 0x220)

*(*(arg1 + 0x220) + (sx.q(rsi) << 2)) = *(r14 + 0x34)
*(arg1 + 0x250) = 0

if (*(arg1 + 0x254) != 0)
    sub_140638cc0(arg1 + 0x248, 0)

*(arg1 + 0x260) = 0

if (*(arg1 + 0x264) != 0)
    sub_140638cc0(arg1 + 0x258, 0)

*(arg1 + 0x270) = 0

if (*(arg1 + 0x274) != 0)
    sub_1405dadb0(arg1 + 0x268, 0)

*(arg1 + 0x280) = 0

if (*(arg1 + 0x284) != 0)
    sub_1405dadb0(arg1 + 0x278, 0)

*(arg1 + 0x290) = 0

if (*(arg1 + 0x294) != 0)
    sub_140638cc0(arg1 + 0x288, 0)

*(arg1 + 0x2d0) = 0

if (*(arg1 + 0x2d4) != 0)
    sub_140638c50(arg1 + 0x2c8, 0)

*(arg1 + 0x2e0) = 0

if (*(arg1 + 0x2e4) != 0)
    sub_140638cc0(arg1 + 0x2d8, 0)

*(arg1 + 0x2f0) = 0

if (*(arg1 + 0x2f4) != 0)
    sub_140638cc0(arg1 + 0x2e8, 0)

*(arg1 + 0x2b0) = 0

if (*(arg1 + 0x2b4) != 0)
    sub_1405dadb0(arg1 + 0x2a8, 0)

sub_142199af0(arg1)
return sub_14219a380(arg1) __tailcall
