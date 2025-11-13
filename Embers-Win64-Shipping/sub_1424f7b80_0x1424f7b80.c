// 函数: sub_1424f7b80
// 地址: 0x1424f7b80
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

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
int128_t zmm2 = *(rcx_1 + 0x10)
int128_t zmm3 = *(rcx_1 + 0x20)
*arg3 = *rcx_1
arg3[1] = zmm2
arg3[2] = zmm3
arg3[3] = 0
return result
