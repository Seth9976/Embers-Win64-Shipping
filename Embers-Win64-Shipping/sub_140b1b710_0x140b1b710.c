// 函数: sub_140b1b710
// 地址: 0x140b1b710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de69f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de69f0)
    
    if (data_143de69f0 == 0xffffffff)
        data_143de69e0 = 0x3dc5f60d
        data_143de69e4 = 0x934e4753
        data_143de69e8 = 0xa80cd6d0
        data_143de69ec = 0xe9eb4640
        _Init_thread_footer(&data_143de69f0)

return &data_143de69e0
