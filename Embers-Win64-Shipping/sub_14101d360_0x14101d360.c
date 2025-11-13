// 函数: sub_14101d360
// 地址: 0x14101d360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2c460 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2c460)
    
    if (data_143e2c460 == 0xffffffff)
        __builtin_memset(&data_143e2c448, 0, 0x11)
        data_143e2c440 = &data_142effd48
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143e2c460)

return &data_143e2c440
