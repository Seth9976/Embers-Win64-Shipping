// 函数: sub_140a463a0
// 地址: 0x140a463a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db5218 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db5218)
    
    if (data_143db5218 == 0xffffffff)
        data_143db51c8 = 0
        data_143db5210 = &data_143db5188
        atexit(sub_142cbd0c0)
        _Init_thread_footer(&data_143db5218)

return data_143db5210
