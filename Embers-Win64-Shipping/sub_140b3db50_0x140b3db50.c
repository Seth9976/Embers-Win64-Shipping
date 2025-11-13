// 函数: sub_140b3db50
// 地址: 0x140b3db50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de8150 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de8150)
    
    if (data_143de8150 == 0xffffffff)
        sub_140b2ee20(&data_143de7d78)
        data_143de8148 = 1
        atexit(sub_142cc0750)
        _Init_thread_footer(&data_143de8150)

return &data_143de7d78
