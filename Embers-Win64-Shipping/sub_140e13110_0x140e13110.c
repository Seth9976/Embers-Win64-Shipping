// 函数: sub_140e13110
// 地址: 0x140e13110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2516c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2516c)
    
    if (data_143e2516c == 0xffffffff)
        sub_140dd7030(&data_1439ae788)
        data_1439aeb30 = data_142d3f670
        data_1439aeb40 = 0
        data_1439aeb48 = 0
        __builtin_memset(&data_1439aeb54, 0, 0x14)
        data_1439aeb6c = 0
        data_1439aeb50 = 0xffffffff
        data_1439aeb68 = 0xffffffff
        atexit(sub_142cca890)
        _Init_thread_footer(&data_143e2516c)

return &data_1439ae780
