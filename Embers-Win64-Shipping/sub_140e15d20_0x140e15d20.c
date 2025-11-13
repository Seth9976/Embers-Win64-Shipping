// 函数: sub_140e15d20
// 地址: 0x140e15d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdx = sub_140b5b8a0(arg1[1].d, 0) == 0

if ((*(arg1 + 0xc) != 0 | rdx) == 0)
    return *arg1

void* result_1 = sub_140d3c6e0(&arg1[2])
void* result = result_1

if (result_1 == 0)
    bool rcx_2
    
    if (data_143de5480 != result_1.b)
        rcx_2 = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == result_1.b || rcx_2 != 0)
        int64_t var_28
        int64_t* rax_2 = sub_140b63b70(&arg1[1], &var_28)
        int16_t* const rsi_1 = &data_142d40450
        int16_t* rbx
        
        if (rax_2[1].d == 0)
            rbx = &data_142d40450
        else
            rbx = *rax_2
        
        void* result_2 = sub_140d2ee50(sub_140d41340(), nullptr, rbx, 0)
        int64_t rcx_5 = var_28
        result = result_2
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        if (*arg1 == 0)
            int64_t var_18
            int64_t* rax_4 = sub_140b63b70(&arg1[1], &var_18)
            
            if (rax_4[1].d != 0)
                rsi_1 = *rax_4
            
            void* result_3 = sub_140d2f6f0(sub_140d41340(), 0, rsi_1, 0, 0, 0, 1, 0)
            int64_t rcx_8 = var_18
            result = result_3
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        
        sub_140d3a3a0(&arg1[2], result)

return result
