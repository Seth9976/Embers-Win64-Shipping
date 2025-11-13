// 函数: sub_1429de7f0
// 地址: 0x1429de7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const* const r8
void* const rax_1

if (arg2 != 1)
    if (arg2 == 2)
        rax_1 = 0x9d8
        goto label_1429de826
    
    if (arg2 == 4)
        rax_1 = 0x9dc
        goto label_1429de826
    
    r8 = "Invalid reference frame"
else
    rax_1 = 0x9d4
label_1429de826:
    int32_t* r11_1 = rax_1 + arg1 + 0x12c0
    int64_t rcx_1 = sx.q(*(rax_1 + arg1 + 0x12c0)) * 0x12
    
    if ((arg1 + 0x12c0)[rcx_1 * 2 + 0x1e1] == arg3[1] && (arg1 + 0x12c0)[rcx_1 * 2 + 0x1e0] == *arg3
            && (arg1 + 0x12c0)[rcx_1 * 2 + 0x1e6] == arg3[6]
            && (arg1 + 0x12c0)[rcx_1 * 2 + 0x1e5] == arg3[5])
        int64_t rdx = sx.q(sub_1429de140(arg1 + 0x12c0))
        (arg1 + 0x12c0)[rdx + 0x270] -= 1
        void* rcx_3 = &(arg1 + 0x12c0)[sx.q(*r11_1)]
        int32_t rax_9 = *(rcx_3 + 0x9c0)
        
        if (rax_9 s> 0)
            *(rcx_3 + 0x9c0) = rax_9 - 1
        
        *r11_1 = rdx.d
        (arg1 + 0x12c0)[rdx + 0x270] += 1
        sub_142a216f0(arg3, arg1 + 0x1a40 + sx.q(*r11_1) * 0x90)
        return zx.q(*(arg1 + 0x12c0))
    
    r8 = "Incorrect buffer dimensions"
sub_1429da010(arg1 + 0x12c0, 1, r8, arg4)
return zx.q(*(arg1 + 0x12c0))
