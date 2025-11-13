// 函数: sub_140e131e0
// 地址: 0x140e131e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e25168 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e25168)
    
    if (data_143e25168 == 0xffffffff)
        sub_140dd7030(&data_143e24db0)
        atexit(sub_142cca8d0)
        _Init_thread_footer(&data_143e25168)

return &data_143e24db0
