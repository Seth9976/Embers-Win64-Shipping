// 函数: sub_1406c5060
// 地址: 0x1406c5060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg1
void*** arg_8 = rbx

if (rbx == 0)
    return 

sub_1420197c0(rbx, arg1)
*rbx = &data_142d8ec08
rbx[5] = &data_142d8ef50
rbx[7] = &data_142d8f120
__builtin_memset(&rbx[0x66], 0, 0x20)
sub_1406c5150(&rbx[0x6a])
__builtin_memset(&rbx[0x79], 0, 0x28)
rbx[0x81] = 0
rbx[0x93] = 0
rbx[0x94] = 0xf
rbx[0x91].b = 0
rbx[0x95] = 0
rbx[0x96] = 0
__builtin_memset(&rbx[0x98], 0, 0x28)
void** rax = j_sub_140a82f30(0x10)
rax[1] = 0
rbx[0x98] = rax
*rax = &rbx[0x98]
