// 函数: sub_140d12230
// 地址: 0x140d12230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1bfb0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1bfb0)
    
    if (data_143e1bfb0 == 0xffffffff)
        sub_140d11c00()
        void*** (* var_10)(int128_t* arg1, int64_t* arg2, int32_t arg3) = sub_140cf5730
        sub_140cacf60(&data_143e1bf70, u"FUInt64Property", 0x200, 0x1008201, &data_143e1bd40)
        atexit(sub_142cc2760)
        _Init_thread_footer(&data_143e1bfb0)

return &data_143e1bf70
