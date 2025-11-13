// 函数: sub_14244c280
// 地址: 0x14244c280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x28) = *(arg2 + 0x28)
arg1[0xc] = arg2[0xc]
sub_140597df0(&arg1[0xe], &arg2[0xe])
arg1[0x12] = arg2[0x12]
arg1[0x13] = arg2[0x13]
arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
arg1[0x16].b = arg2[0x16].b
arg1[0x18].b = arg2[0x18].b
sub_140597df0(&arg1[0x1a], &arg2[0x1a])

if (&arg1[0x1e] != &arg2[0x1e])
    int64_t rdi_1 = sx.q(arg2[0x20])
    int32_t r8_1 = arg1[0x21]
    int64_t rbp_1 = *(arg2 + 0x78)
    arg1[0x20] = rdi_1.d
    
    if (rdi_1.d != 0 || r8_1 != 0)
        sub_1405c4bc0(&arg1[0x1e], rdi_1.d, r8_1)
        memcpy(*(arg1 + 0x78), rbp_1, (rdi_1 * 0x14).d)
    else
        arg1[0x21] = rdi_1.d

arg1[0x22] = arg2[0x22]
return arg1
