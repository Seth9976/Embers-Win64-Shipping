// 函数: sub_140ba9350
// 地址: 0x140ba9350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1a7a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1a7a0)
    
    if (data_143e1a7a0 == 0xffffffff)
        sub_140b94d70(&data_143e1a650)
        atexit(sub_142cc17f0)
        _Init_thread_footer(&data_143e1a7a0)

return &data_143e1a650
