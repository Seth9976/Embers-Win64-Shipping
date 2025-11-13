// 函数: sub_140ab25c0
// 地址: 0x140ab25c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx == *arg2)
    int64_t result
    result.b = 1
    return result

int64_t var_18
(*(*rcx + 0x18))(rcx, &var_18)
int64_t* rcx_1 = *arg2
int64_t var_28
(*(*rcx_1 + 0x18))(rcx_1, &var_28)
int64_t rcx_2 = var_18
int64_t rax_2

if (rcx_2 != 0)
    rax_2 = var_28

int64_t rsi

if (rcx_2 == 0 || rax_2 == 0 || rcx_2 != rax_2)
    rsi.b = 0
else
    rsi.b = 1

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rax_6 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*var_20 + 8))(var_20, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t r8_1 = *var_10
        (*r8_1)(var_10, arg3, r8_1)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_2 = *var_10
            (*(r8_2 + 8))(var_10, zx.q(rdi_1), r8_2)

return zx.q(rsi.b)
