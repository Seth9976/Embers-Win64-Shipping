// 函数: sub_1407e9850
// 地址: 0x1407e9850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_14074d7c0(arg1, arg2)

if (rax == 0)
    return rax

*(arg2 + 0x38) = *(arg1 + 0x38)
*(arg2 + 0x30) = *(arg1 + 0x30)
int64_t rax_2

if (arg2 + 0x48 != arg1 + 0x48)
    int32_t r8_1 = *(arg2 + 0x54)
    int64_t rsi_1 = sx.q(*(arg1 + 0x50))
    int64_t rdi_2 = *(arg1 + 0x48)
    *(arg2 + 0x50) = rsi_1.d
    
    if (rsi_1.d == 0 && r8_1 == 0)
        *(arg2 + 0x54) = rsi_1.d
        rax_2.b = 1
        return rax_2
    
    sub_140638750(arg2 + 0x48, rsi_1.d, r8_1)
    memcpy(*(arg2 + 0x48), rdi_2, (rsi_1 << 2).d)

rax_2.b = 1
return rax_2
