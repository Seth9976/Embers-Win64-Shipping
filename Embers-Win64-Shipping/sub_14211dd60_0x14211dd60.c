// 函数: sub_14211dd60
// 地址: 0x14211dd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f4c000 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f4c000)
    
    if (data_143f4c000 == 0xffffffff)
        data_143f4bfe0 = 0x400
        __builtin_memset(&data_143f4bfb0, 0, 0x30)
        data_143f4bfe4 = 0
        data_143f4bff0 = &data_14399e5d8
        data_143f4bff8 = 0
        data_143f4bfe8 = 0
        atexit(sub_142d05740)
        _Init_thread_footer(&data_143f4c000)

return sub_14211db80(&data_143f4bfb0, arg1, arg2) __tailcall
