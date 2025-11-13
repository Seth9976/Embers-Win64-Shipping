// 函数: sub_141bed310
// 地址: 0x141bed310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
sub_140f60ac0(arg1[0x10e], arg1[0x10d].d)
sub_140f602e0(arg1[0x10e], zx.d(arg1[0x105].b))
uint32_t rdx_1 = zx.d(*(arg1 + 0x829))
char rdx_6

if (rdx_1 == 0)
    rdx_6 = data_1439ae51c
else if (rdx_1 == 1)
    rdx_6 = data_1439ae51d
else if (rdx_1 == 2)
    rdx_6 = data_1439ae51e
else if (rdx_1 == 3)
    rdx_6 = data_1439ae51f
else if (rdx_1 != 4)
    rdx_6 = data_1439ae51c
else
    rdx_6 = data_1439ae520

sub_140f60a70(arg1[0x10e], rdx_6)
sub_140f60a00(arg1[0x10e], *(arg1 + 0x82c))
sub_140f609a0(arg1[0x10e], arg1 + 0x834)
sub_140f60990(arg1[0x10e], *(arg1 + 0x844))
int64_t result = sub_140f60a50(arg1[0x10e], *(arg1 + 0x845))
sub_140f5d170(arg1[0x10e], *(arg1 + 0x846) == 0)
sub_140f609e0(arg1[0x10e], *(arg1 + 0x851))
sub_140f5d6c0(arg1[0x10e], *(arg1 + 0x82a))
sub_140f5d190(arg1[0x10e], *(arg1 + 0x847))
*(arg1[0x10e] + 0x4c8) = *(arg1 + 0x854)
return result
