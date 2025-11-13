// 函数: sub_140f47780
// 地址: 0x140f47780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x308)

if (rcx == 0)
    return &data_143e2a5b8

int64_t* var_18
sub_140e152a0(rcx, &var_18)
int64_t* rcx_1 = var_18
char rax_3
int32_t rax_5

if (rcx_1 != 0)
    rax_3 = (*(*rcx_1 + 0x70))(rcx_1)
    
    if (rax_3 == 0)
        int64_t* rcx_2 = var_18
        rax_5 = (*(*rcx_2 + 0x68))(rcx_2)

void* result

if (rcx_1 == 0 || (rax_3 == 0 && rax_5 == 2))
    if (*(arg1 + 0x329) == 0)
        result = &data_143e2a750
    else if (sub_140e19820(*(arg1 + 0x308)) == 0)
        result = &data_143e2a750
    else
        int64_t* rcx_7 = *(arg1 + 0x340)
        
        if ((*(*rcx_7 + 0x250))(rcx_7) == 0)
            int64_t* rcx_8 = *(arg1 + 0x340)
            
            if ((*(*rcx_8 + 0x1c8))(rcx_8) == 0)
                result = &data_143e2a5b8
            else
                result = &data_143e2a640
        else
            result = &data_143e2a6c8
else if (*(arg1 + 0x329) == 0)
    result = &data_143e2a750
else if (sub_140e19820(*(arg1 + 0x308)) == 0)
    result = &data_143e2a750
else
    int64_t* rcx_4 = *(arg1 + 0x340)
    
    if ((*(*rcx_4 + 0x250))(rcx_4) == 0)
        int64_t* rcx_5 = *(arg1 + 0x340)
        
        if ((*(*rcx_5 + 0x1c8))(rcx_5) == 0)
            result = &data_143e2a838
        else
            result = &data_143e2a8c0
    else
        result = &data_143e2a948

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
