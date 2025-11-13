// 函数: sub_14089acf0
// 地址: 0x14089acf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t result = GetProcAddress(arg1, arg2)

if (result == 0)
    char _Destination[0x200]
    strncpy(&_Destination, "Failed loading ", 0x1ff)
    void var_219
    void* rcx_1 = &var_219
    bool cond:0_1
    
    do
        cond:0_1 = *(rcx_1 + 1) != 0
        rcx_1 += 1
    while (cond:0_1)
    int64_t rdx = 0
    char i
    
    do
        i = arg2[rdx]
        rdx += 1
    while (i != 0)

__security_check_cookie(rax_1 ^ &var_238)
return result
