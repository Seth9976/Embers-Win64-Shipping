// 函数: sub_141feae10
// 地址: 0x141feae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(arg1[4].b)

if ((result.b & 1) != 0)
    result.b &= 0xfe
    arg1[5] = 0
    arg1[4].b = result.b
    char rax = sub_140a80f40()
    
    if (rax != 0)
        return sub_141feb000(&data_143a2dd30, arg1) __tailcall
    
    if (data_143f138f4 == rax)
        if (data_143de5480 == rax)
            return sub_141feb000(&data_143a2dd30, arg1) __tailcall
        
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b != 0)
            return sub_141feb000(&data_143a2dd30, arg1) __tailcall
    
    void var_28
    void** rax_2 = sub_141fde360(&var_28, nullptr, 0xff)
    *(*rax_2 + 0x10) = arg1
    void* rcx_2 = *rax_2
    int32_t r8_1 = rax_2[2].d
    int64_t* rdx_1 = rax_2[1]
    int64_t* rbx_1 = *(rcx_2 + 0x20)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_1405a5630(rcx_2, rdx_1, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_10)

return result
