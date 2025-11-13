// 函数: sub_140b6b7d0
// 地址: 0x140b6b7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e18644 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e18644)
    
    if (data_143e18644 == 0xffffffff)
        atexit(sub_142cc0ce0)
        _Init_thread_footer(&data_143e18644)

return &data_1439a9568
