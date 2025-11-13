// 函数: sub_141a1be60
// 地址: 0x141a1be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142105d70(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143023ae0
__builtin_memset(&arg1[8], 0, 0x20)
TEB* gsbase

if (data_143f29380 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f29380)
    
    if (data_143f29380 == 0xffffffff)
        _vfprintf_p_l(&data_143f29368, u"Landscape", u"Landscape")
        atexit(sub_142cf4850)
        _Init_thread_footer(&data_143f29380)

return arg1
