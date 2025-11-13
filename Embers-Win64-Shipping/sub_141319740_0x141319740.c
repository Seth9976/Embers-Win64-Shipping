// 函数: sub_141319740
// 地址: 0x141319740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143eb80c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eb80c0)
    
    if (data_143eb80c0 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_3 =
            (*(*rcx_2 + 0xb0))(rcx_2, r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange", 
            r8_1)
        
        if (rax_3 != 0)
            int64_t rdx_1 = *rax_3
            rax_3 = (*(rdx_1 + 0x58))(rax_3, rdx_1)
        
        data_143eb80b8 = rax_3
        _Init_thread_footer(&data_143eb80c0)

void* result
result.b = *(data_143eb80b8 + 4) == 1
return result
