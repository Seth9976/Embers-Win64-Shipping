// 函数: sub_142aff890
// 地址: 0x142aff890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 8)

if (*(r10 + 0x4c) s< 8)
    return 0xfffffff7

char* rcx = *(arg1 + 0x10)
int64_t r9 = *(arg1 + 0x18)

if (rcx u>= r9)
    *arg2 = 8
    return 0xffff

char* rdx = &rcx[2]

if (rdx u> r9)
    *(r10 + 0x41) = *rcx
    *(*(arg1 + 8) + 0x40) = 1
    *(arg1 + 0x10) = &rcx[1]
    *arg2 = 0xb
    return 0xffff

uint32_t r8_2 = zx.d(*rcx) << 8 | zx.d(rcx[1])

if ((r8_2 & 0xfffff800) == 0xd800)
    if (test_bit(r8_2, 0xa))
    label_142aff958:
        *(r10 + 0x40) = 2
        *(r10 + 0x41) = rdx[-2]
        *(r10 + 0x42) = rdx[-1]
        *arg2 = 0xc
        r8_2 = 0xffff
    else if (&rdx[2] u> r9)
        rdx -= 2
        void* rcx_2 = r10 + 0x41
        *(r10 + 0x40) = r9.b - rdx.b
        
        do
            char rax_16 = *rdx
            rdx = &rdx[1]
            *rcx_2 = rax_16
            rcx_2 += 1
        while (rdx u< r9)
        
        *arg2 = 0xb
        r8_2 = 0xffff
    else
        uint32_t r9_1 = zx.d(zx.w(*rdx) << 8) | zx.d(rdx[1])
        
        if ((r9_1 & 0xfffffc00) != 0xdc00)
            goto label_142aff958
        
        rdx = &rdx[2]
        int32_t r8_4 = (r8_2 - 0xd7f7) << 0xa
        r8_2 = r8_4 + r9_1
        
        if (r8_4 + r9_1 s< 0)
            goto label_142aff958

*(arg1 + 0x10) = rdx
return zx.q(r8_2)
