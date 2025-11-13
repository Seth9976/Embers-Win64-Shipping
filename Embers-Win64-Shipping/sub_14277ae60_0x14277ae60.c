// 函数: sub_14277ae60
// 地址: 0x14277ae60
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
void*** result = j_sub_140a82f30(0x18)

if (result == 0)
    return 0

int32_t rbx_1 = *(arg1 + 0xb0)
result[1] = 0
*result = &data_142fc9648
sub_140b58170(&result[1], &data_1437020ab, 1)
result[2].d = rbx_1
*result = &data_142fc9678
return result
