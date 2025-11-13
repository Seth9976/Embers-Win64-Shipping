// 函数: sub_142112bc0
// 地址: 0x142112bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f48b40 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48b40)
    
    if (data_143f48b40 == 0xffffffff)
        data_143f48b38 = sub_1425461d0()
        _Init_thread_footer(&data_143f48b40)

sub_140bdef30(data_143f48b38, arg1, sx.q(arg2))
return arg1
