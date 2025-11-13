// 函数: sub_141a2ff30
// 地址: 0x141a2ff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_18 = arg3
int32_t r12 = arg_18:4.d
*arg1 = 2
*(arg1 + 4) = 0
arg1[8] = 2
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0xffffffff
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = arg2

while (true)
    int64_t r9_1 = *(arg1 + 0x10)
    int128_t* rdx_3
    
    if (r9_1.d == 0xffffffff)
        rdx_3 = arg2
    else
        rdx_3 =
            ((sx.q(*(arg2[2].q + sx.q(r9_1.d) * 0xc)) + sx.q((r9_1 u>> 0x20).d)) << 5) + arg2[3].q
    
    *arg1 = *rdx_3
    int64_t r15_1 = sx.q(*(rdx_3 + 0x18))
    
    if (r15_1.d == 0xffffffff)
        break
    
    int64_t rax_4 = arg2[2].q
    int64_t rcx_1 = r15_1 * 3
    uint32_t r10_1 = 0
    int32_t i_2 = *(rax_4 + (rcx_1 << 2) + 4)
    int64_t rsi_3 = (sx.q(*(rax_4 + (rcx_1 << 2))) << 5) + arg2[3].q
    uint32_t arg_c
    
    if (i_2 s> 0)
        uint64_t arg_20 = arg3
        int32_t i = i_2
        
        do
            rcx_1 = zx.q(i) & 0x80000001
            
            if (rcx_1.d s< 0)
                rcx_1 = zx.q(((rcx_1.d - 1) | 0xfffffffe) + 1)
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(i)
            int32_t i_1 = (temp2_1 - temp1_1) s>> 1
            i = i_1
            int32_t rax_8 = i_1 + r10_1
            uint32_t rbx_1 = rax_8 + rcx_1.d
            uint64_t rax_11 = *((sx.q(rax_8) << 5) + rsi_3)
            arg_18 = rax_11
            char rdx_5
            
            if (rax_11.b == 2)
                rdx_5 = rax_11.b
            label_141a30083:
                
                if (rdx_5 != arg3.b || (rdx_5 != 2 && (rax_11 u>> 0x20).d != (arg3 u>> 0x20).d))
                    rax_11.b = 1
                else
                    rax_11.b = 0
            else
                int32_t* r9_3
                
                if (arg3.b != 2)
                    uint32_t rcx_6 = (rax_11 u>> 0x20).d
                    uint32_t rdx_7 = (arg3 u>> 0x20).d
                    
                    if (rcx_6 s< rdx_7)
                        r9_3 = &arg_18:4
                        rcx_1 = zx.q(rax_11.b)
                    label_141a3006c:
                        rdx_5 = rax_11.b
                        
                        if (rcx_1.b == 2)
                            goto label_141a30083
                        
                        goto label_141a30077
                    
                    if (rcx_6 s> rdx_7 || rax_11.b != 1)
                        rcx_1 = zx.q(arg3.b)
                        goto label_141a30061
                    
                    r9_3 = &arg_18:4
                label_141a30077:
                    rdx_5 = rax_11.b
                    
                    if (*r9_3 != (rax_11 u>> 0x20).d || (rdx_5 == arg3.b
                            && (rdx_5 == 2 || (rax_11 u>> 0x20).d == (arg3 u>> 0x20).d)))
                        rax_11.b = 0
                    else
                        rax_11.b = 1
                else
                    rcx_1 = zx.q(arg3.b)
                label_141a30061:
                    r9_3 = &arg_20:4
                    
                    if (rcx_1.b == rax_11.b)
                        goto label_141a3006c
                    
                    rax_11.b = 0
            
            if (rax_11.b != 0)
                r10_1 = rbx_1
        while (i s> 0)
        
        if (r10_1 s>= 0 && r10_1 s< i_2)
            rcx_1 = *((sx.q(r10_1) << 5) + rsi_3)
            
            if (rcx_1.b == arg3.b && (rcx_1.b == 2 || (rcx_1 u>> 0x20).d == r12))
                char arg_8
                arg_8.d = r15_1.d
                arg_c = r10_1
                *(arg1 + 0x10) = arg_8.q
                continue
    
    bool cond:0_1 = r10_1 s< 0
    
    if (r10_1 s> 0)
        if (r10_1 - 1 s< i_2)
            int64_t rax_16 = sx.q(r10_1) << 5
            char r11_1 = *(rax_16 + rsi_3 - 0x20)
            
            if (r11_1 == 2)
            label_141a30136:
                char rdx_10 = *(rax_16 + rsi_3 - 0x18)
                
                if (rdx_10 == 2 || arg3.b == 2)
                    rcx_1.b = 1
                else
                    rcx_1.b = 0
                
                if (rcx_1.b != 0)
                label_141a3017e:
                    int32_t arg_14 = r10_1 - 1
                    *(arg1 + 0x10) = r15_1.d.q
                    continue
                else
                    int32_t rax_17 = *(rax_16 + rsi_3 - 0x14)
                    rcx_1.b = rax_17 s> r12
                    rax_17.b = rax_17 s>= r12
                    
                    if (rdx_10 != 1 || arg3.b != rdx_10)
                        rdx_10 = 0
                    
                    char rcx_9 = rcx_1.b
                    
                    if (rdx_10 != 0)
                        rcx_9 = rax_17.b
                    
                    if (rcx_9 != 0)
                        goto label_141a3017e
            else
                rcx_1 = zx.q(*(rax_16 + rsi_3 - 0x18))
                
                if (rcx_1.b == 2)
                    goto label_141a30136
                
                int32_t rdx_9 = *(rax_16 + rsi_3 - 0x1c)
                int32_t temp3_1 = *(rax_16 + rsi_3 - 0x14)
                
                if (rdx_9 s<= temp3_1)
                    if (rdx_9 != temp3_1)
                        goto label_141a30136
                    
                    if (r11_1 != 0 && rcx_1.b != 0)
                        goto label_141a30136
        
        cond:0_1 = r10_1 s< 0
    
    if (cond:0_1 || r10_1 s>= i_2)
        arg_18 = *(arg1 + 8)
    else
        uint64_t rax_22 = *((sx.q(r10_1) << 5) + rsi_3)
        
        if (rax_22.b == 0)
            arg_18:4.d = (rax_22 u>> 0x20).d
            arg_18.b = 1
        else if (rax_22.b != 1)
            arg_18 = rax_22
        else
            arg_18:4.d = (rax_22 u>> 0x20).d
            arg_18.b = 0
    
    int64_t rcx_10
    
    if (r10_1 s<= 0 || r10_1 - 1 s>= i_2)
        rcx_10 = *arg1
    else
        rcx_10 = *((sx.q(r10_1) << 5) + rsi_3 - 0x18)
        
        if (rcx_10.b == 0)
            arg_c = (rcx_10 u>> 0x20).d
            rcx_10 = 1.q
        else if (rcx_10.b == 1)
            arg_c = (rcx_10 u>> 0x20).d
            rcx_10 = 0.q
    
    uint64_t var_50_1 = arg_18
    *arg1 = rcx_10.o
    break

return arg1
