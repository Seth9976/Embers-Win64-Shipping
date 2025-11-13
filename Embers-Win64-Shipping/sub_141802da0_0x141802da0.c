// 函数: sub_141802da0
// 地址: 0x141802da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ef9de0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef9de0)
    
    if (data_143ef9de0 == 0xffffffff)
        atexit(sub_142cebe00)
        _Init_thread_footer(&data_143ef9de0)

int64_t* rcx = *(arg1 + 0xb0)

if (rcx == 0)
    return &data_143ef9dd0

jump(*(*rcx + 0x10))
