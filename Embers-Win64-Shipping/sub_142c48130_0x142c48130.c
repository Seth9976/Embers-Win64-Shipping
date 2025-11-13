// 函数: sub_142c48130
// 地址: 0x142c48130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_14401a868 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_14401a868)
    
    if (data_14401a868 == 0xffffffff)
        data_14401a838 = &CSingletonCriticalSection::`vftable'
        InitializeCriticalSection(&data_14401a840)
        atexit(sub_142d161e0)
        _Init_thread_footer(&data_14401a868)

return &data_14401a838
