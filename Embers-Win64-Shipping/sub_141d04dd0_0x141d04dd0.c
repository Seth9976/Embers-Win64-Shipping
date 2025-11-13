// 函数: sub_141d04dd0
// 地址: 0x141d04dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f368e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f368e8)
    
    if (data_143f368e8 == 0xffffffff)
        InitializeCriticalSection(&data_143f36890)
        SetCriticalSectionSpinCount(&data_143f36890, 0xfa0)
        data_143f368c0 = data_142e151c0
        data_143f368b8 = 0
        data_143f368d0 = 0
        data_143f368d8 = 0
        data_143f368e0 = 2
        atexit(sub_142cf7b80)
        _Init_thread_footer(&data_143f368e8)

return &data_143f36890
