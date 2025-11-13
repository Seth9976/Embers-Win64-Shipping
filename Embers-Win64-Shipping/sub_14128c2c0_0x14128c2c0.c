// 函数: sub_14128c2c0
// 地址: 0x14128c2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e8b690 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e8b690)
    
    if (data_143e8b690 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_7 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.Mobile.UseHWsRGBEncoding", r8_4)
        int64_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0
        else
            int64_t rdx_1 = *rax_7
            rax_8 = (*(rdx_1 + 0x58))(rax_7, rdx_1)
        
        data_143e8b680 = rax_8
        _Init_thread_footer(&data_143e8b690)

int64_t rbx = data_143e8b680
int64_t rcx_1

if (rbx != 0)
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470

if (rbx == 0 || *(rbx + (rcx_1 << 2)) != 1)
    rbx.b = 0
else
    rbx.b = 1

char rax_3 = sub_1422eb710()
int64_t r8_1

if (rax_3 == 0)
    r8_1 = 1

if (rax_3 != 0 || rbx.b != 0)
    r8_1 = 0

sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_GAMMA_SPACE", r8_1)
int32_t rdi
rdi.b = sub_1422eb710() == 1
return sub_1405d3490(arg2 + 0x2a8, u"OUTPUT_MOBILE_HDR", zx.q(rdi)) __tailcall
