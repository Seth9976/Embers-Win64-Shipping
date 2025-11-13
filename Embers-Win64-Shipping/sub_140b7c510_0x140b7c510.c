// 函数: sub_140b7c510
// 地址: 0x140b7c510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e19fb0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e19fb0)
    
    if (data_143e19fb0 == 0xffffffff)
        sub_140b77ce0(&data_143e19eb0)
        atexit(&data_142cc0e50)
        _Init_thread_footer(&data_143e19fb0)

return &data_143e19eb0
