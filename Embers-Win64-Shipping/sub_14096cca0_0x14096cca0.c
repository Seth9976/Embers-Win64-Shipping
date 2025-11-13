// 函数: sub_14096cca0
// 地址: 0x14096cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140975040(arg1)
*(arg1 + 0x7c) = arg2
int64_t* result

if (sub_140d3c6e0(arg1 + 0x74) == 0)
    int64_t* var_40 = nullptr
    int64_t var_48
    result = &var_48
    
    if (arg1 + 0x60 != &var_48)
        *(arg1 + 0x60) = 0
        var_48 = 0
        result = sub_1405aeff0(arg1 + 0x68, &var_40)
        int64_t* rcx_10 = var_40
        
        if (rcx_10 != 0)
            result = zx.q(rcx_10[1].d)
            rcx_10[1].d -= 1
            
            if (result.d == 1)
                int64_t* rbx_4 = var_40
                result = (**rbx_4)(rbx_4)
                int32_t rdi_3 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rdi_3 == 1)
                    int64_t* rcx_12 = var_40
                    return (*(*rcx_12 + 8))(rcx_12, zx.q(rdi_3))
else
    void*** rax_1 = sub_140a84c80(0, 0x20, 0)
    void*** var_38 = rax_1
    void*** rdi_1 = rax_1
    
    if (rax_1 != 0)
        rdi_1[1] = arg1
        *rdi_1 = &data_142e337c8
        rdi_1[3] = sub_140a387b0()
        *rdi_1 = &data_142e33820
    
    void var_28
    int64_t* rax_3 = sub_140958da0(&var_28, nullptr, 0xff)
    int64_t* rbx_2 = *rax_3 + 0x10
    *rbx_2 = 0
    rbx_2[1].d = 0
    
    if (&var_38 != rbx_2 && rdi_1 != 0)
        void** r8_1 = *rdi_1
        r8_1[8](rdi_1, rbx_2, r8_1)
    
    rbx_2[2].d = 2
    void* rcx_3 = *rax_3
    int32_t r8_2 = rax_3[2].d
    int64_t* rdx_1 = rax_3[1]
    int64_t* rbx_3 = *(rcx_3 + 0x30)
    int64_t* arg_8 = rbx_3
    int32_t* rsi_2 = &rbx_3[9]
    
    if (rbx_3 != 0)
        *rsi_2 += 1
        rdi_1 = var_38
        rbx_3 = arg_8
    
    result = sub_140978a40(rcx_3, rdx_1, r8_2, 1)
    
    if (rbx_3 != 0)
        int32_t rdi_2 = *rsi_2
        *rsi_2 -= 1
        
        if (rdi_2 == 1)
            result = sub_140a2f6e0(arg_8)
        
        rdi_1 = var_38
    
    if (rdi_1 != 0)
        (*rdi_1)[7](rdi_1, 0)
        result = sub_140a84c80(rdi_1, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result) __tailcall

return result
