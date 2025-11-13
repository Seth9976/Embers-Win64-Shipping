// 函数: sub_140b508e0
// 地址: 0x140b508e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de9050 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de9050)
    
    if (data_143de9050 == 0xffffffff)
        InitializeSRWLock(&data_143de8578)
        data_143de8f9c = 0x40
        data_143de8580 = 0
        data_143de8588 = 0
        data_143de8f90 = 0
        data_143de8f98 = 0
        data_143de8fa8 = 0
        data_143de8fb0 = 0
        data_143de8fa4 = 0
        data_143de8fbc = 0
        data_143de9040 = 0
        data_143de9048 = 0
        data_143de8fb4 = 0x40
        data_143de8fb8 = 0xffffffff
        atexit(sub_142cc0930)
        _Init_thread_footer(&data_143de9050)

return &data_143de8578
