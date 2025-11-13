// 函数: sub_142107bc0
// 地址: 0x142107bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cf0b8
__builtin_memset(&arg1[8], 0, 0x28)
TEB* gsbase

if (data_143f48ea8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f48ea8)
    
    if (data_143f48ea8 == 0xffffffff)
        _vfprintf_p_l(&data_143f48e90, u"Math", u"MaterialExpression")
        atexit(sub_142d03580)
        _Init_thread_footer(&data_143f48ea8)

arg1[0xd].d = 0x3f800000
*(arg1 + 0x6c) = 0x40000000
return arg1
