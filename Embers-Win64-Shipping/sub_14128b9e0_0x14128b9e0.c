// 函数: sub_14128b9e0
// 地址: 0x14128b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
TEB* gsbase

if (data_143e8c260 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e8c260)
    
    if (data_143e8c260 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_5 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.Mobile.UseHWsRGBEncoding", r8_3)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_2 = *rax_5
            rax_6 = (*(rdx_2 + 0x58))(rax_5, rdx_2)
        
        data_143e8c258 = rax_6
        _Init_thread_footer(&data_143e8c260)

int64_t rbx = data_143e8c258
int64_t rcx

if (rbx != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rbx == 0 || *(rbx + (rcx << 2)) != 1)
    rdi = 1

sub_1410b3fe0(arg2, u"MAX_NUM_LIGHTMAP_COEF", 2)
sub_141272920(arg1, arg2)
sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_GAMMA_SPACE", zx.q(rdi))
return sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_MOBILE_HDR", 0) __tailcall
