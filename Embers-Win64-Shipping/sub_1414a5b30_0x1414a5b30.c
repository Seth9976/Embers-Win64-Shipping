// 函数: sub_1414a5b30
// 地址: 0x1414a5b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
TEB* gsbase

if (data_143ed8ff0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143ed8ff0)
    
    if (data_143ed8ff0 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_2 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.SupportAllShaderPermutations", r8_1)
        
        if (rax_2 != 0)
            int64_t rdx_3 = *rax_2
            rax_2 = (*(rdx_3 + 0x58))(rax_2, rdx_3)
        
        data_143ed8fe8 = rax_2
        _Init_thread_footer(&data_143ed8ff0)

if (data_143ed8fe8 == 0)
    goto label_1414a5b75

if (data_143de5480 != 0)
    GetCurrentThreadId()
label_1414a5b75:
    
    if (data_143de5480 != 0)
        GetCurrentThreadId()

char rdx_2 = (*(arg1 + 0x30)).b

if ((rdx_2 & 2) != 0 && ((*(*(arg1 + 0x38) + 0x28) u>> 4).b & 1) != 0 && (rdx_2 & 0x20) != 0)
    result.b = 1
    return result

result.b = 0
return result
