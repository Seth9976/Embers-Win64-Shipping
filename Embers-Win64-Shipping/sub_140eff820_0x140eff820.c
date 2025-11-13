// 函数: sub_140eff820
// 地址: 0x140eff820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143e2a110

if (result != 0)
    return result

TEB* gsbase

if (data_143e2a140 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2a140)
    
    if (data_143e2a140 == 0xffffffff)
        InitializeCriticalSection(&data_143e2a118)
        SetCriticalSectionSpinCount(&data_143e2a118, 0xfa0)
        atexit(&data_142ccb620)
        _Init_thread_footer(&data_143e2a140)

EnterCriticalSection(&data_143e2a118)

if (data_143e2a110 == 0)
    void* const rax_2 = j_sub_140a82f30(0x40)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        __builtin_memset(rax_2, 0, 0x20)
        *(rax_2 + 0x28) = 0
        *(rax_2 + 0x38) = 1
    
    data_143e2a110 = rax_2

LeaveCriticalSection(&data_143e2a118)
return data_143e2a110
