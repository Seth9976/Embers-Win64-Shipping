// 函数: sub_140a46310
// 地址: 0x140a46310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db52b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db52b0)
    
    if (data_143db52b0 == 0xffffffff)
        data_143db5260 = 0
        data_143db52a8 = &data_143db5220
        atexit(sub_142cbd0b0)
        _Init_thread_footer(&data_143db52b0)

return data_143db52a8
