// 函数: sub_140f59980
// 地址: 0x140f59980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x2b0))

if (rax.d s<= 0)
    goto label_140f599db

void* rax_1 = *(arg1 + 0x2a8)
int64_t rdx = 0

while (*(rax_1 + 0xb8) != *(arg4 + 0x50))
    rdx += 1
    rax_1 += 0xd0
    
    if (rdx s>= rax)
        goto label_140f599db

*(rax_1 + 0x80) = 0
*(rax_1 + 0xb8) = 0xffffffff
*(rax_1 + 0xc8) = 1

if (*(rax_1 + 0xca) == 0)
    char var_c8 = 1
    int64_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    char var_a8_1 = 0
    int32_t var_14
    int32_t var_14_1 = (var_14 & 0xffffff01) | 1
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x88)
    int32_t var_18_1 = 0x20702
    sub_140596b00(arg2, &var_c8)
    sub_140597700(&var_c8)
else
    *(rax_1 + 0xca) = 0
label_140f599db:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702

return arg2
