// 函数: sub_14277aa90
// 地址: 0x14277aa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t rdx = sx.q(arg2[1].d)

for (; i != &i[rdx]; i = &i[1])
    if (*i == arg1)
        return 0

int32_t rax = (rdx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdx << 3)) = arg1
void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    return 0

int512_t zmm1
zmm1.o = *(arg1 + 0xb0)
return sub_1417bf7b0(rax_2) __tailcall
