// 函数: sub_141da79d0
// 地址: 0x141da79d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg3[1].d == 0
char result = 0x28
void** const var_18 = &data_142d5a028
int32_t var_10 = 1

if (not(cond:0))
    int64_t* rcx = *arg3
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result != 0)
            if (arg3[1].d == 0)
                return (*(*nullptr + 0x50))(0, &var_18)
            
            int64_t* rcx_1 = *arg3
            return (*(*rcx_1 + 0x50))(rcx_1, &var_18)

return result
