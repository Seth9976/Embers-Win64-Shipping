// 函数: sub_142106380
// 地址: 0x142106380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb650
__builtin_memset(&arg1[8], 0, 0x28)
TEB* gsbase

if (data_143f49348 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49348)
    
    if (data_143f49348 == 0xffffffff)
        _vfprintf_p_l(&data_143f49330, u"Math", u"MaterialExpression")
        atexit(sub_142d02b00)
        _Init_thread_footer(&data_143f49348)

return arg1
