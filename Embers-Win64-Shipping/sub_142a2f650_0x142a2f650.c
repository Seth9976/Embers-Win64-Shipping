// 函数: sub_142a2f650
// 地址: 0x142a2f650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0

if (sub_142a20ce0(arg1, zx.d(*arg2)) == 0)
    uint64_t rbp
    rbp.b = 0
    
    do
        int32_t rsi_1 = 0
        int32_t rdi_16 = ((zx.d(arg2[(sx.q(rbp.b) s>> 1) + 2]) * (*(arg1 + 0x1c) - 1)) u>> 8) + 1
        
        if (arg1[3].d s< 0)
            sub_142a2e350(arg1)
        
        int64_t r8_5 = arg1[2]
        uint64_t rcx_15 = zx.q(rdi_16) << 0x38
        
        if (r8_5 u>= rcx_15)
            rsi_1 = 1
            rdi_16 = *(arg1 + 0x1c) - rdi_16
            r8_5 -= rcx_15
        
        uint32_t rdx_4 = zx.d(*(zx.q(rdi_16) + &data_143609200))
        arg1[3].d -= rdx_4
        arg1[2] = r8_5 << rdx_4.b
        *(arg1 + 0x1c) = rdi_16 << rdx_4.b
        rbp = zx.q(*(sx.q(sx.d(rbp.b) + rsi_1) + 0x143600f90))
    while (rbp.b s> 0)
    
    rsi = neg.d(sx.d(rbp.b))
else
    void* r14_1 = &arg2[9]
    
    for (int32_t i = 0; i s< 3; )
        int32_t rbp_1 = 0
        int32_t rdi_5 = (((*(arg1 + 0x1c) - 1) * zx.d(*r14_1)) u>> 8) + 1
        
        if (arg1[3].d s< 0)
            sub_142a2e350(arg1)
        
        int64_t r8_1 = arg1[2]
        uint64_t rcx_2 = zx.q(rdi_5) << 0x38
        
        if (r8_1 u>= rcx_2)
            rbp_1 = 1
            rdi_5 = *(arg1 + 0x1c) - rdi_5
            r8_1 -= rcx_2
        
        r14_1 += 1
        uint32_t rdx_1 = zx.d(*(zx.q(rdi_5) + &data_143609200))
        arg1[3].d -= rdx_1
        int32_t rbp_2 = rbp_1 << i.b
        i += 1
        rsi += rbp_2
        arg1[2] = r8_1 << rdx_1.b
        *(arg1 + 0x1c) = rdi_5 << rdx_1.b
    
    int32_t i_1 = 9
    void* r14_2 = &arg2[0x12]
    
    do
        int32_t rbp_3 = 0
        int32_t rdi_11 = (((*(arg1 + 0x1c) - 1) * zx.d(*r14_2)) u>> 8) + 1
        
        if (arg1[3].d s< 0)
            sub_142a2e350(arg1)
        
        int64_t r8_3 = arg1[2]
        uint64_t rcx_8 = zx.q(rdi_11) << 0x38
        
        if (r8_3 u>= rcx_8)
            rbp_3 = 1
            rdi_11 = *(arg1 + 0x1c) - rdi_11
            r8_3 -= rcx_8
        
        r14_2 -= 1
        uint32_t rdx_2 = zx.d(*(zx.q(rdi_11) + &data_143609200))
        arg1[3].d -= rdx_2
        int32_t rbp_4 = rbp_3 << i_1.b
        i_1 -= 1
        rsi += rbp_4
        arg1[2] = r8_3 << rdx_2.b
        *(arg1 + 0x1c) = rdi_11 << rdx_2.b
    while (i_1 s> 3)
    
    int32_t rax_9
    
    if ((rsi & 0xfff0) != 0)
        rax_9 = sub_142a20ce0(arg1, zx.d(arg2[0xc]))
    
    if ((rsi & 0xfff0) == 0 || rax_9 != 0)
        rsi += 8

if (rsi != 0 && sub_142a20ce0(arg1, zx.d(arg2[1])) != 0)
    rsi = neg.d(rsi)

return zx.q(rsi)
