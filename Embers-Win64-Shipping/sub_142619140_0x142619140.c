// 函数: sub_142619140
// 地址: 0x142619140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 4) s<= 0)
    return 

void** r14_1 = nullptr

do
    int128_t* rbx_1 = *(r14_1 + *(arg1 + 0x10))
    
    if (*(rbx_1 + 0x327) == 1)
        int64_t* rcx = rbx_1[0x27].q
        *(*(arg1 + 0x2b18) + 8) = rcx
        
        if (rcx != 0)
            (*(*rcx + 0x10))()
        
        if (sub_14262d620(rbx_1, rbx_1 + 0x22c, *(arg1 + 0x2b18), 
                arg1 + 0x6e0 + zx.q(*(rbx_1 + 0x2af)) * 0x220) != 0)
            *(rbx_1 + 0x22c) = *rbx_1
            rbx_1[0x23].d = *(rbx_1 + 4)
            *(rbx_1 + 0x234) = *(rbx_1 + 8)
        
        int64_t* rax = zx.q(*(rbx_1 + 0x325))
        
        if (rax.b == 0 || rax.b == 6)
            int64_t rdx_2
            
            if (rbx_1[5].d == 0)
                rdx_2 = 0
            else
                rdx_2 = **(rbx_1 + 0x48)
            
            sub_142633800(rbx_1, rdx_2, rbx_1 + 0x22c)
    
    i += 1
    r14_1 = &r14_1[1]
while (i s< *(arg1 + 4))
