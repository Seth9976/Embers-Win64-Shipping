// 函数: sub_1414a5d80
// 地址: 0x1414a5d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *arg1
uint64_t result
TEB* gsbase

if (data_143ed9000 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_2
    result, r8_2 = _Init_thread_header(&data_143ed9000)
    
    if (data_143ed9000 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        r8_2.b = 1
        int64_t* rax_2 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.SupportAllShaderPermutations", r8_2)
        
        if (rax_2 != 0)
            int64_t rdx_4 = *rax_2
            rax_2 = (*(rdx_4 + 0x58))(rax_2, rdx_4)
        
        data_143ed8ff8 = rax_2
        _Init_thread_footer(&data_143ed9000)

if (data_143ed8ff8 == 0)
    goto label_1414a5dcb

if (data_143de5480 != 0)
    GetCurrentThreadId()
label_1414a5dcb:
    
    if (data_143de5480 != 0)
        GetCurrentThreadId()

char r8_1 = (*(arg1 + 0x30)).b

if ((r8_1 & 2) != 0 && ((*(*(arg1 + 0x38) + 0x28) u>> 4).b & 1) != 0 && (r8_1 & 0x20) != 0
        && sub_1405fba70(rdi, 3).b != 0)
    result.b = 1
    return result

result.b = 0
return result
