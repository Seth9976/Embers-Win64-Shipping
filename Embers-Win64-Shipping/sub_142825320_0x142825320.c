// 函数: sub_142825320
// 地址: 0x142825320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
sub_1428236b8(&var_28)
int64_t var_18 = 0
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_30 = 0
(*(*arg2 + 8))(arg2, &var_38)
int64_t* rdx_1 = *(arg1 + 0x10)

if (rdx_1 != 0)
    sub_142824fcc(arg1, rdx_1, arg2, &var_28)

(*(*arg2 + 0x10))(arg2)
void* rcx_4 = var_28
void** rbx_1 = *(rcx_4 + 8)

if (*(rbx_1 + 0x19) == 0)
    do
        sub_14281d6ec(&var_28, &var_28, rbx_1[2])
        void** rcx_6 = rbx_1
        rbx_1 = *rbx_1
        sub_14058ba50(rcx_6, 0x30)
    while (*(rbx_1 + 0x19) == 0)
    
    rcx_4 = var_28

return sub_14058ba50(rcx_4, 0x30)
