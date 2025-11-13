// 函数: sub_142bd3350
// 地址: 0x142bd3350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10
int32_t arg_18
sub_142bd31b0(arg1, arg1[0x925].d, *(arg1 + 0x492c), arg2, arg3, &arg_10, &arg_18)
int32_t arg_8
int32_t arg_20
sub_142bd31b0(arg1, arg4, arg8, arg9, arg10, &arg_20, &arg_8)
void* r8_2 = arg1[1]
int32_t rdx_6 = arg_10
*(r8_2 + 0x20) +=
    ((arg8 - arg3) s>> 0x10) * (arg2 s>> 0x10) - ((arg4 - arg2) s>> 0x10) * (arg3 s>> 0x10)
int32_t rcx_6 = arg_18
int32_t var_58 = arg1[0x925].d + rdx_6
bool cond:0 = *(arg1 + 0x48df) == 0
int32_t var_54 = *(arg1 + 0x492c) + rcx_6
int32_t rdx_7 = arg_20
int32_t rcx_7 = arg_8
int32_t var_4c = rcx_6 + arg3
int64_t rdi_1 = (rdx_6 + arg2).q
int64_t rbx_1 = var_58.q
int32_t var_44 = rcx_7 + arg8
arg_8 = rdx_7 + arg9
int32_t arg_c = rcx_7 + arg10

if (not(cond:0))
    arg6 = sub_142bd3af0(arg1, rbx_1, arg7, arg5, arg6)
    *(arg1 + 0x48df) = 0
    *(arg1 + 0x48dc) = 1
    arg1[0x924] = rdi_1

if (arg1[0x928].b != 0)
    sub_142bd3ba0(arg1, &arg1[2], &var_58, rdi_1, 0)
    rbx_1 = var_58.q

int64_t* r9_3 = arg1[0x91e]
arg1[0x92b] = (rdx_7 + arg4).q
int64_t* result = arg_8.q
arg1[0x92c] = result
arg1[0x928].b = 1
*(arg1 + 0x4944) = 4
arg1[0x929] = rbx_1
arg1[0x92a] = rdi_1

if (*(r9_3 + 9) != 0)
    int32_t* var_70_1
    var_70_1.b = 0
    result = sub_142bd4180(&arg1[2], arg1[0x91c], arg1[0x91d], r9_3, arg6, arg7, arg1[0x91f].d, 
        var_70_1.b)

*(arg1 + 0x492c) = arg10
arg1[0x925].d = arg9
return result
