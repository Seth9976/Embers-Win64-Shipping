// 函数: sub_1421095c0
// 地址: 0x1421095c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb140
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[8], 0, 0x3c)

if (data_143f491e8 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f491e8)
    
    if (data_143f491e8 == 0xffffffff)
        _vfprintf_p_l(&data_143f491d0, u"Coordinates", u"MaterialExpression")
        atexit(sub_142d03e40)
        _Init_thread_footer(&data_143f491e8)

*(arg1 + 0x84) = 0
return arg1
