// 函数: sub_141a08230
// 地址: 0x141a08230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f28ab0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f28ab0)
    
    if (data_143f28ab0 == 0xffffffff)
        __builtin_memset(&data_143f28a98, 0, 0x11)
        data_143f28a90 = &data_14301df00
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143f28ab0)

return &data_143f28a90
