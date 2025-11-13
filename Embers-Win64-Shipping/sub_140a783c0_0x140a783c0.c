// 函数: sub_140a783c0
// 地址: 0x140a783c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9738 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9738)
    
    if (data_143db9738 == 0xffffffff)
        void arg_8
        sub_140a67f80(&arg_8, &data_143db9690)
        atexit(sub_142cbd280)
        _Init_thread_footer(&data_143db9738)

return &data_143db9690
