// 函数: sub_140a80c80
// 地址: 0x140a80c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9aa8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9aa8)
    
    if (data_143db9aa8 == 0xffffffff)
        sub_140a5bd30(&data_143db9a08)
        data_143db9aa0 = &data_143db9a08
        atexit(sub_142cbd740)
        _Init_thread_footer(&data_143db9aa8)

char* result = data_143db9aa0

if (result != 0 && *result != 0)
    result.b = 1
    return result

result.b = 0
return result
