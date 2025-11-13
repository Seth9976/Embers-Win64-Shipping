// 函数: sub_1418fe410
// 地址: 0x1418fe410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t i_3 = sx.q(*(arg1 + 0x158))
    
    if (i_3 s> 0)
        int64_t* rbx_1 = nullptr
        int64_t i
        
        do
            int64_t* rcx = *(rbx_1 + *(arg1 + 0x150))
            
            if (rcx != 0)
                (**rcx)(rcx, 1)
            
            rbx_1 = &rbx_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    *(arg1 + 0x158) = 0
    
    if (*(arg1 + 0x15c) != 0)
        return sub_1405a5410(arg1 + 0x150, 0) __tailcall
    
    return 

int64_t r12_1 = sx.q(*(arg1 + 0x158))
uint64_t r13_1 = zx.q(data_14399fa54)
int32_t r14_1 = 0

if (r12_1.d s> 0)
    int64_t rbx_2 = 0
    int64_t rsi_1 = 0
    
    do
        int64_t* rcx_3 = *(arg1 + 0x150)
        
        if (*(rcx_3 + rsi_1 + 8) + 0xa u>= r13_1)
            break
        
        int64_t* rcx_4 = *(rcx_3 + rsi_1)
        
        if (rcx_4 != 0)
            (**rcx_4)(rcx_4, 1)
        
        r14_1 += 1
        rbx_2 += 1
        rsi_1 += 0x10
    while (rbx_2 s< r12_1)

int32_t rsi_3 = r12_1.d - r14_1

if (rsi_3 s> 0 && rsi_3 != r12_1.d)
    int64_t rcx_5 = *(arg1 + 0x150)
    memmove(rcx_5, (sx.q(r14_1) << 4) + rcx_5, rsi_3 << 4)

int64_t rbp_1 = sx.q(*(arg1 + 0x158))

if (rsi_3 s> rbp_1.d)
    *(arg1 + 0x158) = rsi_3
    int32_t i_2 = rsi_3 - rbp_1.d
    
    if (rsi_3 s> *(arg1 + 0x15c))
        sub_1405a4f90(arg1 + 0x150)
    
    int64_t* rax = (rbp_1 << 4) + *(arg1 + 0x150)
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            *rax = 0
            rax[1] = 0
            rax = &rax[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
else if (rsi_3 s< rbp_1.d && rsi_3 != rbp_1.d)
    *(arg1 + 0x158) = rsi_3
