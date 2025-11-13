// 函数: sub_140e133e0
// 地址: 0x140e133e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e26350 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e26350)
    
    if (data_143e26350 == 0xffffffff)
        sub_140dd8090(&data_143e26230)
        atexit(sub_142cca990)
        _Init_thread_footer(&data_143e26350)

return &data_143e26230
