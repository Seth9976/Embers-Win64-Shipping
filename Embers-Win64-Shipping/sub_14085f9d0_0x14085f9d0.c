// 函数: sub_14085f9d0
// 地址: 0x14085f9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Niagara")
void arg_10
int64_t rdx_1
float zmm6_1[0x4]
rdx_1, zmm6_1 = sub_140744520(&arg_10, arg1)

if (*(arg1 + 0x6bc) != 0)
    rdx_1.b = 1
    sub_1408622c0(arg1)
    zmm6_1 = sub_14084fd50(arg1)

*(arg1 + 0x6b8) |= 0x100
*(arg1 + 0x6c0) = zmm6_1[0]
float zmm6_3 = sub_14085dd20(arg1, sub_14085eb30(arg1, zmm6_1), 0) f+ *(arg1 + 0x3c)
int32_t rax_1 = *(arg1 + 0x6e8)
*(arg1 + 0x40) += 1
*(arg1 + 0x3c) = zmm6_3

if (rax_1 - 3 u> 1)
    *(arg1 + 0x6b8) |= 0x100
    *(arg1 + 0x6bc) = 1

sub_140746840(&arg_10)
return sub_140b37f60("Niagara")
