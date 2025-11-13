// 函数: sub_1414a4a40
// 地址: 0x1414a4a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t rbp = *arg1
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ed9030 s> *rdi_1)
    _Init_thread_header(&data_143ed9030)
    
    if (data_143ed9030 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_3 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.SupportAllShaderPermutations", r8_1)
        int64_t rax_4
        
        if (rax_3 == 0)
            rax_4 = 0
        else
            int64_t rdx_1 = *rax_3
            rax_4 = (*(rdx_1 + 0x58))(rax_3, rdx_1)
        
        data_143ed9028 = rax_4
        _Init_thread_footer(&data_143ed9030)

if (data_143ed9028 == 0)
    goto label_1414a4a9b

if (data_143de5480 != 0)
    GetCurrentThreadId()
label_1414a4a9b:
    
    if (data_143de5480 != 0)
        GetCurrentThreadId()

uint32_t result

if (data_143ed9040 s> *rdi_1)
    int64_t r8_2
    result, r8_2 = _Init_thread_header(&data_143ed9040)
    
    if (data_143ed9040 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_6 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.LightPropagationVolume", r8_2)
        int64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0
        else
            int64_t rdx_2 = *rax_6
            rax_7 = (*(rdx_2 + 0x58))(rax_6, rdx_2)
        
        data_143ed9038 = rax_7
        _Init_thread_footer(&data_143ed9040)

int64_t rdi_2 = data_143ed9038

if (rdi_2 != 0)
    if (data_143de5480 != 0)
        rbx.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi_2 + (rbx << 2)) != 0 && (arg1[0xc].b & 0xe0) != 0)
        goto label_1414a4aed
    
    result.b = 0
else if ((arg1[0xc].b & 0xe0) == 0)
    result.b = 0
else
label_1414a4aed:
    
    if (sub_1405fba70(rbp, 3).b == 0)
        result.b = 0
    else
        result.b = 1

return result
