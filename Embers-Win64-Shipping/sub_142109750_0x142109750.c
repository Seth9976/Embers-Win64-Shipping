// 函数: sub_142109750
// 地址: 0x142109750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14210ba10(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432d21b0
TEB* gsbase

if (data_143f496d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f496d0)
    
    if (data_143f496d0 == 0xffffffff)
        _vfprintf_p_l(&data_143f496b8, u"Particles", u"MaterialExpression")
        atexit(sub_142d03ee0)
        _Init_thread_footer(&data_143f496d0)
        arg1[0x1a].d |= 1
        return arg1

arg1[0x1a].d |= 1
return arg1
