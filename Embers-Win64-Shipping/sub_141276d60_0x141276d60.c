// 函数: sub_141276d60
// 地址: 0x141276d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
TEB* gsbase

if (data_143e8d98c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e8d98c)
    
    if (data_143e8d98c == 0xffffffff)
        int64_t* rcx_9 = data_143db18d0
        
        if (rcx_9 == 0)
            sub_140a53c40()
            rcx_9 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_5 = (*(*rcx_9 + 0xb0))(rcx_9, u"r.Mobile.UseHWsRGBEncoding", r8_3)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_2 = *rax_5
            rax_6 = (*(rdx_2 + 0x58))(rax_5, rdx_2)
        
        data_143e8d980 = rax_6
        _Init_thread_footer(&data_143e8d98c)

int64_t rbx = data_143e8d980
int64_t rcx

if (rbx != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rbx == 0 || *(rbx + (rcx << 2)) != 1)
    rdi = 1

sub_141271590(arg1, arg2)
sub_1405d3490(arg2 + 0x2a8, u"ENABLE_SKY_LIGHT", 0)
sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_GAMMA_SPACE", zx.q(rdi))
sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_MOBILE_HDR", 0)
sub_1405d3490(arg2 + 0x2a8, u"MAX_DYNAMIC_POINT_LIGHTS", 4)
sub_1405d3490(arg2 + 0x2a8, u"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS", 0)
return sub_1405d3490(arg2 + 0x2a8, u"NUM_DYNAMIC_POINT_LIGHTS", 4) __tailcall
