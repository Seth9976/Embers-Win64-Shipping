// 函数: sub_141c48030
// 地址: 0x141c48030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143206010
arg1[1] = &data_143206150
arg1[2] = &data_143206160
int64_t* rcx = arg1[0x3c]

if (rcx != 0)
    (*(*rcx + 0x28))(rcx, 1)

int64_t rcx_1 = arg1[0x2f]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x2d]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

DeleteCriticalSection(&arg1[0x21])
int64_t* rcx_4 = arg1[0x17]

if (rcx_4 != 0)
    sub_140a4fc50(rcx_4)
    arg1[0x17] = 0

int64_t rcx_5 = arg1[0x1b]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x19]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_141c47e00(&arg1[0x15])
int64_t rcx_8 = arg1[0xa]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[6]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[4]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[1] = &data_142d4ba00
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
