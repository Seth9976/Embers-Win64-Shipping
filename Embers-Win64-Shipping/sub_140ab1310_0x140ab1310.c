// 函数: sub_140ab1310
// 地址: 0x140ab1310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dba370 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dba370)
    
    if (data_143dba370 == 0xffffffff)
        data_143dba360 = zx.o(0)
        atexit(sub_142cbda00)
        _Init_thread_footer(&data_143dba370)

return &data_143dba360
