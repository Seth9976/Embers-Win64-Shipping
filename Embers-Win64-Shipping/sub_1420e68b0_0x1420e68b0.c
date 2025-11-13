// 函数: sub_1420e68b0
// 地址: 0x1420e68b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg5 = 0
void* rax = sub_1423de540(data_143f5b298, arg1, 1)

if (rax == 0 || *(arg2 + 0x10) == 0)
    int64_t rcx_2 = *(arg2 + 0x18)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    return nullptr

int32_t rax_1 = arg4[1].d
int64_t var_38 = *arg4
int32_t var_30_1 = rax_1
int32_t rax_2 = arg3[1].d
int64_t var_28 = *arg3
int32_t var_20_1 = rax_2
int64_t var_18
sub_1415206f0(arg2 + 0x10, &var_18)
int64_t* result = sub_1420e69b0(rax, &var_18, &var_28, &var_38, arg5)
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg2 + 0x18)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return result
