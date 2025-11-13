// 函数: sub_141a1bfb0
// 地址: 0x141a1bfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142105d70(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143023ff0
arg1[8] = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x54) = 0
TEB* gsbase

if (data_143f293c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f293c0)
    
    if (data_143f293c0 == 0xffffffff)
        _vfprintf_p_l(&data_143f293a8, u"Landscape", u"Landscape")
        atexit(sub_142cf48f0)
        _Init_thread_footer(&data_143f293c0)
        arg1[7].b |= 1
        return arg1

arg1[7].b |= 1
return arg1
