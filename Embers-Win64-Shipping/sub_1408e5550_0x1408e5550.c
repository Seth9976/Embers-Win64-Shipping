// 函数: sub_1408e5550
// 地址: 0x1408e5550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
int32_t i = 0
*(arg2 + 8) += sx.q(arg1[7].d) << 6
int64_t rax_3 = *(arg2 + 8) + (sx.q(arg1[9].d) << 2)
*(arg2 + 8) = rax_3

if (arg1[0xe].d s> 0)
    do
        rax_3 += 4
        i += 1
        *(arg2 + 8) = rax_3
    while (i s< arg1[0xe].d)

*(arg2 + 8) = rax_3 + 0x10
int64_t result = rax_3 + 0x10 + ((sx.q(arg1[0x10].d) * 5 + 2) << 3)
*(arg2 + 8) = result
return result
