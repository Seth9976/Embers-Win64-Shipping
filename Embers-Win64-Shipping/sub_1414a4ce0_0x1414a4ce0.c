// 函数: sub_1414a4ce0
// 地址: 0x1414a4ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t rbp = *arg1
TEB* gsbase

if (data_143ed8fd0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ed8fd0)
    
    if (data_143ed8fd0 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_5 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.SupportAllShaderPermutations", r8_1)
        int64_t rax_6
        
        if (rax_5 == 0)
            rax_6 = 0
        else
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x58))(rax_5, rdx_1)
        
        data_143ed8fc8 = rax_6
        _Init_thread_footer(&data_143ed8fd0)

int64_t rdi = data_143ed8fc8
int64_t rcx

if (rdi != 0)
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470

if (rdi == 0 || *(rdi + (rcx << 2)) == 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t rsi = data_143ed91e8

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

if (*(rsi + (rbx << 2)) != 0 || rdi.b != 0)
    rbx.b = 1
else
    rbx.b = 0

uint64_t result

if (sub_14122e130(rbp).b != 0)
    result.b = 1
else
    result = sub_14131f330(rbp)
    
    if (result.b != 0)
        result.b = 1

if (rbx.b == 0 || result.b == 0)
    result.b = 0
else
    char rbx_1 = (*(arg1 + 0x30)).b
    
    if ((rbx_1 & 2) == 0)
        result.b = 0
    else if (sub_1405fba70(rbp, 3).b == 0 || ((*(*(arg1 + 0x38) + 0x28) u>> 4).b & 1) == 0
            || (rbx_1 & 0x20) == 0)
        result.b = 0
    else
        result.b = 1

return result
