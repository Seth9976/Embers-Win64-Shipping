// 函数: sub_142afe800
// 地址: 0x142afe800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_10 = arg2
void* r13 = *(arg2 + 8)
char* r9 = *(arg1 + 0x20)
void* rbp = arg1
char* result = *(arg2 + 0x10)
int32_t rsi_1 = *(arg1 + 0x28) - r9.d
char r11 = *(r13 + 0x40)
int64_t r15 = *(arg2 + 0x18)
uint64_t rbx
int32_t r10

if (r11 s<= 0)
    rbx.b = 0
    r11 = 0
    r10 = 0
else
    rbx = zx.q(*(r13 + 0x4c))
    r10 = *(r13 + 0x48)

int32_t r14 = sx.d(rbx.b)
int32_t rdi_2 = sx.d(r11) - result.d + r15.d

if (rdi_2 s< r14)
label_142afe985:
    char rsi_3
    
    if (r10 != 0)
        *(r13 + 0x48) = 0
        rsi_3 = r11
        *(r13 + 0x40) = 0
        goto label_142afea61
    
    while (true)
        if (rdi_2 s> 0)
            char r8_6 = *result
            result = &result[1]
            
            if (r8_6 s< 0)
                if (r8_6 u< 0xe0)
                    if (r8_6 u>= 0xc2)
                        char rcx_24 = *result
                        
                        if (rcx_24 s< 0xc0)
                            *r9 = r8_6
                            result = &result[1]
                            r9[1] = rcx_24
                            r9 = &r9[2]
                            rdi_2 -= 2
                            continue
                else if (r8_6 u< 0xf0)
                    uint32_t r10_1 = zx.d(*result)
                    
                    if (test_bit(sx.d(*((zx.q(r8_6) & 0xf) + " 000000000000")), 
                            zx.d((r10_1 u>> 5).b)))
                        char rcx_23 = result[1]
                        
                        if (rcx_23 s< 0xc0)
                            *r9 = r8_6
                            result = &result[2]
                            r9[1] = r10_1.b
                            r9[2] = rcx_23
                            r9 = &r9[3]
                            rdi_2 -= 3
                            continue
                
                rsi_3 = 0
                r11 = 1
                
                if (r8_6 + 0x3e u> 0x32)
                    rbx.b = 0
                else
                    rbx.b = r8_6 u>= 0xf0
                    rbx.b += (r8_6 u>= 0xe0) + 2
                
                r10 = zx.d(r8_6)
            label_142afea61:
                bool cond:0_1 = r11 != rbx.b
                
                if (r11 s>= rbx.b)
                label_142afeaed:
                    
                    if (cond:0_1)
                        result -= sx.q(sx.d(r11) - sx.d(rsi_3))
                        
                        if (rsi_3 s< r11)
                            void* rdx_9 = r13 + 0x41 + sx.q(rsi_3)
                            uint64_t i_1 = zx.q(r11 - rsi_3)
                            uint64_t i
                            
                            do
                                char rcx_50 = *result
                                result = &result[1]
                                *rdx_9 = rcx_50
                                rdx_9 += 1
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                        
                        *(r13 + 0x40) = r11
                        *(arg_10 + 0x10) = result
                        *(rbp + 0x20) = r9
                        *arg3 = 0xc
                        break
                    
                    r10.b = 0
                    
                    if (rsi_3 s> 0)
                        r10 = zx.d(rsi_3)
                        void* rdx = r13 + 0x41
                        uint64_t r8_8 = zx.q(r10)
                    label_142afeb10:
                        char rcx_36 = *rdx
                        rdx += 1
                        *r9 = rcx_36
                        r9 = &r9[1]
                        uint64_t temp1_1 = r8_8
                        r8_8 -= 1
                        
                        if (temp1_1 != 1)
                            goto label_142afeb10
                    
                    int32_t r8_9 = sx.d(r11)
                    result -= sx.q(r8_9 - sx.d(rsi_3))
                    
                    if (r10.b s< r11)
                        arg2 = zx.q(r11 - r10.b)
                    label_142afeb50:
                        char rcx_39 = *result
                        result = &result[1]
                        *r9 = rcx_39
                        r9 = &r9[1]
                        uint64_t temp2_1 = arg2
                        arg2 -= 1
                        
                        if (temp2_1 != 1)
                            goto label_142afeb50
                    
                    rdi_2 -= r8_9
                    continue
                else
                label_142afea71:
                    
                    if (result u< r15)
                        char r8_7 = *result
                        int32_t rcx_26 = sx.d(rbx.b)
                        
                        if (rcx_26 s<= 2 || r11 s> 1)
                            arg2.b = r8_7 s< 0xc0
                        else if (rcx_26 != 3)
                            arg2.b = 1 << (r10.b & 7)
                            arg2.b &= *((zx.q(r8_7) u>> 4) + 0x14363c6e8)
                        else
                            arg2.b = 1 << r8_7 u>> 5
                            arg2.b &= *((zx.q(r10) & 0xf) + " 000000000000")
                        
                        if (arg2.b != 0)
                            result = &result[1]
                            r11 += 1
                            r10 = (r10 << 6) + zx.d(r8_7)
                            
                            if (r11 s< rbx.b)
                                goto label_142afea71
                        
                        cond:0_1 = r11 != rbx.b
                        goto label_142afeaed
                    
                    result -= sx.q(sx.d(r11) - sx.d(rsi_3))
                    
                    if (rsi_3 s< r11)
                        void* rdx_5 = r13 + 0x41 + sx.q(rsi_3)
                        uint64_t r8_10 = zx.q(r11 - rsi_3)
                    label_142afeba0:
                        char rcx_44 = *result
                        result = &result[1]
                        *rdx_5 = rcx_44
                        rdx_5 += 1
                        uint64_t temp3_1 = r8_10
                        r8_10 -= 1
                        
                        if (temp3_1 != 1)
                            goto label_142afeba0
                    
                    *(r13 + 0x4c) = sx.d(rbx.b)
                    *(r13 + 0x48) = r10
                    *(r13 + 0x40) = r11
            else
                *r9 = r8_6
                r9 = &r9[1]
                rdi_2 -= 1
                continue
        else if (*arg3 s<= 0 && result u< r15)
            if (r9 != *(rbp + 0x28))
                char r10_3 = *result
                
                if (r10_3 s>= 0)
                    rdi_2.b = 1
                else if (r10_3 + 0x3e u> 0x32)
                    rdi_2.b = 0
                else
                    rdi_2.b = r10_3 u>= 0xf0
                    rdi_2.b += (r10_3 u>= 0xe0) + 2
                
                if (zx.q(rdi_2.b) s<= r15 - result)
                    *arg3 = 0xffffff81
                else
                    result = &result[1]
                    uint32_t r8_11 = zx.d(r10_3)
                    *(r13 + 0x41) = r10_3
                    r11 = 1
                    
                    if (result == r15)
                    label_142afed2a:
                        *(r13 + 0x4c) = zx.d(rdi_2.b)
                        *(r13 + 0x48) = r8_11
                        *(r13 + 0x40) = r11
                    else
                        uint32_t rbx_1 = zx.d(rdi_2.b)
                        
                        while (true)
                            char r10_4 = *result
                            void* rdx_11
                            
                            if (rbx_1 u<= 2 || r11 s> 1)
                                rdx_11.b = r10_4 s< 0xc0
                            else if (rbx_1 != 3)
                                rdx_11.b = 1 << (r8_11.b & 7)
                                rdx_11.b &= *((zx.q(r10_4) u>> 4) + 0x14363c6e8)
                            else
                                rdx_11.b = 1 << r10_4 u>> 5
                                rdx_11.b &= *((zx.q(r8_11) & 0xf) + " 000000000000")
                            
                            if (rdx_11.b == 0)
                                *(r13 + 0x40) = r11
                                *arg3 = 0xc
                                break
                            
                            result = &result[1]
                            r8_11 = (r8_11 << 6) + zx.d(r10_4)
                            int64_t rcx_63 = sx.q(r11)
                            r11 += 1
                            *(rcx_63 + r13 + 0x41) = r10_4
                            
                            if (result == r15)
                                goto label_142afed2a
            else
                *arg3 = 0xf
        
        *(arg_10 + 0x10) = result
        *(rbp + 0x20) = r9
        break
else
    if (rsi_1 s>= r14)
        if (rdi_2 s> rsi_1)
            rdi_2 = rsi_1
        
        int32_t rdi_3 = rdi_2 - r14
        
        if (rdi_3 s> 0)
            arg2 = zx.q(rdi_3 - 1)
            char rbp_1 = result[sx.q(arg2.d)]
            
            if (rbp_1 s< 0)
                if (rbp_1 + 0x3e u<= 0x32)
                    rdi_3 = arg2.d
                else if (rbp_1 s< 0xc0)
                    arg2 = zx.q(rdi_3 - 2)
                    
                    if (arg2.d s>= 0)
                        char rsi_2 = result[sx.q(arg2.d)]
                        
                        if (rsi_2 + 0x20 u> 0x14)
                            if (rsi_2 s< 0xc0 && rdi_3 - 3 s>= 0)
                                arg2 = zx.q(result[sx.q(rdi_3 - 3)])
                                
                                if ((arg2 + 0x10).b u<= 4 && test_bit(
                                        sx.d(*((zx.q(rsi_2) u>> 4) + 0x14363c6e8)), 
                                        zx.d(arg2.b) & 7))
                                    rdi_3 -= 3
                        else if (rsi_2 u>= 0xf0)
                            if ((1 << (rsi_2 & 7) & sx.d(*((zx.q(rbp_1) u>> 4) + 0x14363c6e8)))
                                    == 0)
                                arg2 = zx.q(rdi_3)
                            
                            rdi_3 = arg2.d
                        else
                            if ((1 << rbp_1 u>> 5 & sx.d(*((zx.q(rsi_2) & 0xf) + " 000000000000")))
                                    == 0)
                                arg2 = zx.q(rdi_3)
                            
                            rdi_3 = arg2.d
            
            rbp = arg1
        
        rdi_2 = rdi_3 + r14
        goto label_142afe985
    
    *arg3 = 0xffffff81

return result
