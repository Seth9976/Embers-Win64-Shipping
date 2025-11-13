// 函数: sub_1417d6eb0
// 地址: 0x1417d6eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[2] != &arg2[2])
    int64_t rbp_1 = sx.q(arg2[4])
    int64_t r14_1 = *(arg2 + 8)
    int32_t r8_1 = arg1[5]
    arg1[4] = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&arg1[2], rbp_1.d, r8_1)
        memcpy(*(arg1 + 8), r14_1, (rbp_1 << 3).d)
    else
        arg1[5] = rbp_1.d

sub_14090a0d0(&arg1[6], &arg2[6])

if (&arg1[0xa] != &arg2[0xa])
    int64_t rbp_2 = sx.q(arg2[0xc])
    int64_t r14_2 = *(arg2 + 0x28)
    int32_t r8_4 = arg1[0xd]
    arg1[0xc] = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1405a4b40(&arg1[0xa], rbp_2.d, r8_4)
        memcpy(*(arg1 + 0x28), r14_2, (rbp_2 * 0x30).d)
    else
        arg1[0xd] = rbp_2.d

if (&arg1[0xe] != &arg2[0xe])
    uint32_t count = arg2[0x10]
    int64_t r14_3 = *(arg2 + 0x38)
    int32_t r8_8 = arg1[0x11]
    arg1[0x10] = count
    
    if (count != 0 || r8_8 != 0)
        sub_1405da9e0(&arg1[0xe], count, r8_8)
        memcpy(*(arg1 + 0x38), r14_3, count)
    else
        arg1[0x11] = count

arg1[0x12].b = arg2[0x12].b
return arg1
