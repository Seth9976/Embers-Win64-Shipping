// 函数: sub_142bc0d40
// 地址: 0x142bc0d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r10 = *arg2
char rax = *r10

if (rax == 0x1e)
    return zx.q(sub_142bc0db0(r10, *(arg1 + 0x10), 0, nullptr) s>> 0x10)

if (rax != 0xff)
    return sub_142bc0c90(r10, *(arg1 + 0x10)) __tailcall

return zx.q(sx.d((((zx.d(r10[3]) | (zx.d(r10[1]) << 8 | zx.d(r10[2])) << 8) + 0x80) u>> 8).w))
