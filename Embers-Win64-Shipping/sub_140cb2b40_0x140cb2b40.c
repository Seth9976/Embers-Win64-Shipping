// 函数: sub_140cb2b40
// 地址: 0x140cb2b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143e1b380 s> result)
    result = _Init_thread_header(&data_143e1b380)
    
    if (data_143e1b380 == 0xffffffff)
        InitializeCriticalSection(&data_143e1b350)
        SetCriticalSectionSpinCount(&data_143e1b350, 0xfa0)
        data_143e1b378 = sub_140a491d0(1)
        data_143e1adf0 = &data_143e1b340
        atexit(sub_142cc2210)
        return _Init_thread_footer(&data_143e1b380)

return result
