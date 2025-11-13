// 函数: sub_140f47b60
// 地址: 0x140f47b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x308)

if (rcx == 0)
    return &data_143e2a338

void var_18
sub_140e152a0(rcx, &var_18)
uint8_t rax_2

if (*(arg1 + 0x328) != 0)
    rax_2 = sub_140e19830(*(arg1 + 0x308))

void* result

if (*(arg1 + 0x328) == 0 || rax_2 == 0)
    result = &data_143e2a4d0
else
    int64_t* rcx_2 = *(arg1 + 0x330)
    
    if ((*(*rcx_2 + 0x250))(rcx_2) == 0)
        int64_t* rcx_3 = *(arg1 + 0x330)
        
        if ((*(*rcx_3 + 0x1c8))(rcx_3) == 0)
            result = &data_143e2a338
        else
            result = &data_143e2a3c0
    else
        result = &data_143e2a448

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
