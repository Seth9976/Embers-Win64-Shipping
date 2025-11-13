// 函数: sub_14210b350
// 地址: 0x14210b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432d0cf0
__builtin_memset(arg1 + 0x44, 0, 0x3c)
TEB* gsbase

if (data_143f495f8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f495f8)
    
    if (data_143f495f8 == 0xffffffff)
        _vfprintf_p_l(&data_143f495e0, u"Functions", u"MaterialExpression")
        atexit(sub_142d049c0)
        _Init_thread_footer(&data_143f495f8)

return arg1
