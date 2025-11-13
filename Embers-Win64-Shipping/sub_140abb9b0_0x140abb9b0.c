// 函数: sub_140abb9b0
// 地址: 0x140abb9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (wcsncmp(arg2, u"LOCGEN_FORMAT_ORDERED", 0x15) == 0)
    int16_t i = arg2[0x15]
    void* rdx = &arg2[0x15]
    
    if (i != 0)
        while (i == 9 || i == 0x20)
            i = *(rdx + 2)
            rdx += 2
            
            if (i == 0)
                break
    
    void* rax_1 = nullptr
    
    if (*rdx == 0x28)
        rax_1 = rdx
    
    void* rbx_1 = rax_1 + 2
    
    if (rax_1 == 0)
        rbx_1 = rax_1
    
    if (rbx_1 != 0)
        sub_1405d9400()
        int64_t var_38 = data_143cd6fd8
        int64_t* rcx_2 = data_143cd6fe0
        
        if (rcx_2 != 0)
            rcx_2[1].d += 1
        
        int16_t i_1 = *rbx_1
        int32_t var_28 = 0
        
        if (i_1 != 0)
            while (i_1 == 9 || i_1 == 0x20)
                i_1 = *(rbx_1 + 2)
                rbx_1 += 2
                
                if (i_1 == 0)
                    break
        
        wchar16* result_2 = sub_140abc1e0(rbx_1, &var_38, 0, 0, 1)
        wchar16* result_1 = result_2
        wchar16* result
        
        if (result_2 != 0)
            char* var_48
            char** rax_2 = sub_140a96390(&var_48, &var_38)
            char* rdx_3 = *(arg1 + 0x10)
            *(arg1 + 0x10) = *rax_2
            *rax_2 = rdx_3
            int64_t rdx_4 = *(arg1 + 0x18)
            *(arg1 + 0x18) = rax_2[1]
            rax_2[1] = rdx_4
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t rax_5 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (rax_5 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            int32_t rax_17 = *(arg1 + 0x2c)
            void* rsi_1 = *(arg1 + 0x20)
            int32_t i_7 = *(arg1 + 0x28)
            
            if (rax_17 s< 0)
                if (i_7 != 0)
                    void* rsi_3 = rsi_1 + 0x28
                    int32_t i_2
                    
                    do
                        if (*rsi_3 != 0)
                            *rsi_3 = 0
                            int64_t* rdi_3 = *(rsi_3 - 0x10)
                            
                            if (rdi_3 != 0)
                                rdi_3[1].d -= 1
                                
                                if (rdi_3[1].d == 1)
                                    (**rdi_3)(rdi_3)
                                    int32_t rax_15 = *(rdi_3 + 0xc)
                                    *(rdi_3 + 0xc) -= 1
                                    
                                    if (rax_15 == 1)
                                        (*(*rdi_3 + 8))(rdi_3, 1)
                        
                        rsi_3 += 0x30
                        i_2 = i_7
                        i_7 -= 1
                    while (i_2 != 1)
                    rax_17 = *(arg1 + 0x2c)
                
                *(arg1 + 0x28) = 0
                
                if (rax_17 != 0)
                    sub_1405a5220(arg1 + 0x20, 0)
            else
                if (i_7 != 0)
                    char* rsi_2 = rsi_1 + 0x28
                    int32_t i_3
                    
                    do
                        if (*rsi_2 != 0)
                            *rsi_2 = 0
                            int64_t* rdi_2 = *(rsi_2 - 0x10)
                            
                            if (rdi_2 != 0)
                                rdi_2[1].d -= 1
                                
                                if (rdi_2[1].d == 1)
                                    (**rdi_2)(rdi_2)
                                    int32_t rax_10 = *(rdi_2 + 0xc)
                                    *(rdi_2 + 0xc) -= 1
                                    
                                    if (rax_10 == 1)
                                        (*(*rdi_2 + 8))(rdi_2, 1)
                        
                        rsi_2 = &rsi_2[0x30]
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
                
                *(arg1 + 0x28) = 0
            
            wchar16 i_6
            
            while (true)
                wchar16 i_4 = *result_1
                
                if (i_4 != 0)
                    while (i_4 == 9 || i_4 == 0x20)
                        i_4 = result_1[1]
                        result_1 = &result_1[1]
                        
                        if (i_4 == 0)
                            break
                
                i_6 = *result_1
                
                if (i_6 != 0x2c)
                    break
                
                int64_t rdi_4 = sx.q(*(arg1 + 0x28))
                void* rbx_2 = &result_1[1]
                int32_t rax_18 = (rdi_4 + 1).d
                *(arg1 + 0x28) = rax_18
                
                if (rax_18 s> *(arg1 + 0x2c))
                    sub_1405c4f50(arg1 + 0x20)
                
                int32_t* rdi_7 = rdi_4 * 0x30 + *(arg1 + 0x20)
                *rdi_7 = 4
                sub_1405d9400()
                *(rdi_7 + 0x10) = data_143cd6fd8
                void* rcx_16 = data_143cd6fe0
                *(rdi_7 + 0x18) = rcx_16
                
                if (rcx_16 != 0)
                    *(rcx_16 + 8) += 1
                
                rdi_7[8] = data_143cd6fe8
                rdi_7[0xa].b = 1
                int16_t i_5 = *rbx_2
                
                if (i_5 != 0)
                    while (i_5 == 9 || i_5 == 0x20)
                        i_5 = *(rbx_2 + 2)
                        rbx_2 += 2
                        
                        if (i_5 == 0)
                            break
                
                int16_t* result_3 = sub_140aadf50(rdi_7, rbx_2)
                result_1 = result_3
                
                if (result_3 == 0)
                    goto label_140abbcd7
            
            if (i_6 != 0)
                while (i_6 == 9 || i_6 == 0x20)
                    i_6 = result_1[1]
                    result_1 = &result_1[1]
                    
                    if (i_6 == 0)
                        break
            
            if (result_1 != 0 && *result_1 != 0x29)
                result_1 = nullptr
            
            result = &result_1[1]
            
            if (result_1 == 0)
                result = result_1
        
        if (result_2 == 0 || result == 0)
        label_140abbcd7:
            result = nullptr
        else
            sub_140ab73d0(arg1, arg3)
        
        if (rcx_2 != 0)
            rcx_2[1].d -= 1
            
            if (rcx_2[1].d == 1)
                (**rcx_2)(rcx_2)
                int32_t r15_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (r15_1 == 1)
                    int64_t r8_2 = *rcx_2
                    (*(r8_2 + 8))(rcx_2, zx.q(r15_1), r8_2)
        
        return result

return 0
