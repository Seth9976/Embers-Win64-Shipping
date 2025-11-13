// 函数: sub_14210bf10
// 地址: 0x14210bf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14210bb30(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432d2c00
TEB* gsbase

if (data_143f48e68 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f48e68)
    
    if (data_143f48e68 == 0xffffffff)
        _vfprintf_p_l(&data_143f48e50, u"Particles", u"MaterialExpression")
        atexit(sub_142d04fd0)
        _Init_thread_footer(&data_143f48e68)
        arg1[0x1e].d |= 1
        return arg1

arg1[0x1e].d |= 1
return arg1
