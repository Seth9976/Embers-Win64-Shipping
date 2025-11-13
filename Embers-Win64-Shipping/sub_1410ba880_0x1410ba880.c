// 函数: sub_1410ba880
// 地址: 0x1410ba880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2d410 s> *rdi_1)
    _Init_thread_header(&data_143e2d410)
    
    if (data_143e2d410 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_7 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.SupportAtmosphericFog", r8_1)
        int64_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0
        else
            int64_t rdx_1 = *rax_7
            rax_8 = (*(rdx_1 + 0x58))(rax_7, rdx_1)
        
        data_143e2d408 = rax_8
        _Init_thread_footer(&data_143e2d410)

if (data_143e2d420 s> *rdi_1)
    _Init_thread_header(&data_143e2d420)
    
    if (data_143e2d420 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_10 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.SupportAllShaderPermutations", r8_2)
        int64_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0
        else
            int64_t rdx_2 = *rax_10
            rax_11 = (*(rdx_2 + 0x58))(rax_10, rdx_2)
        
        data_143e2d418 = rax_11
        _Init_thread_footer(&data_143e2d420)

int64_t rdi_2 = data_143e2d418
int64_t rcx

if (rdi_2 != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rdi_2 == 0 || *(rdi_2 + (rcx << 2)) == 0)
    rdi_2.b = 0
else
    rdi_2.b = 1

int64_t rsi = data_143e2d408

if (rsi != 0 && data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (rsi == 0 || *(rsi + (rbx << 2)) != 0 || rdi_2.b != 0)
    rbx.b = 1
else
    rbx.b = 0

char rax_5 = sub_1410be850(arg1)
char rcx_2

if (rbx.b == 0 || arg1[4] u<= 1)
    rcx_2 = 0
else
    rcx_2 = 1

if ((rax_5 & rcx_2) != 0 && sub_1405fba70(*arg1, 3) != 0)
    return 1

return 0
