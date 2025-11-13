// 函数: sub_142c77c40
// 地址: 0x142c77c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t rax_1 = __security_cookie ^ &var_498
void* rbp = *arg1
int64_t rdi = -1
int64_t rax_2 = -1
char* rbx_1 = *(*(rbp + 0x250) + 0x10)

do
    rax_2 += 1
while (rbx_1[rax_2] != 0)

int32_t result

if (rax_2 + 1 u<= 0x400)
    int16_t var_458
    memset(&var_458, 0, 0x433)
    var_458 = 0xff18
    
    do
        rdi += 1
    while (rbx_1[rdi] != 0)
    
    int16_t var_452_1 = rdi.w
    int32_t var_438_1 = 7
    
    if (*(rbp + 0x5e9) == 0)
        int32_t var_448_2 = 0x80000000
        int32_t var_434_2 = 1
    else
        int32_t var_448_1 = 0xc0000000
        int32_t var_434_1 = 5
    
    int16_t var_427_1 = (rdi + 1).w
    void var_425
    char* rcx_1 = &var_425 - rbx_1
    char i
    
    do
        i = *rbx_1
        *(rcx_1 + rbx_1) = i
        rbx_1 = &rbx_1[1]
    while (i != 0)
    sub_142c77770(arg1, rbp + 0xa88, 0xa2, (rdi + 0x34).w)
    int64_t var_468
    int64_t* var_478_1 = &var_468
    result = sub_142c64d60(arg1, 0, memcpy(*arg1 + 0xaac, &var_458, (rdi + 0x34).d), *arg1 + 0xa88)
    
    if (result == 0)
        int64_t rax_4 = var_468
        
        if (rax_4 != rdi + 0x58)
            arg1[0xda] = rdi + 0x58
            arg1[0xdb] = rax_4
        
        result = 0
        arg1[0xd9] = 0
else
    result = 0x3f

__security_check_cookie(rax_1 ^ &var_498)
return result
