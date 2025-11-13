// 函数: sub_1421079a0
// 地址: 0x1421079a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb650
__builtin_memset(&arg1[8], 0, 0x28)
TEB* gsbase

if (data_143f49fa0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49fa0)
    
    if (data_143f49fa0 == 0xffffffff)
        _vfprintf_p_l(&data_143f49f88, u"Utility", u"MaterialExpression")
        atexit(sub_142d03490)
        _Init_thread_footer(&data_143f49fa0)

return arg1
