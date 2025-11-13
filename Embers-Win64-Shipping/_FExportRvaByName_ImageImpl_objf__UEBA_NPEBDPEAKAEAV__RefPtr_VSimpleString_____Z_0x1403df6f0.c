// 函数: ?FExportRvaByName@ImageImpl@objf@@UEBA_NPEBDPEAKAEAV?$RefPtr@VSimpleString@@@@@Z
// 地址: 0x1403df6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg6)
int32_t* rbx = arg2
*arg2 = *(arg1 + 4)
int32_t* r10 = r15 * 2
*arg3 = *(arg1 + 8)
int16_t* r13 = arg1
*(arg1 + 4) = *(r10 + arg2)
int32_t* rdi = arg3
*(arg1 + 8) = *(r10 + arg3)
int32_t rcx = sx.d(*arg1)
int32_t r8 = sx.d(r13[1])
uint32_t i_6 = arg5 << 3
int16_t* r14 = arg4
int32_t var_58 = rcx
int32_t var_54 = r8
int32_t rdx = sx.d((divs.dp.d(0:0x10000, i_6)).w)
int32_t rbp_4 = (((sx.d(*arg4 - rcx.w) * rdx) s>> 0xf) + 1) s>> 1
int32_t r12_4 = (((sx.d(arg4[2] - r8.w) * rdx) s>> 0xf) + 1) s>> 1

if (i_6 s> 0)
    void* r10_1 = rdi + 2
    uint64_t i_5 = zx.q(i_6)
    void* rax_9 = rbx - rdi
    int32_t r15_1 = rcx
    int32_t r13_1 = r8
    uint64_t i
    
    do
        int32_t rdx_1 = sx.d(*(rax_9 + 2 + r10_1 - 2))
        int32_t r8_4 =
            (sx.d(*(rax_9 - 2 + r10_1)) << 9) + (sx.d(*(rax_9 + 2 + r10_1)) << 9) + (rdx_1 << 0xa)
        r13_1 += r12_4
        int32_t rax_14 = sx.d(r13_1.w)
        r15_1 += rbp_4
        int32_t rcx_1 = sx.d(r15_1.w)
        int32_t r9_8 = ((((rdx_1 & 0x1f) << 0xb) * rax_14) s>> 0x10)
            + (rdx_1 << 0xb s>> 0x10) * rax_14 + ((zx.d(r8_4.w) * rcx_1) s>> 0x10)
            + (r8_4 s>> 0x10) * rcx_1 + (sx.d(*r10_1) << 8)
        int32_t r9_11 = ((r9_8 s>> 7) + 1) s>> 1
        
        if (r9_11 s> 0x7fff)
            r9_11 = 0x7fff
        else if (r9_11 s< 0xffff8000)
            r9_11 = -0x8000
        
        *r10_1 = r9_11.w
        r10_1 += 2
        i = i_5
        i_5 -= 1
    while (i != 1)
    rbx = arg2
    rdi = arg3
    r14 = arg4
    r15 = zx.q(arg6)
    r13 = arg1

if (i_6 s< r15.d)
    int32_t r11_1 = sx.d(r14[2])
    int32_t rbp_5 = sx.d(*r14)
    void* r9_12 = rdi + ((sx.q(i_6) + 1) << 1)
    void* rax_23 = rbx - rdi
    uint64_t i_4 = zx.q(r15.d - i_6)
    uint64_t i_1
    
    do
        int32_t rcx_2 = sx.d(*(r9_12 + rax_23 + 2 - 2))
        int32_t rdx_8 =
            (sx.d(*(r9_12 + rax_23 - 2)) << 9) + (sx.d(*(r9_12 + rax_23 + 2)) << 9) + (rcx_2 << 0xa)
        int32_t r8_15 = ((((rcx_2 & 0x1f) << 0xb) * r11_1) s>> 0x10)
            + (rcx_2 << 0xb s>> 0x10) * r11_1 + ((zx.d(rdx_8.w) * rbp_5) s>> 0x10)
            + (rdx_8 s>> 0x10) * rbp_5 + (sx.d(*r9_12) << 8)
        int32_t r8_18 = ((r8_15 s>> 7) + 1) s>> 1
        
        if (r8_18 s> 0x7fff)
            r8_18 = 0x7fff
        else if (r8_18 s< 0xffff8000)
            r8_18 = -0x8000
        
        *r9_12 = r8_18.w
        r9_12 += 2
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rbx = arg2
    r13 = arg1

*r13 = *r14
uint32_t result = zx.d(r14[2])
r13[1] = result.w

if (r15.d s> 0)
    int16_t* r8_19 = rdi + 2
    void* rbx_2 = rbx - rdi
    uint64_t i_3 = zx.q(r15.d)
    uint64_t i_2
    
    do
        int32_t rcx_6 = sx.d(*r8_19)
        int32_t rax_34 = sx.d(*(r8_19 + rbx_2))
        int32_t rdx_11 = rax_34 + rcx_6
        result = rax_34 - rcx_6
        
        if (rdx_11 s> 0x7fff)
            rdx_11 = 0x7fff
        else if (rdx_11 s< 0xffff8000)
            rdx_11 = -0x8000
        
        *(r8_19 + rbx_2) = rdx_11.w
        
        if (result s> 0x7fff)
            result = 0x7fff
        else if (result s< 0xffff8000)
            result = -0x8000
        
        *r8_19 = result.w
        r8_19 = &r8_19[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

return result
