// 函数: sub_14181d5b0
// 地址: 0x14181d5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg2 + 0x10)
void* rcx = arg2 + 0x20

if (rax != 0)
    rcx = rax

void var_18
int64_t* rax_3 = (*arg2)(&var_18, (*(*rcx + 8))(rcx))
int64_t var_28 = *rax_3
int64_t* rcx_3 = rax_3[1]
rax_3[1] = 0
*rax_3 = 0
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rax_6 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*var_10 + 8))(var_10, 1)

int32_t result = sub_141819990(arg1, &var_28, arg3, arg4, arg5)

if (rcx_3 != 0)
    result = rcx_3[1].d
    rcx_3[1].d -= 1
    
    if (result == 1)
        result = (**rcx_3)(rcx_3)
        int32_t rdi_1 = *(rcx_3 + 0xc)
        *(rcx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))

return result
