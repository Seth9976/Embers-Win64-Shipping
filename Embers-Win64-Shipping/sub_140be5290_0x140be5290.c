// 函数: sub_140be5290
// 地址: 0x140be5290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1
sub_140b58170(&result_1, arg2, 1)
int64_t rdi = sx.q(*(arg1 + 0x228))
uint64_t result = zx.q((rdi + 1).d)
*(arg1 + 0x228) = result.d

if (result.d s> *(arg1 + 0x22c))
    result = sub_1405a4f90(arg1 + 0x220)

int64_t rcx_3 = rdi << 4
uint64_t* rcx_4 = rcx_3 + *(arg1 + 0x220)

if (rcx_3 != neg.q(*(arg1 + 0x220)))
    result = result_1
    *rcx_4 = result
    rcx_4[1] = arg3

return result
