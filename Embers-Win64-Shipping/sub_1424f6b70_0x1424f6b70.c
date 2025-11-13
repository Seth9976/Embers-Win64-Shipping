// 函数: sub_1424f6b70
// 地址: 0x1424f6b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_68

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int128_t zmm8 = *(rcx_1 + 4)
float zmm4 = *(rcx_1 + 0x18)
int128_t zmm7
zmm7.d = (*(rcx_1 + 0x14)).d f* *(rcx_1 + 0x28)
float zmm5 = *(rcx_1 + 8)
float zmm1 = zmm8.d f* *(rcx_1 + 0x28)
zmm7.d = zmm7.d f- zmm4 f* *(rcx_1 + 0x24)
zmm8.d = zmm8.d f* zmm4
float result = zmm5 f* *(rcx_1 + 0x24)
zmm7.d = zmm7.d f* *rcx_1
zmm8.d = zmm8.d f- zmm5 f* *(rcx_1 + 0x14)
zmm8.d = zmm8.d f* *(rcx_1 + 0x20)
zmm7.d = zmm7.d f- (zmm1 - result) f* *(rcx_1 + 0x10)
zmm7.d = zmm7.d f+ zmm8.d
*arg3 = zmm7.d
return result
