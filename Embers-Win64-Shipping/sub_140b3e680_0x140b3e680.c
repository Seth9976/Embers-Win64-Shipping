// 函数: sub_140b3e680
// 地址: 0x140b3e680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7c20 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7c20)
    
    if (data_143de7c20 == 0xffffffff)
        data_143de7c10 = 0x8f445a19
        data_143de7c14 = 0xf33443d9
        data_143de7c18 = 0x90d6dc85
        data_143de7c1c = 0xb0c5d071
        _Init_thread_footer(&data_143de7c20)

return &data_143de7c10
