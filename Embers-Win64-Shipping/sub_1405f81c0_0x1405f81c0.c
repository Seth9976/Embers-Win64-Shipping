// 函数: sub_1405f81c0
// 地址: 0x1405f81c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cd9d04 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd9d04)
    
    if (data_143cd9d04 == 0xffffffff)
        data_143cd9d00 = 0
        _Init_thread_footer(&data_143cd9d04)
        uint64_t rax_3 = zx.q(data_143cd9d00)
        data_143cd9d00 += 1
        return rax_3

uint64_t rax_2 = zx.q(data_143cd9d00)
data_143cd9d00 += 1
return rax_2
