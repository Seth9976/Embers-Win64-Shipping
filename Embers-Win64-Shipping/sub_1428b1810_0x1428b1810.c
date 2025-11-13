// 函数: sub_1428b1810
// 地址: 0x1428b1810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char* rbx = arg3
int32_t result_1 = -1
uint64_t result

if (arg4 u< 0x18)
    result = zx.q(result_1)
else if (arg2 != 0)
    *sub_1406219d0(arg1) = 0x521e8792ca2dd4a
    char var_78
    sub_1428b0fa0(arg1, &var_78, rbx, 8)
    
    if (arg2 == rbx)
        memmove(arg2, &arg2[8], arg4.d - 8)
        rbx -= 8
    
    sub_1428b0fa0(arg1, arg2, &rbx[8], arg4 - 0x10)
    char var_70
    sub_1428b0fa0(arg1, &var_70, arg4 - 8 + rbx, 8)
    sub_1428a75c0(&var_78, nullptr, 8)
    sub_1428a75c0(arg2, nullptr, arg4 - 0x10)
    sub_1428a75c0(sub_1406219d0(arg1), &var_70, 8)
    sub_1428b0fa0(arg1, arg2, arg2, arg4 - 0x10)
    int32_t* rax_4 = sub_142890ec0(arg1)
    
    if (*(rax_4 + 0x180) == 0)
        int32_t rax_6 = sub_142890eb0(arg1)
        sub_1428f9060(&var_78, &var_78, 8, rax_4, &rax_4[0x20], &rax_4[0x40], sub_1406219d0(arg1), 
            rax_6)
    else
        (*(rax_4 + 0x180))(&var_78, &var_78, 8, rax_4, sub_1406219d0(arg1))
    
    void var_68
    sub_1428fe1b0(arg2, arg4 - 0x10, &var_68)
    
    if (sub_1428bc500(&var_68, &var_78, 8) == 0)
        result_1 = (arg4 - 0x10).d
    
    sub_1428b8960(&var_78, 8)
    sub_1428b8960(&var_68, 0x14)
    sub_1428b8960(&var_70, 8)
    sub_1428b8960(sub_1406219d0(arg1), 8)
    
    if (result_1 == 0xffffffff)
        sub_1428b8960(arg2, arg4 - 0x10)
    
    result = zx.q(result_1)
else
    result = zx.q((arg4 - 0x10).d)

__security_check_cookie(rax_1 ^ &var_b8)
return result
