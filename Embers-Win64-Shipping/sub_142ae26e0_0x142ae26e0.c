// 函数: sub_142ae26e0
// 地址: 0x142ae26e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = arg3
void* r8 = arg1
int64_t rdi = sx.q(*r9)

if ((*(arg2 + 8) & 1) == 0)
    *(arg2 + 8) &= 0x1f
else
    *(arg2 + 8) = 2

void* rdx_1 = arg1 + 8 + (rdi << 6)
int16_t rcx = *(rdx_1 + 8)
int16_t* rax_3

if (rcx s< 0)
    rax_3 = zx.q(*(rdx_1 + 0xc))
else
    rax_3 = zx.q(sx.d(rcx) s>> 5)

if (rax_3.d != 0)
    rax_3 = rdx_1 + 0xa
    
    if ((rcx.b & 2) == 0)
        rax_3 = *(rdx_1 + 0x18)
    
    if (*rax_3 == 0x27)
        int16_t rax_4 = *(rdx_1 + 8)
        int32_t r9_2
        
        if (rax_4 s< 0)
            r9_2 = *(rdx_1 + 0xc)
        else
            r9_2 = sx.d(rax_4) s>> 5
        
        rax_3 = sub_142a48d00(arg2, rdx_1, 0, r9_2)
        r8 = arg1
        rdi = zx.q(rdi.d + 1)
        r9 = arg3

int32_t i = *(r8 + 0xc88)

if (rdi.d s>= i)
    *r9 = rdi.d
    return rax_3

int64_t rax_5 = sx.q(rdi.d)
int64_t arg_10 = rax_5
int64_t rax_6 = rax_5 << 6
void* r15_1 = r8 + 0x50 + rax_6
void* rbx_1 = r8 + 8 + rax_6
void* r12_1 = r8 + 0x12 + rax_6
void* r14_1 = r8 + 0x60 + rax_6
void* rbp_1 = r8 + 0x52 + rax_6
void* r13_1 = r8 + 0x54 + rax_6

do
    int16_t rcx_2 = *(rbx_1 + 8)
    int32_t rax_8
    
    if (rcx_2 s< 0)
        rax_8 = *(rbx_1 + 0xc)
    else
        rax_8 = sx.d(rcx_2) s>> 5
    
    void* rax_9
    
    if (rax_8 != 0)
        rax_9 = r12_1
        
        if ((rcx_2.b & 2) == 0)
            rax_9 = *(rbx_1 + 0x18)
    
    int32_t rax_15
    
    if (rax_8 == 0 || *rax_9 != 0x27)
        int32_t r9_8
        
        if (rcx_2 s< 0)
            r9_8 = *(rbx_1 + 0xc)
        else
            r9_8 = sx.d(rcx_2) s>> 5
        
        sub_142a48d00(arg2, rbx_1, 0, r9_8)
        rax_15 = 1
    else
        if ((rdi + 1).d s>= i)
        label_142ae291f:
            void* rdx_7 = r8 + 8 + (sx.q(rdi.d) << 6)
            int16_t rax_18 = *(rdx_7 + 8)
            int32_t r9_10
            
            if (rax_18 s< 0)
                r9_10 = *(rdx_7 + 0xc)
            else
                r9_10 = sx.d(rax_18) s>> 5
            
            sub_142a48d00(arg2, rdx_7, 0, r9_10)
            break
        
        int16_t rdx_2 = *r15_1
        int32_t rax_12
        
        if (rdx_2 s< 0)
            rax_12 = *r13_1
        else
            rax_12 = sx.d(rdx_2) s>> 5
        
        if (rax_12 == 0)
            goto label_142ae291f
        
        void* rax_13 = rbp_1
        
        if ((rdx_2.b & 2) == 0)
            rax_13 = *r14_1
        
        if (*rax_13 != 0x27)
            goto label_142ae291f
        
        int32_t r9_4
        
        if (rcx_2 s< 0)
            r9_4 = *(rbx_1 + 0xc)
        else
            r9_4 = sx.d(rcx_2) s>> 5
        
        sub_142a48d00(arg2, rbx_1, 0, r9_4)
        int16_t rax_14 = *(rbx_1 + 0x48)
        rbx_1 += 0x40
        arg_10 += 1
        r13_1 += 0x40
        r15_1 += 0x40
        rbp_1 += 0x40
        r14_1 += 0x40
        r12_1 += 0x40
        int32_t r9_6
        
        if (rax_14 s< 0)
            r9_6 = *(rbx_1 + 0xc)
        else
            r9_6 = sx.d(rax_14) s>> 5
        
        sub_142a48d00(arg2, rbx_1, 0, r9_6)
        rax_15 = 2
    
    r8 = arg1
    rdi = zx.q(rdi.d + rax_15)
    arg_10 += 1
    r13_1 += 0x40
    r15_1 += 0x40
    rbp_1 += 0x40
    r14_1 += 0x40
    rbx_1 += 0x40
    i = *(r8 + 0xc88)
    r12_1 += 0x40
while (rdi.d s< i)

*arg3 = rdi.d
return arg3
