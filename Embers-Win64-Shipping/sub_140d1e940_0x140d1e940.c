// 函数: sub_140d1e940
// 地址: 0x140d1e940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e1d8b0 s> *rbx_1)
    _Init_thread_header(&data_143e1d8b0)
    
    if (data_143e1d8b0 == 0xffffffff)
        sub_140b58260(&data_143e1d8a8, u"Class", 1)
        _Init_thread_footer(&data_143e1d8b0)

if (data_143e1d8c0 s> *rbx_1)
    _Init_thread_header(&data_143e1d8c0)
    
    if (data_143e1d8c0 == 0xffffffff)
        sub_140b58260(&data_143e1d8b8, u"Outer", 1)
        _Init_thread_footer(&data_143e1d8c0)

sub_140cb8370(arg1, 0x10, &data_143e1d8a8, 2)
return sub_140cb8370(arg1, 0x20, &data_143e1d8b8, 3) __tailcall
