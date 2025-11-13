// 函数: sub_140b3e880
// 地址: 0x140b3e880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7bd8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7bd8)
    
    if (data_143de7bd8 == 0xffffffff)
        data_143de7bc8 = 0xe7e1bc9
        data_143de7bcc = 0xf0b94d5d
        data_143de7bd0 = 0x80f44d45
        data_143de7bd4 = 0x85a082aa
        _Init_thread_footer(&data_143de7bd8)

return &data_143de7bc8
