// 函数: sub_142109440
// 地址: 0x142109440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143023d68
__builtin_memset(&arg1[8], 0, 0x14)
TEB* gsbase

if (data_143f496b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f496b0)
    
    if (data_143f496b0 == 0xffffffff)
        _vfprintf_p_l(&data_143f49680, u"Math", u"MaterialExpression")
        _vfprintf_p_l(&data_143f49698, u"VectorOps", u"MaterialExpression")
        atexit(sub_142d03d60)
        _Init_thread_footer(&data_143f496b0)

return arg1
