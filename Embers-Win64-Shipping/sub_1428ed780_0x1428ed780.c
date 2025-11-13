// 函数: sub_1428ed780
// 地址: 0x1428ed780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int128_t* rsi = nullptr
int32_t rbp = 1
int32_t* rdi = arg3
int32_t* r13 = arg2

if (arg2 == 0)
label_1428edbd3:
    
    if (arg1 == 0)
        return 0
    
    *(arg1 + 0xb0) = 1
    return 0

if (sub_142898c70(arg2) s<= 0)
    goto label_1428edbd3

if (arg1 != 0)
label_1428ed7d2:
    
    if (*(arg1 + 0x38) == 0)
        goto label_1428edbd3
else
    if (rdi == 0)
        return 0
    
    if (arg1 != 0)
        goto label_1428ed7d2

void* r12
int32_t r15

if (rdi == 0)
    r15 = 0
    void* rax_2 = sub_142898ea0(r13, 0)
    r12 = rax_2
    rdi = *(rax_2 + 0x110)
    
    if (rdi != 0)
        goto label_1428ed81c
else
    r15 = -1
    r12 = nullptr
label_1428ed81c:
    
    if (sub_1428ed060(rdi) != 0)
    label_1428ed85e:
        sub_142898e00(rdi, sub_1428ec9c0)
        int128_t* rax_5 = sub_142898900(rdi)
        rsi = rax_5
        
        if (rax_5 != 0)
            int32_t r15_1 = r15 + 1
            int32_t arg_20 = r15_1
            
            if (r15_1 s>= sub_142898c70(r13))
            label_1428eda5f:
                int32_t* rcx_19 = *(r12 + 0x110)
                
                if (rcx_19 != 0)
                    int32_t rdi_3 = 0
                    
                    if (sub_142898c70(rcx_19) s> 0)
                        while (true)
                            void* rax_22 = sub_142898ea0(*(r12 + 0x110), rdi_3)
                            
                            if (**(rax_22 + 8) == 0 && sub_1428989f0(rsi, rax_22) s>= 0)
                                if (arg1 == 0)
                                    break
                                
                                *(arg1 + 0xb0) = 0x2e
                                *(arg1 + 0xac) = r15_1
                                *(arg1 + 0xb8) = r12
                                int32_t rax_24 = (*(arg1 + 0x38))(0, arg1)
                                rbp = rax_24
                                
                                if (rax_24 == 0)
                                    goto label_1428edbb4
                            
                            rdi_3 += 1
                            
                            if (rdi_3 s>= sub_142898c70(*(r12 + 0x110)))
                                goto label_1428edbb4
                        
                    label_1428edbaa:
                        rbp = 0
            else
                while (true)
                    void* rax_7 = sub_142898ea0(r13, r15_1)
                    r12 = rax_7
                    
                    if (sub_1428ed060(*(rax_7 + 0x110)) == 0)
                        if (arg1 == 0)
                            break
                        
                        *(arg1 + 0xb0) = 0x29
                        *(arg1 + 0xac) = r15_1
                        *(arg1 + 0xb8) = r12
                        int32_t rax_9 = (*(arg1 + 0x38))(0, arg1)
                        rbp = rax_9
                        
                        if (rax_9 == 0)
                            goto label_1428edbb4
                    
                    void* rcx_9 = *(r12 + 0x110)
                    
                    if (rcx_9 != 0)
                        sub_142898e00(rcx_9, sub_1428ec9c0)
                        int32_t r14_1 = 0
                        
                        if (sub_142898c70(rsi) s> 0)
                            while (true)
                                int64_t* rax_15 = sub_142898ea0(rsi, r14_1)
                                int32_t rax_16 = sub_1428989f0(*(r12 + 0x110), rax_15)
                                void* rax_17 = sub_142898ea0(*(r12 + 0x110), rax_16)
                                
                                if (rax_17 == 0)
                                    if (*rax_15[1] != 1)
                                    label_1428edb94:
                                        r14_1 += 1
                                        
                                        if (r14_1 s< sub_142898c70(rsi))
                                            continue
                                    else
                                        if (arg1 == 0)
                                            goto label_1428edbaa_1
                                        
                                        *(arg1 + 0xb0) = 0x2e
                                        *(arg1 + 0xac) = r15_1
                                        *(arg1 + 0xb8) = r12
                                        int32_t rax_19 = (*(arg1 + 0x38))(0, arg1)
                                        rbp = rax_19
                                        
                                        if (rax_19 == 0)
                                            goto label_1428edbb4
                                    
                                    r13 = arg2
                                    break
                                
                                int32_t* r13_1 = *(rax_17 + 8)
                                
                                if (*r13_1 == 1)
                                    int32_t* r15_2 = rax_15[1]
                                    int32_t rax_28
                                    
                                    if (*r15_2 != 0)
                                        int32_t rax_26 = sub_1428ed030(rax_15)
                                        int32_t r8_1
                                        
                                        if (rax_26 == 1)
                                            r8_1 = 4
                                        else if (rax_26 == 2)
                                            r8_1 = 0x10
                                        else
                                            r8_1 = 0
                                        
                                        rax_28 = sub_1428ed4c0(*(r13_1 + 8), *(r15_2 + 8), r8_1)
                                    
                                    if (*r15_2 == 0 || rax_28 != 0)
                                        sub_142898dc0(rsi, r14_1, rax_17)
                                        r15_1 = arg_20
                                    else
                                        if (arg1 == 0)
                                            goto label_1428edbaa_1
                                        
                                        r15_1 = arg_20
                                        *(arg1 + 0xac) = r15_1
                                        *(arg1 + 0xb0) = 0x2e
                                        *(arg1 + 0xb8) = r12
                                        int32_t rax_29 = (*(arg1 + 0x38))(0, arg1)
                                        rbp = rax_29
                                        
                                        if (rax_29 == 0)
                                            goto label_1428edbb4
                                
                                goto label_1428edb94
                    else
                        int32_t rdi_1 = 0
                        
                        if (sub_142898c70(rsi) s> 0)
                            while (**(sub_142898ea0(rsi, rdi_1) + 8) == 0)
                                rdi_1 += 1
                                
                                if (rdi_1 s>= sub_142898c70(rsi))
                                    goto label_1428eda43
                            
                            if (arg1 == 0)
                                break
                            
                            *(arg1 + 0xb0) = 0x2e
                            *(arg1 + 0xac) = r15_1
                            *(arg1 + 0xb8) = r12
                            int32_t rax_13 = (*(arg1 + 0x38))(0, arg1)
                            rbp = rax_13
                            
                            if (rax_13 == 0)
                                goto label_1428edbb4
                    
                label_1428eda43:
                    r15_1 += 1
                    arg_20 = r15_1
                    
                    if (r15_1 s>= sub_142898c70(r13))
                        goto label_1428eda5f
                
            label_1428edbaa_1:
                rbp = 0
        else
            sub_1428a5670((rax_5 + 0x22).d, 0xa6, (rax_5 + 0x41).d, "crypto\x509v3\v3_addr.c", 
                0x4bc)
            
            if (arg1 != 0)
                *(arg1 + 0xb0) = 0x11
            
            rbp = 0
    else if (arg1 == 0)
        rbp = 0
    else
        *(arg1 + 0xb0) = 0x29
        *(arg1 + 0xac) = r15
        *(arg1 + 0xb8) = r12
        int32_t rax_4 = (*(arg1 + 0x38))(0, arg1)
        rbp = rax_4
        
        if (rax_4 != 0)
            goto label_1428ed85e
label_1428edbb4:
sub_142898a10(rsi)
return zx.q(rbp)
