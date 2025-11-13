// 函数: sub_14277a730
// 地址: 0x14277a730
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
rax_2, rdx_1 = j_sub_140a82f30(0x38)

if (rax_2 == 0)
    return 0

int32_t zmm1 = *(arg1 + 0xbc)
int128_t zmm3 = *(arg1 + 0xb8)
int128_t zmm2 = *(arg1 + 0xb4)
int32_t var_10 = *(arg1 + 0xcc)
uint32_t rcx_3 = zx.d(*(arg1 + 0xd0))
int64_t var_18 = *(arg1 + 0xc4)
*(arg1 + 0xb0)
return sub_142778000(rax_2, rdx_1, zmm2, zmm3, zmm1, (*(arg1 + 0xc0)).d, &var_18, rcx_3)
