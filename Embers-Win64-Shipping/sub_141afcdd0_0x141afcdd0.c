// 函数: sub_141afcdd0
// 地址: 0x141afcdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xb].d = 0
int64_t rcx = arg1[0xa]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1406106e0(&arg1[2], 0)

arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
sub_14059a8e0(&arg1[4], 0)
int64_t rcx_3 = arg1[6]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[2]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*arg1 = &data_142d40498
return &data_142d40498
