// 函数: sub_1408a1280
// 地址: 0x1408a1280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t* var_38 = arg1
uint32_t i_2 = arg2
void var_1b
void* r9 = &var_1b

if (arg2 s>= 0)
    uint32_t i
    
    do
        r9 -= 1
        i = i_2 u/ 0xa
        i_2.b -= i.b * 0xa
        i_2.b += 0x30
        *r9 = i_2.b
        i_2 = i
    while (i != 0)
else
    int32_t i_3 = neg.d(i_2)
    int32_t i_1
    
    do
        r9 -= 1
        i_1 = i_3 u/ 0xa
        i_3.b -= i_1.b * 0xa
        i_3.b += 0x30
        *r9 = i_3.b
        i_3 = i_1
    while (i_1 != 0)
    r9 -= 1
    *r9 = 0x2d

arg1[2] = 0
arg1[3] = 0xf
*arg1 = 0

if (r9 != &var_1b)
    sub_14058ad40(arg1, r9, &var_1b - r9)

__security_check_cookie(rax_1 ^ &var_58)
return arg1
