// 函数: sub_140e13010
// 地址: 0x140e13010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e24da8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e24da8)
    
    if (data_143e24da8 == 0xffffffff)
        sub_140dd6180(&data_143e24b30)
        atexit(sub_142cca820)
        _Init_thread_footer(&data_143e24da8)

return &data_143e24b30
