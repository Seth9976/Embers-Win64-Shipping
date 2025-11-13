// 函数: sub_140d214f0
// 地址: 0x140d214f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1d924 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d924)
    
    if (data_143e1d924 == 0xffffffff)
        atexit(sub_142cc31b0)
        _Init_thread_footer(&data_143e1d924)

return &data_1439aac90
