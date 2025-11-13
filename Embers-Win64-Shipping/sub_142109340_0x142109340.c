// 函数: sub_142109340
// 地址: 0x142109340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cb140
__builtin_memset(&arg1[8], 0, 0x28)
TEB* gsbase

if (data_143f49f00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49f00)
    
    if (data_143f49f00 == 0xffffffff)
        _vfprintf_p_l(&data_143f49ee8, u"Utility", u"MaterialExpression")
        atexit(sub_142d03d10)
        _Init_thread_footer(&data_143f49f00)

*(arg1 + 0x74) |= 1
arg1[0x11].d &= 0xfffffffe
arg1[0xd].d = 0x3f800000
arg1[0xf].d = 6
*(arg1 + 0x6c) = 1
*(arg1 + 0x7c) = 0xbf800000
arg1[0x10].d = 0x3f800000
*(arg1 + 0x84) = 0x40000000
arg1[0xe].b = 0
*(arg1 + 0x8c) = 0x200
return arg1
