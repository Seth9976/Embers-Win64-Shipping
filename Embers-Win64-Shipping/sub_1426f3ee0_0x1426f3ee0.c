// 函数: sub_1426f3ee0
// 地址: 0x1426f3ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_142d44b10
TEB* gsbase

if (data_143f724a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f724a8)
    
    if (data_143f724a8 == 0xffffffff)
        sub_1426f2050(&data_143f724a4)
        _Init_thread_footer(&data_143f724a8)

return arg1
