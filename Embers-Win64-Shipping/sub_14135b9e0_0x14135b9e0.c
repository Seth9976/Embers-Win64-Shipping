// 函数: sub_14135b9e0
// 地址: 0x14135b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ec1648 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec1648)
    
    if (data_143ec1648 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.SSS.Scale", r8_1)
        
        if (rax_4 != 0)
            int64_t rdx_1 = *rax_4
            rax_4 = (*(rdx_1 + 0x60))(rax_4, rdx_1)
        
        data_143ec1640 = rax_4
        _Init_thread_footer(&data_143ec1648)

return _mm_max_ss(*(data_143ec1640 + 4), 0)
