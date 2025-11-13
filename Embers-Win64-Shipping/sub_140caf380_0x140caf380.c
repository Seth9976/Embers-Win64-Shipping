// 函数: sub_140caf380
// 地址: 0x140caf380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
__builtin_memset(&var_38, 0, 0x14)
sub_140d2c020(&var_38, arg1)
int64_t rax = var_38
int64_t var_30
int64_t rbx = var_30
*arg2 = 0xffffffff
arg2[1] = 0
*(arg2 + 0x10) = rax

if (&arg2[6] != &var_30)
    int32_t r8_1 = arg2[9]
    int32_t var_28
    arg2[8] = var_28
    
    if (var_28 != 0 || r8_1 != 0)
        sub_1405a4c70(&arg2[6], var_28, r8_1)
        memcpy(*(arg2 + 0x18), rbx, var_28 * 2)
        rbx = var_30
    else
        arg2[9] = 0

arg2[2] = 0

if (rbx != 0)
    sub_140a74f90(rbx)

return arg1
