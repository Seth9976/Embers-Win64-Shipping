// 函数: sub_142109690
// 地址: 0x142109690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432c8ff8
__builtin_memset(&arg1[8], 0, 0x18)
TEB* gsbase

if (data_143f495b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f495b8)
    
    if (data_143f495b8 == 0xffffffff)
        _vfprintf_p_l(&data_143f49598, u"Parameters", u"MaterialExpression")
        data_143f495b0 = data_143f48aa0
        atexit(sub_142d03e90)
        _Init_thread_footer(&data_143f495b8)

arg1[7].b |= 1
arg1[8] = data_143f495b0
return arg1
