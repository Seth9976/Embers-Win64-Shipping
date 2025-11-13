// 函数: sub_142c30da0
// 地址: 0x142c30da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg3)
uint64_t rcx = zx.q(*(arg1 + 5))
uint64_t r8 = zx.q(*(arg1 + 6))
uint64_t r11 = zx.q(*(arg1 + 4))
uint64_t rsi = zx.q(*(arg1 + 7))
void* const rcx_1

if ((r11.d << 0x18) + (r8.d << 8) + (rcx.d << 0x10) != neg.d(rsi.d))
    rcx_1 = ((((rcx + (r11 << 8)) << 8) + r8) << 8) + arg1 + rsi
else
    rcx_1 = &data_14369a5b4

void* rax_4 = sub_142c31d20(rcx_1, arg2, arg4)

if (rax_4 != 0)
    void* rdx_8 = zx.q(*(rax_4 + 1)) + (zx.q(*rax_4) << 8) + zx.q(*(arg1 + 0xb))
        + ((zx.q(*(arg1 + 0xa)) + (((zx.q(*(arg1 + 8)) << 8) + zx.q(*(arg1 + 9))) << 8)) << 8)
        + arg1
    
    if (rdi.d u< (zx.d(*(rdx_8 + 1)) << 0x10) + (zx.d(*(rdx_8 + 2)) << 8) + (zx.d(*rdx_8) << 0x18)
            + zx.d(*(rdx_8 + 3)))
        return rdx_8 + ((rdi + 1) << 2)

return &data_14369a5d0
