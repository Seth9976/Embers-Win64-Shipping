// 函数: sub_1410bcc20
// 地址: 0x1410bcc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2d470 s> *rdi_1)
    _Init_thread_header(&data_143e2d470)
    
    if (data_143e2d470 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_3 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.SupportAtmosphericFog", r8_1)
        int64_t rax_4
        
        if (rax_3 == 0)
            rax_4 = 0
        else
            int64_t rdx_1 = *rax_3
            rax_4 = (*(rdx_1 + 0x58))(rax_3, rdx_1)
        
        data_143e2d468 = rax_4
        _Init_thread_footer(&data_143e2d470)

uint32_t result

if (data_143e2d480 s> *rdi_1)
    int64_t r8_2
    result, r8_2 = _Init_thread_header(&data_143e2d480)
    
    if (data_143e2d480 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_6 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.SupportAllShaderPermutations", r8_2)
        int64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0
        else
            int64_t rdx_2 = *rax_6
            rax_7 = (*(rdx_2 + 0x58))(rax_6, rdx_2)
        
        data_143e2d478 = rax_7
        _Init_thread_footer(&data_143e2d480)

int64_t rdi_2 = data_143e2d478
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

int64_t rsi = data_143e2d468

if (rsi != 0 && data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (rsi == 0 || *(rsi + (rbx << 2)) != 0)
    if (arg1[4] u<= 1)
        result.b = 0
    else
        result.b = 1
else if (rdi_2.b == 0 || arg1[4] u<= 1)
    result.b = 0
else
    result.b = 1

if (result.b == 0)
    result.b = 0
else if (sub_1405fba70(*arg1, 3).b == 0)
    result.b = 0
else
    result.b = 1

return result
