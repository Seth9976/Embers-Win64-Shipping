// 函数: sub_14277a590
// 地址: 0x14277a590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg2
int64_t rdx = sx.q(arg2[1].d)

for (; i != &i[rdx]; i = &i[1])
    if (*i == arg1)
        return nullptr

int32_t rax = (rdx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rdx << 3)) = arg1
void*** result = j_sub_140a82f30(0x40)

if (result == 0)
    return nullptr

int32_t rbx_1 = *(arg1 + 0xcc)
uint32_t rdi_1 = zx.d(*(arg1 + 0xdc))
int32_t rsi_1 = *(arg1 + 0xd8)
*(arg1 + 0xb0)
int128_t zmm10 = *(arg1 + 0xc0)
uint128_t zmm11 = zx.o(*(arg1 + 0xc4))
uint128_t zmm12 = zx.o(*(arg1 + 0xd0))
result[1] = 0
*result = &data_142fc9648
int128_t zmm6_1 = sub_140b58170(&result[1], &data_1437020ab, 1)
result[6] = zmm12.q
*(result + 0x24) = zmm11.q
result[4].d = zmm10.d
*(result + 0x10) = zmm6_1
result[7].d = rsi_1
*result = &data_142fc9758
*(result + 0x2c) = rbx_1
*(result + 0x3c) = rdi_1
return result
