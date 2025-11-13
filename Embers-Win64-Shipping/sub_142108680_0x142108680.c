// 函数: sub_142108680
// 地址: 0x142108680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432d0f78
__builtin_memset(&arg1[8], 0, 0x28)
TEB* gsbase

if (data_143f49400 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49400)
    
    if (data_143f49400 == 0xffffffff)
        _vfprintf_p_l(&data_143f493e8, u"Material Attributes", u"MaterialExpression")
        atexit(sub_142d038d0)
        _Init_thread_footer(&data_143f49400)

return arg1
