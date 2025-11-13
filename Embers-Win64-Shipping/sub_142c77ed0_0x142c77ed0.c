// 函数: sub_142c77ed0
// 地址: 0x142c77ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int64_t rdi = -1
int64_t rax_2 = -1

do
    rax_2 += 1
while (arg1[0xd5][rax_2] != 0)

int64_t rcx_1 = -1

do
    rcx_1 += 1
while (arg1[0xd4][rcx_1] != 0)

int32_t result

if (rax_2 + 0x47 + rcx_1 u<= 0x400)
    void var_48
    sub_142c8e550(*arg1, arg1[0x3f], &var_48)
    int128_t var_78
    sub_142c8e4a0(&var_48, &arg1[0xd6], &var_78)
    char var_30[0x18]
    sub_142c8e770(*arg1, arg1[0x3f], &var_30)
    int128_t var_60
    sub_142c8e4a0(&var_30, &arg1[0xd6], &var_60)
    int16_t var_498
    memset(&var_498, 0, 0x41d)
    char* r8_5 = arg1[0xd4]
    int16_t var_48f_1 = 1
    int32_t rax_5 = arg1[0xd7].d
    int128_t var_47b = var_78
    int32_t var_48d_1 = rax_5
    char* rax_6 = r8_5
    int128_t zmm0_1 = var_60
    var_498 = 0xff0d
    int64_t var_68
    int64_t var_46b_1 = var_68
    int128_t var_463_1 = zmm0_1
    int32_t var_493_1 = 0x19000
    int32_t var_481_1 = 8
    int32_t var_489_1 = 0x180018
    int64_t var_50
    int64_t var_453_1 = var_50
    char i
    
    do
        i = *rax_6
        void var_44b
        *(&var_44b - r8_5 + rax_6) = i
        rax_6 = &rax_6[1]
    while (i != 0)
    int64_t rax_7 = -1
    
    do
        rax_7 += 1
    while (r8_5[rax_7] != 0)
    
    char* rcx_7 = arg1[0xd5]
    char var_44a[0x72]
    void* r8_6 = &var_44a[rax_7]
    void* rdx_6 = r8_6
    char i_1
    
    do
        i_1 = *rcx_7
        rcx_7 = &rcx_7[1]
        *rdx_6 = i_1
        rdx_6 += 1
    while (i_1 != 0)
    bool cond:0_1
    
    do
        cond:0_1 = *(arg1[0xd5] + rdi + 1) != 0
        rdi += 1
    while (cond:0_1)
    void* rbx_1 = r8_6 + rdi
    r8_6.b = 0x73
    __builtin_strcpy(rbx_1 + 1, "x86_64-pc-win32")
    __builtin_strncpy(rbx_1 + 0x11, "curl", 5)
    int16_t var_47d_1 = (rbx_1 + 0x11 - &var_47b + 5).w
    sub_142c77770(arg1, *arg1 + 0xa88, r8_6.b, (rbx_1 + 0x11 - &var_47b + 5).w + 0x1d)
    int64_t var_4a8
    int64_t* var_4b8_1 = &var_4a8
    result = sub_142c64d60(arg1, 0, 
        memcpy(*arg1 + 0xaac, &var_498, (rbx_1 + 0x11 - &var_47b + 5).d + 0x1d), *arg1 + 0xa88)
    
    if (result == 0)
        int64_t rax_9 = var_4a8
        
        if (rax_9 != rbx_1 + 0x11 - &var_47b + 0x46)
            arg1[0xda] = rbx_1 + 0x11 - &var_47b + 0x46
            arg1[0xdb] = rax_9
        
        result = 0
        arg1[0xd9] = 0
else
    result = 0x3f

__security_check_cookie(rax_1 ^ &var_4d8)
return result
