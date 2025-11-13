// 函数: sub_140a7b8a0
// 地址: 0x140a7b8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9670 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9670)
    
    if (data_143db9670 == 0xffffffff)
        data_143db9660 = 0
        data_143db9668 = 0
        atexit(sub_142cbd410)
        _Init_thread_footer(&data_143db9670)

int64_t* result = *(arg1 + 0x10)

if (result != 0)
    return result

return &data_143db9660
