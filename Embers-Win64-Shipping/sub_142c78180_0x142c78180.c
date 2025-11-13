// 函数: sub_142c78180
// 地址: 0x142c78180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_478
int64_t rax_1 = __security_cookie ^ &var_478
void* rbx = -ffffffffffffffff
char* rdi = arg1[0x1a]
void* rbp = *(*arg1 + 0x250)
int64_t rax_3 = -1

do
    rax_3 += 1
while (rdi[rax_3] != 0)

int64_t rcx = -1

do
    rcx += 1
while ((*(rbp + 8))[rcx] != 0)

int32_t result

if (rax_3 + 0xa + rcx u<= 0x400)
    int16_t var_438
    memset(&var_438, 0, 0x40b)
    int16_t var_42d = 0x5c5c
    char var_42b = 0
    char* rax_6 = rdi
    var_438 = 0xff04
    int16_t var_431_1 = 0
    char i
    
    do
        i = *rax_6
        *(&var_42b - rdi + rax_6) = i
        rax_6 = &rax_6[1]
    while (i != 0)
    int64_t rax_7 = -1
    
    do
        rax_7 += 1
    while (rdi[rax_7] != 0)
    
    void* r8_1 = &(&var_42b)[rax_7]
    *r8_1 = 0x5c
    char* rcx_2 = *(rbp + 8)
    void* rdx_2 = r8_1 + 1
    char i_1
    
    do
        i_1 = *rcx_2
        rcx_2 = &rcx_2[1]
        *rdx_2 = i_1
        rdx_2 += 1
    while (i_1 != 0)
    bool cond:0_1
    
    do
        cond:0_1 = *(*(rbp + 8) + rbx + 1) != 0
        rbx += 1
    while (cond:0_1)
    void* rcx_4 = rbx + 1 + r8_1 + 1
    void* r8_2
    r8_2.b = 0x75
    __builtin_strcpy(rcx_4, "?????")
    int16_t var_42f_1 = (rcx_4 - &var_42d + 6).w
    sub_142c77770(arg1, *arg1 + 0xa88, r8_2.b, (rcx_4 - &var_42d + 0x11).w)
    int64_t var_448
    int64_t* var_458_1 = &var_448
    result = sub_142c64d60(arg1, 0, memcpy(*arg1 + 0xaac, &var_438, (rcx_4 - &var_42d + 0x11).d), 
        *arg1 + 0xa88)
    
    if (result == 0)
        int64_t rax_9 = var_448
        
        if (rax_9 != rcx_4 - &var_42d + 0x35)
            arg1[0xda] = rcx_4 - &var_42d + 0x35
            arg1[0xdb] = rax_9
        
        arg1[0xd9] = 0
        result = 0
else
    result = 0x3f

__security_check_cookie(rax_1 ^ &var_478)
return result
