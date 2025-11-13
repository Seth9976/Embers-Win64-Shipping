// 函数: sub_142b28ca0
// 地址: 0x142b28ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x190)

if (rax != 1)
    if (rax != 2)
        if (rax == 4)
            int64_t rax_3 = *(arg1 + 0x188)
            (*(rax_3 + 0x28))(rax_3, zx.q(*(arg1 + 0x19c) - *(arg1 + 0x194)), 1)
        
        rax = *(arg1 + 0x19c)
        *(arg1 + 0x194) = rax
    
    *(arg1 + 0x190) = 0
    return rax

int64_t rax_1 = *(arg1 + 0x188)
int32_t rax_2 = (*(rax_1 + 0x20))(rax_1, 1)
int32_t rcx_1 = 2
*(arg1 + 0x198) = rax_2
bool cond:0 = rax_2 == *(arg1 + 0x19c)
*(arg1 + 0x194) = rax_2

if (cond:0)
    rcx_1 = 0

*(arg1 + 0x190) = rcx_1
return rax_2
