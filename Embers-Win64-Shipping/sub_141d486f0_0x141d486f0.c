// 函数: sub_141d486f0
// 地址: 0x141d486f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405947f0(arg2, 0)
    
    uint64_t* result
    result.b = 1
    return result

void*** var_18
sub_14093d6b0(&var_18, arg2, 0)
int64_t* rbx_1 = *(arg1 + 0x18)
int64_t var_28 = *(arg1 + 0x10)
int64_t* var_20 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

void*** rax_1 = sub_140666b20(&var_28)
void* var_38 = &rax_1[2]
char rax_2 = sub_140666e10(&var_38, var_18, 1)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        void** rdx_2 = *rax_1
        (*rdx_2)(rax_1, rdx_2)
        int32_t temp2_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rax_1)[1](rax_1, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp5_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return zx.q(rax_2)
