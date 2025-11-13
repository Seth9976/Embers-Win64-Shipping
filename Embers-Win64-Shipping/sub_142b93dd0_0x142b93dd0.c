// 函数: sub_142b93dd0
// 地址: 0x142b93dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg1)
int32_t r9 = 1
int64_t rax = sx.q(arg2)
int64_t r10 = sx.q(arg3)

if (arg1 s< 0)
    r11 = neg.q(r11)
    r9 = -1

if (arg2 s< 0)
    rax = neg.q(rax)
    r9 = neg.d(r9)

if (arg3 s< 0)
    r10 = neg.q(r10)
    r9 = neg.d(r9)

uint32_t result

if (r10 == 0)
    result = 0x7fffffff
else
    result = (divu.dp.q(0:(rax * r11 + (r10 u>> 1)), r10)).d

if (r9 s>= 0)
    return result

return neg.d(result)
