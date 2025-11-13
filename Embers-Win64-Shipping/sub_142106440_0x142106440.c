// 函数: sub_142106440
// 地址: 0x142106440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb650
__builtin_memset(&arg1[8], 0, 0x28)
TEB* gsbase

if (data_143f49368 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49368)
    
    if (data_143f49368 == 0xffffffff)
        _vfprintf_p_l(&data_143f49350, u"Math", u"MaterialExpression")
        atexit(sub_142d02b50)
        _Init_thread_footer(&data_143f49368)

return arg1
