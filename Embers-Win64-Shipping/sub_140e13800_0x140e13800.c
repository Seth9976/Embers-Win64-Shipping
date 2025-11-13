// 函数: sub_140e13800
// 地址: 0x140e13800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e27760 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e27760)
    
    if (data_143e27760 == 0xffffffff)
        sub_140ddbe10(&data_143e27290)
        atexit(sub_142ccacf0)
        _Init_thread_footer(&data_143e27760)

return &data_143e27290
