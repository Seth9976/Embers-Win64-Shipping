// 函数: sub_1421078c0
// 地址: 0x1421078c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432d0558
__builtin_memset(&arg1[8], 0, 0x28)
TEB* gsbase

if (data_143f49590 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49590)
    
    if (data_143f49590 == 0xffffffff)
        _vfprintf_p_l(&data_143f49560, u"Color", u"MaterialExpression")
        _vfprintf_p_l(&data_143f49578, u"Utility", u"MaterialExpression")
        atexit(sub_142d03400)
        _Init_thread_footer(&data_143f49590)

*(arg1 + 0x68) = data_1432d45a0
return arg1
