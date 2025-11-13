// 函数: sub_140b3e480
// 地址: 0x140b3e480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7b40 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7b40)
    
    if (data_143de7b40 == 0xffffffff)
        data_143de7b30 = 0xe11f9937
        data_143de7b34 = 0xaf714ac5
        data_143de7b38 = 0x88a4e04e
        __builtin_strncpy(&data_143de7b3c, "<u:r", 4)
        _Init_thread_footer(&data_143de7b40)

return &data_143de7b30
