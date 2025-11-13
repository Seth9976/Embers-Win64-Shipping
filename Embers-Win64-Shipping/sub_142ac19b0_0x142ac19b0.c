// 函数: sub_142ac19b0
// 地址: 0x142ac19b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1
int64_t r8

if (((arg2 u>> 8).b & 1) == 0)
    rax_1 = 0x48
    r8 = 0xc8
else
    rax_1 = 8
    r8 = 0x88

if (((arg2 u>> 9).b & 1) != 0)
    rax_1 = r8

void* rcx = arg1 + rax_1
int16_t rax_2 = *(rcx + 8)

if (rax_2 s< 0)
    return zx.q(*(rcx + 0xc))

return zx.q(sx.d(rax_2) s>> 5)
