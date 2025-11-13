// 函数: sub_142af49c0
// 地址: 0x142af49c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[3] == 0)
    int64_t rax_1 = arg1[1]
    int64_t r8_1 = arg1[2]
    
    if (rax_1 s>= r8_1)
        return 0xffffffff
    
    int64_t r9_1 = *arg1
    uint32_t rcx = zx.d(*(r9_1 + (rax_1 << 1)))
    arg1[1] = rax_1 + 1
    
    if ((rcx & 0xfffffc00) == 0xd800 && rax_1 + 1 != r8_1)
        uint32_t r8_2 = zx.d(*(r9_1 + ((rax_1 + 1) << 1)))
        
        if ((r8_2 & 0xfffffc00) == 0xdc00)
            rcx = ((rcx - 0xd7f7) << 0xa) + r8_2
            arg1[1] = rax_1 + 2
    
    int32_t rax_8 = sub_142a53530(rcx, &arg1[3], 0)
    arg1[4].d = rax_8
    
    if (rax_8 s>= 0x1f)
        if (rax_8 s>= 0)
            goto label_142af4ad1
        
    label_142af4ace:
        arg1[4].d = not.d(rax_8)
    label_142af4ad1:
        uint64_t result = zx.q(arg1[4].d)
        arg1[3] = 0
        return result
    
    if (rax_8 s< 0)
        goto label_142af4ace
    
    *(arg1 + 0x24) = 0

int64_t rcx_3 = sx.q(*(arg1 + 0x24))
int64_t r8_3 = arg1[3]
uint32_t rdx_3 = zx.d(*(r8_3 + (rcx_3 << 1)))
*(arg1 + 0x24) = rcx_3.d + 1

if ((rdx_3 & 0xfffffc00) == 0xd800 && rcx_3.d + 1 != arg1[4].d)
    uint32_t r8_4 = zx.d(*(r8_3 + (sx.q(rcx_3.d + 1) << 1)))
    
    if ((r8_4 & 0xfffffc00) == 0xdc00)
        rdx_3 = ((rdx_3 - 0xd7f7) << 0xa) + r8_4
        *(arg1 + 0x24) = rcx_3.d + 2

if (*(arg1 + 0x24) s>= arg1[4].d)
    arg1[3] = 0

return zx.q(rdx_3)
