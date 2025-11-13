// 函数: sub_142297970
// 地址: 0x142297970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f53830 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f53830)
    
    if (data_143f53830 == 0xffffffff)
        __builtin_memset(&data_143f53818, 0, 0x11)
        data_143f53810 = &data_143314ee8
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143f53830)

return &data_143f53810
