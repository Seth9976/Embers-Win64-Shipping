// 函数: sub_1420776d0
// 地址: 0x1420776d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1420775d0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432b9ce0
arg1[5] = &data_1432b9f60
TEB* gsbase

if (data_143f47d98 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f47d98)
    
    if (data_143f47d98 == 0xffffffff)
        sub_140b58260(&data_143f47d90, u"DirGroup", 1)
        _Init_thread_footer(&data_143f47d98)

arg1[8] = data_143f47d90
return arg1
