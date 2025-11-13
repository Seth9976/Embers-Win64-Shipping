// 函数: sub_1429de4e0
// 地址: 0x1429de4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8
int32_t rax_1

if (arg2 != 1)
    if (arg2 == 2)
        rax_1 = *(arg1 + 0x1c98)
        goto label_1429de512
    
    if (arg2 == 4)
        rax_1 = *(arg1 + 0x1c9c)
        goto label_1429de512
    
    r8 = "Invalid reference frame"
else
    rax_1 = *(arg1 + 0x1c94)
label_1429de512:
    int64_t rcx_1 = sx.q(rax_1) * 0x12
    
    if ((arg1 + 0x12c0)[rcx_1 * 2 + 0x1e1] == arg3[1])
        arg4 = &(arg1 + 0x12c0)[rcx_1 * 2]
        
        if (*(arg4 + 0x780) == *arg3 && (arg1 + 0x12c0)[rcx_1 * 2 + 0x1e6] == arg3[6]
                && (arg1 + 0x12c0)[rcx_1 * 2 + 0x1e5] == arg3[5])
            sub_142a216f0(arg4 + 0x780, arg3)
            return zx.q(*(arg1 + 0x12c0))
    
    r8 = "Incorrect buffer dimensions"
sub_1429da010(arg1 + 0x12c0, 1, r8, arg4)
return zx.q(*(arg1 + 0x12c0))
