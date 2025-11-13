// 函数: sub_142108b50
// 地址: 0x142108b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb8d8
__builtin_memset(&arg1[8], 0, 0x230)
TEB* gsbase

if (data_143f493e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f493e0)
    
    if (data_143f493e0 == 0xffffffff)
        _vfprintf_p_l(&data_143f493c8, u"Material Attributes", u"MaterialExpression")
        atexit(sub_142d03af0)
        _Init_thread_footer(&data_143f493e0)

return arg1
