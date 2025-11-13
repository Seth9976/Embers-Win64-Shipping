// 函数: sub_140bc86a0
// 地址: 0x140bc86a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1aabc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1aabc)
    
    if (data_143e1aabc == 0xffffffff)
        InitializeCriticalSection(&data_1439a99d8)
        SetCriticalSectionSpinCount(&data_1439a99d8, 0xfa0)
        atexit(sub_142cc19d0)
        _Init_thread_footer(&data_143e1aabc)

return &data_1439a9900
