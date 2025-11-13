// 函数: sub_1419981a0
// 地址: 0x1419981a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = sub_140a80f40()

if (result.b == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_1419981b2
        
        result.b = GetCurrentThreadId() == data_143de5470
        
        if (result.b != 0)
            goto label_1419981b2
        
        goto label_14199822a
    
label_14199822a:
    void var_28
    void** rax_4 = sub_14199c450(&var_28, nullptr, 0xff)
    *(*rax_4 + 0x10) = arg1
    void* rcx_6 = *rax_4
    int32_t r8_1 = rax_4[2].d
    int64_t* rdx_1 = rax_4[1]
    int64_t* rbx_1 = *(rcx_6 + 0x20)
    int64_t* arg_10 = rbx_1
    void* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_1405a5630(rcx_6, rdx_1, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)
else
label_1419981b2:
    
    if (arg1[1].d != 0xffffffff && data_143f0f19c != 0)
        (*(*arg1 + 0x20))(arg1)
        (*(*arg1 + 0x10))(arg1)
        (*(*arg1 + 8))(arg1)
        jump(*(*arg1 + 0x18))

return result
