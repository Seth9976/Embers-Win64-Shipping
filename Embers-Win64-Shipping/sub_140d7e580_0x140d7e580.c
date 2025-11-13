// 函数: sub_140d7e580
// 地址: 0x140d7e580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_858
int64_t rax_1 = __security_cookie ^ &var_858
int64_t* ppv
HRESULT rax_2 = CoCreateInstance(&data_1434cb290, 0, CLSCTX_INPROC_SERVER, &data_1434cb2a0, &ppv)
HRESULT result
void var_818

if (rax_2 s>= 0)
    int64_t* rcx_1 = *(arg1 + 0x10)
    int64_t* ppv_5 = ppv
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
    
    *(arg1 + 0x10) = ppv_5
    int64_t* rcx_2 = *(arg1 + 0x18)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x10))(rcx_2)
        *(arg1 + 0x18) = 0
    
    enum WIN32_ERROR rax_6 = (**ppv_5)(ppv_5, &data_1434cb2c0, arg1 + 0x18)
    
    if (rax_6 s>= NO_ERROR)
        int64_t* ppv_1
        result = CoCreateInstance(&data_1434cb280, 0, CLSCTX_INPROC_SERVER, &data_1434cb2b0, &ppv_1)
        
        if (result s>= 0)
            int64_t* rcx_9 = *(arg1 + 0x20)
            int64_t* ppv_6 = ppv_1
            
            if (rcx_9 != 0)
                (*(*rcx_9 + 0x10))(rcx_9)
            
            *(arg1 + 0x20) = ppv_6
            enum WIN32_ERROR rax_12 = (*(*ppv_6 + 0x18))(ppv_6, arg1 + 0x28)
            
            if (rax_12 s>= NO_ERROR)
                int64_t* rcx_15 = *(arg1 + 0x20)
                ppv = nullptr
                enum WIN32_ERROR rax_17 = (**rcx_15)(rcx_15, &data_1434cb300, &ppv)
                
                if (rax_17 s< NO_ERROR)
                    sub_140b6cae0(&var_818, 0x400, rax_17)
                    int64_t* rcx_17 = *(arg1 + 0x10)
                    
                    if (rcx_17 != 0)
                        (*(*rcx_17 + 0x10))(rcx_17)
                        *(arg1 + 0x10) = 0
                    
                    int64_t* rcx_18 = *(arg1 + 0x18)
                    
                    if (rcx_18 != 0)
                        (*(*rcx_18 + 0x10))(rcx_18)
                        *(arg1 + 0x18) = 0
                    
                    int64_t* rcx_19 = *(arg1 + 0x20)
                    
                    if (rcx_19 != 0)
                        (*(*rcx_19 + 0x10))(rcx_19)
                        *(arg1 + 0x20) = 0
                    
                    goto label_140d7e8e2
                
                int64_t* rax_21 = j_sub_140a82f30(0x28)
                int64_t* rsi_1 = rax_21
                
                if (rax_21 == 0)
                    rsi_1 = nullptr
                else
                    rsi_1[2] = -1
                    *rsi_1 = &data_142ebff10
                    rsi_1[1] = &data_142ebff38
                    rsi_1[3] = arg1
                    rsi_1[4].d = 1
                
                int64_t* rcx_20 = *(arg1 + 0x38)
                
                if (rcx_20 != rsi_1)
                    if (rsi_1 != 0)
                        (*(*rsi_1 + 8))(rsi_1)
                        rcx_20 = *(arg1 + 0x38)
                    
                    if (rcx_20 != 0)
                        (*(*rcx_20 + 0x10))(rcx_20)
                    
                    *(arg1 + 0x38) = rsi_1
                
                char rax_24 = GetVersion()
                int64_t* ppv_2 = ppv
                enum WIN32_ERROR rax_26
                
                if (rax_24 u> 5)
                    int64_t r8_8 = *(arg1 + 0x38)
                    rax_26 = (*(*ppv_2 + 0x18))(ppv_2, &data_1434cb2e0, r8_8, r8_8 + 0x10)
                else
                    int64_t rax_25 = *(arg1 + 0x38)
                    int64_t r8_7 = rax_25 + 8
                    
                    if (rax_25 == 0)
                        r8_7 = 0
                    
                    rax_26 = (*(*ppv_2 + 0x18))(ppv_2, &data_1434cb320, r8_7, rax_25 + 0x14)
                
                if (rax_26 s>= NO_ERROR)
                    int64_t* ppv_4 = ppv
                    
                    if (ppv_4 != 0)
                        (*(*ppv_4 + 0x10))(ppv_4)
                    
                    int64_t* rcx_27 = *(arg1 + 0x20)
                    result = (*(*rcx_27 + 0x28))(rcx_27, arg1 + 0x30)
                    
                    if (result s< 0)
                    label_140d7e93e:
                        sub_140b6cae0(&var_818, 0x400, result)
                        int64_t* rcx_30 = *(arg1 + 0x10)
                        
                        if (rcx_30 != 0)
                            (*(*rcx_30 + 0x10))(rcx_30)
                            *(arg1 + 0x10) = 0
                        
                        int64_t* rcx_31 = *(arg1 + 0x18)
                        
                        if (rcx_31 != 0)
                            (*(*rcx_31 + 0x10))(rcx_31)
                            *(arg1 + 0x18) = 0
                        
                        int64_t* rcx_32 = *(arg1 + 0x20)
                        
                        if (rcx_32 != 0)
                            (*(*rcx_32 + 0x10))(rcx_32)
                            *(arg1 + 0x20) = 0
                        
                        int64_t* rcx_33 = *(arg1 + 0x38)
                        
                        if (rcx_33 != 0)
                            (*(*rcx_33 + 0x10))(rcx_33)
                            *(arg1 + 0x38) = 0
                        
                        result.b = 0
                    else
                        int64_t* rcx_28 = *(arg1 + 0x20)
                        result = (*(*rcx_28 + 0x40))(rcx_28, *(arg1 + 0x30))
                        
                        if (result s< 0)
                            goto label_140d7e93e
                        
                        result.b = 1
                else
                    sub_140b6cae0(&var_818, 0x400, rax_26)
                    int64_t* rcx_23 = *(arg1 + 0x10)
                    
                    if (rcx_23 != 0)
                        (*(*rcx_23 + 0x10))(rcx_23)
                        *(arg1 + 0x10) = 0
                    
                    int64_t* rcx_24 = *(arg1 + 0x18)
                    
                    if (rcx_24 != 0)
                        (*(*rcx_24 + 0x10))(rcx_24)
                        *(arg1 + 0x18) = 0
                    
                    int64_t* rcx_25 = *(arg1 + 0x20)
                    
                    if (rcx_25 != 0)
                        (*(*rcx_25 + 0x10))(rcx_25)
                        *(arg1 + 0x20) = 0
                    
                    int64_t* rcx_26 = *(arg1 + 0x38)
                    
                    if (rcx_26 != 0)
                        (*(*rcx_26 + 0x10))(rcx_26)
                        *(arg1 + 0x38) = 0
                    
                label_140d7e8e2:
                    int64_t* ppv_3 = ppv
                    
                    if (ppv_3 == 0)
                        result.b = 0
                    else
                        (*(*ppv_3 + 0x10))(ppv_3)
                        result.b = 0
            else
                sub_140b6cae0(&var_818, 0x400, rax_12)
                int64_t* rcx_12 = *(arg1 + 0x10)
                
                if (rcx_12 != 0)
                    (*(*rcx_12 + 0x10))(rcx_12)
                    *(arg1 + 0x10) = 0
                
                int64_t* rcx_13 = *(arg1 + 0x18)
                
                if (rcx_13 != 0)
                    (*(*rcx_13 + 0x10))(rcx_13)
                    *(arg1 + 0x18) = 0
                
                int64_t* rcx_14 = *(arg1 + 0x20)
                
                if (rcx_14 == 0)
                    result.b = 0
                else
                    (*(*rcx_14 + 0x10))(rcx_14)
                    result.b = 0
                    *(arg1 + 0x20) = 0
        else
            if (data_143de542e == 0)
                sub_140b6cae0(&var_818, 0x400, result)
            
            int64_t* rcx_7 = *(arg1 + 0x10)
            
            if (rcx_7 != 0)
                (*(*rcx_7 + 0x10))(rcx_7)
                *(arg1 + 0x10) = 0
            
            int64_t* rcx_8 = *(arg1 + 0x18)
            
            if (rcx_8 == 0)
                result.b = 0
            else
                (*(*rcx_8 + 0x10))(rcx_8)
                result.b = 0
                *(arg1 + 0x18) = 0
    else
        sub_140b6cae0(&var_818, 0x400, rax_6)
        int64_t* rcx_5 = *(arg1 + 0x10)
        
        if (rcx_5 == 0)
            result.b = 0
        else
            (*(*rcx_5 + 0x10))(rcx_5)
            result.b = 0
            *(arg1 + 0x10) = 0
else
    sub_140b6cae0(&var_818, 0x400, rax_2)
    result.b = 0
__security_check_cookie(rax_1 ^ &var_858)
return result
