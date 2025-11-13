// 函数: sub_1414a4bf0
// 地址: 0x1414a4bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ed9020 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ed9020)
    
    if (data_143ed9020 == 0xffffffff)
        int64_t* rcx = data_143db18d0
        
        if (rcx == 0)
            sub_140a53c40()
            rcx = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_3 = (*(*rcx + 0xb0))(rcx, u"r.SupportAllShaderPermutations", r8_1)
        
        if (rax_3 != 0)
            int64_t rdx_2 = *rax_3
            rax_3 = (*(rdx_2 + 0x58))(rax_3, rdx_2)
        
        data_143ed9018 = rax_3
        _Init_thread_footer(&data_143ed9020)

if (data_143ed9018 == 0)
    goto label_1414a4c35

if (data_143de5480 != 0)
    GetCurrentThreadId()
label_1414a4c35:
    
    if (data_143de5480 != 0)
        GetCurrentThreadId()

int64_t result = *(arg1 + 0x30)

if (((result.b & 2) != 0 || not(test_bit(result, 9)) || test_bit(result, 0xe))
        && (result.b & 0x20) != 0)
    result.b = 1
    return result

result.b = 0
return result
