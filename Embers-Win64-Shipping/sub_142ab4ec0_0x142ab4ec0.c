// 函数: sub_142ab4ec0
// 地址: 0x142ab4ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t** rbp = arg2

if (*(arg1 + 0x10) == 0)
    sub_142ab5e20(rbp, U"0", arg3)

int64_t rdi = sx.q(*(arg1 + 0x10))
void var_53
void* var_60 = &var_53
int32_t var_58 = 0x14
char var_54 = 0

if (rdi.d s>= 0x15)
    void* rax_2
    rax_2, arg2 = sub_142a7dd00(rdi)
    
    if (rax_2 != 0)
        if (var_54 != 0)
            sub_142a7dcd0(var_60)
        
        var_60 = rax_2
        int32_t var_58_1 = rdi.d
        var_54 = 1

int32_t r8 = 0
int32_t r9 = *(arg1 + 0x10)

if (r9 s> 0)
    void* r10_1 = nullptr
    int32_t r11_1 = 0
    
    do
        if (*(arg1 + 0x40) == 0)
            if (r8 u> 0xf)
                arg2.b = 0
            else
                arg2.b = (*(arg1 + 0x30) u>> r11_1.b).b & 0xf
        else if (r8 s< 0 || r8 s>= r9)
            arg2.b = 0
        else
            arg2 = zx.q(*(r10_1 + *(arg1 + 0x30)))
        
        *(sx.q(r9 - r8 - 1) + var_60) = arg2.b
        r8 += 1
        r11_1 += 4
        r10_1 += 1
        r9 = *(arg1 + 0x10)
    while (r8 s< r9)

int32_t* result = sub_142ab5e40(rbp, var_60, *(arg1 + 0x10), *(arg1 + 0xc), 
    (data_143ccaf50 & *(arg1 + 0x14)) != 0, arg3)

if (var_54 != 0)
    result = sub_142a7dcd0(var_60)

__security_check_cookie(rax_1 ^ &var_98)
return result
