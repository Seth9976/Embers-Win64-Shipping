// 函数: sub_142181bf0
// 地址: 0x142181bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421aad70(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432e81d0
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(arg1 + 0x54) = 0
__builtin_memset(&arg1[0xc], 0, 0x1d)
int64_t rdx = *(ThreadLocalStoragePointer + (rcx << 3))
arg1[0x10] = 0
arg1[0x11] = 0
__builtin_memset(&arg1[0x13], 0, 0x1d)
__builtin_memset(&arg1[0x17], 0, 0x2d)
arg1[0x1d] = 0
arg1[0x1e] = 0
__builtin_memset(&arg1[0x20], 0, 0x50)

if (data_143f4d800 s> *(0x14 + rdx))
    _Init_thread_header(&data_143f4d800)
    
    if (data_143f4d800 == 0xffffffff)
        sub_140b58260(&data_143f4d7f8, u"None", 1)
        _Init_thread_footer(&data_143f4d800)

*(arg1 + 0x4c) &= 0xfffffffe
arg1[6].b = 1
*(arg1 + 0x34) = 1
*(arg1 + 0x3c) = 1
*(arg1 + 0x44) = 0x41200000
*(arg1 + 0x54) = data_143f4d7f8
arg1[0x12].b = 0
arg1[0x1f].d = (arg1[0x1f].d & 0xfffffff1) | 1
return arg1
