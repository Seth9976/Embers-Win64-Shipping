// 函数: sub_140d11cb0
// 地址: 0x140d11cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1c0a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1c0a0)
    
    if (data_143e1c0a0 == 0xffffffff)
        sub_140cea290()
        void*** (* var_10)(int128_t* arg1, int64_t* arg2, int32_t arg3) = sub_140cf4e60
        sub_140cacf60(&data_143e1c060, u"FObjectProperty", 0x10000, 0x4018001, &data_143e1b8c0)
        atexit(sub_142cc26e0)
        _Init_thread_footer(&data_143e1c0a0)

return &data_143e1c060
