// 函数: sub_1417ea0b0
// 地址: 0x1417ea0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a387e0()
TEB* gsbase

if (data_143cd5b60 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd5b60)
    
    if (data_143cd5b60 == 0xffffffff)
        sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
        _Init_thread_footer(&data_143cd5b60)

data_143cd5b58
jump(*(data_14399e720 + 0x18))
