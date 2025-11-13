// 函数: sub_142bfde60
// 地址: 0x142bfde60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* const rdi = &data_14369a5d0
uint64_t rcx = zx.q(*(arg1 + 9))
uint64_t r11 = zx.q(*(arg1 + 0xa))
uint64_t rsi = zx.q(*(arg1 + 8))
uint64_t rbp = zx.q(*(arg1 + 0xb))
int128_t* const rcx_1

if ((rsi.d << 0x18) + (r11.d << 8) + (rcx.d << 0x10) != neg.d(rbp.d))
    rcx_1 = ((((rcx + (rsi << 8)) << 8) + r11) << 8) + arg1 + rbp
else
    rcx_1 = &data_14369a5d0

int32_t rax_4 = sub_142c02e50(rcx_1, arg2)
uint64_t r8_1 = zx.q(*(arg1 + 6))
uint32_t r9 = zx.d(*(arg1 + 4))
uint64_t rax_5 = zx.q(*(arg1 + 5))
uint64_t r11_1 = zx.q(*(arg1 + 7))

if ((r9 << 0x18) + (r8_1.d << 8) + (rax_5.d << 0x10) != neg.d(r11_1.d))
    rdi = (((((zx.q(r9) << 8) + rax_5) << 8) + r8_1) << 8) + arg1 + r11_1

return sub_142bfe120(rdi, rax_4 u>> 0x10, zx.d(rax_4.w), arg3, arg4)
