// 函数: sub_142a31c40
// 地址: 0x142a31c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t var_28
int64_t rax_1 = __security_cookie ^ &var_28
int16_t* r9 = &var_28
int32_t rax_3 = sx.d(*arg1) s>> 2
int64_t r11 = sx.q(arg3)
int16_t rcx_1 = (rax_3 s>> 1).w
rax_3.w -= rcx_1
int16_t var_22 = rcx_1
var_28 = rax_3.w
int64_t rbx_1 = neg.q(r11)
int16_t var_24 = rcx_1
int16_t var_26 = rcx_1
char* r8 = arg2 + (r11 << 1)
int64_t rdi = neg.q(r11) * 2
int64_t i_1 = 4
int32_t result
int64_t i

do
    int32_t rcx_2 = sx.d(*r9)
    int32_t rdx_1 = rcx_2 s>> 1
    int32_t rax_8 = zx.d(r8[rdi]) - rdx_1 + rcx_2
    
    if (rax_8 s> 0xff)
        rax_8 = 0xff
    else if (rax_8 s< 0)
        rax_8 = 0
    
    r8[rdi] = rax_8.b
    int32_t rax_10 = zx.d(r8[rbx_1]) + rdx_1
    
    if (rax_10 s> 0xff)
        rax_10 = 0xff
    else if (rax_10 s< 0)
        rax_10 = 0
    
    r8[rbx_1] = rax_10.b
    int32_t rax_12 = zx.d(*r8) + rdx_1
    
    if (rax_12 s> 0xff)
        rax_12 = 0xff
    else if (rax_12 s< 0)
        rax_12 = 0
    
    *r8 = rax_12.b
    result = zx.d(r8[r11]) + rdx_1
    
    if (result s> 0xff)
        result = 0xff
    else if (result s< 0)
        result = 0
    
    r8[r11] = result.b
    r9 = &r9[1]
    r8 = &r8[1]
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(rax_1 ^ &var_28)
return result
