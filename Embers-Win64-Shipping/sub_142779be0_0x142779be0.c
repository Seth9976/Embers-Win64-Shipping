// 函数: sub_142779be0
// 地址: 0x142779be0
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
void*** rax_2
int64_t rdx_1
rax_2, rdx_1 = j_sub_140a82f30(0x60)

if (rax_2 == 0)
    return 0

uint32_t rcx_2 = zx.d(*(arg1 + 0xf0))
int128_t zmm1 = *(arg1 + 0xd0)
int128_t zmm3 = *(arg1 + 0xb8)
int128_t zmm2 = *(arg1 + 0xb4)
int128_t var_38 = *(arg1 + 0xc0)
int128_t var_18 = *(arg1 + 0xe0)
int128_t var_28 = zmm1
*(arg1 + 0xb0)
return sub_1417bf510(rax_2, rdx_1, zmm2, zmm3, (*(arg1 + 0xbc)).d, &var_38, rcx_2)
