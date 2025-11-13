// 函数: sub_140a38850
// 地址: 0x140a38850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143d78e68 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143d78e68)
    
    if (data_143d78e68 == 0xffffffff)
        sub_140a36d40(&data_143cf8d78, data_14399e710)
        atexit(sub_142cbb0e0)
        _Init_thread_footer(&data_143d78e68)

return &data_143cf8d78
