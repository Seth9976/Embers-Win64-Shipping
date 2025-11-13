// 函数: sub_140ee2500
// 地址: 0x140ee2500
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
int32_t rcx_2 = arg1[0xf][1].d
arg1[0x5e].d = 0
int32_t rax_3 = rcx_2 - 1

if (rcx_2 == 0)
    rax_3 = 0

*(arg1 + 0x2f4) = rax_3
return arg1
