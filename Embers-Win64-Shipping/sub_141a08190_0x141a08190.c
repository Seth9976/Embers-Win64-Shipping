// 函数: sub_141a08190
// 地址: 0x141a08190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f28ad8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f28ad8)
    
    if (data_143f28ad8 == 0xffffffff)
        __builtin_memset(&data_143f28ac0, 0, 0x11)
        data_143f28ab8 = &data_14301dfa0
        atexit(Concurrency::details::SchedulerBase::OneShotStaticDestruction)
        _Init_thread_footer(&data_143f28ad8)

return &data_143f28ab8
