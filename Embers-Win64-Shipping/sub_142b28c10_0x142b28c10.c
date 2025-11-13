// 函数: sub_142b28c10
// 地址: 0x142b28c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x190)

if (rax == 0)
    int64_t rax_1 = *(arg1 + 0x188)
    int32_t rax_2 = (*(rax_1 + 0x20))(rax_1, 1)
    *(arg1 + 0x198) = rax_2
    bool cond:0 = rax_2 != *(arg1 + 0x194)
    *(arg1 + 0x19c) = rax_2
    int32_t rcx_1
    rcx_1.b = cond:0
    *(arg1 + 0x190) = rcx_1 + 1
    return rax_2

if (rax != 2)
    if (rax == 3)
        int64_t rax_3 = *(arg1 + 0x188)
        (*(rax_3 + 0x28))(rax_3, zx.q(*(arg1 + 0x194) - *(arg1 + 0x19c)), 1)
    
    rax = *(arg1 + 0x194)
    *(arg1 + 0x19c) = rax

*(arg1 + 0x190) = 1
return rax
