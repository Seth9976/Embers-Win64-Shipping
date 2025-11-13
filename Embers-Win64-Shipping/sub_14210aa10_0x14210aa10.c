// 函数: sub_14210aa10
// 地址: 0x14210aa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cd810
__builtin_memset(&arg1[8], 0, 0x3c)
TEB* gsbase

if (data_143f4a108 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f4a108)
    
    if (data_143f4a108 == 0xffffffff)
        _vfprintf_p_l(&data_143f4a0f0, u"Water", u"MaterialExpression")
        atexit(sub_142d04600)
        _Init_thread_footer(&data_143f4a108)

return arg1
