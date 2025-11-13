// 函数: sub_140b3e400
// 地址: 0x140b3e400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7c80 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7c80)
    
    if (data_143de7c80 == 0xffffffff)
        data_143de7c70 = 0x9d75c5e
        data_143de7c74 = 0xa29a4194
        data_143de7c78 = 0x8e8e5278
        data_143de7c7c = 0xc84365fd
        _Init_thread_footer(&data_143de7c80)

return &data_143de7c70
