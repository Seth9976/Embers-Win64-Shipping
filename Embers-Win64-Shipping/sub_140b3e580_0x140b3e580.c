// 函数: sub_140b3e580
// 地址: 0x140b3e580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7c50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7c50)
    
    if (data_143de7c50 == 0xffffffff)
        data_143de7c40 = 0x8c0a46b0
        data_143de7c44 = 0x8daa4e2b
        data_143de7c48 = 0xa7fe4a23
        data_143de7c4c = 0xef215918
        _Init_thread_footer(&data_143de7c50)

return &data_143de7c40
