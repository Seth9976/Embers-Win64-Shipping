// 函数: sub_142c072d0
// 地址: 0x142c072d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x28) & 1) == 0)
    return 

int32_t rdx_1 = 0
int32_t rsi_1 = *(arg1 + 0x60)
uint32_t rax

if (*(arg1 + 0x1c) != 0)
    if (rsi_1 != 0)
        uint64_t rbx_2 = 0
        
        do
            rbx_2 = zx.q(rbx_2.d + 1)
            
            if (rbx_2.d u>= rsi_1)
                break
            
            rax.b = *(*(arg1 + 0x70) + rbx_2 * 0x14 + 0x10) u>> 7
        while ((rax.b & 1) != 0)
        
        if (rsi_1 != 0)
            do
                if (rbx_2.d - rdx_1 u>= 2)
                    sub_142bf5c70(arg1, rdx_1, rbx_2.d)
                
                rdx_1 = rbx_2.d
                
                do
                    rbx_2 = zx.q(rbx_2.d + 1)
                    
                    if (rbx_2.d u>= *(arg1 + 0x60))
                        break
                    
                    rax.b = *(*(arg1 + 0x70) + rbx_2 * 0x14 + 0x10) u>> 7
                while ((rax.b & 1) != 0)
            while (rdx_1 u< rsi_1)
else if (rsi_1 != 0)
    uint64_t rbx_1 = 0
    
    do
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbx_1.d u>= rsi_1)
            break
        
        rax.b = *(*(arg1 + 0x70) + rbx_1 * 0x14 + 0x10) u>> 7
    while ((rax.b & 1) != 0)
    
    if (rsi_1 != 0)
        do
            if (rbx_1.d - rdx_1 u>= 2)
                sub_142bf5140(arg1, rdx_1, rbx_1.d)
            
            rdx_1 = rbx_1.d
            uint32_t rax_2
            
            do
                rbx_1 = zx.q(rbx_1.d + 1)
                
                if (rbx_1.d u>= *(arg1 + 0x60))
                    break
                
                rax_2.b = *(*(arg1 + 0x70) + rbx_1 * 0x14 + 0x10) u>> 7
            while ((rax_2.b & 1) != 0)
        while (rdx_1 u< rsi_1)
