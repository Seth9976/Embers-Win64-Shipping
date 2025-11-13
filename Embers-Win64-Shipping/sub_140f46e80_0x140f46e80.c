// 函数: sub_140f46e80
// 地址: 0x140f46e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x308)

if (rcx == 0)
    return &data_143e2aab8

void var_18
sub_140e152a0(rcx, &var_18)
void* result

if (*(arg1 + 0x32a) != 0)
    int64_t* rcx_1 = *(arg1 + 0x350)
    
    if ((*(*rcx_1 + 0x250))(rcx_1) == 0)
        int64_t* rcx_2 = *(arg1 + 0x350)
        result = &data_143e2ab40
        
        if ((*(*rcx_2 + 0x1c8))(rcx_2) == 0)
            result = &data_143e2aab8
    else
        result = &data_143e2abc8
else
    result = &data_143e2ac50

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_1 = *var_10
        (*rdx_1)(var_10, rdx_1)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_10
            (*(r8_1 + 8))(var_10, 1, r8_1)

return result
