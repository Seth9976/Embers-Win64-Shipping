// 函数: sub_1406d0a50
// 地址: 0x1406d0a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_38
int64_t* arg_18 = &var_38
var_38 = 0
int32_t rbx = arg1[1].d
int64_t rsi = *arg1
int32_t var_30 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_38, rbx, 0)
    memcpy(var_38, rsi, rbx * 2)
else
    int32_t var_2c_1 = 0

arg_18 = &var_38
int64_t var_28
int64_t* rax = sub_140686ab0(&var_28, &var_38, arg4)
arg_8 = 1
int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (arg3 != rax)
    int64_t rcx_4 = *arg3
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *arg3 = *rax
    *rax = 0
    arg3[1].d = rax[1].d
    *(arg3 + 0xc) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_1406c9770(arg3, arg2, 0, 0) __tailcall
