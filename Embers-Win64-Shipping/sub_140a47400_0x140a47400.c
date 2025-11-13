// 函数: sub_140a47400
// 地址: 0x140a47400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db4970 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db4970)
    
    if (data_143db4970 == 0xffffffff)
        sub_140b0a740(&data_143db48d0)
        data_143db48d0 = &data_142e5e658
        data_143db4960 = zx.o(0)
        atexit(sub_142cbd090)
        _Init_thread_footer(&data_143db4970)

return &data_143db48d0
