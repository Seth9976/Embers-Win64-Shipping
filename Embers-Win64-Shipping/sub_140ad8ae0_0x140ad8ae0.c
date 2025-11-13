// 函数: sub_140ad8ae0
// 地址: 0x140ad8ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbb318 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb318)
    
    if (data_143dbb318 == 0xffffffff)
        data_143dbb308 = 0x4afe0cf8
        data_143dbb30c = 0xf9054360
        data_143dbb310 = 0xbe5dce80
        data_143dbb314 = 0xdc2e22f6
        _Init_thread_footer(&data_143dbb318)

return &data_143dbb308
