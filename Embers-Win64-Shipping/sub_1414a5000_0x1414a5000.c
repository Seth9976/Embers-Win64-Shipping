// 函数: sub_1414a5000
// 地址: 0x1414a5000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *arg1
uint32_t result
TEB* gsbase

if (data_143ed9010 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143ed9010)
    
    if (data_143ed9010 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_2 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.SupportAllShaderPermutations", r8_1)
        
        if (rax_2 != 0)
            int64_t rdx_2 = *rax_2
            rax_2 = (*(rdx_2 + 0x58))(rax_2, rdx_2)
        
        data_143ed9008 = rax_2
        _Init_thread_footer(&data_143ed9010)

if (data_143ed9008 == 0)
    goto label_1414a504b

if (data_143de5480 != 0)
    GetCurrentThreadId()
label_1414a504b:
    
    if (data_143de5480 != 0)
        GetCurrentThreadId()

int64_t rbx_1 = *(arg1 + 0x30)

if (((rbx_1.b & 2) != 0 || not(test_bit(rbx_1, 9)) || test_bit(rbx_1, 0xe))
        && sub_1405fba70(rdi, 3).b != 0 && (rbx_1.b & 0x20) != 0)
    result.b = 1
    return result

result.b = 0
return result
