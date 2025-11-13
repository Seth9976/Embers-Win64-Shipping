// 函数: sub_140fe76a0
// 地址: 0x140fe76a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2c0e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2c0e8)
    
    if (data_143e2c0e8 == 0xffffffff)
        data_143e2c0c8 = &data_142ef7028
        data_143e2c0d0 = 0
        data_143e2c0d8 = 0
        data_143e2c0e0 = 0
        atexit(sub_142cccb60)
        _Init_thread_footer(&data_143e2c0e8)

return &data_143e2c0c8
