// 函数: sub_141702a70
// 地址: 0x141702a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142fc4250
arg1[3].d = 0
__builtin_memset(&arg1[5], 0, 0x11)
arg1[4] = &data_142fc4220
sub_14172eb30(arg1, &arg1[4])
*arg1 = &data_142fc4af8
void*** rax = j_sub_140a82f30(0xd8)

if (rax == 0)
    arg1[8] = 0
    return arg1

int32_t var_18 = 0
arg1[8] = sub_141703130(rax, arg1, data_1439b8dec, 0)
return arg1
