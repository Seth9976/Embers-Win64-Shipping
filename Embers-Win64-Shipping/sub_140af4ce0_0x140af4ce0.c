// 函数: sub_140af4ce0
// 地址: 0x140af4ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de5d08 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5d08)
    
    if (data_143de5d08 == 0xffffffff)
        atexit(sub_142cbf4a0)
        _Init_thread_footer(&data_143de5d08)

return &data_143de5cf8
