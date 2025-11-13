// 函数: sub_140b19e60
// 地址: 0x140b19e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6d04 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6d04)
    
    if (data_143de6d04 == 0xffffffff)
        data_1439a8bd8 = 0x100
        data_1439a8e60 = 0
        data_1439a8e68 = 0
        __builtin_memset(&data_1439a8e70, 0, 0x30)
        data_1439a8bd0 = &data_142e748c0
        data_1439a8e6c = 0x10
        uint32_t rax_3 = GetCurrentThreadId()
        data_1439a8ea4 = 0
        data_1439a8ea0 = rax_3
        data_1439a8ea8 = &data_1439a4b90
        InitializeCriticalSection(&data_1439a8eb0)
        SetCriticalSectionSpinCount(&data_1439a8eb0, 0xfa0)
        InitializeCriticalSection(&data_1439a8ed8)
        SetCriticalSectionSpinCount(&data_1439a8ed8, 0xfa0)
        InitializeCriticalSection(&data_1439a8f00)
        SetCriticalSectionSpinCount(&data_1439a8f00, 0xfa0)
        data_1439a8f28 = 0
        atexit(sub_142cbfc90)
        _Init_thread_footer(&data_143de6d04)

return &data_1439a8bd0
