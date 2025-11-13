// 函数: sub_1417a2990
// 地址: 0x1417a2990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x15].d = 0
int64_t rcx = arg1[0x14]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1417ad9b0(&arg1[0xc], 0)
int64_t rcx_2 = arg1[0x10]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0xc]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0xb].d = 0
int64_t rcx_4 = arg1[0xa]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t result = sub_140cb92f0(&arg1[2], 0)
int64_t rcx_6 = arg1[6]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[2]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg1

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
