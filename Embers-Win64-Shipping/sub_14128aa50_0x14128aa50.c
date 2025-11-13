// 函数: sub_14128aa50
// 地址: 0x14128aa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e8e1e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e8e1e0)
    
    if (data_143e8e1e0 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_4 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.Mobile.UseHWsRGBEncoding", r8_2)
        
        if (rax_4 != 0)
            int64_t rdx_1 = *rax_4
            rax_4 = (*(rdx_1 + 0x58))(rax_4, rdx_1)
        
        data_143e8e1d8 = rax_4
        _Init_thread_footer(&data_143e8e1e0)

if (data_143e8e1d8 != 0 && data_143de5480 != 0)
    GetCurrentThreadId()

sub_1410b3fe0(arg2, u"MAX_NUM_LIGHTMAP_COEF", 2)
sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_GAMMA_SPACE", 0)
return sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_MOBILE_HDR", 1) __tailcall
