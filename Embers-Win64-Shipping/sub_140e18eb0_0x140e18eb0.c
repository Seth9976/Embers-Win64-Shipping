// 函数: sub_140e18eb0
// 地址: 0x140e18eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
int64_t** rax = sub_140e175c0(arg1, &var_18)
int64_t* rbx = rax[1]
int64_t* var_38 = *rax
int64_t* var_30 = rbx

if (rbx != 0)
    rbx[1].d += 1

void var_28
int64_t* rax_1 = sub_140e118d0(&var_28, &var_38, arg3)
*arg2 = *rax_1
void* rcx_3 = rax_1[1]
arg2[1] = rcx_3

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

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp5_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
