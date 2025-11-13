// 函数: sub_140b3e280
// 地址: 0x140b3e280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7b58 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7b58)
    
    if (data_143de7b58 == 0xffffffff)
        data_143de7b48 = 0x48ff0754
        data_143de7b4c = 0x508941bb
        data_143de7b50 = 0x9d5447ff
        data_143de7b54 = 0xcac61362
        _Init_thread_footer(&data_143de7b58)

return &data_143de7b48
