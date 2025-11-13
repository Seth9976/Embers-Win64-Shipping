// 函数: sub_140b1b610
// 地址: 0x140b1b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de69d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de69d8)
    
    if (data_143de69d8 == 0xffffffff)
        data_143de69c8 = 0x4edaa92f
        data_143de69cc = 0xb75e4b9e
        data_143de69d0 = 0xb7e0abc2
        data_143de69d4 = 0x8d981fcb
        _Init_thread_footer(&data_143de69d8)

return &data_143de69c8
