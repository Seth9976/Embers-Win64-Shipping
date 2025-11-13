// 函数: sub_140d08210
// 地址: 0x140d08210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1 = arg2
int64_t var_28
__builtin_memset(&var_28, 0, 0x18)
int64_t rax = sub_140cbccd0(arg1)
int64_t rax_1

if (rax == 0)
    rax_1 = 0
else
    rax_1 = rax + 0x200

int64_t var_30 = rax_1
int64_t var_38 = arg6
char rax_3 = sub_140d234b0(&var_28, &result_1)
*arg3 = 0xffffffff
arg3[1] = 0
int64_t var_20
int64_t result

if (rax_3 == 0)
    int64_t arg_18 = 0
    *(arg3 + 0x10) = 0
    int32_t rax_5 = arg3[9]
    arg3[8] = 0
    
    if (rax_5 s< 0 && rax_5 != 0)
        sub_1405947f0(&arg3[6], 0)
    
    int16_t* rax_6 = *(arg3 + 0x18)
    
    if (rax_6 != 0)
        *rax_6 = 0
    
    result = 0
else
    *(arg3 + 0x10) = var_28
    sub_140597df0(&arg3[6], &var_20)
    result = result_1

arg3[2] = 0
int64_t rcx_3 = var_20

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return result
