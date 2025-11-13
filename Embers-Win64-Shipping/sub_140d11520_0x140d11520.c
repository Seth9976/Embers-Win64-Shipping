// 函数: sub_140d11520
// 地址: 0x140d11520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1bec0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1bec0)
    
    if (data_143e1bec0 == 0xffffffff)
        sub_140d11c00()
        void*** (* var_10)(int128_t* arg1, int64_t* arg2, int32_t arg3) = sub_140cf4330
        sub_140cacf60(&data_143e1be80, u"FInt64Property", 0x400000, 0x1408001, &data_143e1bd40)
        atexit(sub_142cc2630)
        _Init_thread_footer(&data_143e1bec0)

return &data_143e1be80
