// 函数: sub_140ad8ce0
// 地址: 0x140ad8ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbb270 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb270)
    
    if (data_143dbb270 == 0xffffffff)
        data_143dbb260 = 0x6f88756b
        data_143dbb264 = 0xf9234263
        data_143dbb268 = 0x9b13614f
        data_143dbb26c = 0x2706074b
        _Init_thread_footer(&data_143dbb270)

return &data_143dbb260
