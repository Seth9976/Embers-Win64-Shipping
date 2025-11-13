// 函数: sub_14210b2a0
// 地址: 0x14210b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142109690(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cc598
__builtin_memset(&arg1[0xb], 0, 0x14)
TEB* gsbase

if (data_143f49130 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49130)
    
    if (data_143f49130 == 0xffffffff)
        _vfprintf_p_l(&data_143f49118, u"Parameters", u"MaterialExpression")
        atexit(sub_142d04970)
        _Init_thread_footer(&data_143f49130)

return arg1
