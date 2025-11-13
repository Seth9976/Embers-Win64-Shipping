// 函数: sub_141a1c070
// 地址: 0x141a1c070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142105d70(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143024278
__builtin_memset(&arg1[8], 0, 0x30)
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0
TEB* gsbase

if (data_143f293e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f293e0)
    
    if (data_143f293e0 == 0xffffffff)
        _vfprintf_p_l(&data_143f293c8, u"Landscape", u"Landscape")
        atexit(sub_142cf4940)
        _Init_thread_footer(&data_143f293e0)
        arg1[7].b |= 1
        arg1[0xe].d |= 1
        return arg1

arg1[7].b |= 1
arg1[0xe].d |= 1
return arg1
