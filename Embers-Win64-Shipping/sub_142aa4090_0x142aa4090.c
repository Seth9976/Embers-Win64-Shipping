// 函数: sub_142aa4090
// 地址: 0x142aa4090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
uint64_t r8_1

if (rax s< 0)
    r8_1 = zx.q(*(arg2 + 0xc))
else
    r8_1 = zx.q(sx.d(rax) s>> 5)

void* rdx

if ((rax.b & 0x11) != 0)
    rdx = nullptr
else if ((rax.b & 2) == 0)
    rdx = *(arg2 + 0x18)
else
    rdx = arg2 + 0xa

return (*(*arg1 + 0x100))(arg1, rdx, r8_1, arg3, arg4)
