// 函数: sub_142b91790
// 地址: 0x142b91790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg1)
int32_t r9 = 1
int64_t r8 = sx.q(arg2)

if (arg1 s< 0)
    r10 = neg.q(r10)
    r9 = -1

if (arg2 s< 0)
    r8 = neg.q(r8)
    r9 = neg.d(r9)

uint32_t result

if (r8 == 0)
    result = 0x7fffffff
else
    result = (divu.dp.q(0:((r8 u>> 1) + (r10 << 0x10)), r8)).d

if (r9 s>= 0)
    return result

return neg.d(result)
