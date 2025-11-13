// 函数: sub_140611760
// 地址: 0x140611760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 8)

if (rax == 0x51)
    *(arg1 + 0x18) = *(arg2 + 0x20)
else if (rax == 0x58)
    void* rcx = *(arg1 + 0x20)
    int32_t r8_1 = *(rcx + 0x2c)
    *(rcx + 0x20) = arg2
    *(rcx + 0x2c) = 0
    int32_t rax_2 = *(arg2 + 0x28)
    
    if (rax_2 == 0xc)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(*(rcx + 0x18))
        *(rcx + 0x38) = (temp1_1 - temp0_1) s>> 1
    else if (rax_2 == 0x18)
        *(rcx + 0x38) = *(rcx + 0x18)
    else if (rax_2 == 0x30)
        *(rcx + 0x38) = *(rcx + 0x18) * 2
    else if (rax_2 == 0x60)
        *(rcx + 0x38) = *(rcx + 0x18) << 2
    
    if (r8_1 != 0)
        sub_140611760(arg1, *(arg1 + 0x20))

*(arg1 + 0x10)
jump(*(**(arg1 + 0xb0) + 8))
