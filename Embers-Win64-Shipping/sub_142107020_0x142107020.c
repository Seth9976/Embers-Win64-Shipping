// 函数: sub_142107020
// 地址: 0x142107020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432cd2a0
TEB* gsbase

if (data_143f48f58 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f48f58)
    
    if (data_143f48f58 == 0xffffffff)
        _vfprintf_p_l(&data_143f48f28, u"Constants", u"MaterialExpression")
        _vfprintf_p_l(&data_143f48f40, u"Vectors", u"MaterialExpression")
        atexit(sub_142d03080)
        _Init_thread_footer(&data_143f48f58)

return arg1
