// 函数: sub_1418d83c0
// 地址: 0x1418d83c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142feeec8
DeleteCriticalSection(&arg1[0x13])
sub_1405d1550(&arg1[0xe])
int64_t rcx_2 = arg1[0xc]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[9]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[7]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[5]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_142ef2ed0
int64_t rcx_6 = arg1[1]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
