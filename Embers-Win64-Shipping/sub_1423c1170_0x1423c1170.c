// 函数: sub_1423c1170
// 地址: 0x1423c1170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0xe0)
uint32_t rax_1

if (rax != 0)
    rax_1 = zx.d(rax)
else
    rax_1 = sub_1405d9520(zx.d(*(arg1 + 0xdb)))

*(arg1 + 0xc4)
int64_t var_18 = (&data_1439c85e0)[sx.q(rax_1) * 5]
sub_140a2e390(arg2, u"Render to Texture %dx%d[%s]", zx.q(*(arg1 + 0xc0)))
return arg2
