// 函数: sub_1410f83c0
// 地址: 0x1410f83c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e53798 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e53798)
    
    if (data_143e53798 == 0xffffffff)
        data_143e53790 = 0
        atexit(sub_142cd1960)
        _Init_thread_footer(&data_143e53798)

int64_t rax_2 = *(arg1 + 0x40)

if (rax_2 == 0)
    return &data_143e53790

return rax_2 + 0x10
