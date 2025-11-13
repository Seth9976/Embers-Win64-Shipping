// 函数: sub_140d993e0
// 地址: 0x140d993e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)
int128_t var_88
sub_140ddaad0(&var_88, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, rax + 0x20, rax + 0x30, 
    *(rax + 0x28), *(rax + 0x38))
int64_t* rbx_1 = *(arg1 + 0x28)
int32_t arg_8 = 0
int32_t var_98
sub_140d997c0(rbx_1, &var_98, &arg_8)
int64_t rbp = sx.q(var_98)
int128_t* var_90
*var_90 = var_88
int128_t var_78
var_90[1] = var_78
int128_t var_68
var_90[2] = var_68
int128_t var_58
var_90[3] = var_58
int128_t var_48
var_90[4] = var_48
int128_t var_38
var_90[5] = var_38
int128_t var_28
var_90[6] = var_28
int128_t var_18
var_90[7] = var_18
int64_t result = (rbp << 7) + *rbx_1
int64_t rbx_2 = sx.q(*(arg1 + 0x18))
int32_t rcx_2 = (rbx_2 + 1).d
*(arg1 + 0x18) = rcx_2

if (rcx_2 s> *(arg1 + 0x1c))
    sub_1405a4cf0(arg1 + 0x10)

*(*(arg1 + 0x10) + (rbx_2 << 2)) = rbp.d
return result
