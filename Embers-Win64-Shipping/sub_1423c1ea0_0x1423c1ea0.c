// 函数: sub_1423c1ea0
// 地址: 0x1423c1ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
char rax = arg1[0x1c].b
uint32_t rax_1

if (rax != 0)
    rax_1 = zx.d(rax)
else
    rax_1 = sub_1405d9520(zx.d(*(arg1 + 0xdb)))

int64_t r10 = sx.q(rax_1) * 0x28
*(r10 + 0x1439c85e8)
int64_t result = sx.q(divs.dp.d(sx.q(arg1[0x18].d - 1 + *(r10 + 0x1439c85e8)), *(r10 + 0x1439c85e8))
    * divs.dp.d(sx.q(*(arg1 + 0xc4) - 1 + *(r10 + &data_1439c85ec)), *(r10 + &data_1439c85ec))
    * (&data_1439c85f4)[sx.q(rax_1) * 0xa])
*(arg2 + 0x28) += result
return result
