// 函数: sub_1423c1dd0
// 地址: 0x1423c1dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
char rax_1
int64_t rdx
rax_1, rdx = (*(*arg1 + 0x318))(arg1)

if (rax_1 != 0)
    int64_t rax_2 = sub_1424367e0(*(arg1[0x1a] + 0x28))
    *(arg2 + 0x28) += rax_2
    return rax_2

int32_t rax_3

if (*arg2 != 0)
    rdx.b = 1
    rax_3 = sub_1423c1a70(arg1)
else
    rax_3 = sub_1423c1c20(arg1)

int32_t rax_4 = sub_1423bcde0(arg1, rax_3)
*(arg2 + 0x18) += sx.q(rax_4)
return rax_4
