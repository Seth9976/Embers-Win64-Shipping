// 函数: sub_142779f20
// 地址: 0x142779f20
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
void*** result = j_sub_140a82f30(0x50)

if (result == 0)
    return nullptr

*(arg1 + 0xb0)
int128_t zmm7 = *(arg1 + 0xb4)
int128_t zmm8 = *(arg1 + 0xc0)
int128_t zmm9 = *(arg1 + 0xd0)
int128_t zmm10 = *(arg1 + 0xe0)
result[1] = 0
*result = &data_142fc9648
int32_t zmm6_1 = sub_140b58170(&result[1], &data_1437020ab, 1)
*(result + 0x20) = zmm8
*(result + 0x30) = zmm9
*result = &data_142fc97c8
*(result + 0x40) = zmm10
result[2].d = zmm6_1
*(result + 0x14) = zmm7.d
return result
