// 函数: sub_1425bf4a0
// 地址: 0x1425bf4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f70268 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f70268)
    
    if (data_143f70268 == 0xffffffff)
        void*** rax_3 = j_sub_140a82f30(0x98)
        
        if (rax_3 == 0)
            rax_3 = nullptr
        else
            *rax_3 = &data_1434433a8
            __builtin_memset(&rax_3[1], 0, 0x88)
            rax_3[0x12].w = 0x101
        
        data_143f70260 = rax_3
        atexit(sub_142d11980)
        _Init_thread_footer(&data_143f70268)

return data_143f70260
