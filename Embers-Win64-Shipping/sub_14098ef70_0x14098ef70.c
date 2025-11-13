// 函数: sub_14098ef70
// 地址: 0x14098ef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cedbe0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cedbe0)
    
    if (data_143cedbe0 == 0xffffffff)
        data_143cedbd0 = 0
        data_143cedbd8 = 0
        atexit(&data_142cb7900)
        _Init_thread_footer(&data_143cedbe0)

int64_t* result = *arg1

if (result != 0)
    return result

return &data_143cedbd0
