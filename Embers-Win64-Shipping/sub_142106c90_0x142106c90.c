// 函数: sub_142106c90
// 地址: 0x142106c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142109690(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cf8a0
arg1[0xd].w = 0
__builtin_memset(arg1 + 0x74, 0, 0x14)
TEB* gsbase

if (data_143f495d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f495d8)
    
    if (data_143f495d8 == 0xffffffff)
        _vfprintf_p_l(&data_143f495c0, u"Utility", u"MaterialExpression")
        atexit(sub_142d02f00)
        _Init_thread_footer(&data_143f495d8)

*(arg1 + 0x58) = data_142d4cc00
arg1[0xe].b = 0
return arg1
