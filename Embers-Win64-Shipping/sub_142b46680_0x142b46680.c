// 函数: sub_142b46680
// 地址: 0x142b46680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (sub_142a92b70(*(arg1 + 0xc) - arg1[1].d, sub_142a4a1f0(arg2)) s<= 0)
    return 0

int16_t* r15_1 = nullptr
int32_t rax_12

do
    void* rcx_2 = *arg1
    int32_t r8_1 = arg1[1].d + rdi
    int16_t rdx_1 = *(rcx_2 + 8)
    int32_t rax_3
    
    if (rdx_1 s< 0)
        rax_3 = *(rcx_2 + 0xc)
    else
        rax_3 = sx.d(rdx_1) s>> 5
    
    int16_t rdx_2
    
    if (r8_1 u>= rax_3)
        rdx_2 = -1
    else if ((rdx_1.b & 2) == 0)
        rdx_2 = *(*(rcx_2 + 0x18) + (sx.q(r8_1) << 1))
    else
        rdx_2 = *(rcx_2 + 0xa + (sx.q(r8_1) << 1))
    
    int16_t rcx_5 = *(arg2 + 8)
    int32_t rax_7
    
    if (rcx_5 s< 0)
        rax_7 = *(arg2 + 0xc)
    else
        rax_7 = sx.d(rcx_5) s>> 5
    
    int16_t rcx_6
    
    if (rdi u>= rax_7)
        rcx_6 = -1
    else
        void* rax_8 = arg2 + 0xa
        
        if ((rcx_5.b & 2) == 0)
            rax_8 = *(arg2 + 0x18)
        
        rcx_6 = *(r15_1 + rax_8)
    
    uint32_t rbp_1 = zx.d(rcx_6)
    uint32_t rcx_7 = zx.d(rdx_2)
    
    if (rcx_7 != rbp_1)
        if (arg3 == 0)
            break
        
        if (j_sub_142a52cd0(rcx_7, 1) != j_sub_142a52cd0(rbp_1, 1))
            break
    
    rdi += 1
    r15_1 = &r15_1[1]
    rax_12 = sub_142a92b70(*(arg1 + 0xc) - arg1[1].d, sub_142a4a1f0(arg2))
while (rdi s< rax_12)
return zx.q(rdi)
