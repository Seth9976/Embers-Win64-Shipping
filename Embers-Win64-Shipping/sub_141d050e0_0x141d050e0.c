// 函数: sub_141d050e0
// 地址: 0x141d050e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f36858 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f36858)
    
    if (data_143f36858 == 0xffffffff)
        InitializeCriticalSection(&data_143a21100)
        SetCriticalSectionSpinCount(&data_143a21100, 0xfa0)
        atexit(sub_142cf7bb0)
        _Init_thread_footer(&data_143f36858)

return &data_143a210b0
