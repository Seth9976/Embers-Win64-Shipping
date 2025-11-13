// 函数: sub_142af4af0
// 地址: 0x142af4af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1] == 0)
    void* rcx = *arg1
    int64_t r8_1 = sx.q(*(rcx + 0x28))
    int16_t r9_1
    
    if (r8_1.d s< *(rcx + 0x2c))
        r9_1 = *(*(rcx + 0x30) + (r8_1 << 1))
    
    int32_t rax_2
    uint32_t r9_2
    
    if (r8_1.d s>= *(rcx + 0x2c) || r9_1 u>= 0xd800)
        rax_2 = sub_142aea870(rcx, arg2)
        r9_2 = rax_2
    else
        rax_2 = (r8_1 + 1).d
        r9_2 = zx.d(r9_1)
        *(rcx + 0x28) = rax_2
    
    if (r9_2 == 0xffffffff)
        return zx.q(rax_2) | zx.q(r9_2)
    
    int32_t rax_4 = sub_142a53530(r9_2, &arg1[1], 0)
    arg1[2].d = rax_4
    
    if (rax_4 s>= 0x1f)
        if (rax_4 s>= 0)
            goto label_142af4bf0
        
    label_142af4bed:
        arg1[2].d = not.d(rax_4)
    label_142af4bf0:
        uint64_t result = zx.q(arg1[2].d)
        arg1[1] = 0
        return result
    
    if (rax_4 s< 0)
        goto label_142af4bed
    
    *(arg1 + 0x14) = 0

int64_t rcx_2 = sx.q(*(arg1 + 0x14))
int64_t r8_2 = arg1[1]
uint32_t rdx_2 = zx.d(*(r8_2 + (rcx_2 << 1)))
*(arg1 + 0x14) = rcx_2.d + 1

if ((rdx_2 & 0xfffffc00) == 0xd800 && rcx_2.d + 1 != arg1[2].d)
    uint32_t r8_3 = zx.d(*(r8_2 + (sx.q(rcx_2.d + 1) << 1)))
    
    if ((r8_3 & 0xfffffc00) == 0xdc00)
        rdx_2 = ((rdx_2 - 0xd7f7) << 0xa) + r8_3
        *(arg1 + 0x14) = rcx_2.d + 2

if (*(arg1 + 0x14) s>= arg1[2].d)
    arg1[1] = 0

return zx.q(rdx_2)
