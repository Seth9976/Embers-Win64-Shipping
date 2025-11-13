// 函数: sub_1420569f0
// 地址: 0x1420569f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f46e38 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f46e38)
    
    if (data_143f46e38 == 0xffffffff)
        __builtin_memset(&data_143f46e20, 0, 0x11)
        data_143f46e18 = &data_1432aa5c0
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143f46e38)

return &data_143f46e18
