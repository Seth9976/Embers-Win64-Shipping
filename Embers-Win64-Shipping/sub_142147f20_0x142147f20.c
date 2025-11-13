// 函数: sub_142147f20
// 地址: 0x142147f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f4cd50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f4cd50)
    
    if (data_143f4cd50 == 0xffffffff)
        sub_140b58170(&data_143f4cd48, "Project", 1)
        _Init_thread_footer(&data_143f4cd50)

*arg2 = data_143f4cd48
return arg2
