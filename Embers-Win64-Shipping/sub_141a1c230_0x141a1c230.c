// 函数: sub_141a1c230
// 地址: 0x141a1c230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142105d70(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143024788
arg1[8] = 0
arg1[9] = 0
TEB* gsbase

if (data_143f29420 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f29420)
    
    if (data_143f29420 == 0xffffffff)
        _vfprintf_p_l(&data_143f29408, u"Landscape", u"Landscape")
        atexit(sub_142cf49e0)
        _Init_thread_footer(&data_143f29420)
        arg1[7].b |= 1
        return arg1

arg1[7].b |= 1
return arg1
