// 函数: sub_140ba73a0
// 地址: 0x140ba73a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
CRITICAL_SECTION* var_28
sub_140ba7920(arg1, &var_28, arg4)
CRITICAL_SECTION* rcx_2 = var_28
int64_t* rax
int64_t arg_8

if (rcx_2 == 0)
    arg_8 = 0
    rax = &arg_8
else
    rax = sub_140ba72b0(rcx_2, &arg_8, arg3)
*arg2 = *rax
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return arg2
