// 函数: sub_140388080
// 地址: 0x140388080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r13 = arg4
char* rdi = arg1

if (arg2 s< 0 || arg2 s>= arg3 || arg3 s> *(arg1 + 4))
    return 0xffffffff

int32_t rcx = arg6
int64_t rax = sx.q(arg2)
int64_t i_1 = 0
int32_t i_5 = arg3 - arg2
void* r14_1 = &arg1[0x188 + (rax << 1)]
void* r12_1 = &arg1[8 + (rax << 3)]
int32_t rsi = 0

if (rcx != 0)
    rsi.b = *(r14_1 + (sx.q(i_5) << 1) - 2) s>= 0xfc
    rsi += 1

int32_t r8 = arg5
void* rbx = arg4
int32_t r9 = arg7

if (i_5 != 1)
    if (i_5 == 2)
        int16_t rax_5 = *(r14_1 + 2)
        int16_t rdx = *r14_1
        
        if (rax_5 == rdx)
            rsi = rsi + (sx.d(rdx) << 1) + 1
            
            if (rsi s> r8)
                return 0xfffffffe
            
            rbx = &r13[1]
            *r13 = (*rdi & 0xfd) | 1
            goto label_1403881d3
        
        int32_t rcx_1
        rcx_1.b = rdx s>= 0xfc
        rsi = rcx_1 + sx.d(rax_5) + 2 + sx.d(rdx) + rsi
        
        if (rsi s> r8)
            return 0xfffffffe
        
        *r13 = (*rdi & 0xfe) | 2
        r8 = arg5
        r9 = arg7
        rbx = &r13[1 + sx.q(sub_140386c20(sx.d(*r14_1), &r13[1]))]
        rcx = arg6
        goto label_1403881d3
    
    if (i_5 s<= 2)
        goto label_1403881d3
    
label_1403881e5:
    int32_t rsi_3 = 0
    
    if (rcx != 0)
        rsi_3.b = *(r14_1 + (sx.q(i_5) << 1) - 2) s>= 0xfc
        rsi_3 += 1
    
    int32_t rcx_5 = 1
    int32_t r10_1 = 0
    void* rcx_8
    
    if (i_5 s<= 1)
    label_140388229:
        rsi = rsi_3 + sx.d(*r14_1) * i_5 + 2
        
        if (rsi s> r8)
            return 0xfffffffe
        
        rcx_8 = &r13[1]
        *r13 = *rdi | 3
        *rcx_8 = i_5.b
    else
        void* rax_14 = r14_1 + 2
        
        while (*rax_14 == *r14_1)
            rcx_5 += 1
            rax_14 += 2
            
            if (rcx_5 s>= i_5)
                goto label_140388229
        
        int32_t rsi_4 = rsi_3 + 2
        r10_1 = 1
        
        if (i_5 - 1 s> 0)
            void* rdx_3 = r14_1
            uint64_t i_3 = zx.q(i_5 - 1)
            uint64_t i
            
            do
                int32_t rax_20 = sx.d(*rdx_3)
                rdx_3 += 2
                int32_t rcx_6
                rcx_6.b = rax_20.w s>= 0xfc
                rsi_4 = rcx_6 + 1 + rax_20 + rsi_4
                i = i_3
                i_3 -= 1
            while (i != 1)
            rdi = arg1
        
        rsi = rsi_4 + sx.d(*(r14_1 + (sx.q(i_5) << 1) - 2))
        
        if (rsi s> r8)
            return 0xfffffffe
        
        rcx_8 = &r13[1]
        *r13 = *rdi | 3
        *rcx_8 = i_5.b | 0x80
    
    rbx = rcx_8 + 1
    
    if (r9 != 0)
        int32_t r9_2 = r8 - rsi
        
        if (r8 != rsi)
            *rcx_8 |= 0x40
            int32_t rdx_7 = (r9_2 - 1) s/ 0xff
            
            if (rdx_7 s> 0)
                void* rdi_1 = rbx
                rbx += zx.q(rdx_7)
                __builtin_memset(rdi_1, 0xff, zx.q(rdx_7))
            
            rbx += 1
            rsi += r9_2
            *(rbx - 1) = r9_2.b - 1 + rdx_7.b
    
    if (r10_1 != 0 && i_5 - 1 s> 0)
        do
            int32_t rax_30 = sub_140386c20(sx.d(*(r14_1 + (i_1 << 1))), rbx)
            i_1 += 1
            rbx += sx.q(rax_30)
        while (i_1 s< sx.q(i_5 - 1))
else
    rsi += sx.d(*r14_1) + 1
    
    if (rsi s> r8)
        return 0xfffffffe
    
    rbx = &r13[1]
    *r13 = *rdi & 0xfc
label_1403881d3:
    
    if (r9 != 0 && rsi s< r8)
        goto label_1403881e5

if (arg6 != 0)
    rbx += sx.q(sub_140386c20(sx.d(*(r14_1 + (sx.q(i_5) << 1) - 2)), rbx))

if (i_5 s> 0)
    uint64_t i_4 = zx.q(i_5)
    uint64_t i_2
    
    do
        memmove(rbx, *r12_1, sx.d(*r14_1))
        r12_1 += 8
        rbx += sx.q(*r14_1)
        r14_1 += 2
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (arg7 != 0)
    int64_t rcx_16 = sx.q(arg5)
    int64_t rax_34 = sx.q(rbx.d - r13.d)
    
    if (rax_34 s< rcx_16)
        __builtin_memset(&r13[rax_34], 0, rcx_16 - rax_34)

return zx.q(rsi)
