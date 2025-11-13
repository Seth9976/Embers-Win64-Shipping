// 函数: sub_140d7eb10
// 地址: 0x140d7eb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2 == 2 && ((*(arg1 + 0x38) u>> 1).b & 1) == 0) || ((*(arg1 + 0x38)).b & 6) != 6)
    return 0x80040201

if (arg4 != 0 && arg3 == 0)
    return 0x80070057

int32_t rbx = 0
int64_t var_40 = 0
int32_t rdx = 0
int64_t var_38 = 0
int32_t rcx = 0

if (arg3 != 0 && *arg3 != 0 && arg4 s> 0)
    if (arg4 + 1 s> 0)
        sub_1405947f0(&var_40, arg4 + 1)
        rcx = var_38:4.d
        rdx = var_38.d
    
    int32_t rax_9 = arg4 + 1 + rdx
    var_38.d = rax_9
    
    if (rax_9 s> rcx)
        sub_140594770(&var_40)
    
    UnDecorator::getReferenceType(var_40, arg3, arg4 * 2)
    *(var_40 + (sx.q(var_38.d) << 1) - 2) = 0

int64_t* rcx_5 = *(arg1 + 0x18)
int32_t var_48
void var_44
int32_t arg_10
(*(*rcx_5 + 0x20))(rcx_5, &arg_10, &var_48, &var_44)

if (arg2 != 2)
    if ((arg2 == 1 || (arg5 != 0 && arg6 != 0)) && arg7 != 0)
        int64_t* rcx_8 = *(arg1 + 0x18)
        
        if ((*(*rcx_8 + 8))(rcx_8) == 0)
            int64_t* rcx_9 = *(arg1 + 0x18)
            (*(*rcx_9 + 0x60))(rcx_9)
        
        int64_t* rcx_10 = *(arg1 + 0x18)
        (*(*rcx_10 + 0x38))(rcx_10, zx.q(arg_10), zx.q(var_48), &var_40)
        int32_t rcx_11 = var_38.d
        int64_t* r11_1 = *(arg1 + 0x18)
        int32_t rcx_12
        
        if (rcx_11 == 0)
            rcx_12 = 0
        else
            rcx_12 = rcx_11 - 1
        
        (*(*r11_1 + 0x28))(r11_1, zx.q(arg_10 + rcx_12), 0, 1)
        int32_t rdx_8 = arg_10
        int32_t rax_21 = var_38.d
        int32_t rcx_15 = var_48 + rdx_8
        *arg7 = rdx_8
        arg7[1] = rcx_15
        int32_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0
        else
            rax_22 = rax_21 - 1
        
        arg7[2] = rax_22 + rdx_8
        
        if (arg2 != 1)
            *arg5 = rdx_8
            *arg6 = arg7[2]
    else
        rbx = -0x7ff8ffa9
else if (arg5 == 0 || arg6 == 0)
    rbx = -0x7ff8ffa9
else
    int32_t rdx_4 = arg_10
    int32_t r8_4 = var_48 + rdx_4
    *arg5 = rdx_4
    *arg6 = r8_4
    
    if (arg7 != 0)
        int32_t rax_13 = var_38.d
        *arg7 = rdx_4
        arg7[1] = r8_4
        
        if (rax_13 == 0)
            arg7[2] = rdx_4
        else
            arg7[2] = rax_13 - 1 + rdx_4

int64_t rcx_17 = var_40

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return zx.q(rbx)
