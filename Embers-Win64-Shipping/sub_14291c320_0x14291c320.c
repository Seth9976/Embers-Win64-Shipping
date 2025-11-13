// 函数: sub_14291c320
// 地址: 0x14291c320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return 0

int64_t rcx = sx.q(*arg1)
char rdi_2

if (rcx.d s<= 0)
    rdi_2 = 0
else
    int32_t rdi_1 = arg1[4]
    
    if ((rdi_1.b & 8) == 0)
        int64_t rdx = *(arg1 + 8)
        int64_t rax_2 = rcx
        
        while (*(rdx + rax_2 - 1) == 0)
            rcx = zx.q(rcx.d - 1)
            rax_2 -= 1
            
            if (rax_2 s<= 0)
                break
        
        char rdx_1 = *(sx.q(rcx.d) + rdx - 1)
        
        if ((rdx_1 & 1) != 0)
            rdi_2 = 0
        else if ((rdx_1 & 2) != 0)
            rdi_2 = 1
        else if ((rdx_1 & 4) != 0)
            rdi_2 = 2
        else if ((rdx_1 & 8) != 0)
            rdi_2 = 3
        else if ((rdx_1 & 0x10) != 0)
            rdi_2 = 4
        else if ((rdx_1 & 0x20) != 0)
            rdi_2 = 5
        else if ((rdx_1 & 0x40) == 0)
            rdi_2 = (sbb.d(rdi_1, rdi_1, (rdx_1 & 0x80) != 0)).b & 7
        else
            rdi_2 = 6
    else
        rdi_2 = rdi_1.b & 7

if (arg2 != 0)
    char* rsi_1 = *arg2
    *rsi_1 = rdi_2
    void* rsi_2 = &rsi_1[1]
    
    if (rcx.d s> 0)
        int64_t rbx_1 = sx.q(rcx.d)
        memcpy(rsi_2, *(arg1 + 8), rbx_1.d)
        rsi_2 += rbx_1
        *(rsi_2 - 1) &= 0xff << rdi_2
    
    *arg2 = rsi_2

return zx.q((rcx + 1).d)
