// 函数: sub_140928980
// 地址: 0x140928980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 8)
    
    if (rcx_1 != 0)
        char rax
        int64_t r8
        rax, r8 = (*(*rcx_1 + 0x90))(rcx_1)
        
        if (rax != 0)
            int64_t var_18
            int64_t* rdx = &var_18
            int64_t* rcx_2 = *(*arg1 + 8)
            int64_t rax_3 = *rcx_2
            int64_t var_28
            
            if (arg3 == 0)
                r8.b = 1
                int64_t* rax_5 = (*(rax_3 + 0x78))(rcx_2, rdx, r8)
                int16_t* const r8_2
                
                if (rax_5[1].d == 0)
                    r8_2 = &data_142d40450
                else
                    r8_2 = *rax_5
                
                sub_140a2e390(&var_28, u"%s", r8_2)
            else
                int64_t* rax_4 = (*(rax_3 + 0x78))(rcx_2, rdx, 0)
                int16_t* const r8_1
                
                if (rax_4[1].d == 0)
                    r8_1 = &data_142d40450
                else
                    r8_1 = *rax_4
                
                sub_140a2e390(&var_28, u"%s:%d", r8_1)
            
            if (arg2 == &var_28)
                int64_t rcx_6 = var_28
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
            else
                int64_t rcx_5 = *arg2
                
                if (rcx_5 != 0)
                    sub_140a74f90(rcx_5)
                
                *arg2 = var_28
                int32_t var_20
                arg2[1].d = var_20
                var_20.q = 0
                int32_t var_1c
                *(arg2 + 0xc) = var_1c
                var_28 = 0
            
            int64_t rcx_7 = var_18
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int32_t result
            result.b = 1
            return result

return 0
