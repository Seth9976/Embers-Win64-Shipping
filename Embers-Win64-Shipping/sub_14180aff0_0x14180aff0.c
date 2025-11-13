// 函数: sub_14180aff0
// 地址: 0x14180aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t var_28 = *arg4
void* rax_1 = arg4[1]
int128_t var_18 = zmm0
void* var_20 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t* result_1
int64_t* result = sub_1407473e0(arg1, sub_14180b330(&result_1, arg2, &var_18, &var_28))
int32_t var_30

if (var_30 == 0)
    result = result_1
label_14180b085:
    
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
        
        int32_t var_30_1 = 0
        goto label_14180b085

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
