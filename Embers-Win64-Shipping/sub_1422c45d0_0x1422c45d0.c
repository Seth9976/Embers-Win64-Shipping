// 函数: sub_1422c45d0
// 地址: 0x1422c45d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f54a30 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f54a30)
    
    if (data_143f54a30 == 0xffffffff)
        __builtin_memset(&data_143f54a18, 0, 0x11)
        data_143f54a10 = &data_143317590
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143f54a30)

return &data_143f54a10
