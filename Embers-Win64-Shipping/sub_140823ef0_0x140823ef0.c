// 函数: sub_140823ef0
// 地址: 0x140823ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ce3d78 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce3d78)
    
    if (data_143ce3d78 == 0xffffffff)
        __builtin_memset(&data_143ce3d60, 0, 0x11)
        data_143ce3d58 = &data_142dd5b70
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143ce3d78)

return &data_143ce3d58
