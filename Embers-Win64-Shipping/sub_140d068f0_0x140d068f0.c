// 函数: sub_140d068f0
// 地址: 0x140d068f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28 = nullptr
int32_t var_20 = 0
void* result_1 = sub_140ce37a0(arg2, &var_28, 0)
void* result = result_1

if (result_1 == 0)
    result = nullptr
else
    char* rdi_2 = zx.q(*(arg1 + 0x79)) + arg3
    int64_t* rax_1 = sub_140af2bc0()
    int16_t* const rbx_1 = &data_142d40450
    int16_t* const rcx_1 = &data_142d40450
    
    if (var_20 != 0)
        rcx_1 = var_28
    
    if (sub_140a54510(rcx_1, &(*U"RGBXYZF10|")[7]) == 0)
        *rdi_2 |= *(arg1 + 0x7a)
    else
        int16_t* const rcx_2 = &data_142d40450
        
        if (var_20 != 0)
            rcx_2 = var_28
        
        if (sub_140a54510(rcx_2, u"True") == 0)
            *rdi_2 |= *(arg1 + 0x7a)
        else
            int64_t* rax_4 = sub_140ac6680(*rax_1)
            int16_t* rdx_1
            
            if (rax_4[1].d == 0)
                rdx_1 = &data_142d40450
            else
                rdx_1 = *rax_4
            
            int16_t* const rcx_4 = &data_142d40450
            
            if (var_20 != 0)
                rcx_4 = var_28
            
            if (sub_140a54510(rcx_4, rdx_1) == 0)
                *rdi_2 |= *(arg1 + 0x7a)
            else
                int16_t* const rcx_5 = &data_142d40450
                
                if (var_20 != 0)
                    rcx_5 = var_28
                
                if (sub_140a54510(rcx_5, &data_142e5e448) == 0)
                    *rdi_2 |= *(arg1 + 0x7a)
                else
                    int64_t* rax_7 = sub_140ac6680(rax_1[2])
                    int16_t* rdx_2
                    
                    if (rax_7[1].d == 0)
                        rdx_2 = &data_142d40450
                    else
                        rdx_2 = *rax_7
                    
                    int16_t* const rcx_7 = &data_142d40450
                    
                    if (var_20 != 0)
                        rcx_7 = var_28
                    
                    if (sub_140a54510(rcx_7, rdx_2) == 0)
                        *rdi_2 |= *(arg1 + 0x7a)
                    else
                        int16_t* const rcx_8 = &data_142d40450
                        
                        if (var_20 != 0)
                            rcx_8 = var_28
                        
                        if (sub_140a54510(rcx_8, &(*U"RGBXYZF10|")[8]) == 0)
                            *rdi_2 &= not.b(*(arg1 + 0x7b))
                        else
                            int16_t* const rcx_9 = &data_142d40450
                            
                            if (var_20 != 0)
                                rcx_9 = var_28
                            
                            if (sub_140a54510(rcx_9, u"False") == 0)
                                *rdi_2 &= not.b(*(arg1 + 0x7b))
                            else
                                int64_t* rax_11 = sub_140ac6680(rax_1[1])
                                int16_t* rdx_3
                                
                                if (rax_11[1].d == 0)
                                    rdx_3 = &data_142d40450
                                else
                                    rdx_3 = *rax_11
                                
                                int16_t* const rcx_11 = &data_142d40450
                                
                                if (var_20 != 0)
                                    rcx_11 = var_28
                                
                                if (sub_140a54510(rcx_11, rdx_3) == 0)
                                    *rdi_2 &= not.b(*(arg1 + 0x7b))
                                else
                                    int16_t* rcx_12 = &data_142d40450
                                    
                                    if (var_20 != 0)
                                        rcx_12 = var_28
                                    
                                    if (sub_140a54510(rcx_12, &data_142e5e440) == 0)
                                        *rdi_2 &= not.b(*(arg1 + 0x7b))
                                    else
                                        int64_t* rax_14 = sub_140ac6680(rax_1[3])
                                        int16_t* rdx_4
                                        
                                        if (rax_14[1].d == 0)
                                            rdx_4 = &data_142d40450
                                        else
                                            rdx_4 = *rax_14
                                        
                                        if (var_20 != 0)
                                            rbx_1 = var_28
                                        
                                        if (sub_140a54510(rbx_1, rdx_4) != 0)
                                            result = nullptr
                                        else
                                            *rdi_2 &= not.b(*(arg1 + 0x7b))

int16_t* rcx_15 = var_28

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return result
