// 函数: sub_1411e04e0
// 地址: 0x1411e04e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e80414 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e80414)
    
    if (data_143e80414 == 0xffffffff)
        __builtin_memset(&data_1439b62d8, 0, 0x11)
        data_1439b62d0 = &data_142f38528
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143e80414)

return &data_1439b62d0
