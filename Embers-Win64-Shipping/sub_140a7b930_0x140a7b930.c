// 函数: sub_140a7b930
// 地址: 0x140a7b930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9688 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9688)
    
    if (data_143db9688 == 0xffffffff)
        data_143db9678 = 0
        data_143db9680 = 0
        atexit(sub_142cbd450)
        _Init_thread_footer(&data_143db9688)

int64_t* result = *(arg1 + 0x18)

if (result != 0)
    return result

return &data_143db9678
