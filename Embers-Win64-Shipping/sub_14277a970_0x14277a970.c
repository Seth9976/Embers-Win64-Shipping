// 函数: sub_14277a970
// 地址: 0x14277a970
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
void*** result = j_sub_140a82f30(0x20)

if (result == 0)
    return 0

int32_t rbx_1 = *(arg1 + 0xbc)
*(arg1 + 0xb0)
uint128_t zmm7 = zx.o(*(arg1 + 0xb4))
result[1] = 0
*result = &data_142fc9648
int32_t zmm6_1 = sub_140b58170(&result[1], &data_1437020ab, 1)
*(result + 0x14) = zmm7.q
*result = &data_142fc9838
result[2].d = zmm6_1
*(result + 0x1c) = rbx_1
return result
