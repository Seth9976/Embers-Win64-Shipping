// 函数: sub_142107300
// 地址: 0x142107300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432d0048
__builtin_memset(&arg1[8], 0, 0x14)
TEB* gsbase

if (data_143f498e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f498e0)
    
    if (data_143f498e0 == 0xffffffff)
        _vfprintf_p_l(&data_143f498c8, u"Utility", u"MaterialExpression")
        atexit(sub_142d03280)
        _Init_thread_footer(&data_143f498e0)

*(arg1 + 0x54) = 0x3f800000
arg1[0xb].d = 0x3f000000
return arg1
