// 函数: sub_141f1bcd0
// 地址: 0x141f1bcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x440) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    void* r15_1 = *(rdi_1 + *(arg1 + 0x438))
    
    if (*(r15_1 + 0x10) != 0)
        int64_t rbp_1 = sx.q(arg2[1].d)
        int32_t rax_1 = (rbp_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rbp_1 << 3)) = *(r15_1 + 0x10)
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg1 + 0x440))
