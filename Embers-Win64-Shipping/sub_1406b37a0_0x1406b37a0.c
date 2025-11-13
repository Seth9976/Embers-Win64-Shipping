// 函数: sub_1406b37a0
// 地址: 0x1406b37a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg2[1].d

if (r14 s> 1)
    int32_t rax_1 = arg3[1].d
    int32_t rdi_1 = rax_1 - 1
    
    if (rax_1 == 0)
        rdi_1 = 0
    
    int64_t var_38
    int64_t* arg_10 = &var_38
    var_38 = 0
    int64_t rbx_1 = *arg2
    sub_1405a4c70(&var_38, r14 + rdi_1, 0)
    memcpy(var_38, rbx_1, r14 * 2)
    sub_140a20ba0(&var_38, *arg3, rdi_1)
    *arg1 = var_38
    arg1[1].d = r14
    int32_t var_2c
    *(arg1 + 0xc) = var_2c
else
    sub_140596d10(arg1, arg3)

return arg1
