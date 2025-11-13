// 函数: sub_140823f90
// 地址: 0x140823f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ce41f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce41f0)
    
    if (data_143ce41f0 == 0xffffffff)
        __builtin_memset(&data_143ce41d8, 0, 0x11)
        data_143ce41d0 = &data_142dd66a0
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143ce41f0)

return &data_143ce41d0
