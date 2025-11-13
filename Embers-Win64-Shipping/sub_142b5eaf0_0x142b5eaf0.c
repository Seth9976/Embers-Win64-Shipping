// 函数: sub_142b5eaf0
// 地址: 0x142b5eaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rbx_1 = sx.q(arg3)

if (arg3 s< 0)
    return 

int64_t* rcx = *(arg1 + 0x2e0)

if (rcx != 0)
    sub_142a86f90(rcx)

int64_t* rcx_1 = *(arg1 + 0x2e8)

if (rcx_1 != 0)
    sub_142a86f90(rcx_1)

int32_t i_2 = 0
uint64_t rax = 0
int32_t rsi_1 = 0
int32_t arg_10 = 0

if (rbx_1.d s> 0)
    int64_t r14_1 = 0
    
    while (rax.d s<= 0)
        int32_t rbx_2 = rsi_1
        
        if (rsi_1 != 0)
            int64_t rax_1 = *(arg1 + 0x280)
            int64_t rcx_3 = sx.q(rsi_1) * 2
            
            if (*(rax_1 + (rcx_3 << 3) + 0xc) s>= rsi_1)
                rbx_2 = *(rax_1 + (rcx_3 << 3) + 0xc)
        
        int32_t rbx_3 = rbx_2 + 1
        int64_t rcx_5 = sx.q(rbx_3) << 4
        
        for (int32_t i = *(rcx_5 + *(arg1 + 0x280)); i != 5; i = *(rcx_5 + *(arg1 + 0x280)))
            if (i == 1)
                goto label_142b5ec3a
            
            rcx_5 += 0x10
            rbx_3 += 1
        
        rsi_1 = rbx_3
        
        if (rbx_3 s< 0)
            break
        
        sub_142b61e30(arg1, rbx_3, *(arg2 + (r14_1 << 3)), &arg_10)
        
        if (*(arg1 + 0x2e8) == 0)
            *(arg1 + 0x2e8) = sub_142a86f30(sub_142007a80, sub_142a86b90, 0, &arg_10)
        
        sub_142a86e40(*(arg1 + 0x2e8), rbx_3, 1, &arg_10)
        i_2 += 1
        r14_1 += 1
        
        if (r14_1 s>= rbx_1)
            break
        
        rax = zx.q(arg_10)

label_142b5ec3a:

for (int64_t i_1 = sx.q(i_2); i_1 s< rbx_1; i_1 += 1)
    int64_t* rcx_8 = *(arg2 + (i_1 << 3))
    
    if (rcx_8 != 0)
        (**rcx_8)(rcx_8, 1)
