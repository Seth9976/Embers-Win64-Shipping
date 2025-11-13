// 函数: sub_1410be3c0
// 地址: 0x1410be3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int64_t rcx

if (data_143e2ccc0 s> *rdi_1)
    int64_t r8_1
    rcx, r8_1 = _Init_thread_header(&data_143e2ccc0)
    
    if (data_143e2ccc0 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_7 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.AllowStaticLighting", r8_1)
        int64_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0
        else
            int64_t rdx_1 = *rax_7
            rax_8 = (*(rdx_1 + 0x58))(rax_7, rdx_1)
        
        data_143e2ccb8 = rax_8
        _Init_thread_footer(&data_143e2ccc0)

if (data_143e2ccd0 s> *rdi_1)
    int64_t r8_2
    rcx, r8_2 = _Init_thread_header(&data_143e2ccd0)
    
    if (data_143e2ccd0 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_10 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.SupportLowQualityLightmaps", r8_2)
        int64_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0
        else
            int64_t rdx_2 = *rax_10
            rax_11 = (*(rdx_2 + 0x58))(rax_10, rdx_2)
        
        data_143e2ccc8 = rax_11
        _Init_thread_footer(&data_143e2ccd0)

if (data_143e2cce0 s> *rdi_1)
    int64_t r8_3
    rcx, r8_3 = _Init_thread_header(&data_143e2cce0)
    
    if (data_143e2cce0 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        r8_3.b = 1
        int64_t* rax_13 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.SupportAllShaderPermutations", r8_3)
        int64_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0
        else
            int64_t rdx_3 = *rax_13
            rax_14 = (*(rdx_3 + 0x58))(rax_13, rdx_3)
        
        data_143e2ccd8 = rax_14
        _Init_thread_footer(&data_143e2cce0)

int64_t rdi_2 = data_143e2ccd8

if (rdi_2 != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rdi_2 != 0 && *(rdi_2 + (rcx << 2)) != 0)
    rcx.b = 1
else
    int64_t rdi_3 = data_143e2ccc8
    
    if (rdi_3 == 0)
        rcx.b = 1
    else
        if (data_143de5480 == 0)
            rcx = 0
        else
            rcx.b = GetCurrentThreadId() != data_143de5470
        
        if (*(rdi_3 + (rcx << 2)) != 0)
            rcx.b = 1
        else
            rcx.b = 0

uint64_t result
result.b = not.b(*(arg1 + 0xc))

if ((result.b & 1) != 0 && rcx.b != 0 && ((*(*(arg1 + 0x38) + 0x28) u>> 1).b & 1) != 0)
    int64_t rdi_4 = data_143e2ccb8
    
    if (rdi_4 != 0 && data_143de5480 != 0)
        rbx.b = GetCurrentThreadId().d != data_143de5470
    
    if ((rdi_4 == 0 || *(rdi_4 + (rbx << 2)) != 0) && (zx.q(*(arg1 + 0x30)) & 0x8002) != 0)
        result.b = 1
        return result

result.b = 0
return result
