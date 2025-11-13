// 函数: sub_140928d20
// 地址: 0x140928d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
char rbx = 0
int32_t arg_8 = 0
int64_t* var_28
(*(*arg1 + 0xe0))(arg1, &var_28, arg2)
int64_t* rcx = var_28

if (rcx != 0)
    rbx = 1
    void var_18
    int64_t* rcx_1 = *(*(*rcx + 8))(rcx, &var_18)
    
    if ((*(*rcx_1 + 0x28))(rcx_1) != 0)
        rdi = 2

int64_t* var_10

if ((rbx & 1) != 0 && var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp3_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        int64_t r8_1 = *var_20
        (*r8_1)(var_20, arg3, r8_1)
        int32_t temp2_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *var_20
            (*(r8_2 + 8))(var_20, 1, r8_2)

return zx.q(rdi)
