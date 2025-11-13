// 函数: sub_141ed41d0
// 地址: 0x141ed41d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee0570(arg1, 0)
data_143f3a90c -= 1
void var_58
sub_141efdf70(sub_14077e140(&var_58, &arg1[2]))
arg1[0xb].d = 0
int64_t rcx_2 = arg1[0xa]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405a5410(&arg1[2], 0)

arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
sub_14059a8e0(&arg1[4], 0)
int64_t rcx_5 = arg1[6]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[2]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t result = sub_141ee0570(arg1, 0)
int64_t rcx_8 = *arg1

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
