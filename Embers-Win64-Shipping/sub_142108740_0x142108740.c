// 函数: sub_142108740
// 地址: 0x142108740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432d1200
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[8], 0, 0x64)

if (data_143f497a8 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f497a8)
    
    if (data_143f497a8 == 0xffffffff)
        _vfprintf_p_l(&data_143f49790, u"Math", u"MaterialExpression")
        atexit(sub_142d03920)
        _Init_thread_footer(&data_143f497a8)

*(arg1 + 0xa4) = 0x3727c5ac
return arg1
