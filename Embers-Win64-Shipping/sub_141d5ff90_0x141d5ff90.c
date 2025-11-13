// 函数: sub_141d5ff90
// 地址: 0x141d5ff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x14]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x11]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0xf].d = 0
int64_t rcx_2 = arg1[0xe]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1408ffc10(&arg1[6])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
