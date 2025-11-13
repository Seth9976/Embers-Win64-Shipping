// 函数: sub_140b3e780
// 地址: 0x140b3e780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7b10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7b10)
    
    if (data_143de7b10 == 0xffffffff)
        data_143de7b00 = 0x3ed3a25
        data_143de7b04 = 0x85d94664
        data_143de7b08 = 0x8a8001a1
        data_143de7b0c = 0xdcc637f7
        _Init_thread_footer(&data_143de7b10)

return &data_143de7b00
