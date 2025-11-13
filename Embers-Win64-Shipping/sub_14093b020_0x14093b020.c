// 函数: sub_14093b020
// 地址: 0x14093b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t arg_18 = 0
int64_t arg_20 = 0
void var_28
sub_140942250(arg1, &var_28, &arg_10, &arg_18, &arg_20)

if (arg_18 == 0)
    return 0

int64_t var_20
int64_t* rax_1
int512_t zmm1
rax_1, zmm1 = sub_14093ffd0(&var_28, sub_140b63b70(&arg_18, &var_20), arg1 + 0x158)
j_sub_140b3db50()
char rax_2 = sub_140b404d0(&data_143de7d78, *rax_1, zmm1)
int64_t rcx_2 = var_20

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (rax_2 != 0)
    return 1

return 0
