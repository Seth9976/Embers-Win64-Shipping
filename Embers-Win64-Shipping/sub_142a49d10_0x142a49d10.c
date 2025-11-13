// 函数: sub_142a49d10
// 地址: 0x142a49d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg3
int32_t r15 = arg2
void* r10 = arg1

if ((*(arg1 + 8) & 1) != 0 || (*(arg4 + 8) & 1) != 0 || (*(arg7 + 8) & 1) != 0)
    return r10

int16_t rax = *(arg1 + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

if (r15 s< 0)
    r15 = 0
else if (r15 s> rax_2)
    r15 = rax_2

if (rbp s>= 0)
    int32_t rax_3 = rax_2 - r15
    
    if (rbp s> rax_3)
        rbp = rax_3
else
    rbp = 0

int16_t rax_4 = *(arg4 + 8)
int32_t rax_6

if (rax_4 s< 0)
    rax_6 = *(arg4 + 0xc)
else
    rax_6 = sx.d(rax_4) s>> 5

int32_t r12 = arg5

if (r12 s< 0)
    r12 = 0
else if (r12 s> rax_6)
    r12 = rax_6

int32_t rdi = arg6

if (rdi s>= 0)
    int32_t rax_7 = rax_6 - r12
    
    if (rdi s> rax_7)
        rdi = rax_7
else
    rdi = 0

int16_t rax_8 = *(arg7 + 8)
int32_t rax_10

if (rax_8 s< 0)
    rax_10 = *(arg7 + 0xc)
else
    rax_10 = sx.d(rax_8) s>> 5

int32_t r13 = arg8

if (r13 s< 0)
    r13 = 0
else if (r13 s> rax_10)
    r13 = rax_10

int32_t rcx = arg9

if (rcx s>= 0)
    int32_t rax_11 = rax_10 - r13
    
    if (rcx s> rax_11)
        rcx = rax_11
else
    rcx = 0

if (rdi != 0 && rbp s> 0)
    while (rbp s>= rdi)
        if ((*(arg4 + 8) & 1) != 0)
            break
        
        int16_t rcx_1 = *(arg4 + 8)
        int32_t rax_13
        
        if (rcx_1 s< 0)
            rax_13 = *(arg4 + 0xc)
        else
            rax_13 = sx.d(rcx_1) s>> 5
        
        int32_t r8
        
        if (r12 s>= 0)
            r8 = r12
            
            if (r12 s> rax_13)
                r8 = rax_13
        else
            r8 = 0
        
        if (rdi s< 0)
            break
        
        int32_t rax_14 = rax_13 - r8
        uint64_t r9 = zx.q(rdi)
        
        if (rdi s> rax_14)
            r9 = zx.q(rax_14)
        
        if (r9.d s<= 0)
            break
        
        void* rdx = arg4 + 0xa
        
        if ((rcx_1.b & 2) == 0)
            rdx = *(arg4 + 0x18)
        
        int32_t rax_15 = sub_142a4a330(r10, rdx, r8, r9, r15, rbp)
        
        if (rax_15 s< 0)
            return arg1
        
        int16_t rdx_1 = *(arg7 + 8)
        int32_t rcx_4
        
        if (rdx_1 s< 0)
            rcx_4 = *(arg7 + 0xc)
        else
            rcx_4 = sx.d(rdx_1) s>> 5
        
        int32_t rax_16
        
        if (r13 s>= 0)
            rax_16 = r13
            
            if (r13 s> rcx_4)
                rax_16 = rcx_4
        else
            rax_16 = 0
        
        int32_t r8_1
        
        if (rcx s>= 0)
            int32_t rcx_5 = rcx_4 - rax_16
            r8_1 = rcx
            
            if (rcx s> rcx_5)
                r8_1 = rcx_5
        else
            r8_1 = 0
        
        void* r9_2 = arg7 + 0xa
        
        if ((rdx_1.b & 2) == 0)
            r9_2 = *(arg7 + 0x18)
        
        sub_142a49390(arg1, rax_15, rdi, r9_2, rax_16, r8_1)
        r10 = arg1
        rbp += r15 - rax_15 - rdi
        r15 = rax_15 + rcx
        
        if (rbp s<= 0)
            break

return r10
