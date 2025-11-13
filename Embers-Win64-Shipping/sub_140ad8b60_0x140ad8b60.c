// 函数: sub_140ad8b60
// 地址: 0x140ad8b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbb2a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb2a0)
    
    if (data_143dbb2a0 == 0xffffffff)
        data_143dbb290 = 0xe6240779
        data_143dbb294 = 0xee2849cf
        data_143dbb298 = 0x95a0e648
        data_143dbb29c = 0x22d58713
        _Init_thread_footer(&data_143dbb2a0)

return &data_143dbb290
