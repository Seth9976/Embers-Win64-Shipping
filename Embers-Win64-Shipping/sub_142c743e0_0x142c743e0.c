// 函数: sub_142c743e0
// 地址: 0x142c743e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rsi = arg4
sub_1428a49e0()
void* rbx_1 = &arg1[sx.q(arg2) * 5]

if (rsi u> 0x7fffffff)
    rsi = 0x7fffffff

int32_t result_2 = sub_142850380(*(rbx_1 + 0x2d8), arg3, rsi.d)
int64_t result_1 = sx.q(result_2)
int64_t result

if (result_2 s> 0)
    result = result_1
else
    int32_t rax_2 = sub_14284fa70(*(rbx_1 + 0x2d8), result_1.d)
    
    if (rax_2 == 0)
        result = result_1
    else if (rax_2 s<= 1)
    label_142c74469:
        int32_t rax_3 = sub_1428a4e50()
        
        if (result_1 s< 0)
            char (* rbx_3)[0x100]
            
            if (rax_3 != 0)
            label_142c744b7:
                char var_138[0x100]
                arg5 = sub_1428a4aa0(rax_3, &var_138, 0x100)
                rbx_3 = &var_138
                goto label_142c744cd
            
            rbx_3 = sub_142c72360(rax_2)
        label_142c744cd:
            WSAGetLastError()
            sub_142c64760(*arg1, "OpenSSL SSL_read: %s, errno %d", rbx_3, arg5)
            result = -1
            *arg6 = 0x38
        else
            if (rax_3 != 0)
                goto label_142c744b7
            
            result = result_1
    else if (rax_2 s<= 3)
        *arg6 = 0x51
        result = -1
    else
        if (rax_2 != 6)
            goto label_142c74469
        
        result = result_1

__security_check_cookie(rax_1 ^ &var_158)
return result
