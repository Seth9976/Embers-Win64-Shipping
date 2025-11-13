// 函数: sub_14091dec0
// 地址: 0x14091dec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1ffa8
arg1[0x42].d = 0
int64_t rcx = arg1[0x41]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14091b000(&arg1[0x39])
arg1[0x38].d = 0
int64_t rcx_2 = arg1[0x37]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1407ece30(&arg1[0x2f], 0)
int64_t rcx_4 = arg1[0x33]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x2f]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_14091ba00(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
