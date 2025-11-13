// 函数: sub_1417b02f0
// 地址: 0x1417b02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ef83b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef83b0)
    
    if (data_143ef83b0 == 0xffffffff)
        sub_1417a21f0(&data_143ef8280)
        atexit(sub_142ceb140)
        _Init_thread_footer(&data_143ef83b0)

return &data_143ef8280
