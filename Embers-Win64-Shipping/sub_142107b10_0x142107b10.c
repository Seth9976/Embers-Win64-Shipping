// 函数: sub_142107b10
// 地址: 0x142107b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143023d68
__builtin_memset(&arg1[8], 0, 0x14)
TEB* gsbase

if (data_143f49f60 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49f60)
    
    if (data_143f49f60 == 0xffffffff)
        _vfprintf_p_l(&data_143f49f48, u"Utility", u"MaterialExpression")
        atexit(sub_142d03530)
        _Init_thread_footer(&data_143f49f60)

return arg1
