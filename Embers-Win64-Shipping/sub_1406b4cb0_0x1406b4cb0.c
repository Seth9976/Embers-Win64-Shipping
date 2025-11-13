// 函数: sub_1406b4cb0
// 地址: 0x1406b4cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = *arg3
int64_t rax_1 = arg3[1]
arg3[1] = 0
int32_t var_38 = arg3[2].d
int32_t var_34 = *(arg3 + 0x14)
arg3[2] = 0
void*** rbx
void*** arg_18

if (arg2 == 1 || arg2 != 2)
    void*** rax_5 = j_sub_140a82f30(0x120)
    arg_18 = rax_5
    
    if (rax_5 == 0)
        rbx = nullptr
    else
        rbx = sub_1406b2f20(rax_5, &var_48)
else
    void*** rax_4 = j_sub_140a82f30(0x110)
    rbx = rax_4
    arg_18 = rax_4
    
    if (rax_4 == 0)
        rbx = nullptr
    else
        sub_1406b2df0(rax_4, &var_48)
        *rbx = &data_142d8e090
void*** var_30 = rbx
char var_28 = 0
char var_20 = 0

if (rax_1 != 0)
    sub_140a74f90(rax_1)

if (rbx == 0)
    void var_58
    std::_Throw_future_error(std::make_error_code(&var_58, 4))
    noreturn

*arg1 = nullptr

if (arg1 != &var_30)
    rbx[1].d += 1
    *arg1 = rbx
    arg1[1].b = 0

arg1[1].b = 1
rbx[1].d -= 1

if (rbx[1].d == 1)
    int64_t* rcx_3 = rbx[0x19]
    
    if (rcx_3 == 0)
        (**rbx)(rbx, 1)
    else
        (**rcx_3)(rcx_3, rbx)

return arg1
