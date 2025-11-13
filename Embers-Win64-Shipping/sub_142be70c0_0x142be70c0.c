// 函数: sub_142be70c0
// 地址: 0x142be70c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t rax_1 = __security_cookie ^ &var_18
char* result = arg2

if (arg1 == 0)
    *arg2 = 0x30
    __security_check_cookie(rax_1 ^ &var_18)
    return &arg2[1]

if (arg1 s< 0)
    result = &result[1]
    *arg2 = 0x2d
    arg1 = neg.d(arg1)

uint64_t r11 = zx.q(arg1.w)
void* i_1 = &var_18
uint32_t i_3 = zx.d((arg1 s>> 0x10).w)

if (i_3 s> 0)
    uint32_t i
    
    do
        i = i_3 s/ 0xa
        i_3.b -= i.b * 0xa
        i_3.b += 0x30
        *i_1 = i_3.b
        i_1 += 1
        i_3 = i
    while (i s> 0)
    
    while (i_1 u> &var_18)
        char rax_8 = *(i_1 - 1)
        i_1 -= 1
        *result = rax_8
        result = &result[1]

if (r11.d == 0)
    __security_check_cookie(rax_1 ^ &var_18)
    return result

*result = 0x2e
void* r8 = &result[1]
int32_t i_2 = 0
int32_t rdx_2 = ((zx.q((r11 * 5).d) << 1) + 5).d

do
    int16_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rdx_2)
    uint32_t rdx_4 = zx.d(temp3_1)
    int32_t rax_13 = temp4_1 + rdx_4
    uint64_t rax_15 = zx.q(zx.d(rax_13.w) - rdx_4)
    rdx_2 = rax_15.d
    *r8 = (rax_13 s>> 0x10).b + 0x30
    r8 += 1
    
    if (rax_15.d == 0)
        break
    
    i_2 += 1
    rdx_2 = (rax_15 * 5).d * 2
while (i_2 s< 5)

void* r8_1 = r8 - 1

if (r8_1 - result == 5)
    if (rdx_2 s< 0x542e0 && *r8_1 == 0x31)
        *r8_1 = 0x30
    else
        char rax_18
        bool cond:2_1
        
        if (rdx_2 == 0x2a120)
            rax_18 = *r8_1
            cond:2_1 = (rax_18 & 1) == 0
        label_142be721a:
            
            if (not(cond:2_1))
                *r8_1 = rax_18 - 1
        else if (rdx_2 s< 0x2a120)
            rax_18 = *r8_1
            cond:2_1 = rax_18 == 0x30
            goto label_142be721a

while (*r8_1 == 0x30)
    *r8_1 = 0
    r8_1 -= 1

__security_check_cookie(rax_1 ^ &var_18)
return r8_1 + 1
