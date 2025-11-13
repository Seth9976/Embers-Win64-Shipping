// 函数: sub_140af4dc0
// 地址: 0x140af4dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de5cd8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5cd8)
    
    if (data_143de5cd8 == 0xffffffff)
        atexit(sub_142cbf550)
        _Init_thread_footer(&data_143de5cd8)

return &data_143de5cc8
