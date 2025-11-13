// 函数: sub_142ab4c80
// 地址: 0x142ab4c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (*(arg1 + 0x40) == 0 && *(arg1 + 0x10) + rdi.d s> 0x10)
    sub_142ab4e10(arg1)

if (*(arg1 + 0x40) == 0)
    *(arg1 + 0x30) <<= (rdi << 2).b
else
    sub_142ab3600(arg1, *(arg1 + 0x10) + rdi.d)
    int32_t r9_3 = *(arg1 + 0x10) - 1 + rdi.d
    int64_t rdx_2 = sx.q(r9_3)
    
    if (rdx_2 s>= rdi)
        r9_3 = r9_3 - 1 + rdi.d - rdx_2.d
        
        do
            char* rcx_4 = *(arg1 + 0x30)
            rcx_4[rdx_2] = *(rcx_4 - rdi + rdx_2)
            rdx_2 -= 1
        while (rdx_2 s>= rdi)
    
    int64_t rcx_5 = sx.q(r9_3)
    
    if (r9_3 s>= 0)
        int64_t temp0_1
        
        do
            *(rcx_5 + *(arg1 + 0x30)) = 0
            temp0_1 = rcx_5
            rcx_5 -= 1
        while (temp0_1 - 1 s>= 0)
        *(arg1 + 0xc) -= rdi.d
        *(arg1 + 0x10) += rdi.d
        return 

*(arg1 + 0xc) -= rdi.d
*(arg1 + 0x10) += rdi.d
