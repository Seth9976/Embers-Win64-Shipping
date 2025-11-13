// 函数: sub_14210bcd0
// 地址: 0x14210bcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14210ba10(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432c9798
__builtin_memset(&arg1[0x1a], 0, 0x20)
TEB* gsbase

if (data_143f48c50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f48c50)
    
    if (data_143f48c50 == 0xffffffff)
        _vfprintf_p_l(&data_143f48c38, u"Obsolete", u"MaterialExpression")
        atexit(sub_142d04ec0)
        _Init_thread_footer(&data_143f48c50)

arg1[7].b |= 1
*(arg1 + 0xca) &= 0xfd
return arg1
