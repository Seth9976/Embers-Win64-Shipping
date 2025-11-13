// 函数: sub_142109800
// 地址: 0x142109800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432c8348
TEB* gsbase

if (data_143f49708 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f49708)
    
    if (data_143f49708 == 0xffffffff)
        _vfprintf_p_l(&data_143f496d8, u"Particles", u"MaterialExpression")
        _vfprintf_p_l(&data_143f496f0, u"Coordinates", u"MaterialExpression")
        atexit(sub_142d03f30)
        _Init_thread_footer(&data_143f49708)

return arg1
