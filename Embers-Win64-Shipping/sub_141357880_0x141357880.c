// 函数: sub_141357880
// 地址: 0x141357880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ec0950 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ec0950)
    
    if (data_143ec0950 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.MotionBlurQuality", r8_1)
        
        if (rax_5 != 0)
            rax_5 = (*(*rax_5 + 0x58))(rax_5)
        
        data_143ec0948 = rax_5
        _Init_thread_footer(&data_143ec0950)

int32_t rdx_1 = *(data_143ec0948 + 4)

if (rdx_1 s< 0)
    return 0

if (rdx_1 s< 4)
    return zx.q(rdx_1)

return 4
