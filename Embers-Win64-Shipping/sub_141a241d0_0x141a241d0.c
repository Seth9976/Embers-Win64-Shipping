// 函数: sub_141a241d0
// 地址: 0x141a241d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg2 + 0x20)
int64_t rax
rax.b = r9 != 0
*(arg2 + 0x20) = rax + r9
int64_t var_18
int64_t* result = sub_1405bd170(arg1, &var_18)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx = *arg3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_2 = var_18

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
