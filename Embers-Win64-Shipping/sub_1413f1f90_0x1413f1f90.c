// 函数: sub_1413f1f90
// 地址: 0x1413f1f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg2 + 0x3e8)

if (result != 0)
    int64_t var_50_1 = result[0x22]
    *(arg2 + 0x3e8) = 0
    int64_t var_58 = arg1
    
    if (sub_140a80f40() != 0)
        return sub_1413c8b60(&var_58)
    
    if (data_143f138f4 == 0)
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            int128_t var_40 = var_58.o
            void* var_30 = arg2 + 0x25c
            return sub_1413c8b60(&var_40)
    
    void var_28
    void** rax_6 = sub_1413dbc60(&var_28, nullptr, 0xff)
    void* rcx_3 = *rax_6
    *(rcx_3 + 0x10) = var_58.o
    *(rcx_3 + 0x20) = arg2 + 0x25c
    void* rcx_4 = *rax_6
    int32_t r8_1 = rax_6[2].d
    int64_t* rdx_2 = rax_6[1]
    int64_t* rbx_1 = *(rcx_4 + 0x30)
    int64_t* arg_18 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_18
    
    result = sub_140778000(rcx_4, rdx_2, r8_1, 1)
    
    if (rbx_1 != 0)
        result = zx.q(*rdi_1)
        *rdi_1 -= 1
        
        if (result.d == 1)
            return sub_140a2f6e0(arg_18)

return result
