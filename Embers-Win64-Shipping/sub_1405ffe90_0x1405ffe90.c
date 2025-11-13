// 函数: sub_1405ffe90
// 地址: 0x1405ffe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = nullptr
int64_t* arg_10 = nullptr
int64_t* r9 = *(arg1 + 0x50)

if (r9 != 0)
    (**r9)(r9, &data_142d5fd38, &arg_10)
    rcx = arg_10
    
    if (rcx != 0)
        int64_t arg_20 = 0
        
        if ((*(*rcx + 0x40))(rcx, &arg_20) == 0)
            int64_t* arg_18 = nullptr
            int64_t* rcx_2 = *(arg1 + 0x58)
            (*(*rcx_2 + 0xe0))(rcx_2, arg_20, &data_142d5b568, &arg_18, -2)
            int64_t* rcx_3 = arg_18
            
            if (rcx_3 != 0)
                int64_t* arg_8 = nullptr
                int64_t* rcx_4 = arg_10
                (**rcx_4)(rcx_4, &data_142d5fd48, &arg_8)
                int64_t* rcx_5 = arg_8
                
                if (rcx_5 != 0)
                    int32_t rax_6 = (*(*rcx_5 + 0x40))(rcx_5, 1, 0)
                    int64_t* rcx_6 = arg_8
                    int64_t rax_7 = *rcx_6
                    
                    if (rax_6 == 0)
                        (*(rax_7 + 0x48))(rcx_6, 0)
                    else if ((*(rax_7 + 0x40))(rcx_6, 2, 0) == 0)
                        rcx_6 = arg_8
                        (*(*rcx_6 + 0x48))(rcx_6, 0)
                    
                    rcx_5 = arg_8
                
                if (rcx_5 != 0)
                    (*(*rcx_5 + 0x10))(rcx_5)
                
                rcx_3 = arg_18
            
            if (rcx_3 != 0)
                (*(*rcx_3 + 0x10))(rcx_3)
        
        rcx = arg_10

if (rcx != 0)
    (*(*rcx + 0x10))(rcx)
