// 函数: sub_142c7c3a0
// 地址: 0x142c7c3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_458
int64_t rax_1 = __security_cookie ^ &var_458
char* rdx = *(*arg1 + 0x4e38)

if (*rdx == 0)
    void var_428
    rdx = &var_428
    
    if (sub_142c8fff0(&var_428, 0x401) != 0)
        rdx = "localhost"

uint64_t result = sub_142c51e30(*arg1, rdx, 0, &arg1[0xe2], nullptr, 1)
__security_check_cookie(rax_1 ^ &var_458)
return result
