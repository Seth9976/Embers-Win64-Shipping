// 函数: sub_140dc2030
// 地址: 0x140dc2030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e29158 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e29158)
    
    if (data_143e29158 == 0xffffffff)
        __builtin_memcpy(&data_143e29130, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 0x11)
        data_143e29148 = zx.o(0)
        atexit(sub_142ccaec0)
        _Init_thread_footer(&data_143e29158)

sub_140dd9fa0(arg2, &data_143e29130)
return arg2
