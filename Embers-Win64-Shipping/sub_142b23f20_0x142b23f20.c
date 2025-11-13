// 函数: sub_142b23f20
// 地址: 0x142b23f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[3].d

if (rax s> 0)
    arg1[3].d = rax - 1
    return rax - 1

int32_t r8 = *(arg1 + 0x14)
int64_t result

if (r8 s>= arg1[2].d)
    result = (*(*arg1 + 0x28))(arg3, 1, r8)

if (r8 s< arg1[2].d || result.b != 0)
    result = arg1[1]
    *(sx.q(*(arg1 + 0x14)) + result) = arg2

*(arg1 + 0x14) += 1
return result
