// 函数: sub_142090dd0
// 地址: 0x142090dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f47960 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f47960)
    
    if (data_143f47960 == 0xffffffff)
        int128_t var_18 = zx.o(0)
        sub_142082670(&data_143a2e330, &var_18)
        data_143a2e371 = 0
        atexit(sub_142d01db0)
        _Init_thread_footer(&data_143f47960)

return &data_143a2e330
