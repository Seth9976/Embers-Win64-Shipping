// 函数: sub_140af4c70
// 地址: 0x140af4c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de5cf0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5cf0)
    
    if (data_143de5cf0 == 0xffffffff)
        atexit(sub_142cbf430)
        _Init_thread_footer(&data_143de5cf0)

return &data_143de5ce0
