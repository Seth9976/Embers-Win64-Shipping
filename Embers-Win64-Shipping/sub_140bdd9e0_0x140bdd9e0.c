// 函数: sub_140bdd9e0
// 地址: 0x140bdd9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1abe8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1abe8)
    
    if (data_143e1abe8 == 0xffffffff)
        atexit(sub_142cc1cc0)
        _Init_thread_footer(&data_143e1abe8)

return &data_1439a9be0
