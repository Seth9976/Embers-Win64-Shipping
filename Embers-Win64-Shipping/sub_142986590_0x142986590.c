// 函数: sub_142986590
// 地址: 0x142986590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg3
int64_t r8 = *(arg2 + 8)
int64_t arg_10 = r8

for (; i s<= arg4; i += 1)
    int64_t r9 = *(arg1 + 0xa8)
    int32_t j_1 = 0
    int64_t rcx_1 = *(arg1 + 0xb0) - r9
    int64_t var_28 = r8
    int64_t rax_1
    int64_t rdx
    rdx:rax_1 = muls.dp.q(0x2aaaaaaaaaaaaaab, rcx_1)
    int64_t rdx_1 = rdx s>> 3
    
    if (rdx_1 != neg.q(rdx_1 u>> 0x3f))
        uint64_t j = 0
        int64_t rdx_23
        
        do
            int32_t* r8_3 = j * 0x30 + r9
            int32_t rcx_2 = r8_3[9]
            int32_t rax_5
            
            if (i s< 0)
                int32_t rax_8
                
                if (rcx_2 s< 0)
                    rax_8 = not.d(rcx_2) - i
                else
                    rax_8 = rcx_2 - i - 1
                
                rax_5 = neg.d(divs.dp.d(sx.q(rax_8), rcx_2))
            else
                rax_5 = divs.dp.d(sx.q(i), rcx_2)
            
            if (i == rax_5 * rcx_2)
                int32_t rdx_7 = *(arg1 + 0x44)
                int32_t rcx_3 = r8_3[8]
                int32_t r9_1
                
                if (rdx_7 s< 0)
                    int32_t rax_18
                    
                    if (rcx_3 s< 0)
                        rax_18 = not.d(rdx_7) - rcx_3
                    else
                        rax_18 = rcx_3 - rdx_7 - 1
                    
                    r9_1 = neg.d(divs.dp.d(sx.q(rax_18), rcx_3))
                else
                    r9_1 = divs.dp.d(sx.q(rdx_7), rcx_3)
                
                int32_t rdx_14 = *(arg1 + 0x48)
                int32_t rax_23
                
                if (rdx_14 s< 0)
                    int32_t rax_26
                    
                    if (rcx_3 s< 0)
                        rax_26 = not.d(rdx_14) - rcx_3
                    else
                        rax_26 = rcx_3 - rdx_14 - 1
                    
                    rax_23 = neg.d(divs.dp.d(sx.q(rax_26), rcx_3))
                else
                    rax_23 = divs.dp.d(sx.q(rdx_14), rcx_3)
                
                sub_1429a3c20(&arg_10, &var_28, *r8_3, sx.q(rax_23 - r9_1 + 1))
            
            r9 = *(arg1 + 0xa8)
            j_1 += 1
            j = zx.q(j_1)
            int64_t rax_31
            int64_t rdx_22
            rdx_22:rax_31 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0xb0) - r9)
            rdx_23 = rdx_22 s>> 3
        while (j u< rdx_23 + (rdx_23 u>> 0x3f))
        r8 = arg_10
