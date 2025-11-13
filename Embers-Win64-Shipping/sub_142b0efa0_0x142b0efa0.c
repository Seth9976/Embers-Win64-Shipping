// 函数: sub_142b0efa0
// 地址: 0x142b0efa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= *(arg1 + 0x30) || arg2 s< *(arg1 + 0x2c))
    int64_t rax
    rax.b = 0
    *(arg1 + 0x28) = 0xffffffff
    return rax

int64_t r11 = sx.q(*(arg1 + 0x28))
int32_t rbx = 0
int32_t rax_4

if (r11.d s< 0)
label_142b0f056:
    int32_t r9 = *(arg1 + 0x10)
    *(arg1 + 0x28) = 0
    
    if (r9 s<= 0)
    label_142b0f095:
        abort()
        noreturn
    
    while (true)
        int64_t rdx_1 = sx.q(*(arg1 + 0x28))
        int32_t r8_1
        
        if (rdx_1.d s< 0 || r9 s<= 0 || r9 - rdx_1.d s<= 0)
            r8_1 = 0
        else
            r8_1 = *(*(arg1 + 0x20) + (rdx_1 << 2))
        
        if (r8_1 s> arg2)
            *arg3 = r8_1
            *arg4 = *(arg1 + 0x38)
            break
        
        int32_t rax_9 = (rdx_1 + 1).d
        *(arg1 + 0x28) = rax_9
        
        if (rax_9 s>= r9)
            goto label_142b0f095
    
    rax_4.b = 1
else
    int32_t rdx = *(arg1 + 0x10)
    
    if (r11.d s>= rdx)
        goto label_142b0f056
    
    int32_t r8
    
    if (rdx s<= 0 || rdx - r11.d s<= 0)
        r8 = 0
    else
        r8 = *(*(arg1 + 0x20) + (r11 << 2))
    
    if (r8 != arg2)
        goto label_142b0f056
    
    rax_4 = (r11 + 1).d
    *(arg1 + 0x28) = rax_4
    
    if (rax_4 s< rdx)
        if (rax_4 s>= 0 && rdx s> 0 && rdx - rax_4 s> 0)
            rbx = *(*(arg1 + 0x20) + (sx.q(rax_4) << 2))
        
        *arg3 = rbx
        *arg4 = *(arg1 + 0x38)
        rax_4.b = 1
    else
        *(arg1 + 0x28) = 0xffffffff
        rax_4.b = 0

return rax_4
