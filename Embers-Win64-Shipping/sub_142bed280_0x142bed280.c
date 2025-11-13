// 函数: sub_142bed280
// 地址: 0x142bed280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x18)
int16_t rbx = 0
int64_t r11 = *(arg1 + 0x20)
int32_t r10_1 = *arg2 + 1
uint64_t rax_1 = zx.q(rdi u>> 1)
int32_t r8 = 0
int32_t r9 = rdi

if (rdi == 0)
label_142bed2e0:
    r10_1 = 0
    
    if (r8 u< rdi)
        rax_1 = zx.q(r8)
        r10_1 = *(r11 + (rax_1 << 3))
        rbx = *(r11 + (rax_1 << 3) + 4) + 1
else
    while (true)
        if (rax_1.d u> r9 || rax_1.d u< r8)
            rax_1 = zx.q((r9 + r8) u>> 1)
        
        int32_t rdx = *(r11 + (rax_1 << 3))
        
        if (r10_1 == rdx)
            break
        
        if (r10_1 u>= rdx)
            r8 = (rax_1 + 1).d
        else
            r9 = rax_1.d
        
        rax_1 = zx.q(rax_1.d + r10_1 - rdx)
        
        if (r8 u>= r9)
            goto label_142bed2e0
    
    rbx = *(r11 + (rax_1 << 3) + 4) + 1

*arg2 = r10_1
return zx.q(rbx)
