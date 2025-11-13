// 函数: sub_14128a7e0
// 地址: 0x14128a7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e8d5e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e8d5e8)
    
    if (data_143e8d5e8 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_4 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.Mobile.UseHWsRGBEncoding", r8_3)
        
        if (rax_4 != 0)
            int64_t rdx_2 = *rax_4
            rax_4 = (*(rdx_2 + 0x58))(rax_4, rdx_2)
        
        data_143e8d5e0 = rax_4
        _Init_thread_footer(&data_143e8d5e8)

if (data_143e8d5e0 != 0 && data_143de5480 != 0)
    GetCurrentThreadId()

sub_1410b3fe0(arg2, u"MAX_NUM_LIGHTMAP_COEF", 2)
sub_1410a2800(arg1, arg2)
sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_GAMMA_SPACE", 0)
return sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_MOBILE_HDR", 1) __tailcall
