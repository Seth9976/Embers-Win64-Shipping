// 函数: sub_140a7b010
// 地址: 0x140a7b010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9658 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9658)
    
    if (data_143db9658 == 0xffffffff)
        data_143db9648 = 0
        data_143db9650 = 0
        atexit(sub_142cbd3d0)
        _Init_thread_footer(&data_143db9658)

int64_t* result = *(arg1 + 8)

if (result != 0)
    return result

return &data_143db9648
