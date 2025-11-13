// 函数: sub_140e13880
// 地址: 0x140e13880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e27288 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e27288)
    
    if (data_143e27288 == 0xffffffff)
        sub_140ddc670(&data_143e26ac0)
        atexit(sub_142ccad90)
        _Init_thread_footer(&data_143e27288)

return &data_143e26ac0
