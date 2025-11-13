// 函数: sub_141fa6290
// 地址: 0x141fa6290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae180(&arg1[0x14])
arg1[0x13].d = 0
int64_t rcx_1 = arg1[0x12]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0xb].d = 0

if (*(arg1 + 0x5c) != 0)
    sub_140638cc0(&arg1[0xa], 0)

arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
sub_14059a8e0(&arg1[0xc], 0)
int64_t rcx_4 = arg1[0xe]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xa]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[9].d = 0
int64_t rcx_6 = arg1[8]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t result = sub_14059ad90(arg1, 0)
int64_t rcx_8 = arg1[4]

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = *arg1

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
