// 函数: sub_140386c90
// 地址: 0x140386c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t* r14 = arg6
int64_t rbp = 0
int32_t r12 = arg3
int32_t var_48 = arg1.d
int32_t arg_8 = 0

if (r14 == 0)
    return 0xffffffff

int32_t rax_1 = opus_packet_get_samples_per_frame(arg1, 0xbb80)
uint32_t r8 = zx.d(*arg1)
int32_t rsi_1 = arg2 - 1
void* rbx_1 = &arg1[1]
int32_t r13 = 0
arg6.b = r8.b
int32_t r10 = rsi_1
int32_t r9 = -1
int32_t rdx_1 = r8 & 3
int32_t r15_2

if (rdx_1 == 0)
    r15_2 = 1
label_140386f07:
    int64_t rdx_10 = sx.q(r15_2)
    
    if (r12 != 0)
        if (rsi_1 s>= 1)
            char rax_23 = *rbx_1
            
            if (rax_23 u< 0xfc)
                r9 = 1
                r14[rdx_10 - 1] = zx.w(rax_23)
            else if (rsi_1 s>= 2)
                r9 = 2
                r14[rdx_10 - 1] = (zx.w(*(rbx_1 + 1)) << 2) + zx.w(rax_23)
            else
                r14[rdx_10 - 1] = 0xffff
        else
            r14[rdx_10 - 1] = 0xffff
        
        int16_t rax_26 = r14[rdx_10 - 1]
        int32_t rsi_2 = rsi_1 - r9
        
        if (rax_26 s>= 0)
            int32_t rcx_11 = sx.d(rax_26)
            
            if (rcx_11 s<= rsi_2)
                rbx_1 += sx.q(r9)
                
                if (r13 == 0)
                    if (rcx_11 + r9 s<= r10)
                        goto label_140386fe5
                else if (rcx_11 * r15_2 s<= rsi_2)
                    int64_t i = 0
                    
                    if (r15_2 - 1 s> 0)
                        do
                            i += 1
                            r14[i - 1] = r14[rdx_10 - 1]
                        while (i s< sx.q(r15_2 - 1))
                    
                    goto label_140386fe5
    else if (r10 s<= 0x4fb)
        r14[rdx_10 - 1] = r10.w
    label_140386fe5:
        
        if (arg7 != 0)
            *arg7 = rbx_1.d - var_48
        
        if (r15_2 s> 0)
            do
                if (arg5 != 0)
                    *(arg5 + (rbp << 3)) = rbx_1
                
                int64_t rax_33 = sx.q(r14[rbp])
                rbp += 1
                rbx_1 += rax_33
            while (rbp s< rdx_10)
        
        if (arg8 != 0)
            *arg8 = rbx_1.d - var_48 + arg_8
        
        if (arg4 != 0)
            *arg4 = r8.b
        
        return zx.q(r15_2)
else if (rdx_1 == 1)
    r15_2 = 2
    r13 = 1
    
    if (r12 != 0)
        goto label_140386f07
    
    if ((1 & rsi_1.b) == 0)
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rsi_1)
        int32_t rax_22 = (temp5_1 - temp4_1) s>> 1
        r10 = rax_22
        *r14 = rax_22.w
        goto label_140386f07
else if (rdx_1 == 2)
    r15_2 = 2
    int32_t rax_14
    
    if (rsi_1 s>= 1)
        char rax_15 = *rbx_1
        
        if (rax_15 u< 0xfc)
            *r14 = zx.w(rax_15)
            rax_14 = 1
        else if (rsi_1 s>= 2)
            rax_14 = 2
            *r14 = (zx.w(*(rbx_1 + 1)) << 2) + zx.w(rax_15)
        else
            *r14 = 0xffff
            rax_14 = -1
    else
        *r14 = 0xffff
        rax_14 = -1
    
    uint16_t rcx_9 = *r14
    rsi_1 -= rax_14
    
    if (rcx_9 s>= 0)
        int32_t rdx_8 = sx.d(rcx_9)
        
        if (rdx_8 s<= rsi_1)
            rbx_1 += sx.q(rax_14)
            r10 = rsi_1 - rdx_8
            goto label_140386f07
else if (rsi_1 s>= 1)
    uint32_t rcx = zx.d(*rbx_1)
    rbx_1 += 1
    r15_2 = rcx & 0x3f
    
    if (r15_2 s> 0 && r15_2 * rax_1 s<= 0x1680)
        rsi_1 -= 1
        
        if ((rcx.b & 0x40) != 0)
            uint32_t i_1
            
            do
                if (rsi_1 s<= 0)
                    return 0xfffffffc
                
                i_1 = zx.d(*rbx_1)
                rbx_1 += 1
                uint32_t i_3 = i_1
                
                if (i_1 == 0xff)
                    i_3 = 0xfe
                
                arg_8 += i_3
                rsi_1 += 0xffffffff - i_3
            while (i_1 == 0xff)
        
        if (rsi_1 s>= 0)
            r13 = not.d(rcx u>> 7) & 1
            
            if (r13 == 0)
                r10 = rsi_1
                int32_t i_2 = 0
                
                if (r15_2 - 1 s> 0)
                    int16_t* r11_1 = r14
                    
                    do
                        int32_t rax_6 = sub_140387a90(rbx_1, rsi_1, &r14[sx.q(i_2)])
                        int16_t rcx_2 = *r11_1
                        rsi_1 -= rax_6
                        
                        if (rcx_2 s< 0)
                            return 0xfffffffc
                        
                        int32_t rdx_5 = sx.d(rcx_2)
                        
                        if (rdx_5 s> rsi_1)
                            return 0xfffffffc
                        
                        i_2 += 1
                        r10 -= rax_6 + rdx_5
                        rbx_1 += sx.q(rax_6)
                        r11_1 = &r11_1[1]
                    while (i_2 s< r15_2 - 1)
                    
                    r8 = zx.d(arg6.b)
                
                if (r10 s< 0)
                    return 0xfffffffc
                
                r12 = arg3
                goto label_140386f07
            
            if (r12 != 0)
                goto label_140386f07
            
            r10 = divs.dp.d(sx.q(rsi_1), r15_2)
            
            if (r15_2 * r10 == rsi_1)
                int64_t rcx_7
                int64_t rdi_2
                
                if (r15_2 - 1 s> 0)
                    rdi_2, rcx_7 = __memfill_u16(r14, r10.w, sx.q(r15_2 - 1))
                goto label_140386f07
return 0xfffffffc
