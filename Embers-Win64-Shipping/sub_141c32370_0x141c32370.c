// 函数: sub_141c32370
// 地址: 0x141c32370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143205160
int64_t rcx = arg1[0x24]

if (rcx != 0)
    sub_140a74f90(rcx)

DeleteCriticalSection(&arg1[0x1f])
sub_141c31770(&arg1[0x1d])
DeleteCriticalSection(&arg1[0x18])
sub_141c31770(&arg1[0x16])
DeleteCriticalSection(&arg1[0x11])
sub_140596e10(&arg1[0xf])
DeleteCriticalSection(&arg1[0xa])
int64_t rcx_8 = arg1[8]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

DeleteCriticalSection(&arg1[3])
return sub_140596e10(&arg1[1]) __tailcall
