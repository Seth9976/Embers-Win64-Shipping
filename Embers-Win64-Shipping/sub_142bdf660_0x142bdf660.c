// 函数: sub_142bdf660
// 地址: 0x142bdf660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x3f8)
char* r9 = nullptr

if (rax != 0)
    return rax

if (*(arg1 + 0x410) != 0 && ((*(arg1 + 4) & 0x7fff0000) != 0 || (*(arg1 + 8) & 0x8000) != 0))
    char* rax_1 = sub_142be7dc0(arg1, arg2)
    *(arg1 + 0x3f8) = rax_1
    return rax_1

uint32_t r10_1 = zx.d(*(arg1 + 0x1d0))
int32_t r8_1 = -1
int32_t rdi_1 = -1
int32_t rcx = 0

if (r10_1 != 0)
    int16_t* r11_1 = *(arg1 + 0x1e8)
    int16_t* rax_2 = r11_1
    
    do
        if (rax_2[3] == 6 && rax_2[4] u> 0)
            int16_t rdx_1 = *rax_2
            
            if (rdx_1 == 3 && rax_2[1] u<= 1 && (rax_2[2] == 0x409 || r8_1 == 0xffffffff))
                r8_1 = rcx
            
            if (rdx_1 == 1 && rax_2[1] == 0 && (rax_2[2] == 0 || rdi_1 == 0xffffffff))
                rdi_1 = rcx
        
        rcx += 1
        rax_2 = &rax_2[0xc]
    while (rcx s< r10_1)
    
    if (r8_1 s>= 0 || rdi_1 s>= 0)
        if (r8_1 != 0xffffffff)
            char var_18_1 = 1
            char* rax_4 = sub_142be7370(*(arg1 + 0x98), *(arg1 + 0x200), &r11_1[sx.q(r8_1) * 0xc], 
                sub_142be8470, arg2)
            r9 = rax_4
            
            if (rax_4 == 0 && rdi_1 != 0xffffffff)
            label_142bdf790:
                char var_18_2 = 1
                r9 = sub_142be7260(*(arg1 + 0x98), *(arg1 + 0x200), 
                    *(arg1 + 0x1e8) + sx.q(rdi_1) * 0x18, sub_142be8470, arg2)
        else if (rdi_1 != 0xffffffff)
            goto label_142bdf790
        
        *(arg1 + 0x3f8) = r9
        return r9

return 0
