// 函数: sub_1422b9e40
// 地址: 0x1422b9e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x10)
void* arg_10 = rax

if (rax != 0)
    *(rax + 8) += 1

sub_1422bab30(&data_143f02b98, &arg_10, arg1 + 0x28, arg1 + 0x48, arg1 + 0x68, arg1 + 0x88, 
    arg1 + 0xa8, arg1 + 0xc8, arg1 + 0x1c)
void* var_40 = arg1 + 0x188
void* var_48 = arg1 + 0x168
uint128_t zmm6 = sub_1422bb850(&data_143f02b98, arg1 + 0x28, arg1 + 0x48, arg1 + 0x68, arg1 + 0x88, 
    arg1 + 0xa8, arg1 + 0xc8, arg1 + 0x1c, arg1 + 0xe8, arg1 + 0x108, arg1 + 0x128, arg1 + 0x148)
sub_1422bc2c0(&data_143f02b98, arg1 + 0x1c, arg1 + 0x1a8, zmm6)
*(arg1 + 0x18) = 1
return 1
