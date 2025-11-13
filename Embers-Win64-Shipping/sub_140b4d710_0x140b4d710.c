// 函数: sub_140b4d710
// 地址: 0x140b4d710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg3)
uint32_t count = (rbp + 7).d u>> 3
int32_t rax = *(arg1 + 0x98) + count
*(arg1 + 0x98) = rax

if (rax s> *(arg1 + 0x9c))
    sub_1405daba0(arg1 + 0x90)

memcpy(sx.q((*(arg1 + 0xa0) s>> 3).d) + *(arg1 + 0x90), arg2, count)
*(arg1 + 0xa0) += rbp
uint64_t result = *(arg1 + 0xa0)
uint64_t r8_2 = zx.q(result.d) & 7

if (r8_2.d != 0)
    char* rdx_3 = sx.q((result s>> 3).d) + *(arg1 + 0x90)
    result = zx.q(*(r8_2 + &data_142e78980))
    *rdx_3 &= result.b

return result
