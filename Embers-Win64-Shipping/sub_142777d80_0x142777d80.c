// 函数: sub_142777d80
// 地址: 0x142777d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_108

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_108, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_108)

void* rax_2 = *(arg2 + 0x38)
void* rdx_2 = &var_108

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_98
char* result = sub_142775800(&var_98, rdx_2)
*arg3 = *result
arg3[1] = *(result + 0x10)
arg3[2] = *(result + 0x20)
arg3[3] = *(result + 0x30)
arg3[4] = *(result + 0x40)
arg3[5] = *(result + 0x50)
arg3[6] = *(result + 0x60)
arg3[7] = *(result + 0x70)
arg3[8].q = *(result + 0x80)
return result
