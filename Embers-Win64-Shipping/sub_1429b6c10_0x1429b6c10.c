// 函数: sub_1429b6c10
// 地址: 0x1429b6c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* var_60 = arg1
int64_t rax_3 = (*(*arg1 + 0x20))()
uint64_t r15 = 0

while (true)
    uint64_t r14_1 = zx.q(r15.d)
    
    if (r14_1 u>= (arg3[1] - *arg3) s>> 3)
        break
    
    int64_t rax_5 = (*(*arg1 + 0x20))(arg1)
    int64_t r9_1 = *arg1
    void var_68
    (*(r9_1 + 0x10))(arg1, &var_68, 4, r9_1)
    int64_t r9_2 = *arg1
    char var_48
    (*(r9_2 + 0x10))(arg1, &var_48, 8, r9_2)
    char var_47
    char var_46
    char var_45
    char var_44
    char var_43
    char var_42
    char var_41
    uint32_t rsi_15 = ((((
        (((zx.q(var_41) << 8 | zx.q(var_42)) << 8 | zx.q(var_43)) << 8 | zx.q(var_44)) << 8
        | zx.q(var_45)) << 8 | zx.q(var_46)) << 8 | zx.q(var_47)) << 8).d | zx.d(var_48)
    char var_40
    (*(*arg1 + 0x10))(arg1, &var_40, 8)
    char var_3f
    char var_3e
    char var_3d
    char var_3c
    char var_3b
    char var_3a
    char var_39
    sub_14298d250(arg1, 
        ((((((((zx.q(var_39) << 8 | zx.q(var_3a)) << 8 | zx.q(var_3b)) << 8 | zx.q(var_3c)) << 8
            | zx.q(var_3d)) << 8 | zx.q(var_3e)) << 8 | zx.q(var_3f)) << 8).d | zx.d(var_40)) + 8
            + rsi_15)
    
    if (arg2 != 0)
        int64_t rcx_8 = *arg3
        *(rcx_8 + ((((arg3[1] - rcx_8) s>> 3) - r14_1) << 3) - 8) = rax_5
        r15 = zx.q(r15.d + 1)
    else
        *(*arg3 + (r15 << 3)) = rax_5
        r15 = zx.q(r15.d + 1)

(*(*arg1 + 0x30))(arg1)
int64_t result = (*(*arg1 + 0x28))(arg1, rax_3)
__security_check_cookie(rax_1 ^ &var_88)
return result
