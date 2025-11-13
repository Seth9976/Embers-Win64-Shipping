// 函数: sub_14199cac0
// 地址: 0x14199cac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f1b788 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f1b788)
    
    if (data_143f1b788 == 0xffffffff)
        __builtin_memset(&data_143f1b770, 0, 0x11)
        data_143f1b768 = &data_143009d08
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143f1b788)

return &data_143f1b768
