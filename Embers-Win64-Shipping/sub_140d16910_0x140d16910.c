// 函数: sub_140d16910
// 地址: 0x140d16910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2

if (r9 == 0)
    return arg1

int64_t* rdi = *(arg1 + 0x90)
int64_t* i = *rdi
int64_t rdx = sx.q(rdi[1].d)

for (; i != &i[rdx]; i = &i[1])
    if (*i == r9)
        return arg1

int32_t rax_1 = (rdx + 1).d
rdi[1].d = rax_1

if (rax_1 s> *(rdi + 0xc))
    sub_1405a4d70(rdi)

*((rdx << 3) + *rdi) = *arg2
return arg1
