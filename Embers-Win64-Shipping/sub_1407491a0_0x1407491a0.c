// 函数: sub_1407491a0
// 地址: 0x1407491a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d99a00
sub_14074c8e0(arg1)
arg1[0xe].d = 0
int64_t rcx = arg1[0xd]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140754610(&arg1[5], 0)
int64_t rcx_2 = arg1[9]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[5]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
