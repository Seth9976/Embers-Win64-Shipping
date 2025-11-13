// 函数: sub_142bdd270
// 地址: 0x142bdd270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x40)
int32_t r11 = *(r10 + 4)
int32_t* rsi = *(arg1 + 0x30)
int64_t r15 = sx.q(arg2) << 3
int32_t rcx = *(r15 + r10 + 4)
int64_t result

if (r11 s< arg4)
    *(arg1 + 0x40) -= r15
    result.b = 0
else
    result = zx.q(arg5)
    
    if (rcx s> result.d)
        *(arg1 + 0x40) -= r15
        result.b = 0
    else
        int32_t r8 = arg1[1]
        int32_t rdx_1 = neg.d(r8)
        int32_t rbp_2 = rdx_1 & r11
        
        if (rbp_2 s> result.d)
            rbp_2 = result.d
        
        int32_t rdi_1
        
        if (rcx s>= arg4)
            rdi_1 = (r8 - 1 + rcx) & rdx_1
            arg4 = rdi_1
            
            if ((rcx.w & (r8 - 1).w) == 0)
                if (*(arg1 + 0x6b) != 0)
                    rsi -= 4
                    *(arg1 + 0x6b) = 0
                
                *rsi = *(r15 + r10)
                rsi = &rsi[1]
                rdi_1 += arg1[1]
        else
            rdi_1 = arg4
        
        if (*(arg1 + 0x6a) != 0)
            *(*(arg1 + 0x70) + 0x20) = arg4 s>> (*arg1).b
            *(arg1 + 0x6a) = 0
        
        if (rbp_2 s< rdi_1)
            *(arg1 + 0x40) -= r15
            result.b = 0
        else if (&rsi[sx.q((rbp_2 - rdi_1) s>> (*arg1).b) + 1] u< *(arg1 + 0x28))
            void* r12_1 = r10
            
            do
                *(arg1 + 0x6b) = 0
                int32_t r9_1 = *(r10 + 4)
                
                if (r9_1 s<= rdi_1)
                    if (r9_1 == rdi_1)
                        *(arg1 + 0x6b) = 1
                        *rsi = *r10
                        rsi = &rsi[1]
                        rdi_1 += arg1[1]
                    
                    r10 -= r15
                else
                    int32_t rdx_2 = *(r15 + r10 + 4)
                    void* r14_1 = r15 + r10
                    int32_t r9_2 = r9_1 - rdx_2
                    
                    if (r9_2 s< arg1[4])
                        int32_t rax_5 = (*r10 - *r14_1) * (rdi_1 - rdx_2)
                        r10 -= r15
                        *rsi = divs.dp.d(sx.q(rax_5), r9_2) + *r14_1
                        rsi = &rsi[1]
                        rdi_1 += arg1[1]
                    else
                        arg3(r10)
                        r10 = r14_1
                
                if (r10 u< r12_1)
                    break
            while (rdi_1 s<= rbp_2)
            
            *(arg1 + 0x40) -= r15
            result.b = 0
        else
            arg1[0xe] = 0x62
            result.b = 1

*(arg1 + 0x30) = rsi
return result
