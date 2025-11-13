// 函数: sub_141a32d90
// 地址: 0x141a32d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xc].d = 0
int64_t rcx = arg1[0xb]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[4].d = 0

if (*(arg1 + 0x24) != 0)
    sub_1405a5130(&arg1[3], 0)

arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
sub_14059a8e0(&arg1[5], 0)
int64_t rcx_3 = arg1[7]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[3]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*arg1 = &data_142d40888
return &data_142d40888
