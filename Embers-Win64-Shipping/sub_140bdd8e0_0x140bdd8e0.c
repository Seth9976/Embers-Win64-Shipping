// 函数: sub_140bdd8e0
// 地址: 0x140bdd8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1ac98 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1ac98)
    
    if (data_143e1ac98 == 0xffffffff)
        sub_140b0a740(&data_143e1ac00)
        data_143e1ac90 = 0
        data_143e1ac00 = &data_142e89978
        data_143e1ac10 = 1
        atexit(sub_142cc1e90)
        _Init_thread_footer(&data_143e1ac98)

return &data_143e1ac00
