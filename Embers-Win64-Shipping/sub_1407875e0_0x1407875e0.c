// 函数: sub_1407875e0
// 地址: 0x1407875e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_14074d7c0(arg1, arg2)

if (rax == 0)
    return rax

*(arg2 + 0x50) ^= (*(arg1 + 0x50) ^ *(arg2 + 0x50)) & 1

if (arg2 + 0x30 != arg1 + 0x30)
    int32_t r8_1 = *(arg2 + 0x3c)
    int64_t rbp_1 = sx.q(*(arg1 + 0x38))
    int64_t r14_1 = *(arg1 + 0x30)
    *(arg2 + 0x38) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_140638750(arg2 + 0x30, rbp_1.d, r8_1)
        memcpy(*(arg2 + 0x30), r14_1, (rbp_1 << 2).d)
    else
        *(arg2 + 0x3c) = rbp_1.d

*(arg2 + 0x4c) = *(arg1 + 0x4c)
int32_t rax_5
rax_5.b = 1
return rax_5
