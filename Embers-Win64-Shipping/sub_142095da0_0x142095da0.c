// 函数: sub_142095da0
// 地址: 0x142095da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = sx.q(*(arg1 + 0xa0))

if (rax_1.d == 0)
    return (zx.o(0)).d

int64_t rcx = *(arg1 + 0x98)
int64_t rax = rax_1 << 5
void* rdx = *(rax + rcx - 0x18)
float result = *(rax + rcx - 0x20)

if (rdx == 0)
    return result

return result
    + __maxss_xmmss_memss((*(rdx + 0x90) f- *(rax + rcx - 0xc)) f/ *(rax + rcx - 8), 0x3c23d70a)
