// 函数: sub_1421b8850
// 地址: 0x1421b8850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f4fa20 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f4fa20)
    
    if (data_143f4fa20 == 0xffffffff)
        data_143f4f9f8 = 0x3f800000
        data_143f4f9c0 = &data_1432ebbb0
        data_143f4f9fc = 0x3f800000
        data_143f4f9c8 = 0
        data_143f4f9d0 = 0
        data_143f4f9d8 = 0
        data_143f4f9e0 = 0
        data_143f4f9e8 = 0
        data_143f4f9f0 = 0
        data_143f4fa08 = 0
        data_143f4fa0c = 0
        data_143f4fa14 = 0
        data_143f4fa00 = 0x3f800000
        atexit(sub_142d078f0)
        _Init_thread_footer(&data_143f4fa20)

return &data_143f4f9c0
