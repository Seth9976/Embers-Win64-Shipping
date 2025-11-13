// 函数: sub_1421089f0
// 地址: 0x1421089f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143023d68
__builtin_memset(&arg1[8], 0, 0x14)
TEB* gsbase

if (data_143f49788 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49788)
    
    if (data_143f49788 == 0xffffffff)
        _vfprintf_p_l(&data_143f49770, u"Math", u"MaterialExpression")
        atexit(sub_142d03a50)
        _Init_thread_footer(&data_143f49788)

return arg1
