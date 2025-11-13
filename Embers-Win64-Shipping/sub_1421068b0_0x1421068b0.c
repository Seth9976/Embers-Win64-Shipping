// 函数: sub_1421068b0
// 地址: 0x1421068b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cf618
__builtin_memset(&arg1[8], 0, 0x46)
TEB* gsbase

if (data_143f49440 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49440)
    
    if (data_143f49440 == 0xffffffff)
        _vfprintf_p_l(&data_143f49428, u"Material Attributes", u"MaterialExpression")
        atexit(sub_142d02d30)
        _Init_thread_footer(&data_143f49440)

return arg1
