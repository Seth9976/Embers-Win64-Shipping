// 函数: sub_142860090
// 地址: 0x142860090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg3 != 0)
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
        sub_1428a71f0(*(arg1 + 0x88))
        *(arg1 + 0x88) = 0
    
    sub_142851c40(arg1)
    *(arg1 + 0x98) = 0

int32_t* rcx_3 = *(arg1 + 8)

if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) == 0)
    int32_t rax_4 = *rcx_3
    
    if (rax_4 s>= 0x304 && rax_4 != 0x10000 && *(arg1 + 0x38) == 0 && *(arg1 + 0x758) == 4)
        *(arg1 + 0x758) = 1

if (*(arg1 + 0x70) != 0)
    *(arg1 + 0x750) = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x70) = 0
    *(arg1 + 0x670) = 0
    sub_142882180(arg1)
    int32_t* rax_5 = *(arg1 + 8)
    void* rcx_5 = *(rax_5 + 0xc0)
    
    if (*(arg1 + 0x38) == 0)
        int32_t rax_8
        
        if ((*(rcx_5 + 0x60) & 8) == 0)
            rax_8 = *rax_5
        
        if ((*(rcx_5 + 0x60) & 8) != 0 || rax_8 s< 0x304 || rax_8 == 0x10000)
            sub_142852680(arg1, 1)
        else
            void* rcx_9 = *(arg1 + 0x738)
            
            if ((*(rcx_9 + 0x48) & 1) != 0)
                sub_1428574b0(rcx_9, *(arg1 + 0x508))
        
        if (*(arg1 + 0xc8) != 0)
            void* rcx_11 = *(arg1 + 0x738)
            *(rcx_11 + 0x8c)
            *(rcx_11 + 0x8c) += 1
        
        void* rcx_12 = *(arg1 + 0x738)
        *(arg1 + 0x30) = sub_142856540
        *(rcx_12 + 0x70) += 1
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0 && *(arg1 + 0xc8) != 0)
            sub_142870200(arg1)
    else
        int32_t rax_6
        
        if ((*(rcx_5 + 0x60) & 8) == 0)
            rax_6 = *rax_5
        
        if ((*(rcx_5 + 0x60) & 8) != 0 || rax_6 s< 0x304 || rax_6 == 0x10000)
            sub_142852680(arg1, 2)
        
        void* rcx_7 = *(arg1 + 0x598)
        *(rcx_7 + 0x7c) += 1
        void* rax_7 = *(arg1 + 8)
        *(arg1 + 0x30) = sub_142856440
        
        if ((*(*(rax_7 + 0xc0) + 0x60) & 8) != 0 && *(arg1 + 0xc8) == 0)
            sub_142870200(arg1)
    
    if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
        *(*(arg1 + 0xb0) + 0x110) = 0
        *(*(arg1 + 0xb0) + 0x10c) = 0
        *(*(arg1 + 0xb0) + 0x10e) = 0
        sub_14286f870(arg1)

int64_t rdi = *(arg1 + 0x568)

if (rdi == 0)
    rdi = 0
    int64_t rcx_17 = *(*(arg1 + 0x598) + 0x108)
    
    if (rcx_17 != 0)
        rdi = rcx_17

sub_142856630(arg1, 0)

if (rdi != 0)
    rdi(arg1, 0x20, 1)

if (arg4 != 0)
    return 1

sub_142856630(arg1, arg4 + 1)
return zx.q(arg4 + 2)
