// 函数: sub_14297be70
// 地址: 0x14297be70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138

if (arg2[3] u>= 0x10)
    arg2 = *arg2

char _Destination[0xff]
strncpy(&_Destination, arg2, 0xff)
void** r11 = *arg1
char var_19 = 0
void** r10 = r11
void** r8 = r11[1]

while (*(r8 + 0x19) == 0)
    void* rax_2 = r8 + 0x1c
    int64_t r9_1 = &_Destination - rax_2
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_2)
        i = zx.d(*(rax_2 + r9_1))
        
        if (rdx != i)
            break
        
        rax_2 += 1
    while (i != 0)
    
    if (rdx - i s>= 0)
        r10 = r8
        r8 = *r8
    else
        r8 = r8[2]

uint32_t i_1
uint32_t rdx_2

if (r10 != r11)
    char (* rax_3)[0xff] = &_Destination
    
    do
        rdx_2 = zx.d(*rax_3)
        i_1 = zx.d((*rax_3)[r10 + 0x1c - &_Destination])
        
        if (rdx_2 != i_1)
            break
        
        rax_3 = &(*rax_3)[1]
    while (i_1 != 0)

if (r10 == r11 || rdx_2 - i_1 s< 0)
    r10 = r11

void* result = nullptr

if (r10 != r11)
    result = r10 + 0x11c

__security_check_cookie(rax_1 ^ &var_138)
return result
