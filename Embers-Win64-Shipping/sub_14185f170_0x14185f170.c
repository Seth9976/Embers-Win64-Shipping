// 函数: sub_14185f170
// 地址: 0x14185f170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg4
int64_t var_40
sub_140596d10(&var_40, &arg4[2])
char rax_1 = arg4[6].b
int128_t zmm0 = *(arg4 + 0x20)
int32_t rax_2 = arg4[7]
int64_t zmm1 = *(arg4 + 0x30)
*arg1 = &data_142fe83f8
arg1[1] = *arg2
void* rax_4 = arg2[1]
arg1[2] = rax_4

if (rax_4 != 0)
    *(rax_4 + 0xc) += 1

arg1[3] = arg3
arg1[4].d = rax
sub_140596d10(&arg1[5], &var_40)
arg1[7].b = rax_1
*(arg1 + 0x40) = zmm0
*(arg1 + 0x3c) = rax_2
arg1[0xa] = zmm1
int64_t rax_8 = sub_140a387b0()
int64_t rcx_2 = var_40
arg1[0xb] = rax_8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142fe8450
int64_t rcx_3 = *(arg4 + 8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return arg1
