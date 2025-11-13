// 函数: sub_140a8dcd0
// 地址: 0x140a8dcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9aa8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9aa8)
    
    if (data_143db9aa8 == 0xffffffff)
        data_143db9aa0 = 0
        atexit(sub_142cbd740)
        _Init_thread_footer(&data_143db9aa8)

char* rcx_1 = data_143db9aa0

if (rcx_1 != 0)
    sub_140a63790(rcx_1)
    data_143db9aa0 = 0

return sub_140ac5c30() __tailcall
