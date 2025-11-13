// 函数: sub_140953cf0
// 地址: 0x140953cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x30) += 1
int64_t rdi = sx.q(*(arg1 + 0x48))
int32_t rax = (rdi + 1).d
*(arg1 + 0x48) = rax

if (rax s> *(arg1 + 0x4c))
    sub_1407c3920(arg1 + 0x40)

void*** rcx_2 = rdi * 0x78 + *(arg1 + 0x40)
*rcx_2 = &data_142e25968
rcx_2[1] = *(arg2 + 8)
void* rax_2 = *(arg2 + 0x10)
rcx_2[2] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

*rcx_2 = &data_142e259e0
rcx_2[3] = 0
rcx_2[4] = 0
sub_140949000(&rcx_2[5], arg2 + 0x28)
void*** result
result.b = 1
return result
