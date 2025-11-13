// 函数: sub_1413defe0
// 地址: 0x1413defe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ece160 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ece160)
    
    if (data_143ece160 == 0xffffffff)
        __builtin_memset(&data_143ece148, 0, 0x11)
        data_143ece140 = &data_142f77498
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143ece160)

return &data_143ece140
