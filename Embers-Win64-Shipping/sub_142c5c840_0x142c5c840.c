// 函数: sub_142c5c840
// 地址: 0x142c5c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3f7) == 0)
    return 0

char rax = *(arg1 + 0x3f6)
char* rdx

if (rax != 0)
    rdx = arg1[0x2a]
else if (*(arg1 + 0x3f3) != 0)
    rdx = arg1[0x1f]
else if (arg2 != 1)
    rdx = arg1[0x1a]
else
    rdx = arg1[0x1c]

uint64_t r8

if (rax != 0)
    r8 = zx.q(arg1[0x2c].d)
else if (arg2 == 1)
    r8 = zx.q(*(arg1 + 0x184))
else if (*(arg1 + 0x3f4) == 0)
    r8 = zx.q(*(arg1 + 0x17c))
else
    r8 = zx.q(arg1[0x30].d)

*(arg1 + 0x413) = 1
int32_t rcx = *(arg1 + 0x12c)

if (rcx != 4)
    if (rcx == 5)
    label_142c5c92b:
        int64_t rax_2 = sub_142c88650(arg1[0x26], arg1[0x27], rdx, r8.d, arg3, arg2, arg1)
        *(arg1 + 0x413) = 0
        return rax_2
    
    if (rcx != 6)
        if (rcx == 7)
            goto label_142c5c92b
        
        sub_142c64760(*arg1, "unknown proxytype option given", r8, arg3)
        *(arg1 + 0x413) = 0
        return 7

int64_t rax_3 = sub_142c88180(arg1[0x26], rdx, r8.d, arg2, arg3, arg1)
*(arg1 + 0x413) = 0
return rax_3
