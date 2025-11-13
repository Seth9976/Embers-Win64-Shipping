// 函数: sub_142b1def0
// 地址: 0x142b1def0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t rax = sub_142af42a0(arg1, arg2)
uint16_t r8 = rax

if (rax u< *(arg1 + 0x1a))
label_142b1df7b:
    
    if (r8 u> *(arg1 + 0xe) && r8 != (*(arg1 + 0x10) | 1))
        int64_t rax_9 = *(arg1 + 0x30)
        uint64_t rcx_4 = zx.q(r8) u>> 1
        uint16_t rcx_5 = *(rax_9 + (rcx_4 << 1))
        uint16_t result = rcx_5 u>> 8
        
        if (rcx_5.b s>= 0)
            return result
        
        return result | (*(rax_9 + (rcx_4 << 1) - 2) & 0xff00)
else
    if (r8 u>= 0xfc00)
        uint32_t rcx = zx.d((r8 u>> 1).b)
        return zx.q(rcx << 8) | zx.q(rcx)
    
    if (r8 u< *(arg1 + 0x1e))
        uint16_t rax_4 = r8 & 6
        
        if (rax_4 u<= 2)
            return zx.q(rax_4 u>> 1)
        
        r8 = sub_142b1e310(arg1, (zx.d(r8) u>> 3) - zx.d(*(arg1 + 0x1c)) + arg2)
        goto label_142b1df7b

return 0
