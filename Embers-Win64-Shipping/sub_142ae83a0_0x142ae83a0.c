// 函数: sub_142ae83a0
// 地址: 0x142ae83a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_142aea170(arg1, arg2, arg4)

if (arg3 == 0 || *arg4 s> 0)
    return result

int64_t r14_1 = sx.q((*(*(arg2 + 0x38) + 0x18))(arg2) + 1)
int64_t rax_2 = sub_142a7dd00(r14_1)

if (rax_2 != 0)
    memcpy(rax_2, *(arg2 + 0x48), r14_1.d)
    result[2] |= 0x20
    *(result + 0x48) = rax_2
else
    *arg4 = 7

return result
