// 函数: sub_142107470
// 地址: 0x142107470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb650
__builtin_memset(&arg1[8], 0, 0x28)
TEB* gsbase

if (data_143f490d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f490d8)
    
    if (data_143f490d8 == 0xffffffff)
        _vfprintf_p_l(&data_143f490a8, u"Math", u"MaterialExpression")
        _vfprintf_p_l(&data_143f490c0, u"VectorOps", u"MaterialExpression")
        atexit(sub_142d03320)
        _Init_thread_footer(&data_143f490d8)

return arg1
