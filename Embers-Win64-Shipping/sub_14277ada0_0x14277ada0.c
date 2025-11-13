// 函数: sub_14277ada0
// 地址: 0x14277ada0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t rdx = sx.q(arg2[1].d)

for (; i != &i[rdx]; i = &i[1])
    if (*i == arg1)
        return 0

int32_t rax_1 = (rdx + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*((rdx << 3) + *arg2) = arg1

if (*(arg1 + 0xb0) != 0)
    void*** rax_3 = j_sub_140a82f30(0x18)
    
    if (rax_3 != 0)
        int64_t* rcx_1 = *(arg1 + 0xb0)
        int64_t r8 = *rcx_1
        return sub_1417bf240(rax_3, (*(r8 + 0x3f8))(rcx_1, arg2, r8)) __tailcall

return 0
