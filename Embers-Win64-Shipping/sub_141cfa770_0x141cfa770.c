// 函数: sub_141cfa770
// 地址: 0x141cfa770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg1[0xf]
int64_t r8 = arg1[0xe]
*arg1 = &data_14321d328
sub_141d0dd60(arg1[0xd], arg1, r8, r9, arg1 + 0x91)
int64_t rcx_1 = arg1[2]

if (rcx_1 != 0 && *(arg1 + 0x65) == 0)
    sub_140a74f90(rcx_1)

arg1[2] = 0
arg1[0x1c].d = 0
int64_t rcx_2 = arg1[0x1b]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x14].d = 0

if (*(arg1 + 0xa4) != 0)
    sub_1405a5410(&arg1[0x13], 0)

arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
sub_14059a8e0(&arg1[0x15], 0)
int64_t rcx_5 = arg1[0x17]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x13]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140a3c4a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
