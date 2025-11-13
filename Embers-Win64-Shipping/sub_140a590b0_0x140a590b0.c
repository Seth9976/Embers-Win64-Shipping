// 函数: sub_140a590b0
// 地址: 0x140a590b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db79f8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db79f8)
    
    if (data_143db79f8 == 0xffffffff)
        InitializeCriticalSection(&data_143db79d0)
        SetCriticalSectionSpinCount(&data_143db79d0, 0xfa0)
        atexit(sub_142cbd120)
        _Init_thread_footer(&data_143db79f8)

return &data_143db79d0
