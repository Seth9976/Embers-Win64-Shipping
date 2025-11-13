// 函数: sub_140e148b0
// 地址: 0x140e148b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e20d08
void var_28
void var_18
int512_t entry_zmm1
int64_t* rax_2 = sub_140e118d0(&var_28, (*(*rcx + 0x88))(rcx, &var_18), entry_zmm1)
int64_t* entry_result
*entry_result = *rax_2
void* rcx_3 = rax_2[1]
entry_result[1] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp2_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp3_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return entry_result
