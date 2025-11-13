// 函数: ??$_Partition_by_median_guess_unchecked@PEAPEAUSYMTYPE@@P6A_NPEAU1@0@Z@std@@YA?AU?$pair@PEAPEAUSYMTYPE@@PEAPEAU1@@0@PEAPEAUSYMTYPE@@0P6A_NPEAU2@1@Z@Z
// 地址: 0x14060bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2
int64_t* rbx = &arg2[(arg3 - arg2) s>> 4]
int64_t rax_5 = (arg3 - 8 - arg2) s>> 3
void* r15_1

if (rax_5 s<= 0x28)
    r15_1 = arg3 - 8
else
    int64_t rax_7 = (rax_5 + 1) s>> 3
    int64_t rdi_1 = rax_7 << 3
    int64_t* rax_8 = &arg2[rax_7]
    void __cdecl std::_Med3_unchecked<struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *)>(struct SYMTYPE **, struct SYMTYPE **, struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *))(
        rcx, rax_8, &arg2[rax_7 * 2], arg4, arg5)
    void __cdecl std::_Med3_unchecked<struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *)>(struct SYMTYPE **, struct SYMTYPE **, struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *))(
        rbx - rdi_1, rbx, &rbx[rax_7], arg4, arg5)
    r15_1 = arg3 - 8 - rdi_1
    void __cdecl std::_Med3_unchecked<struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *)>(struct SYMTYPE **, struct SYMTYPE **, struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *))(
        arg3 - 8 - (rax_7 << 4), r15_1, arg3 - 8, arg4, arg5)
    rcx = rax_8

void __cdecl std::_Med3_unchecked<struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *)>(struct SYMTYPE **, struct SYMTYPE **, struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *))(
    rcx, rbx, r15_1, arg4, arg5)
void* i = &rbx[1]

if (arg2 u< rbx)
    void* rdi_2
    
    do
        rdi_2 = &rbx[-1]
        
        if (arg4(rbx[-1], *rbx) != 0)
            break
        
        if (arg4(*rbx, *rdi_2) != 0)
            break
        
        rbx = rdi_2
    while (arg2 u< rdi_2)

for (; i u< arg3; i += 8)
    if (arg4(*i, *rbx) != 0)
        break
    
    if (arg4(*rbx, *i) != 0)
        break

void* i_1 = i
int64_t* r15_2 = rbx

while (true)
    for (; i_1 u< arg3; i_1 += 8)
        if (arg4(*rbx, *i_1) == 0)
            if (arg4(*i_1, *rbx) != 0)
                break
            
            if (i != i_1)
                int64_t rcx_11 = *i
                *i = *i_1
                *i_1 = rcx_11
            
            i += 8
    
    bool cond:0_1 = r15_2 != arg2
    
    if (r15_2 u> arg2)
        void* r14_1 = &r15_2[-1]
        
        do
            if (arg4(*r14_1, *rbx) == 0)
                if (arg4(*rbx, *r14_1) != 0)
                    break
                
                rbx -= 8
                
                if (rbx != r14_1)
                    int64_t rcx_14 = *rbx
                    *rbx = *r14_1
                    *r14_1 = rcx_14
            
            r15_2 -= 8
            r14_1 -= 8
        while (arg2 u< r15_2)
        
        cond:0_1 = r15_2 != arg2
    
    if (cond:0_1)
        r15_2 = &r15_2[-1]
        
        if (i_1 != arg3)
            int64_t rcx_19 = *i_1
            *i_1 = *r15_2
            i_1 += 8
            *r15_2 = rcx_19
        else
            rbx -= 8
            
            if (r15_2 == rbx)
                int64_t rax_23 = *(i - 8)
                i -= 8
                int64_t rcx_18 = *rbx
                *rbx = rax_23
                *i = rcx_18
            else
                i -= 8
                int64_t rcx_17 = *r15_2
                *r15_2 = *rbx
                *rbx = rcx_17
                *rbx = *i
                *i = rcx_17
    else
        if (i_1 == arg3)
            break
        
        if (i != i_1)
            int64_t rcx_15 = *rbx
            *rbx = *i
            *i = rcx_15
        
        i += 8
        int64_t rcx_16 = *rbx
        *rbx = *i_1
        rbx = &rbx[1]
        *i_1 = rcx_16
        i_1 += 8

*arg1 = rbx
arg1[1] = i
return arg1
