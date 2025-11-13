// 函数: sub_140e5ce70
// 地址: 0x140e5ce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143e2435c = 1
void*** rax = sub_140d77e90()
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rax

void*** var_28 = rax
void var_18
int64_t* result = sub_140e5c960(&var_18, &var_28)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_10 + 8))(var_10, 1)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        result = (**rax_1)(rax_1)
        int32_t temp3_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*rax_1)[1](rax_1, 1)

return result
