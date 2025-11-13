// 函数: sub_14091b490
// 地址: 0x14091b490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1fd10
arg1[1] = &data_142e1fd48
DeleteCriticalSection(&arg1[0x18])
int64_t rcx_1 = arg1[0x16]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

DeleteCriticalSection(&arg1[0x11])
int64_t rcx_3 = arg1[0xf]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

DeleteCriticalSection(&arg1[0xa])
int64_t rcx_5 = arg1[8]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

DeleteCriticalSection(&arg1[3])
arg1[1] = &data_142d4ba00
*arg1 = &data_142d565e8
return &data_142d565e8
