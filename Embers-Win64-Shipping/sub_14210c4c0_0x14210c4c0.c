// 函数: sub_14210c4c0
// 地址: 0x14210c4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb650
__builtin_memset(&arg1[8], 0, 0x14)
TEB* gsbase

if (data_143f49f20 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49f20)
    
    if (data_143f49f20 == 0xffffffff)
        _vfprintf_p_l(&data_143f49f08, u"Utility", u"MaterialExpression")
        atexit(sub_142d05270)
        _Init_thread_footer(&data_143f49f20)

*(arg1 + 0x5c) &= 0xfffffffe
arg1[0xb].d = 1
*(arg1 + 0x54) = 0
arg1[0xc].d = 0x12c
return arg1
