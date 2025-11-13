// 函数: sub_140a387e0
// 地址: 0x140a387e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cf8d70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cf8d70)
    
    if (data_143cf8d70 == 0xffffffff)
        atexit(sub_142cbb0a0)
        _Init_thread_footer(&data_143cf8d70)

return &data_14399e720
