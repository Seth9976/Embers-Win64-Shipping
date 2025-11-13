// 函数: sub_141455400
// 地址: 0x141455400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ed7ae0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ed7ae0)
    
    if (data_143ed7ae0 == 0xffffffff)
        void*** rax_4 = j_sub_140a82f30(8)
        
        if (rax_4 != 0)
            *rax_4 = &data_142f85318
        
        data_143ed7ad8 = rax_4
        _Init_thread_footer(&data_143ed7ae0)

return data_143ed7ad8
