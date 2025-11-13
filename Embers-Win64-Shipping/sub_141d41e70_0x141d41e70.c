// 函数: sub_141d41e70
// 地址: 0x141d41e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x60) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    int64_t* rcx = *(rdi_1 + *(arg1 + 0x58))
    
    if ((*(*rcx + 0x10))(rcx) == arg2)
        int64_t* rdi_2 = *(arg1 + 0x58)
        int64_t* rcx_1 = rdi_2[sx.q(i)]
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        rdi_2[sx.q(i)] = 0
        int32_t rcx_2 = *(arg1 + 0x60)
        int32_t rax_6 = rcx_2 - i
        
        if (rax_6 != 1)
            int64_t r9_1 = *(arg1 + 0x58)
            memmove(r9_1 + (sx.q(i) << 3), r9_1 + (sx.q(i + 1) << 3), (rax_6 - 1) << 3)
            rcx_2 = *(arg1 + 0x60)
        
        *(arg1 + 0x60) = rcx_2 - 1
        sub_1405c53d0(arg1 + 0x58)
        break
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg1 + 0x60))
