// 函数: sub_14074c190
// 地址: 0x14074c190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
int64_t rax_1 = __security_cookie ^ &var_38
void* rax_2 = *(arg3 + 0x528)
char var_34

if (rax_2 == 0)
    var_34 = 0
else
    var_38 = *(rax_2 + 0x6e4)
    var_34 = 1

int32_t zmm0 = *(arg3 + 0x534)
int32_t zmm1 = *(arg3 + 0x540)
char rbx = *(arg3 + 0x530)
int32_t r11

r11 = var_34 == 0 ? var_38 : var_38

int32_t var_24
int32_t r8 = var_24
char rax_4 = *(arg3 + 0x520) & 1
uint8_t rcx_1 = (*(arg3 + 0x54c) u>> 1).b & 1

if (var_34 != 0)
    r8 = r11

arg2[4].b |= 3
arg2[1].b = *(arg3 + 0x8a) & 1
*arg2 = &data_142d9aaa8
*(arg2 + 9) = rax_4
*(arg2 + 0xa) = rcx_1
arg2[2].b = 0

if (var_34 != 0)
    *(arg2 + 0xc) = r8
    arg2[2].b = 1

arg2[3].d = zmm1
*(arg2 + 0x1c) = zmm0
*(arg2 + 0x14) = rbx
__security_check_cookie(rax_1 ^ &var_38)
return arg2
