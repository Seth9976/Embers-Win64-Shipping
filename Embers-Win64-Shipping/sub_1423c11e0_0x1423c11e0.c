// 函数: sub_1423c11e0
// 地址: 0x1423c11e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0xd4)
uint64_t rax_4

if (rax != 0)
    rax_4 = zx.q(rax)
else
    rax_4 = (zx.q(*(arg1 + 0xd5)) & 1) << 3 | 2

int64_t var_18 = (&data_1439c85e0)[rax_4 * 5]
sub_140a2e390(arg2, u"Render to Texture Cube %dx%d[%s]", zx.q(*(arg1 + 0xc0)))
return arg2
