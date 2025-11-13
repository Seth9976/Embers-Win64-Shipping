// 函数: sub_14210a190
// 地址: 0x14210a190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cbb60
__builtin_memset(&arg1[8], 0, 0x3c)
arg1[0x11].w = 0x100
*(arg1 + 0x8a) = 0
TEB* gsbase

if (data_143f48bb0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f48bb0)
    
    if (data_143f48bb0 == 0xffffffff)
        _vfprintf_p_l(&data_143f48b98, u"VirtualTexture", u"MaterialExpression")
        atexit(sub_142d04330)
        _Init_thread_footer(&data_143f48bb0)

return arg1
