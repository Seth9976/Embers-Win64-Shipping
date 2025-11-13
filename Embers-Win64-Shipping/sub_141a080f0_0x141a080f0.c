// 函数: sub_141a080f0
// 地址: 0x141a080f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f28b00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f28b00)
    
    if (data_143f28b00 == 0xffffffff)
        __builtin_memset(&data_143f28ae8, 0, 0x11)
        data_143f28ae0 = &data_14301e040
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143f28b00)

return &data_143f28ae0
