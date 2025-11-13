// 函数: sub_140968170
// 地址: 0x140968170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
int64_t* result = (*(*arg1 + 0x2a0))(arg1, &var_18)
int64_t* rcx = var_18

if (rcx != 0)
    if ((*(*rcx + 0x38))(rcx, arg2) == 0)
        int64_t* rax_5 = (*(*arg1 + 0x298))(arg1)
        int64_t rdx_4 = *arg1
        result = (*(*rax_5 + 0x2a0))(rax_5, sub_142029870((*(rdx_4 + 0x298))(arg1, rdx_4)), arg3)
    else
        sub_14094dc80(&arg1[0x1a], arg3)
        arg1[0x30].d = *(arg3 + 0xb0)
        void arg_8
        result = sub_14095d640(arg1, &arg_8, arg2, &arg1[5])
        arg1[0x12] = *result

int64_t* var_10

if (var_10 != 0)
    result = zx.q(var_10[1].d)
    var_10[1].d -= 1
    
    if (result.d == 1)
        result = (**var_10)(var_10)
        int32_t rdi_2 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_10 + 8))(var_10, zx.q(rdi_2))

return result
