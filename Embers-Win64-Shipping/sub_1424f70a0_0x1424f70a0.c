// 函数: sub_1424f70a0
// 地址: 0x1424f70a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_48

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int128_t var_88
float* result = sub_1424e34e0(rcx_1, &var_88)
*arg3 = var_88
int128_t var_78
arg3[1] = var_78
int128_t var_68
arg3[2] = var_68
int128_t var_58
arg3[3] = var_58
return result
