// 函数: sub_141f7e970
// 地址: 0x141f7e970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432845e8
sub_140a2fe90(sub_140b18f30(), arg1[7])
arg1[0x1d].d = 0
int64_t rcx_1 = arg1[0x1c]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x15].d = 0

if (*(arg1 + 0xac) != 0)
    sub_1405a5130(&arg1[0x14], 0)

arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
sub_14059a8e0(&arg1[0x16], 0)
int64_t rcx_4 = arg1[0x18]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x14]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_1408ffb10(&arg1[0x12])
arg1[0x11].d = 0
int64_t rcx_7 = arg1[0x10]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_141f86850(&arg1[8], 0)
int64_t rcx_9 = arg1[0xc]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[8]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

DeleteCriticalSection(&arg1[2])
*arg1 = &data_142d44d70
void* rcx_12 = data_143e1a338

if (rcx_12 != 0 && arg1[1].b != 0)
    sub_140bb6e00(rcx_12, arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
