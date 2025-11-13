// 函数: sub_140ca88d0
// 地址: 0x140ca88d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1acb8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1acb8)
    
    if (data_143e1acb8 == 0xffffffff)
        data_143e1acb0 = j_sub_140d2ee50(sub_140cddea0(), nullptr, u"/Script/CoreUObject", 0)
        _Init_thread_footer(&data_143e1acb8)

return sub_140d3f470(sub_140bdfe30(), data_143e1acb0, arg1, 0, 0, 0, 0)
