// 函数: sub_1421098f0
// 地址: 0x1421098f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cf0b8
__builtin_memset(&arg1[8], 0, 0x28)
TEB* gsbase

if (data_143f49748 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49748)
    
    if (data_143f49748 == 0xffffffff)
        _vfprintf_p_l(&data_143f49730, u"Math", u"MaterialExpression")
        atexit(sub_142d03fc0)
        _Init_thread_footer(&data_143f49748)
        arg1[0xd].d = 0x40000000
        return arg1

arg1[0xd].d = 0x40000000
return arg1
