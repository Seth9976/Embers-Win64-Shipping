// 函数: sub_14078a9c0
// 地址: 0x14078a9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ce0df0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce0df0)
    
    if (data_143ce0df0 == 0xffffffff)
        __builtin_memset(&data_143ce0dd8, 0, 0x11)
        data_143ce0dd0 = &data_142da8070
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143ce0df0)

return &data_143ce0dd0
