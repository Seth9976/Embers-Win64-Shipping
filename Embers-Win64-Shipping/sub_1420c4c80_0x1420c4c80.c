// 函数: sub_1420c4c80
// 地址: 0x1420c4c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f481c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f481c0)
    
    if (data_143f481c0 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143f481b8 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.MaterialQualityLevel", r8_1)
        _Init_thread_footer(&data_143f481c0)

int64_t* rcx_2 = data_143f481b8
int32_t rax_3 = (*(*rcx_2 + 0x90))(rcx_2)

if (rax_3 s< 0)
    return 0

if (rax_3 s< 2)
    return zx.q(rax_3)

return 2
