// 函数: sub_140af4d50
// 地址: 0x140af4d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de5cc4 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5cc4)
    
    if (data_143de5cc4 == 0xffffffff)
        atexit(sub_142cbf5f0)
        _Init_thread_footer(&data_143de5cc4)

return &data_1439a04a8
