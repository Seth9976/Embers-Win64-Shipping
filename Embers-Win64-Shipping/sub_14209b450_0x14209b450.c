// 函数: sub_14209b450
// 地址: 0x14209b450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141dd15d0(arg1)
int32_t i = 0
int64_t var_38 = 0
int64_t var_30 = 0

if (arg1[0x45].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        result = arg1[0x44]
        void* rbx_1 = *(rsi_1 + result)
        
        if (rbx_1 != 0)
            result = sub_141dce740(rbx_1)
            
            if (result.b != 0)
                int64_t var_18
                int64_t* rax = sub_140d21830(rbx_1, &var_18, 0, 0)
                int16_t* const r8_1
                
                if (rax[1].d == 0)
                    r8_1 = &data_142d40450
                else
                    r8_1 = *rax
                
                int64_t var_28
                sub_140a2e390(&var_28, u"\n%s", r8_1)
                int32_t var_20
                int32_t r8_3
                
                if (var_20 == 0)
                    r8_3 = 0
                else
                    r8_3 = var_20 - 1
                
                result = sub_140a20ba0(&var_38, var_28, r8_3)
                int64_t rcx_4 = var_28
                
                if (rcx_4 != 0)
                    result = sub_140a74f90(rcx_4)
                
                int64_t rcx_5 = var_18
                
                if (rcx_5 != 0)
                    result = sub_140a74f90(rcx_5)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0x45].d)
    
    int64_t rcx_6 = var_38
    
    if (rcx_6 != 0)
        return sub_140a74f90(rcx_6)

return result
