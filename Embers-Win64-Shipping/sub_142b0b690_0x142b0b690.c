// 函数: sub_142b0b690
// 地址: 0x142b0b690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 8)
int16_t* r14 = *(arg1 + 0x10)
int64_t r13 = *(arg1 + 0x18)
int32_t rdx = 0
char* r8 = *(arg1 + 0x20)
uint32_t rbx = *(rbp + 0x50)
int64_t r15 = *(arg1 + 0x28)
int32_t* result = *(arg1 + 0x30)
char r11 = 0x2c
uint8_t r9_1 = (rbx u>> 0x18).b & 1
uint8_t rdi_1 = (rbx u>> 0x10).b
uint8_t arg_18 = r9_1

if (r9_1 == 0)
    goto label_142b0b7b4

while (true)
label_142b0b709:
    int32_t rcx_1 = r15.d - r8.d
    int32_t r10_3 = ((r13 - r14) s>> 1).d
    
    if (r10_3 s> rcx_1)
        r10_3 = rcx_1
    
    while (true)
        int16_t* rsi_2 = r14
        uint8_t rsi_1
        
        if (r10_3 s<= 0)
        label_142b0bbbe:
            
            if (r14 u>= r13)
            label_142b0bbf0:
                rsi_1 = arg_18
            else
                rsi_1 = arg_18
                
                if (r8 u>= r15)
                    *arg2 = 0xf
        else
            int16_t r9_2 = *r14
            r14 = &r14[1]
            
            if (r9_2 - 0x20 u<= 0x5e)
                if (r9_2 == 0x26)
                    goto label_142b0b764
                
                *r8 = r9_2.b
                r8 = &r8[1]
                
                if (result != 0)
                    *result = rdx
                    result = &result[1]
                    rdx += 1
                
                r10_3 -= 1
                continue
            
            if (r9_2 == 0x26)
            label_142b0b764:
                *r8 = 0x26
                r8 = &r8[1]
                
                if (r8 u>= r15)
                    if (result != 0)
                        *result = rdx
                        result = &result[1]
                        rdx += 1
                    
                    *(rbp + 0x68) = 0x2d
                    *(rbp + 0x5b) = 1
                    *arg2 = 0xf
                    goto label_142b0bbbe
                
                *r8 = 0x2d
                r8 = &r8[1]
                
                if (result == 0)
                    break
                
                *result = rdx
                result[1] = rdx
                result = &result[2]
                rdx += 1
                break
            
            *r8 = 0x26
            r14 = rsi_2
            r8 = &r8[1]
            
            if (result != 0)
                *result = rdx
                result = &result[1]
            
            arg_18 = 0
            
            while (true)
                rdi_1 = 0
            label_142b0b7b4:
                int16_t* r10_4 = r14
                
                if (r14 u>= r13)
                    goto label_142b0bbf0
                
                if (r8 u>= r15)
                    *arg2 = 0xf
                    goto label_142b0bbf0
                
                uint16_t r9_3 = *r14
                r14 = &r14[1]
                
                if (r9_3 - 0x20 u<= 0x5e)
                    rsi_1 = 1
                    r14 = r10_4
                    arg_18 = 1
                    
                    if (rdi_1 != 0)
                        char r9_7
                        
                        if (rbx.b u>= 0x3f)
                            r9_7 = 0x2c
                        else
                            r9_7 = (*
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx
                                .q(rbx.b)]
                        
                        *r8 = r9_7
                        r8 = &r8[1]
                        
                        if (result != 0)
                            *result = rdx - 1
                            result = &result[1]
                    
                    if (r8 u>= r15)
                        *(rbp + 0x68) = 0x2d
                        *(rbp + 0x5b) = 1
                        *arg2 = 0xf
                        break
                    
                    *r8 = 0x2d
                    r8 = &r8[1]
                    
                    if (result == 0)
                        goto label_142b0b709
                    
                    *result = rdx - 1
                    result = &result[1]
                    goto label_142b0b709
                
                int32_t r10_5 = sx.d(rdi_1)
                
                if (rdi_1 == 0)
                    uint16_t rcx_25 = r9_3 u>> 0xa
                    char r10_16
                    
                    if (rcx_25.b u>= 0x3f)
                        r10_16 = 0x2c
                    else
                        r10_16 = (
                            *"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(
                            rcx_25.b)]
                    
                    *r8 = r10_16
                    r8 = &r8[1]
                    
                    if (r8 u>= r15)
                        if (result != 0)
                            *result = rdx
                            result = &result[1]
                            rdx += 1
                        
                        uint16_t rcx_29
                        rcx_29.b = (r9_3 u>> 4).b & 0x3f
                        char r10_18
                        
                        if (rcx_29.b u>= 0x3f)
                            r10_18 = 0x2c
                        else
                            r10_18 = (*
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx
                                .q(rcx_29.b)]
                        
                        *(rbp + 0x68) = r10_18
                        *(rbp + 0x5b) = 1
                        *arg2 = 0xf
                    else
                        uint16_t rcx_27
                        rcx_27.b = (r9_3 u>> 4).b & 0x3f
                        char r10_17
                        
                        if (rcx_27.b u>= 0x3f)
                            r10_17 = 0x2c
                        else
                            r10_17 = (*
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx
                                .q(rcx_27.b)]
                        
                        *r8 = r10_17
                        r8 = &r8[1]
                        
                        if (result != 0)
                            *result = rdx
                            r9_3.b &= 0xf
                            result[1] = rdx
                            rdi_1 = 1
                            result = &result[2]
                            rdx += 1
                            r9_3.b <<= 2
                            rbx = zx.d(r9_3.b)
                            goto label_142b0b7b4
                    
                    r9_3.b &= 0xf
                    rdi_1 = 1
                    r9_3.b <<= 2
                    rbx = zx.d(r9_3.b)
                    goto label_142b0b7b4
                
                if (r10_5 == 1)
                    uint16_t rcx_13
                    rcx_13.b = (r9_3 u>> 0xe).b | rbx.b
                    char r10_10
                    
                    if (rcx_13.b u>= 0x3f)
                        r10_10 = 0x2c
                    else
                        r10_10 = (
                            *"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(
                            rcx_13.b)]
                    
                    *r8 = r10_10
                    r8 = &r8[1]
                    
                    if (r8 u>= r15)
                        if (result != 0)
                            *result = rdx
                            result = &result[1]
                            rdx += 1
                        
                        uint16_t rcx_21
                        rcx_21.b = (r9_3 u>> 8).b & 0x3f
                        char r10_14
                        
                        if (rcx_21.b u>= 0x3f)
                            r10_14 = 0x2c
                        else
                            r10_14 = (*
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx
                                .q(rcx_21.b)]
                        
                        *(rbp + 0x68) = r10_14
                        uint8_t rcx_23 = r9_3.b u>> 2 & 0x3f
                        char r10_15
                        
                        if (rcx_23 u>= 0x3f)
                            r10_15 = 0x2c
                        else
                            r10_15 = (*
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx
                                .q(rcx_23)]
                        
                        *(rbp + 0x69) = r10_15
                        *(rbp + 0x5b) = 2
                        *arg2 = 0xf
                    else
                        uint16_t rcx_15
                        rcx_15.b = (r9_3 u>> 8).b & 0x3f
                        char r10_11
                        
                        if (rcx_15.b u>= 0x3f)
                            r10_11 = 0x2c
                        else
                            r10_11 = (*
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx
                                .q(rcx_15.b)]
                        
                        *r8 = r10_11
                        r8 = &r8[1]
                        
                        if (r8 u>= r15)
                            if (result != 0)
                                *result = rdx
                                result[1] = rdx
                                result = &result[2]
                                rdx += 1
                            
                            uint8_t rcx_19 = r9_3.b u>> 2 & 0x3f
                            
                            if (rcx_19 u>= 0x3f)
                                *(rbp + 0x68) = 0x2c
                                *(rbp + 0x5b) = 1
                            else
                                *(rbp + 0x68) = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[
                                    zx.q(rcx_19)]
                                *(rbp + 0x5b) = 1
                            
                            *arg2 = 0xf
                        else
                            uint8_t rcx_17 = r9_3.b u>> 2 & 0x3f
                            char r10_12
                            
                            if (rcx_17 u>= 0x3f)
                                r10_12 = 0x2c
                            else
                                r10_12 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[
                                    zx.q(rcx_17)]
                            
                            *r8 = r10_12
                            r8 = &r8[1]
                            
                            if (result != 0)
                                *result = rdx
                                r9_3.b &= 3
                                result[1] = rdx
                                rdi_1 = 2
                                result[2] = rdx
                                result = &result[3]
                                rdx += 1
                                r9_3.b <<= 4
                                rbx = zx.d(r9_3.b)
                                goto label_142b0b7b4
                    
                    r9_3.b &= 3
                    rdi_1 = 2
                    r9_3.b <<= 4
                    rbx = zx.d(r9_3.b)
                    goto label_142b0b7b4
                
                if (r10_5 != 2)
                    goto label_142b0b7b4
                
                uint16_t rcx_4
                rcx_4.b = (r9_3 u>> 0xc).b | rbx.b
                char r10_7
                
                if (rcx_4.b u>= 0x3f)
                    r10_7 = 0x2c
                else
                    r10_7 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx
                        .q(rcx_4.b)]
                
                *r8 = r10_7
                r8 = &r8[1]
                
                if (r8 u>= r15)
                    if (result != 0)
                        *result = rdx
                        result = &result[1]
                        rdx += 1
                    
                    uint16_t rcx_10
                    rcx_10.b = (r9_3 u>> 6).b & 0x3f
                    char r10_9
                    
                    if (rcx_10.b u>= 0x3f)
                        r10_9 = 0x2c
                    else
                        r10_9 = (
                            *"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(
                            rcx_10.b)]
                    
                    r9_3.b &= 0x3f
                    *(rbp + 0x68) = r10_9
                    char r9_6
                    
                    if (r9_3.b u>= 0x3f)
                        r9_6 = 0x2c
                    else
                        r9_6 = (
                            *"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(
                            r9_3.b)]
                    
                    *(rbp + 0x69) = r9_6
                    *(rbp + 0x5b) = 2
                    *arg2 = 0xf
                else
                    uint16_t rcx_6
                    rcx_6.b = (r9_3 u>> 6).b & 0x3f
                    char r10_8
                    
                    if (rcx_6.b u>= 0x3f)
                        r10_8 = 0x2c
                    else
                        r10_8 = (
                            *"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx.q(
                            rcx_6.b)]
                    
                    *r8 = r10_8
                    r8 = &r8[1]
                    
                    if (r8 u>= r15)
                        if (result != 0)
                            *result = rdx
                            result[1] = rdx
                            result = &result[2]
                            rdx += 1
                        
                        r9_3.b &= 0x3f
                        
                        if (r9_3.b u>= 0x3f)
                            rbx.b = 0
                            *(rbp + 0x68) = 0x2c
                            *(rbp + 0x5b) = 1
                            *arg2 = 0xf
                            continue
                        else
                            rbx.b = 0
                            *(rbp + 0x68) = (*
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx
                                .q(r9_3.b)]
                            *(rbp + 0x5b) = 1
                            *arg2 = 0xf
                            continue
                    else
                        r9_3.b &= 0x3f
                        char r9_4
                        
                        if (r9_3.b u>= 0x3f)
                            r9_4 = 0x2c
                        else
                            r9_4 = (*
                                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[zx
                                .q(r9_3.b)]
                        
                        *r8 = r9_4
                        r8 = &r8[1]
                        
                        if (result != 0)
                            *result = rdx
                            result[1] = rdx
                            result[2] = rdx
                            result = &result[3]
                            rdx += 1
                            rbx.b = 0
                            continue
                
                rbx.b = 0
        
        if (*(arg1 + 2) == 0 || r14 u< r13)
            *(rbp + 0x50) &= 0xf0000000
            *(rbp + 0x50) |= (zx.d(rsi_1) << 8 | sx.d(rdi_1)) << 0x10 | zx.d(rbx.b)
        else if (rsi_1 != 0)
            *(rbp + 0x50) &= 0xf1000000
            *(rbp + 0x50) |= 0x1000000
        else
            if (rdi_1 != 0)
                if (r8 u>= r15)
                    if (rbx.b u< 0x3f)
                        r11 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[
                            zx.q(rbx.b)]
                    
                    *(sx.q(*(rbp + 0x5b)) + rbp + 0x68) = r11
                    *(rbp + 0x5b) += 1
                    *arg2 = 0xf
                else
                    if (rbx.b u< 0x3f)
                        r11 = (*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[
                            zx.q(rbx.b)]
                    
                    *r8 = r11
                    r8 = &r8[1]
                    
                    if (result != 0)
                        *result = rdx - 1
                        result = &result[1]
            
            if (r8 u>= r15)
                *(sx.q(*(rbp + 0x5b)) + rbp + 0x68) = 0x2d
                *(rbp + 0x5b) += 1
                *arg2 = 0xf
                *(rbp + 0x50) &= 0xf1000000
                *(rbp + 0x50) |= 0x1000000
            else
                *r8 = 0x2d
                r8 = &r8[1]
                
                if (result == 0)
                    *(rbp + 0x50) &= 0xf1000000
                    *(rbp + 0x50) |= 0x1000000
                else
                    *result = rdx - 1
                    result = &result[1]
                    *(rbp + 0x50) &= 0xf1000000
                    *(rbp + 0x50) |= 0x1000000
        
        *(arg1 + 0x10) = r14
        *(arg1 + 0x20) = r8
        *(arg1 + 0x30) = result
        return result
