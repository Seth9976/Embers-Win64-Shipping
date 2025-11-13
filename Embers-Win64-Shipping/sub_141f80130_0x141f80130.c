// 函数: sub_141f80130
// 地址: 0x141f80130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_2 = (*(*arg2 + 0x628))(arg2)

if (rax_2 == 0 || (*(rax_2 + 0x3a) & 2) == 0)
    sub_1423bc410(&arg2[5], arg1, arg1 + 0x28)
    return 

sub_1423bc410(rax_2 + 0x30, arg1, arg1 + 0x28)

if ((*(rax_2 + 0xe8) & 4) != 0)
    return 

void var_18
sub_140d3a3a0(&var_18, rax_2)
int32_t* i = arg2[7]

for (void* rdi_4 = &i[sx.q(arg2[8].d) * 4]; i != rdi_4; i = &i[4])
    if (sub_140664af0(i, &var_18) != 0 && *(i + 8) == rax_2 + 0x30)
        return 

sub_1423bc410(&arg2[5], arg1, arg1 + 0x28)
