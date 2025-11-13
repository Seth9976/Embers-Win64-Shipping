// 函数: sub_142167120
// 地址: 0x142167120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg3 & 0x10000000) != 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t* rcx = *(arg1 + 8)
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x28))(rcx)

if (rcx != 0 && rax_2 != 0)
    int64_t* rcx_1 = *(arg1 + 8)
    int64_t var_48
    (*(*rcx_1 + 0x10))(rcx_1, &var_48)
    int64_t* rax_4 = sub_142168400()
    int64_t r8_1 = *rax_4
    int64_t var_40
    int64_t* rax_5 = (*(r8_1 + 0x288))(rax_4, &var_40, r8_1)
    int64_t* rcx_3 = *(arg1 + 8)
    int64_t r8_2 = *rcx_3
    int32_t var_38
    int64_t var_30
    
    if (var_48 != *rax_5)
        int64_t var_20
        int64_t* rax_12 = (*(r8_2 + 0x30))(rcx_3, &var_20, r8_2)
        int16_t* const rdi_2 = &data_142d40450
        
        if (rax_12[1].d != 0)
            *rax_12
        
        int64_t* rax_13 = sub_140b63b70(&var_48, &var_30)
        
        if (rax_13[1].d != 0)
            rdi_2 = *rax_13
        
        sub_140a2e390(&var_40, u"%s:%s", rdi_2)
        int32_t rax_15
        
        if (var_38 == 0)
            rax_15 = 0
        else
            rax_15 = var_38 - 1
        
        sub_140a20ba0(arg2, var_40, rax_15)
        int64_t rcx_11 = var_40
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = var_30
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = var_20
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
            int64_t rax_16
            rax_16.b = 1
            return rax_16
    else
        int64_t* rax_7 = (*(r8_2 + 0x30))(rcx_3, &var_30, r8_2)
        int16_t* const rdi_1
        
        if (rax_7[1].d == 0)
            rdi_1 = &data_142d40450
        else
            rdi_1 = *rax_7
        
        sub_140a2e390(&var_40, u"%s", rdi_1)
        int32_t rax_9
        
        if (var_38 == 0)
            rax_9 = 0
        else
            rax_9 = var_38 - 1
        
        sub_140a20ba0(arg2, var_40, rax_9)
        int64_t rcx_6 = var_40
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = var_30
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
            int64_t rax_11
            rax_11.b = 1
            return rax_11
else if (arg2 != &data_143f4d140)
    int32_t rdi_3 = (data_143f4d148.q).d
    int64_t rsi_2 = data_143f4d140
    int32_t r8_7 = *(arg2 + 0xc)
    arg2[1].d = rdi_3
    
    if (rdi_3 == 0 && r8_7 == 0)
        *(arg2 + 0xc) = 0
        int64_t rax_17
        rax_17.b = 1
        return 1
    
    sub_1405a4c70(arg2, rdi_3, r8_7)
    memcpy(*arg2, rsi_2, rdi_3 * 2)

int64_t* rax_10
rax_10.b = 1
return rax_10
