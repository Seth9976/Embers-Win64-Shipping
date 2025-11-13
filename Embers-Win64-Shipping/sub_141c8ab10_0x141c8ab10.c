// 函数: sub_141c8ab10
// 地址: 0x141c8ab10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = nullptr
int32_t var_20 = 0
int64_t* result

while (true)
    result = *(arg1 + 0x118)
    void* rsi_1 = *result
    
    if (rsi_1 == 0)
        break
    
    if (rsi_1 + 8 != &result_1)
        int64_t* rcx
        
        if (*(rsi_1 + 0x10) != 0)
            rcx = *(rsi_1 + 8)
        
        if (*(rsi_1 + 0x10) != 0 && rcx != 0)
            (*(*rcx + 0x40))(rcx, &result_1)
        else if (var_20 != 0)
            int64_t* result_2 = result_1
            
            if (result_2 != 0)
                (*(*result_2 + 0x38))(result_2, 0)
                int64_t* result_3 = result_1
                
                if (result_3 != 0)
                    result_1 = sub_140a84c80(result_3, 0, 0)
                
                var_20 = 0
    
    void* rdi_1 = *(arg1 + 0x118)
    *(arg1 + 0x118) = rsi_1
    void var_18
    
    if (&var_18 != rsi_1 + 8 && *(rsi_1 + 0x10) != 0)
        int64_t* rcx_1 = *(rsi_1 + 8)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *(rsi_1 + 8)
            
            if (rcx_2 != 0)
                *(rsi_1 + 8) = sub_140a84c80(rcx_2, 0, 0)
            
            *(rsi_1 + 0x10) = 0
    
    if (rdi_1 != 0)
        sub_140745b20(rdi_1 + 8)
        j_sub_140a74f90(rdi_1)
    
    int64_t* result_4 = nullptr
    
    if (var_20 != 0)
        result_4 = result_1
    
    (*(*result_4 + 0x48))(result_4)

if (var_20 == 0)
    result = result_1
label_141c8ac82:
    
    if (result != 0)
        return sub_140a74f90(result)
else
    int64_t* result_5 = result_1
    
    if (result_5 != 0)
        (*(*result_5 + 0x38))(result_5, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int32_t var_20_1 = 0
        goto label_141c8ac82

return result
