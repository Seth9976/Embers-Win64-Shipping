// 函数: sub_142635bb0
// 地址: 0x142635bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i_4 = nullptr
int32_t* i = *(arg1 + 0x38)
int32_t rdi_2 = *arg1 * arg3 + arg2

if (i == 0 || *(i + 8) == 0)
    int64_t* rax_1 = j_sub_1426075c0(0x8008, 0, i)
    
    if (rax_1 != 0)
        *rax_1 = 0
        *rax_1 = *(arg1 + 0x30)
        int32_t* i_2 = *(arg1 + 0x38)
        *(arg1 + 0x30) = rax_1
        i = &rax_1[0x1001]
        
        do
            *(i - 8) = i_2
            i = &i[-4]
            i_2 = i
        while (i != &rax_1[1])
        
        *(arg1 + 0x38) = i
        *(arg1 + 0x38) = *(i + 8)
    else
        i = nullptr
else
    *(arg1 + 0x38) = *(i + 8)

*(i + 8) = 0
*i = (((zx.d(arg5) << 0xd ^ zx.d(arg4)) & 0x3ffe000) ^ zx.d(arg4)) | zx.d(arg6) << 0x1a
int64_t r14 = sx.q(rdi_2) << 3
int64_t result = *(arg1 + 0x28)
int32_t* i_1 = *(r14 + result)

if (i_1 == 0)
    *(r14 + result) = i
else
    do
        int32_t rcx_8 = *i
        int32_t r10_1 = *i_1
        int32_t r11_3 = rcx_8 u>> 0xd & 0x1fff
        
        if ((r10_1 & 0x1fff) u> r11_3)
            break
        
        int32_t rdi_5 = r10_1 u>> 0xd & 0x1fff
        
        if (rdi_5 u>= (rcx_8 & 0x1fff))
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_3 - rdi_5)
            
            if ((temp1_1 ^ temp0_1) - temp0_1 s<= arg7)
                uint32_t r10_2 = r10_1 u>> 0x1a
                uint32_t rax_19 = rcx_8 u>> 0x1a
                
                if (rax_19 u> r10_2)
                    r10_2 = rax_19
                
                int32_t r10_4 = r10_2 << 0x1a | (rcx_8 & 0x3ffffff)
                *i = r10_4
                rcx_8 = r10_4
            else if (rdi_5 u> r11_3)
                rcx_8 = ((rcx_8 ^ r10_1) & 0x3ffffff) ^ r10_1
                *i = rcx_8
            
            int32_t r10_5 = *i_1
            int32_t rdx_2 = r10_5 & 0x1fff
            
            if (rdx_2 u< (rcx_8 & 0x1fff))
                rcx_8 = (rcx_8 & 0xffffe000) | rdx_2
                *i = rcx_8
                r10_5 = *i_1
            
            if ((r10_5 & 0x3ffe000) u> (rcx_8 & 0x3ffe000))
                *i = ((rcx_8 ^ r10_5) & 0x3ffe000) ^ rcx_8
            
            int32_t* i_3 = *(i_1 + 8)
            *(i_1 + 8) = *(arg1 + 0x38)
            *(arg1 + 0x38) = i_1
            
            if (i_4 == 0)
                *(r14 + *(arg1 + 0x28)) = i_3
            else
                *(i_4 + 8) = i_3
            
            i_1 = i_3
        else
            i_4 = i_1
            i_1 = *(i_1 + 8)
    while (i_1 != 0)
    
    if (i_4 == 0)
        *(i + 8) = *(r14 + *(arg1 + 0x28))
        result = *(arg1 + 0x28)
        *(r14 + result) = i
    else
        result = *(i_4 + 8)
        *(i + 8) = result
        *(i_4 + 8) = i

return result
