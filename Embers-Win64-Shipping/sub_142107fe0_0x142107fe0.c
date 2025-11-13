// 函数: sub_142107fe0
// 地址: 0x142107fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb3c8
__builtin_memset(&arg1[8], 0, 0x64)
TEB* gsbase

if (data_143f49658 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49658)
    
    if (data_143f49658 == 0xffffffff)
        _vfprintf_p_l(&data_143f49640, u"Utility", u"MaterialExpression")
        atexit(sub_142d03660)
        _Init_thread_footer(&data_143f49658)

return arg1
