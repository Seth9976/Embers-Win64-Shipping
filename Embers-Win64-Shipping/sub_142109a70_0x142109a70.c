// 函数: sub_142109a70
// 地址: 0x142109a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb140
__builtin_memset(&arg1[8], 0, 0x50)
TEB* gsbase

if (data_143f49638 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49638)
    
    if (data_143f49638 == 0xffffffff)
        _vfprintf_p_l(&data_143f49620, u"Utility", u"MaterialExpression")
        atexit(sub_142d04060)
        _Init_thread_footer(&data_143f49638)

return arg1
