// 函数: sub_141223e40
// 地址: 0x141223e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e81740 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e81740)
    
    if (data_143e81740 == 0xffffffff)
        __builtin_memset(&data_143e81728, 0, 0x11)
        data_143e81720 = &data_142f3c2d8
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143e81740)

return &data_143e81720
