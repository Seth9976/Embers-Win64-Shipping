// 函数: sub_14096d730
// 地址: 0x14096d730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3c6e0(arg1 + 0x4c)

if (result != 0)
    void*** rax = sub_140a84c80(0, 0x20, 0)
    void*** var_38 = rax
    void*** rdi_1 = rax
    
    if (rax != 0)
        rdi_1[1] = arg1
        *rdi_1 = &data_142e33c98
        rdi_1[3] = sub_140a387b0()
        *rdi_1 = &data_142e33cf0
    
    void var_28
    int64_t* rax_2 = sub_140958da0(&var_28, nullptr, 0xff)
    int64_t* rbx_2 = *rax_2 + 0x10
    *rbx_2 = 0
    rbx_2[1].d = 0
    
    if (&var_38 != rbx_2 && rdi_1 != 0)
        void** r8_1 = *rdi_1
        r8_1[8](rdi_1, rbx_2, r8_1)
    
    rbx_2[2].d = 2
    void* rcx_3 = *rax_2
    int32_t r8_2 = rax_2[2].d
    int64_t* rdx_2 = rax_2[1]
    int64_t* rbx_3 = *(rcx_3 + 0x30)
    int64_t* arg_10 = rbx_3
    int32_t* rsi_2 = &rbx_3[9]
    
    if (rbx_3 != 0)
        *rsi_2 += 1
        rdi_1 = var_38
        rbx_3 = arg_10
    
    result = sub_140978a40(rcx_3, rdx_2, r8_2, 1)
    
    if (rbx_3 != 0)
        result = zx.q(*rsi_2)
        *rsi_2 -= 1
        
        if (result.d == 1)
            result = sub_140a2f6e0(arg_10)
        
        rdi_1 = var_38
    
    if (rdi_1 != 0)
        (*rdi_1)[7](rdi_1, 0)
        result = sub_140a84c80(rdi_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)

return result
