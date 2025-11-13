// 函数: sub_140f01950
// 地址: 0x140f01950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg3
float arg_10
(*(*rcx + 0x38))(rcx, &arg_10)
int64_t* rcx_1 = *arg3
int32_t arg_8
(*(*rcx_1 + 0x10))(rcx_1, &arg_8)
int64_t* rcx_2 = *arg3
void var_38
(*(*rcx_2 + 0x20))(rcx_2, &var_38)
int32_t rax_3 = arg_8
char var_20
int32_t rdx_3

if (var_20 != 0)
    rdx_3 = arg5
    rax_3 += arg4
else
    rdx_3 = rax_3 + arg4

int64_t var_48
sub_140eec190(&var_48, rdx_3 - rax_3)
int64_t* var_58
sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_58)
int64_t* rcx_6 = var_58
float arg_18
(*(*rcx_6 + 0x18))(rcx_6, &arg_18, &var_48, arg1 + 0x90, arg8)
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp1_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

int64_t rcx_9 = var_48
*arg2 = arg_10 + arg_18
arg2[1] = arg6 + arg7

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t temp3_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_28 + 8))(var_28, 1)

return arg2
