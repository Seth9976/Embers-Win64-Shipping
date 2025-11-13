// 函数: sub_140609380
// 地址: 0x140609380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cda8e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cda8e8)
    
    if (data_143cda8e8 == 0xffffffff)
        sub_140b58260(&data_143cda8e0, u"WmfMedia", 1)
        _Init_thread_footer(&data_143cda8e8)

*arg2 = data_143cda8e0
return arg2
