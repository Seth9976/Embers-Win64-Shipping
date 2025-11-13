// 函数: sub_142a8faf0
// 地址: 0x142a8faf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
int64_t rdi = sx.q(arg2)
int32_t result

if (rdi.d s>= rsi.d)
label_142a8fb6d:
    result.b = 0
else
    int64_t rbx_1 = rdi
    
    while (true)
        uint32_t rcx_2 = zx.d(*(arg1 + (rbx_1 << 1)))
        rdi = zx.q(rdi.d + 1)
        rbx_1 += 1
        
        if ((rcx_2 & 0xfffffc00) == 0xd800 && rbx_1 != rsi)
            uint32_t rdx = zx.d(*(arg1 + (rbx_1 << 1)))
            
            if ((rdx & 0xfffffc00) == 0xdc00)
                rdi = zx.q(rdi.d + 1)
                rbx_1 += 1
                rcx_2 = ((rcx_2 - 0xd7f7) << 0xa) + rdx
        
        result = sub_142a530b0(rcx_2)
        
        if ((result.b & 4) == 0)
            result.b = result != 0
            break
        
        if (rdi.d s>= rsi.d)
            goto label_142a8fb6d

return result
