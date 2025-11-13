// 函数: sub_1410be160
// 地址: 0x1410be160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2cd00 s> *rdi_1)
    _Init_thread_header(&data_143e2cd00)
    
    if (data_143e2cd00 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_6 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.AllowStaticLighting", r8_1)
        int64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0
        else
            int64_t rdx_1 = *rax_6
            rax_7 = (*(rdx_1 + 0x58))(rax_6, rdx_1)
        
        data_143e2ccf8 = rax_7
        _Init_thread_footer(&data_143e2cd00)

if (data_143e2cd10 s> *rdi_1)
    _Init_thread_header(&data_143e2cd10)
    
    if (data_143e2cd10 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_9 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.SupportLowQualityLightmaps", r8_2)
        int64_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0
        else
            int64_t rdx_2 = *rax_9
            rax_10 = (*(rdx_2 + 0x58))(rax_9, rdx_2)
        
        data_143e2cd08 = rax_10
        _Init_thread_footer(&data_143e2cd10)

if (data_143e2cd20 s> *rdi_1)
    _Init_thread_header(&data_143e2cd20)
    
    if (data_143e2cd20 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_12 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.SupportAllShaderPermutations", r8_3)
        int64_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0
        else
            int64_t rdx_3 = *rax_12
            rax_13 = (*(rdx_3 + 0x58))(rax_12, rdx_3)
        
        data_143e2cd18 = rax_13
        _Init_thread_footer(&data_143e2cd20)

int64_t rdi_2 = data_143e2cd18
int64_t rcx

if (rdi_2 != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if ((rdi_2 == 0 || *(rdi_2 + (rcx << 2)) == 0) && data_143e2cd08 != 0 && data_143de5480 != 0)
    GetCurrentThreadId()

uint64_t result
result.b = not.b(*(arg1 + 0xc))

if ((result.b & 1) != 0 && ((*(*(arg1 + 0x38) + 0x28) u>> 1).b & 1) != 0)
    int64_t rdi_3 = data_143e2ccf8
    
    if (rdi_3 != 0 && data_143de5480 != 0)
        rbx.b = GetCurrentThreadId().d != data_143de5470
    
    if ((rdi_3 == 0 || *(rdi_3 + (rbx << 2)) != 0) && (zx.q(*(arg1 + 0x30)) & 0x8002) != 0)
        result.b = 1
        return result

result.b = 0
return result
