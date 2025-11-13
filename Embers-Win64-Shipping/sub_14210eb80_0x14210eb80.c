// 函数: sub_14210eb80
// 地址: 0x14210eb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *arg3
int32_t r10 = 0
int32_t r9 = 0
int64_t* r14_2 = (sx.q(arg2) << 6) + arg1
int32_t i_6 = r14_2[1].d
int32_t i = i_6
int64_t r15 = *r14_2

if (i_6 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_3 = (temp1_1 - temp0_1) s>> 1
        i = i_3
        int32_t rax_4 = i_3 + r9
        
        if (*(r15 + (sx.q(rax_4) << 3)) u< rbp)
            r9 = rax_4 + rcx_1
    while (i s> 0)

bool cond:0 = r9 s>= i_6

if (r9 s< i_6)
    int32_t i_1 = i_6 - r9
    int64_t rsi_1 = sx.q(r9)
    int32_t i_2 = 0
    
    if (i_1 s> 0)
        do
            int32_t rcx_6 = i_1 & 0x80000001
            
            if (rcx_6 s< 0)
                rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(i_1)
            int32_t i_4 = (temp3_1 - temp2_1) s>> 1
            i_1 = i_4
            int32_t rax_8 = i_4 + i_2
            
            if (rbp u>= *(r15 + (rsi_1 << 3) + (sx.q(rax_8) << 3)))
                i_2 = rax_8 + rcx_6
        while (i_1 s> 0)
        
        if (i_2 s> 0)
            char r11_2 = *(arg3 + 0xc)
            int64_t rsi_3 = (rsi_1 << 4) + r14_2[2]
            
            do
                int32_t rcx_11 = i_2 & 0x80000001
                
                if (rcx_11 s< 0)
                    rcx_11 = ((rcx_11 - 1) | 0xfffffffe) + 1
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(i_2)
                int32_t i_5 = (temp5_1 - temp4_1) s>> 1
                i_2 = i_5
                int32_t rax_12 = i_5 + r10
                int64_t rcx_15 = sx.q(rax_12) * 2
                bool rax_13 = *(rsi_3 + (rcx_15 << 3) + 8)
                
                if (rax_13 == r11_2)
                    rax_13 = *(rsi_3 + (rcx_15 << 3) + 0xc) s< arg3[1].d
                else
                    rax_13 = rax_13 u< r11_2
                
                if (rax_13 != 0)
                    r10 = rax_12 + rcx_11
            while (i_2 s> 0)
            
            r9 += r10
    
    cond:0 = r9 s>= i_6

if (not(cond:0))
    int64_t rax_14 = sx.q(r9)
    
    if (*(r15 + (rax_14 << 3)) == rbp)
        int64_t rdx_6 = r14_2[2]
        int64_t rax_15 = rax_14 * 2
        
        if (*(rdx_6 + (rax_15 << 3) + 8) == *(arg3 + 0xc)
                && *(rdx_6 + (rax_15 << 3) + 0xc) == arg3[1].d)
            return zx.q(r9)

return 0xffffffff
