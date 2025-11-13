// 函数: sub_1405f5cb0
// 地址: 0x1405f5cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = -2
int64_t* rcx = data_143f0f180
int64_t* rax_1 = (*(*rcx + 0x458))(rcx)
int64_t* var_30 = nullptr
int64_t r8 = *rax_1
int64_t result = (*(r8 + 0x140))(rax_1, &var_30, r8)

if (var_30 == 0)
    return result

int64_t* rcx_2 = *(arg1 + 0x18)
int64_t rdx_1 = *rcx_2
int64_t rax_2 = (*(rdx_1 + 0x38))(rcx_2, rdx_1)

if (rax_2 != 0)
    int64_t* var_38 = nullptr
    int64_t* rcx_3 = *(arg1 + 0x10)
    int64_t r9_1 = *rcx_3
    (*r9_1)(rcx_3, &data_142d5fd38, &var_38, r9_1, var_38)
    int64_t* rcx_4 = var_38
    
    if (rcx_4 != 0)
        int64_t var_28 = 0
        
        if ((*(*rcx_4 + 0x40))(rcx_4, &var_28) == 0)
            int64_t rdx_3 = var_28
            
            if (rdx_3 != 0)
                int64_t* arg_20 = nullptr
                (*(*rax_1 + 0xe0))(rax_1, rdx_3, &data_142d5b568, &arg_20)
                int64_t* rcx_6 = arg_20
                
                if (rcx_6 != 0)
                    int64_t* arg_18 = nullptr
                    (**rcx_6)(rcx_6, &data_142d5fd48, &arg_18)
                    int64_t* rcx_7 = arg_18
                    
                    if (rcx_7 != 0)
                        int64_t* rcx_10
                        
                        if ((*(*rcx_7 + 0x40))(rcx_7, 1, 0) != 0)
                            int64_t* rcx_9 = arg_18
                            
                            if ((*(*rcx_9 + 0x40))(rcx_9, 2, 0xffffffff) == 0)
                                rcx_10 = arg_18
                                (*(*rcx_10 + 0x48))(rcx_10, 2)
                        else
                            int64_t* rcx_8 = var_30
                            (*(*rcx_8 + 0x178))(rcx_8, rax_2, arg_20)
                            rcx_10 = arg_18
                            (*(*rcx_10 + 0x48))(rcx_10, 2)
                        rcx_7 = arg_18
                    
                    if (rcx_7 != 0)
                        (*(*rcx_7 + 0x10))(rcx_7)
                    
                    rcx_6 = arg_20
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x10))(rcx_6)
        
        rcx_4 = var_38
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x10))(rcx_4)

int64_t* rcx_11 = var_30
return (*(*rcx_11 + 0x10))(rcx_11)
