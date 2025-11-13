// 函数: sub_142702210
// 地址: 0x142702210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f72490 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f72490)
    
    if (data_143f72490 == 0xffffffff)
        data_143f72488 = sub_14273f3a0()
        _Init_thread_footer(&data_143f72490)

void* rcx = data_143f72488

if (rcx != 0)
    sub_140bdef30(rcx, arg2, zx.q(*(arg1 + 0x1b8)))
    return arg2

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 8)
int32_t rax_3 = arg2[1].d + 8
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"Unknown", 0x10)
return arg2
