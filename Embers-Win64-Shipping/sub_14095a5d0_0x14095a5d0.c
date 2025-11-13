// 函数: sub_14095a5d0
// 地址: 0x14095a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
(*(*arg1 + 0x2a0))(arg1, &var_18)
int64_t* rcx = var_18
int64_t* result

if (rcx == 0)
    int64_t r8
    r8.b = 1
    *arg2 = 0
    result = sub_14095ebe0(arg4, arg3, r8)
else
    void arg_8
    int64_t* rax_2 = (*(*rcx + 0xf0))(rcx, &arg_8, arg4)
    int64_t* result_1 = nullptr
    int32_t var_20_1 = 0
    *arg2 = *rax_2
    int64_t* rcx_2 = var_18
    result = (*(*rcx_2 + 0xe8))(rcx_2, arg3, &result_1)
    
    if (var_20_1 == 0)
        result = result_1
    label_14095a680:
        
        if (result != 0)
            result = sub_140a74f90(result)
    else
        int64_t* result_2 = result_1
        
        if (result_2 != 0)
            (*(*result_2 + 0x38))(result_2, 0)
            result = result_1
            
            if (result != 0)
                result = sub_140a84c80(result, 0, 0)
                result_1 = result
            
            int32_t var_20_2 = 0
            goto label_14095a680

int64_t* var_10

if (var_10 != 0)
    result = zx.q(var_10[1].d)
    var_10[1].d -= 1
    
    if (result.d == 1)
        result = (**var_10)(var_10)
        int32_t rdi_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_10 + 8))(var_10, zx.q(rdi_1))

return result
