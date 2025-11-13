// 函数: sub_140633d10
// 地址: 0x140633d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cdbe90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cdbe90)
    
    if (data_143cdbe90 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.FullScreenMode", r8_1)
        
        if (rax_5 != 0)
            int64_t rdx_2 = *rax_5
            rax_5 = (*(rdx_2 + 0x58))(rax_5, rdx_2)
        
        data_143cdbe88 = rax_5
        _Init_thread_footer(&data_143cdbe90)

*arg1 = *data_143cdbe88
return arg1
