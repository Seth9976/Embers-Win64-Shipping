// 函数: sub_142c65c50
// 地址: 0x142c65c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void var_c8
void* rbx = &var_c8
void* rbp = *arg1

if (arg3 != 0)
    rbx = arg3

*rbx = *(arg2 + 4)
*(rbx + 4) = *(arg1 + 0xbc)
int32_t rax_4 = 0x11

if (*(arg1 + 0xbc) != 2)
    rax_4 = *(arg2 + 0xc)

*(rbx + 8) = rax_4
uint32_t count = *(arg2 + 0x10)

if (count u> 0x80)
    count = 0x80

*(rbx + 0xc) = count
memcpy(rbx + 0x10, *(arg2 + 0x20), count)
int64_t rax_5 = *(rbp + 0x330)
SOCKET rax_6

if (rax_5 == 0)
    rax_6 = socket(*rbx, *(rbx + 4), *(rbx + 8))
else
    rax_6 = rax_5(*(rbp + 0x338), 0, rbx)

*arg4 = rax_6
int64_t result

if (rax_6 != -1)
    int32_t rax_7 = arg1[0x17].d
    
    if (rax_7 != 0 && *rbx == 0x17)
        *(rbx + 0x28) = rax_7
    
    result = 0
else
    result = 7

__security_check_cookie(rax_1 ^ &var_e8)
return result
