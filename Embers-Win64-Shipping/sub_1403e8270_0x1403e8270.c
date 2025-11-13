// 函数: sub_1403e8270
// 地址: 0x1403e8270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg5)
char* rdi = nullptr

if (r14 s<= 0)
    return 

do
    sub_1403df070(*(arg2 + (rdi << 2)))
    char rcx_4 = ((sx.d(sub_1403df070(*(arg2 + (rdi << 2))) - 0x82a) * 0x8cb) s>> 0x10).b
    *(rdi + arg1) = rcx_4
    
    if (rcx_4 s< *arg3)
        *(rdi + arg1) = rcx_4 + 1
    
    char rax_2 = *(rdi + arg1)
    char rcx_5
    
    if (rax_2 s> 0x3f)
        rcx_5 = 0x3f
    else if (rax_2 s>= 0)
        rcx_5 = rax_2
    else
        rcx_5 = 0
    
    *(rdi + arg1) = rcx_5
    
    if (rdi != 0 || arg4 != 0)
        rcx_5 -= *arg3
        *(rdi + arg1) = rcx_5
        int32_t rax_6 = sx.d(rcx_5)
        int32_t rdx_2 = sx.d(*arg3) + 8
        
        if (rax_6 s> rdx_2)
            *(rdi + arg1) = ((rax_6 - rdx_2 + 1) s>> 1).b + rdx_2.b
        
        char rax_10 = *(rdi + arg1)
        char rcx_7
        
        if (rax_10 s<= 0x24)
            rcx_7 = -4
            
            if (rax_10 s>= 0xfc)
                rcx_7 = rax_10
        else
            rcx_7 = 0x24
        
        int32_t rax_11 = sx.d(rcx_7)
        *(rdi + arg1) = rcx_7
        
        if (rax_11 s<= rdx_2)
            *arg3 += rcx_7
        else
            rax_11.b *= 2
            rax_11.b -= rdx_2.b
            *arg3 += rax_11.b
        
        *(rdi + arg1) += 4
    else
        int32_t rax_4 = sx.d(*arg3) - 4
        
        if (rax_4 s> 0x3f)
            int32_t rdx = sx.d(rcx_5)
            
            if (rdx s> rax_4)
                *arg1 = rax_4.b
                *arg3 = rax_4.b
            else
                char rax_5 = rdx.b
                
                if (rcx_5 s< 0x3f)
                    rax_5 = 0x3f
                
                *arg1 = rax_5
                *arg3 = rax_5
        else if (rcx_5 s<= 0x3f)
            int32_t rcx_6 = sx.d(rcx_5)
            
            if (rcx_6 s< rax_4)
                rcx_6 = rax_4
            
            *arg1 = rcx_6.b
            *arg3 = rcx_6.b
        else
            *arg1 = 0x3f
            *arg3 = 0x3f
    
    int32_t rcx_8 = sx.d(*arg3)
    int32_t rax_15 = ((rcx_8 * 0x1c71) s>> 0x10) + rcx_8 * 0x1d + 0x82a
    int32_t rcx_11 = 0xf7f
    
    if (rax_15 s< 0xf7f)
        rcx_11 = rax_15
    
    rdi = &rdi[1]
    *(arg2 + (rdi << 2) - 4) = sub_1403df0e0(rcx_11)
while (rdi s< r14)
