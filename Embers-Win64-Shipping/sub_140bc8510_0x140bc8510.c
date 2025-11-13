// 函数: sub_140bc8510
// 地址: 0x140bc8510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x18)

if (((rdx u>> 0x10).b & 1) != 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t rdi_1 = sx.q(*(arg1 + 8))
    int64_t var_18
    int32_t rsi_1
    
    if (rdi_1.d != 0xffffffff)
        AcquireSRWLockShared(&data_143e1a888)
        void* rax_2 = sub_140bcf240(&data_1439a9a00, (rdi_1 << 4) + data_1439a9a50)
        var_18 = 0
        int32_t rbp_1 = *(rax_2 + 8)
        int64_t r14_1 = *rax_2
        
        if (rbp_1 != 0)
            sub_1405a4c70(&var_18, rbp_1, 0)
            memcpy(var_18, r14_1, rbp_1 * 2)
        else
            int32_t var_c_1 = 0
        
        ReleaseSRWLockShared(&data_143e1a888)
        rdx = *(arg1 + 0x18)
        rsi_1 = rbp_1
    else
        var_18 = 0
        rsi_1 = 0
        int32_t var_10
        var_10.q = 0
    
    if (((rdx u>> 0xb).b & 1) != 0)
        sub_140b0f020(arg2, &var_18, &data_143e1a878)
    else if (((rdx u>> 8).b & 1) != 0)
        int64_t* r8_3
        
        if ((not.b(rdx.b) & 1) == 0)
            r8_3 = &data_143e1a868
            
            if (((rdx u>> 0xc).b & 1) == 0)
                r8_3 = &data_143e1a858
        else
            r8_3 = &data_143e1a848
        
        sub_140b0f020(arg2, &var_18, r8_3)
    else
        int64_t rbp_2 = var_18
        *arg2 = 0
        arg2[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(arg2, rsi_1, 0)
            memcpy(*arg2, rbp_2, rsi_1 * 2)
        else
            *(arg2 + 0xc) = 0
    
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return arg2
