// 函数: sub_1423c1f30
// 地址: 0x1423c1f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
char rax = *(arg1 + 0xd4)
uint64_t rax_4

if (rax != 0)
    rax_4 = zx.q(rax)
else
    rax_4 = (zx.q(*(arg1 + 0xd5)) & 1) << 3 | 2

int32_t r8 = arg1[0x18].d
int64_t r10 = rax_4 * 0x28
*(r10 + 0x1439c85e8)
uint64_t rcx_2 = zx.q(divs.dp.d(sx.q(r8 - 1 + *(r10 + &data_1439c85ec)), *(r10 + &data_1439c85ec))
    * divs.dp.d(sx.q(r8 - 1 + *(r10 + 0x1439c85e8)), *(r10 + 0x1439c85e8))
    * (&data_1439c85f4)[rax_4 * 0xa])
int64_t result = sx.q((rcx_2 * 3).d * 2)
*(arg2 + 0x28) += result
return result
