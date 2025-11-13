// 函数: sub_142984b70
// 地址: 0x142984b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
char _Destination[0xff]
strncpy(&_Destination, arg3, 0xff)
void** r11 = *arg1
char var_19 = 0
void** r10 = r11
void** r8 = r11[1]

while (*(r8 + 0x19) == 0)
    void* rax_3 = &r8[4]
    int64_t r9_1 = &_Destination - rax_3
    uint32_t i
    uint32_t rdx_1
    
    do
        rdx_1 = zx.d(*rax_3)
        i = zx.d(*(rax_3 + r9_1))
        
        if (rdx_1 != i)
            break
        
        rax_3 += 1
    while (i != 0)
    
    if (rdx_1 - i s>= 0)
        r10 = r8
        r8 = *r8
    else
        r8 = r8[2]

uint32_t i_1
uint32_t r8_1

if (r10 != r11)
    char (* rcx_1)[0xff] = &_Destination
    
    do
        r8_1 = zx.d(*rcx_1)
        i_1 = zx.d((*rcx_1)[&r10[4] - &_Destination])
        
        if (r8_1 != i_1)
            break
        
        rcx_1 = &(*rcx_1)[1]
    while (i_1 != 0)

if (r10 == r11 || r8_1 - i_1 s< 0)
    *arg2 = r11
else
    *arg2 = r10

__security_check_cookie(rax_1 ^ &var_138)
return arg2
