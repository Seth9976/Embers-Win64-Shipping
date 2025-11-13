// 函数: sub_142127800
// 地址: 0x142127800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
void* arg_18 = arg3
void* rax = sub_142126240(*(*(arg1 + 0x10) + 0x28), arg4 + 0x20)
void* arg_8 = rax
void* rbx_1
int32_t arg_28

if (rax == 0)
    rbx_1 = nullptr
label_14212785d:
    void* var_48 = arg1
    int64_t* var_40_1 = &arg_20
    int64_t* var_38_1 = &arg_18
    int32_t* var_30_1 = &arg_28
    void** var_28_1 = &arg_8
    sub_14211c830(&var_48, arg5)
else
    void* rax_1 = sub_1419cec70(rax, arg3 + 0x28, arg_28)
    rbx_1 = rax_1
    
    if (rax_1 == 0)
        goto label_14212785d
arg2[1] = *(arg1 + 0x10)
*arg2 = rbx_1
return arg2
