// 函数: sub_140ee25a0
// 地址: 0x140ee25a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142ee0d20
sub_140ee2240(&arg1[3], arg2)
arg1[0xf] = *arg3
void* rax_1 = arg3[1]
arg1[0x10] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_140ddd070(&arg1[0x11], arg4)
arg1[0x5e] = *arg5
return arg1
