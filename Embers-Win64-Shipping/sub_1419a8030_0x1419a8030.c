// 函数: sub_1419a8030
// 地址: 0x1419a8030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_30 = arg3
uint32_t result = sub_140a80f40()

if (result.b != 0)
    *arg2 = arg3
else if (data_143f138f4 != result.b)
label_1419a808b:
    void var_28
    int64_t* rax = sub_14199bf10(&var_28, nullptr, 0xff)
    *(*rax + 0x10) = arg2.o
    void* rcx_2 = *rax
    int32_t r8 = rax[2].d
    int64_t* rdx = rax[1]
    int64_t* rbx_1 = *(rcx_2 + 0x28)
    int64_t* arg_10 = rbx_1
    uint32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_140a064d0(rcx_2, rdx, r8, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)
else if (data_143de5480 == result.b)
    *arg2 = arg3
else
    result.b = GetCurrentThreadId() == data_143de5470
    
    if (result.b == 0)
        goto label_1419a808b
    
    *arg2 = arg3

return result
