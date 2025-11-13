// 函数: sub_1423e9570
// 地址: 0x1423e9570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38
sub_142441630(&var_38, arg2)
uint64_t rbx

if (sub_140bace50(&var_38) != 0)
    uint64_t var_28 = 0
    int32_t var_20_1 = 0
    char rax_5 = sub_140bb93b0(&var_38, &var_28, nullptr)
    rbx = zx.q(rax_5)
    uint64_t rbp_2
    
    if (rax_5 == 0 || arg2 == &var_28)
        rbp_2 = var_28
    else
        rbp_2 = var_28
        int32_t r8_5 = *(arg2 + 0xc)
        arg2[1].d = var_20_1
        
        if (var_20_1 != 0 || r8_5 != 0)
            sub_1405a4c70(arg2, var_20_1, r8_5)
            memcpy(*arg2, rbp_2, var_20_1 * 2)
            rbp_2 = var_28
        else
            *(arg2 + 0xc) = 0
    
    if (rbp_2 != 0)
        sub_140a74f90(rbp_2)
else
    int16_t* const rdx = &data_142d40450
    int32_t var_30
    
    if (var_30 != 0)
        rdx = var_38
    
    void arg_18
    rbx = *sub_140b58260(&arg_18, rdx, 1)
    int32_t var_48_1 = 0
    int64_t rax_3 = sub_140d2f0c0(sub_140cddea0(), 0, rbx, 0, 0, 0)
    char rax_4
    
    if (rax_3 == 0)
        rax_4 = sub_140ba1330(&var_38, 0, nullptr, 1)
    
    if (rax_3 != 0 || rax_4 != 0)
        rbx.b = 1
        
        if (arg2 != &var_38)
            int16_t* r14_1 = var_38
            int32_t r8_2 = *(arg2 + 0xc)
            arg2[1].d = var_30
            
            if (var_30 != 0 || r8_2 != 0)
                sub_1405a4c70(arg2, var_30, r8_2)
                memcpy(*arg2, r14_1, var_30 * 2)
            else
                *(arg2 + 0xc) = 0
    else
        rbx.b = 0

int16_t* rcx_11 = var_38

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return zx.q(rbx.b)
