// 函数: sub_140a46220
// 地址: 0x140a46220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db5328 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db5328)
    
    if (data_143db5328 == 0xffffffff)
        __builtin_memset(&data_143db52b8, 0, 0x20)
        InitializeSRWLock(&data_143db52d8)
        data_143db52e0 = 0
        data_143db5320 = &data_143db52b8
        __builtin_memset(&data_143db52e8, 0, 0x38)
        atexit(sub_142cbd0a0)
        _Init_thread_footer(&data_143db5328)

return data_143db5320
