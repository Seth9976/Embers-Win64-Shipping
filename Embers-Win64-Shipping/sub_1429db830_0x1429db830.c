// 函数: sub_1429db830
// 地址: 0x1429db830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r11 = *arg2

if (arg1[0x37].d != 0)
    *arg1 = "Not supported in frame parallel decode"
    return 4

if (r11 == 0)
    return 8

int64_t* rbx = *(arg1[0x38] + 0x18)
void var_98
int64_t r9 = sub_1429dc240(&r11[2], &var_98)
int32_t rax_2 = *r11
int32_t rdx_1

if (rax_2 == 1)
    rdx_1 = 1
else if (rax_2 == 2)
    rdx_1 = 2
else if (rax_2 != 4)
    rdx_1 = 1
else
    rdx_1 = rax_2

return sub_1429e8430(*rbx + 0x270, rdx_1, &var_98, r9)
