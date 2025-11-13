// 函数: sub_14192f390
// 地址: 0x14192f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff7c80
char rax_1

if (data_143f01c92 != 0)
    rax_1 = sub_140a80f10()

int64_t* rcx_1

if (data_143f01c92 == 0 || rax_1 != 0)
    rcx_1 = arg1[8]
label_14192f410:
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        (**rcx_1)(rcx_1, 1)
else
    void* rax_2 = arg1[8]
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    void* var_20_1 = rax_2
    int64_t var_38_1 = 0
    void** const var_28_1 = &data_142ff8808
    void (* var_48)(int64_t* arg1) = sub_141931f60
    sub_14195af10(&var_48, 0, arg3, arg4)
    rcx_1 = arg1[8]
    arg1[8] = 0
    
    if (rcx_1 != 0)
        goto label_14192f410
int64_t* rcx_2 = arg1[8]

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        (**rcx_2)(rcx_2, 1)

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
