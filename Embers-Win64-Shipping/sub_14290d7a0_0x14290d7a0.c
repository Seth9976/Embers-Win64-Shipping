// 函数: sub_14290d7a0
// 地址: 0x14290d7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int64_t rdx = *(arg1 + 0x28)

if (arg2 == 0)
    int32_t rcx = **(arg1 + 0x10)
    
    if (rcx != 0x40a && rcx != 0x43f)
        int64_t r8
        r8.b = rcx != 0x40b
        *arg3 = r8 + 0x38
        return zx.q((arg2 + 1).d)
    
    *arg3 = 0x20
    return 1

if (rdx != 0)
    int32_t rcx_1 = **(arg1 + 0x10)
    int64_t rax_6
    
    if (rcx_1 == 0x40a || rcx_1 == 0x43f)
        rax_6 = 0x20
    else
        int64_t rax_5
        rax_5.b = rcx_1 != 0x40b
        rax_6 = rax_5 + 0x38
    
    if (*arg3 u>= rax_6)
        int64_t r8_3
        
        if (rcx_1 == 0x40a || rcx_1 == 0x43f)
            r8_3 = 0x20
        else
            int64_t r8_2
            r8_2.b = rcx_1 != 0x40b
            r8_3 = r8_2 + 0x38
        
        *arg3 = r8_3
        memcpy(arg2, rdx, r8_3.d)
        return 1

return 0
