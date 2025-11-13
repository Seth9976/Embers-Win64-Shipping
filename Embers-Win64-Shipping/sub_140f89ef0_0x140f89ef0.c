// 函数: sub_140f89ef0
// 地址: 0x140f89ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
int64_t zmm0 = sub_140f047e0(arg1[9], &arg_18, arg2, 0)
int64_t var_18
sub_140f05750(arg1[9], &var_18, &arg_18)
int64_t rdx_2 = var_18
int64_t var_10
int64_t r8_2 = var_10
int32_t rcx_2 = var_10:4.d
int32_t r9 = var_18:4.d
bool cond:0 = rdx_2.d s< var_10.d

if (rdx_2.d == var_10.d)
    cond:0 = r9 s< rcx_2

if (cond:0)
    r8_2 = rdx_2

bool cond:1 = rdx_2.d s> var_10.d

if (rdx_2.d == var_10.d)
    cond:1 = r9 s> rcx_2

if (not(cond:1))
    rdx_2 = var_10

uint32_t result = (r8_2 u>> 0x20).d
uint32_t r10_1 = (rdx_2 u>> 0x20).d

if (r8_2.d == 0xffffffff || result == 0xffffffff || rdx_2.d == 0xffffffff || r10_1 == 0xffffffff)
    return result

void var_28

if (&var_28 != &arg1[0xf0] && arg1[0xf1].b != 0)
    arg1[0xf1].b = 0

int64_t arg_8

if ((r8_2.d != rdx_2.d || (r8_2 u>> 0x20).d != (rdx_2 u>> 0x20).d) && &arg_8 != &arg1[0xf0])
    arg1[0xf0] = r8_2
    arg1[0xf1].b = 1

void* r11_1 = arg1[9]
void* r9_1
r9_1.b = 0
arg_8 = rdx_2

if (r10_1 s> 0)
    int32_t r8_3 = 0
    int32_t rax_6 = *(*(sx.q(rdx_2.d) * 0x70 + *(r11_1 + 0x18)) + 8)
    int32_t rcx_7 = rax_6 - 1
    
    if (rax_6 == 0)
        rcx_7 = 0
    
    if (rcx_7 == r10_1)
        arg_8.d = rdx_2.d
        r9_1.b = 1
        
        if (r10_1 - 1 s>= 0)
            r8_3 = r10_1 - 1
        
        arg_8:4.d = r8_3
        arg_8 = arg_8

char rdx_4
uint32_t r8_5
rdx_4, r8_5 = sub_140f8af60(&arg1[0xf2], r11_1, &arg_8, r9_1.b, zmm0, var_28)
return sub_140f8fc70(arg1, rdx_4, r8_5)
