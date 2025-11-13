// 函数: sub_141a1bf10
// 地址: 0x141a1bf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142105d70(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_143023d68
TEB* gsbase

if (data_143f293a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f293a0)
    
    if (data_143f293a0 == 0xffffffff)
        _vfprintf_p_l(&data_143f29388, u"Landscape", u"Landscape")
        atexit(sub_142cf48a0)
        _Init_thread_footer(&data_143f293a0)

return arg1
