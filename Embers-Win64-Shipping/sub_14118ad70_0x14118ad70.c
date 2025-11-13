// 函数: sub_14118ad70
// 地址: 0x14118ad70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e74830 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e74830)
    
    if (data_143e74830 == 0xffffffff)
        __builtin_memset(&data_143e74818, 0, 0x11)
        data_143e74810 = &data_142f285d8
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143e74830)

return &data_143e74810
