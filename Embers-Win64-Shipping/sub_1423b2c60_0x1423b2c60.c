// 函数: sub_1423b2c60
// 地址: 0x1423b2c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x130) s<= 0)
    return 

int64_t* r9_1 = nullptr

do
    if (*(r9_1 + *(arg1 + 0x128)) != 0)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t rdx_1 = temp0_1 & 3
        int32_t rax_3 = temp1_1 + rdx_1
        int64_t rcx_3 = sx.q((rax_3 & 3) - rdx_1)
        int64_t rdx_3 = sx.q(rax_3 s>> 2) * 0xf0 + *(arg1 + 0x10)
        *(rdx_3 + (rcx_3 << 2)) = *arg2 f+ *(rdx_3 + (rcx_3 << 2))
        *(rdx_3 + (rcx_3 << 2) + 0x10) = arg2[1] f+ *(rdx_3 + (rcx_3 << 2) + 0x10)
        *(rdx_3 + (rcx_3 << 2) + 0x20) = arg2[2] f+ *(rdx_3 + (rcx_3 << 2) + 0x20)
    
    i += 1
    r9_1 = &r9_1[1]
while (i s< *(arg1 + 0x130))
