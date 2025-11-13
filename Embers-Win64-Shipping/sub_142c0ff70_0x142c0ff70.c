// 函数: sub_142c0ff70
// 地址: 0x142c0ff70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(*(arg1 + 3))
int128_t* const r11 = &data_14369a5d0
uint64_t rsi = zx.q(*(arg1 + 4))
uint64_t rcx = zx.q(*(arg1 + 2))
uint64_t rbp = zx.q(*(arg1 + 5))
int128_t* const r9

if ((rcx.d << 0x18) + (rsi.d << 8) + (rdi.d << 0x10) != neg.d(rbp.d))
    r9 = ((((rdi + (rcx << 8)) << 8) + rsi) << 8) + arg1 + rbp
else
    r9 = &data_14369a5d0

int128_t* const rax_5

if (arg2 u< (zx.d(*(arg1 + 6)) << 8) + zx.d(*(arg1 + 7)))
    rax_5 = arg1 + ((zx.q(arg2) + 2) << 2)
else
    rax_5 = &data_14369a5d0

uint64_t rdx = zx.q(*rax_5)
uint64_t rdi_1 = zx.q(*(rax_5 + 3))
uint64_t r10_5 = zx.q(*(rax_5 + 2))
uint64_t r8 = zx.q(*(rax_5 + 1))

if ((rdx.d << 0x18) + (r10_5.d << 8) + (r8.d << 0x10) != neg.d(rdi_1.d))
    r11 = ((((r8 + (rdx << 8)) << 8) + r10_5) << 8) + arg1 + rdi_1

return sub_142c0fe00(r11, arg3, zx.q(arg4), r9) __tailcall
