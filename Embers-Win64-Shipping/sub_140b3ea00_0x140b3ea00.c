// 函数: sub_140b3ea00
// 地址: 0x140b3ea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7a70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7a70)
    
    if (data_143de7a70 == 0xffffffff)
        data_143de7a60 = 0xcacbc715
        __builtin_strncpy(&data_143de7a64, "JkZP", 4)
        data_143de7a68 = 0x8808809f
        data_143de7a6c = 0x897aa5f6
        _Init_thread_footer(&data_143de7a70)

return &data_143de7a60
