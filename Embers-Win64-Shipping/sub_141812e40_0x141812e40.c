// 函数: sub_141812e40
// 地址: 0x141812e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg3
void* rax_1 = arg3[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void*** rax_2 = sub_14187bba0(&var_18, arg4)
void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 != 0)
    rax_3[1].d = 1
    *rax_3 = &data_142d42ea8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rax_2

*arg2 = rax_2
arg2[1] = rax_3
return arg2
