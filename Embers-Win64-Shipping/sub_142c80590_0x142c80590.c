// 函数: sub_142c80590
// 地址: 0x142c80590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rbp = *arg1
int32_t rsi = arg3.d
int64_t rbx

if (arg2 != 0xd5)
    rbx = -1
else
    int64_t rax_2
    rax_2, arg2, arg3 = strtoll(*(rbp + 0xa80) + 4, nullptr, 0)
    rbx = rax_2

int32_t result

if (rsi == 0x17)
    char var_a8[0x80]
    
    if (rbx != -1)
        result = sub_142c645e0(arg1, rsi - 0x14, &var_a8, 0, 
            sub_142c564b0(&var_a8, zx.q(rsi + 0x69), "Content-Length: %I64d\r\n", rbx, arg4))
    
    if (rbx == -1 || result == 0)
        sub_142c6f180(rbp, rbx)
        result = sub_142c80200(arg1)
else if (rsi == 0x18)
    sub_142c6f180(rbp, rbx)
    result = sub_142c80360(arg1, rbx, arg3, arg4)
else if (rsi != 0x19)
    result = 0
else
    arg2.b = 1
    *(rbp + 0x4e50) = rbx
    result = sub_142c80860(arg1, arg2.b, arg3, arg4)

__security_check_cookie(rax_1 ^ &var_c8)
return result
