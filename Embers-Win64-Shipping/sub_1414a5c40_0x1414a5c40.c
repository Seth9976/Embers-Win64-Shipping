// 函数: sub_1414a5c40
// 地址: 0x1414a5c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *arg1
uint64_t result
TEB* gsbase

if (data_143ed8fe0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143ed8fe0)
    
    if (data_143ed8fe0 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_2 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.SupportAllShaderPermutations", r8_1)
        
        if (rax_2 != 0)
            int64_t rdx_2 = *rax_2
            rax_2 = (*(rdx_2 + 0x58))(rax_2, rdx_2)
        
        data_143ed8fd8 = rax_2
        _Init_thread_footer(&data_143ed8fe0)

if (data_143ed8fd8 == 0)
    goto label_1414a5c8b

if (data_143de5480 != 0)
    GetCurrentThreadId()
label_1414a5c8b:
    
    if (data_143de5480 != 0)
        GetCurrentThreadId()

if ((arg1[0xc].b & 2) != 0 && sub_1405fba70(rsi, 3).b != 0
        && ((*(*(arg1 + 0x38) + 0x28) u>> 4).b & 1) != 0 && (arg1[0xc].b & 0x20) != 0)
    result.b = 1
    return result

result.b = 0
return result
