// 函数: sub_1412723f0
// 地址: 0x1412723f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3e70(arg2, u"DIRECTIONAL_LIGHT_CSM", &(*U"RGBXYZF10|")[7])
int32_t rbx = 0
TEB* gsbase

if (data_143e2cdc0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2cdc0)
    
    if (data_143e2cdc0 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_5 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.Shadow.CSM.MaxMobileCascades", r8_3)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_2 = *rax_5
            rax_6 = (*(rdx_2 + 0x58))(rax_5, rdx_2)
        
        data_143e2cdb8 = rax_6
        _Init_thread_footer(&data_143e2cdc0)

int64_t rdi = data_143e2cdb8

if (rdi == 0)
    rbx = 4
else
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    int32_t rcx_2 = *(rdi + (rcx_1 << 2))
    
    if (rcx_2 s>= 0)
        rbx = 4
        
        if (rcx_2 s< 4)
            rbx = rcx_2

sub_1410b3fe0(arg2, u"MAX_MOBILE_SHADOWCASCADES", zx.q(rbx))
sub_1410b3fe0(arg2, u"STATICLIGHTING_TEXTUREMASK", 1)
sub_1410b3fe0(arg2, u"STATICLIGHTING_SIGNEDDISTANCEFIELD", 1)
return sub_1410a2800(arg1, arg2) __tailcall
