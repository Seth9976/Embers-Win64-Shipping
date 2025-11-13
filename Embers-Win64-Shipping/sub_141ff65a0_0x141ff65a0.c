// 函数: sub_141ff65a0
// 地址: 0x141ff65a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x15].d = 0
int64_t rcx = arg1[0x14]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140618750(&arg1[0xc])
arg1[0xb].d = 0
int64_t rcx_2 = arg1[0xa]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405a5130(&arg1[2], 0)

arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
sub_14059a8e0(&arg1[4], 0)
int64_t rcx_5 = arg1[6]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[2]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

*arg1 = &data_142d44d70
void* rcx_7 = data_143e1a338

if (rcx_7 != 0 && arg1[1].b != 0)
    return sub_140bb6e00(rcx_7, arg1)

return &data_142d44d70
