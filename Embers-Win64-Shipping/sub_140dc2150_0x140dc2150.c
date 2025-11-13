// 函数: sub_140dc2150
// 地址: 0x140dc2150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e24358 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e24358)
    
    if (data_143e24358 == 0xffffffff)
        data_143e24340 = 0
        data_143e24338 = &data_142ec8878
        data_143e24348 = data_143e244b0
        void* rax_5 = data_143e244b8
        data_143e24350 = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        atexit(sub_142ccaf00)
        _Init_thread_footer(&data_143e24358)

return &data_143e24338
