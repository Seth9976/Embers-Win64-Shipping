// 函数: sub_1421083f0
// 地址: 0x1421083f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cf618
__builtin_memset(&arg1[8], 0, 0x14)
__builtin_memset(&arg1[0xb], 0, 0x14)
__builtin_memset(&arg1[0xe], 0, 0x14)
TEB* gsbase

if (data_143f49868 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49868)
    
    if (data_143f49868 == 0xffffffff)
        _vfprintf_p_l(&data_143f49850, u"Utility", u"MaterialExpression")
        atexit(sub_142d03830)
        _Init_thread_footer(&data_143f49868)

*(arg1 + 0x54) = 0x40a00000
*(arg1 + 0x6c) = 0x3d23d70a
return arg1
