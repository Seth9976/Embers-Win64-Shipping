// 函数: sub_1408ca470
// 地址: 0x1408ca470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cebb78 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cebb78)
    
    if (data_143cebb78 == 0xffffffff)
        data_143cebb68 = 0
        data_143cebb70 = 0
        _Init_thread_footer(&data_143cebb78)

return &data_143cebb68
