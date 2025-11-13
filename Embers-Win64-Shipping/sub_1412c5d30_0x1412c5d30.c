// 函数: sub_1412c5d30
// 地址: 0x1412c5d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* rsi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2ce10 s> *rsi_1)
    _Init_thread_header(&data_143e2ce10)
    
    if (data_143e2ce10 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.Mobile.AllowMovableDirectionalLights", r8_1)
        int64_t rax_5
        
        if (rax_4 == 0)
            rax_5 = 0
        else
            int64_t rdx_1 = *rax_4
            rax_5 = (*(rdx_1 + 0x58))(rax_4, rdx_1)
        
        data_143e2ce08 = rax_5
        _Init_thread_footer(&data_143e2ce10)

int64_t rdi = data_143e2ce08
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

int32_t rbp = *(rdi + (rcx << 2))
uint32_t result

if (data_143e2ce20 s> *rsi_1)
    int64_t r8_2
    result, r8_2 = _Init_thread_header(&data_143e2ce20)
    
    if (data_143e2ce20 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_7 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.AllowStaticLighting", r8_2)
        int64_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0
        else
            int64_t rdx_2 = *rax_7
            rax_8 = (*(rdx_2 + 0x58))(rax_7, rdx_2)
        
        data_143e2ce18 = rax_8
        _Init_thread_footer(&data_143e2ce20)

int64_t rdi_1 = data_143e2ce18

if (rdi_1 != 0)
    if (data_143de5480 != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi_1 + (rbx << 2)) != 0 && rbp != 0)
        goto label_1412c5de1
    
    result.b = 0
else if (rbp == 0)
    result.b = 0
else
label_1412c5de1:
    result.b = not.b(*(arg1 + 0xc))
    
    if ((result.b & 1) == 0)
        result.b = 0
    else if (sub_1410be3c0(arg1).b == 0)
        result.b = 0
    else
        result.b = 1

return result
