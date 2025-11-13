// 函数: sub_140ab24c0
// 地址: 0x140ab24c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9f78 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9f78)
    
    if (data_143db9f78 == 0xffffffff)
        data_143db9f68 = 0x460b9845
        data_143db9f6c = 0xaaa9420c
        data_143db9f70 = 0x8125f5c5
        data_143db9f74 = 0xe13995df
        _Init_thread_footer(&data_143db9f78)

return &data_143db9f68
