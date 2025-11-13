// 函数: sub_141e1aac0
// 地址: 0x141e1aac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t rdx = sx.q(arg2[1].d)
int64_t result

for (; i != &i[rdx]; i = &i[1])
    if (*i == arg1)
    label_141e1ab63:
        result.b = 1
        return result

int32_t rax = (rdx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*((rdx << 3) + *arg2) = arg1
void* i_1 = *(arg1 + 0x158)

for (void* rsi_1 = i_1 + sx.q(*(arg1 + 0x160)) * 0x18; i_1 != rsi_1; i_1 += 0x18)
    if (sub_141de5ca0(i_1 + 8, arg2).b != 0)
        goto label_141e1ab63

result.b = 0
return result
