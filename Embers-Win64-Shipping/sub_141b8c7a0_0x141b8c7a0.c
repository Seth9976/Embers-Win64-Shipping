// 函数: sub_141b8c7a0
// 地址: 0x141b8c7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14307f918
arg1[2] = &data_14307fb00
sub_1422dbdb0(&arg1[0xca])

if (arg1[0xbc].b != 0)
    arg1[0xbc].b = 0

int64_t rcx_1 = arg1[0xb2]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_14306d778
int64_t rax = data_143f5b268

if (rax == arg1)
    rax = 0

data_143f5b268 = rax
*arg1 = &data_14306d5b0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
