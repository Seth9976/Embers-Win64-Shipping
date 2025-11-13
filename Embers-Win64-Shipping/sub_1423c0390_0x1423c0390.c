// 函数: sub_1423c0390
// 地址: 0x1423c0390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f5b260 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5b260)
    
    if (data_143f5b260 == 0xffffffff)
        data_143f5b210 = &data_14333d6a0
        sub_1423c04b0()
        int64_t* rcx_2 = data_143db18d0
        data_143f5b218 = &data_143f5a850
        __builtin_memset(&data_143f5b220, 0, 0x14)
        data_143f5b234 = 2
        data_143f5b23c = 2
        data_143f5b240 = 0
        data_143f5b248 = 0
        data_143f5b250 = 0
        data_143f5b258 = 0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        (*(*rcx_2 + 0x68))(rcx_2, dumpticks", 
            Dumps all tick functions registered with FTickTaskManager to log.", 0)
        atexit(sub_142d0f6f0)
        _Init_thread_footer(&data_143f5b260)

return &data_143f5b210
