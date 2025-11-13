// 函数: sub_1413ce540
// 地址: 0x1413ce540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg2 + 0x208)
int64_t* rax = j_sub_140a82f30(0x80)
int32_t result

if (rsi != 0)
    if (rax != 0)
        rax = sub_1414fa5d0(rax, arg2)
    
    *(arg2 + 0x208) = rax
    int64_t var_a8 = arg1
    int64_t* var_a0_1 = rax
    
    if (sub_140a80f40() != 0)
        return sub_1413c8cb0(&var_a8)
    
    if (data_143f138f4 == 0)
        uint32_t rax_5
        
        if (data_143de5480 != 0)
            rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_5.b != 0)
            int128_t var_68 = var_a8.o
            int64_t var_58_1 = rsi
            return sub_1413c8cb0(&var_68)
    
    void var_38
    void** rax_6 = sub_1413d9790(&var_38, nullptr, 0xff)
    void* rcx_11 = *rax_6
    *(rcx_11 + 0x10) = var_a8.o
    *(rcx_11 + 0x20) = rsi
    void* rcx_12 = *rax_6
    int32_t r8_2 = rax_6[2].d
    int64_t* rdx_7 = rax_6[1]
    int64_t* rbx_2 = *(rcx_12 + 0x30)
    int64_t* arg_20 = rbx_2
    void* rdi_2 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rdi_2 += 1
        rbx_2 = arg_20
    
    result = sub_140778000(rcx_12, rdx_7, r8_2, 1)
    
    if (rbx_2 != 0)
        result = *rdi_2
        *rdi_2 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_20)
else
    if (rax != 0)
        rax = sub_1414fa5d0(rax, arg2)
    
    *(arg2 + 0x208) = rax
    int64_t var_88 = arg1
    int64_t* var_80_1 = rax
    
    if (sub_140a80f40() != 0)
        return sub_1413c97d0(&var_88)
    
    if (data_143f138f4 == 0)
        uint32_t rax_2
        
        if (data_143de5480 != 0)
            rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_2.b != 0)
            int128_t var_78 = var_88.o
            return sub_1413c97d0(&var_78)
    
    void var_50
    int64_t* rax_3 = sub_1413d9640(&var_50, nullptr, 0xff)
    *(*rax_3 + 0x10) = var_88.o
    void* rcx_5 = *rax_3
    int32_t r8_1 = rax_3[2].d
    int64_t* rdx_3 = rax_3[1]
    int64_t* rbx_1 = *(rcx_5 + 0x28)
    int64_t* arg_18 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_18
    
    result = sub_1405e48c0(rcx_5, rdx_3, r8_1, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_18)

return result
