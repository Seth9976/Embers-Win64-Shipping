// 函数: sub_140a7af80
// 地址: 0x140a7af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9640 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9640)
    
    if (data_143db9640 == 0xffffffff)
        data_143db9630 = 0
        data_143db9638 = 0
        atexit(sub_142cbd390)
        _Init_thread_footer(&data_143db9640)

int64_t* result = *arg1

if (result != 0)
    return result

return &data_143db9630
