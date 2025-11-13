// 函数: sub_140964d70
// 地址: 0x140964d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx = &data_142d40450
sub_140b1f640(arg3, &data_142d40450)
int64_t* rax_1 = (*(*arg1 + 0x438))(arg1)
int64_t var_28

if (rax_1 == 0)
    int64_t* rax_10 = sub_140960e40(arg1, &var_28)
    
    if (rax_10[1].d != 0)
        rbx = *rax_10
    
    sub_140b1f700(arg3, u"%s Socket: null", rbx)
    int64_t rcx_17 = var_28
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
else
    int64_t rdx = *arg1
    int64_t* rax_2 = (*(rdx + 0x378))(arg1, rdx)
    int64_t r8 = *rax_2
    int64_t* var_48
    (*(r8 + 0x90))(rax_2, &var_48, r8)
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x88))(rax_1, var_48, r8_1)
    int64_t* rcx_5 = var_48
    int64_t r8_2
    r8_2.b = 1
    int64_t* rax_4 = (*(*rcx_5 + 0x78))(rcx_5, &var_28, r8_2)
    
    if (rax_4[1].d != 0)
        *rax_4
    
    int64_t arg_8 = arg1[3]
    int16_t* var_68
    sub_140b63b70(&arg_8, &var_68)
    int64_t var_38
    int64_t* rax_6 = sub_140b63b70(&arg1[0x32], &var_38)
    int16_t* const r8_3
    
    if (rax_6[1].d == 0)
        r8_3 = &data_142d40450
    else
        r8_3 = *rax_6
    
    int16_t* const rax_7 = &data_142d40450
    
    if (arg1[0x45].b != 0)
        rax_7 = u"(PEER)"
    
    int16_t* const var_78_1 = rax_7
    int16_t* var_58
    sub_140a2e390(&var_58, u"%s %s%s", r8_3)
    int64_t rcx_9 = var_38
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int16_t* rcx_10 = var_68
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int32_t var_50
    
    if (var_50 != 0)
        rbx = var_58
    
    sub_140b1f700(arg3, u"%s Socket: %s", rbx)
    int16_t* rcx_12 = var_58
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_28
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp1_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
return sub_1405949a0() __tailcall
