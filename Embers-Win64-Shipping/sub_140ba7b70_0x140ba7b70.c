// 函数: sub_140ba7b70
// 地址: 0x140ba7b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
int32_t rbp = 0
void** r15 = &data_1439a9850
int32_t result

while (true)
    void* r14_1 = *r15
    int32_t rbx_1 = arg1[1].d
    int32_t rdi_1 = *(r14_1 + 8)
    uint64_t var_38
    int32_t var_2c
    int16_t* rbx_2
    
    if (rbx_1 s> 1)
        int32_t rsi_2 = rdi_1 - 1
        
        if (rdi_1 == 0)
            rsi_2 = 0
        
        int32_t rax_1
        
        if (rbx_1 == 0)
            rax_1 = rbx_1 + 1
        
        if (rbx_1 != 0 || rsi_2 == 0)
            rax_1 = 0
        
        int64_t rdi_2 = *arg1
        int32_t rcx_2 = rsi_2 + rax_1
        int16_t* var_48 = nullptr
        int32_t var_3c
        
        if (rbx_1 != 0 || rcx_2 != 0)
            sub_1405a4c70(&var_48, rbx_1 + rcx_2, 0)
            memcpy(var_48, rdi_2, rbx_1 * 2)
        else
            var_3c = 0
        
        sub_140a20ba0(&var_48, *r14_1, rsi_2)
        rbx_2 = var_48
        rdi_1 = rbx_1
        var_48 = nullptr
        int32_t var_40_1
        var_40_1.q = 0
        var_2c = var_3c
    else
        int64_t rsi_1 = *r14_1
        rbx_2 = nullptr
        var_38 = 0
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_38, rdi_1, 0)
            rbx_2 = var_38
            memcpy(rbx_2, rsi_1, rdi_1 * 2)
        else
            var_2c = 0
    
    int16_t* const rdx_5 = &data_142d40450
    
    if (rdi_1 != 0)
        rdx_5 = rbx_2
    
    if ((*(data_14399ea08 + 0x48))(&data_14399ea08, rdx_5).b != 0)
        if (arg2 != &var_38)
            int16_t* rcx_7 = *arg2
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            *arg2 = rbx_2
            arg2[1].d = rdi_1
            *(arg2 + 0xc) = var_2c
        else if (rbx_2 != 0)
            sub_140a74f90(rbx_2)
        
        result.b = 1
        break
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    rbp += 1
    r15 = &r15[1]
    
    if (rbp u>= 2)
        result.b = 0
        break

return result
