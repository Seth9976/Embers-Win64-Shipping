// 函数: sub_142108260
// 地址: 0x142108260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432c8d68
__builtin_memset(&arg1[0xa], 0, 0x20)
TEB* gsbase

if (data_143f498a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f498a0)
    
    if (data_143f498a0 == 0xffffffff)
        _vfprintf_p_l(&data_143f49870, u"Font", u"MaterialExpression")
        _vfprintf_p_l(&data_143f49888, u"Parameters", u"MaterialExpression")
        atexit(sub_142d03750)
        _Init_thread_footer(&data_143f498a0)
        arg1[7].b |= 1
        return arg1

arg1[7].b |= 1
return arg1
