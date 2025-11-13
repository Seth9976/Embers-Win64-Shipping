// 函数: sub_14078a880
// 地址: 0x14078a880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ce26e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce26e0)
    
    if (data_143ce26e0 == 0xffffffff)
        __builtin_memset(&data_143ce26c8, 0, 0x11)
        data_143ce26c0 = &data_142da8520
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143ce26e0)

return &data_143ce26c0
