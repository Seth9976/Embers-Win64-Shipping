// 函数: sub_140b3cf90
// 地址: 0x140b3cf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7af8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7af8)
    
    if (data_143de7af8 == 0xffffffff)
        InitializeCriticalSection(&data_143de7a80)
        SetCriticalSectionSpinCount(&data_143de7a80, 0xfa0)
        data_143de7ad4 = 0x80
        __builtin_memset(&data_143de7aa8, 0, 0x2c)
        data_143de7adc = 0
        data_143de7ae8 = 0
        data_143de7af0 = 0
        data_143de7ad8 = 0xffffffff
        atexit(sub_142cc0590)
        _Init_thread_footer(&data_143de7af8)

return &data_143de7a80
