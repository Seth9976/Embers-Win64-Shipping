// 函数: sub_1417f08f0
// 地址: 0x1417f08f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ef9898 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef9898)
    
    if (data_143ef9898 == 0xffffffff)
        sub_140b58260(&data_143ef9890, u"XRSystemAssets", 1)
        _Init_thread_footer(&data_143ef9898)

*arg1 = data_143ef9890
return arg1
