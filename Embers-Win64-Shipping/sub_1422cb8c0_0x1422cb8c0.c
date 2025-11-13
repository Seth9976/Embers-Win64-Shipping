// 函数: sub_1422cb8c0
// 地址: 0x1422cb8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint8_t result = (*(arg1 + 8) u>> 4).b

if ((result & 1) != 0)
    void* rbx_1 = *(arg1 + 0x10)
    
    if ((*(rbx_1 + 0xcc) & 1) == 0)
        if (rbx_1 != sub_142582180())
            int64_t rax_2
            
            do
                rbx_1 = *(rbx_1 + 0x40)
                rax_2 = sub_142582180()
            while (rbx_1 != rax_2)
        
        int64_t var_38 = 0
        int64_t var_30_1 = 0
        int64_t var_18
        int64_t* rax_3 = sub_140b17c60(&var_18)
        int16_t* rbx_2 = &data_142d40450
        int16_t* const rsi_1
        
        if (rax_3[1].d == 0)
            rsi_1 = &data_142d40450
        else
            rsi_1 = *rax_3
        
        int64_t var_28
        int16_t** rax_4 = sub_140b63b70(*(arg1 + 0x10) + 0xe8, &var_28)
        
        if (rax_4[1].d != 0)
            rbx_2 = *rax_4
        
        int16_t* const var_48_1 = rsi_1
        result = sub_140af8e00(&var_38, rbx_2, nullptr, 0, 0, 1)
        int64_t rcx_4 = var_28
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = var_18
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = var_38
        
        if (rcx_6 != 0)
            return sub_140a74f90(rcx_6)

return result
