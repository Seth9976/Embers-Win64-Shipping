// 函数: sub_142b065b0
// 地址: 0x142b065b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)
int64_t r15 = *(arg1 + 0x10)
int32_t* r11 = arg2
int64_t rbx = *(arg1 + 0x20)
int32_t r8 = 0
int32_t* rsi = *(arg1 + 0x30)
int32_t rdx_1 = *(arg1 + 0x28) - rbx.d
uint32_t arg_18 = 0
int32_t rbp = 0
int64_t* r9 = *(rax + 0x10)
uint32_t r14 = 0
int64_t r10_2 = (*(arg1 + 0x18) - r15) s>> 1
int64_t var_58 = r15
char rcx = *(r9 + 0x12)
char arg_8 = rcx
int32_t var_98 = 0
int32_t arg_20 = rdx_1
int64_t* var_90 = r9

if (*(rax + 0x54) == 0 || rdx_1 s<= 0)
    int64_t r10_3 = sx.q(r10_2.d)
    int64_t rax_1 = 0
    
    if (r10_3 s> 0)
        while (true)
            arg_18 = 0xffff
            
            if (rbp s>= rdx_1)
                *r11 = 0xf
                goto label_142b06a9d
            
            r14 = zx.d(*(r15 + (rax_1 << 1)))
            var_98 = r8 + 1
            int64_t rax_3 = sx.q(rdx_1)
            int64_t var_88_1 = rax_3
            int64_t rbx_1 = sx.q(rbp)
            
            if (r14 == 0x7e)
                int32_t i = 2
                void* const r8_2 = &data_143668418
                
                do
                    i -= 1
                    char rax_4 = *r8_2
                    
                    if (rbx_1 s>= rax_3)
                        void* rdx_2 = *(arg1 + 8)
                        *(sx.q(*(rdx_2 + 0x5b)) + rdx_2 + 0x68) = rax_4
                        void* rax_5 = *(arg1 + 8)
                        *(rax_5 + 0x5b) += 1
                        *r11 = 0xf
                    else
                        *(rbx_1 + *(arg1 + 0x20)) = rax_4
                        
                        if (*(arg1 + 0x30) != 0)
                            *rsi = r8
                            rsi = &rsi[1]
                        
                        rbp += 1
                        rbx_1 += 1
                    
                    rax_3 = var_88_1
                    r8_2 += 1
                while (i s> 0)
                
                goto label_142b0690d
            
            uint32_t rcx_3
            
            if (r14 u> 0x7f)
                int32_t rax_7 = sub_142afc250(*(*r9 + 0x30), r14, &arg_18, *(*(arg1 + 8) + 0x3f))
                uint32_t rcx_6
                
                if (rax_7 == 2)
                    rcx_6 = arg_18
                
                if (rax_7 == 2 && 0x5e5f + rcx_6.w u<= 0x5c5d && rcx_6.b + 0x5f u<= 0x5d)
                    rax_3 = var_88_1
                    rcx_3 = rcx_6 - 0x8080
                    r11 = arg2
                    r9 = var_90
                    goto label_142b0676b
                
                arg_18 = 0xffff
            else
                rcx_3 = r14
            label_142b0676b:
                arg_18 = rcx_3
                
                if (rcx_3 != 0xffff)
                    r14.b = rcx_3 u> 0xff
                    arg_8 = r14.b
                    *(r9 + 0x12) = r14.b
                    
                    if (rcx != r14.b || r9[2].b == 0)
                        int32_t i_1 = 2
                        
                        if (r14.b != 0)
                            void* const r8_5 = &data_143668420
                            
                            do
                                i_1 -= 1
                                char rax_12 = *r8_5
                                
                                if (rbx_1 s>= rax_3)
                                    void* rdx_5 = *(arg1 + 8)
                                    *(sx.q(*(rdx_5 + 0x5b)) + rdx_5 + 0x68) = rax_12
                                    void* rax_13 = *(arg1 + 8)
                                    *(rax_13 + 0x5b) += 1
                                    *r11 = 0xf
                                else
                                    *(rbx_1 + *(arg1 + 0x20)) = rax_12
                                    
                                    if (*(arg1 + 0x30) != 0)
                                        *rsi = r8
                                        rsi = &rsi[1]
                                    
                                    rbp += 1
                                    rbx_1 += 1
                                
                                rax_3 = var_88_1
                                r8_5 += 1
                            while (i_1 s> 0)
                        else
                            void* const r8_4 = &data_14366841c
                            
                            do
                                i_1 -= 1
                                char rax_10 = *r8_4
                                
                                if (rbx_1 s>= rax_3)
                                    void* rdx_4 = *(arg1 + 8)
                                    *(sx.q(*(rdx_4 + 0x5b)) + rdx_4 + 0x68) = rax_10
                                    void* rax_11 = *(arg1 + 8)
                                    *(rax_11 + 0x5b) += 1
                                    *r11 = 0xf
                                else
                                    *(rbx_1 + *(arg1 + 0x20)) = rax_10
                                    
                                    if (*(arg1 + 0x30) != 0)
                                        *rsi = r8
                                        rsi = &rsi[1]
                                    
                                    rbp += 1
                                    rbx_1 += 1
                                
                                rax_3 = var_88_1
                                r8_4 += 1
                            while (i_1 s> 0)
                        
                        var_90[2].b = 1
                    
                    rdx_1 = arg_20
                    
                    if (r14.b == 0)
                        if (rbp s>= rdx_1)
                            goto label_142b068ea
                        
                        int64_t rcx_15 = sx.q(rbp)
                        rbp += 1
                        *(rcx_15 + rbx) = arg_18.b
                        
                        if (rsi != 0)
                            *rsi = r8
                            rsi = &rsi[1]
                    else
                        uint8_t rcx_12 = (arg_18 u>> 8).b
                        char rax_20
                        
                        if (rbp s>= rdx_1)
                            void* rdx_6 = *(arg1 + 8)
                            *(sx.q(*(rdx_6 + 0x5b)) + rdx_6 + 0x68) = rcx_12
                            void* rax_19 = *(arg1 + 8)
                            *(rax_19 + 0x5b) += 1
                        label_142b068ea:
                            rax_20 = arg_18.b
                        label_142b068f2:
                            void* rdx_7 = *(arg1 + 8)
                            *(sx.q(*(rdx_7 + 0x5b)) + rdx_7 + 0x68) = rax_20
                            void* rax_21 = *(arg1 + 8)
                            *(rax_21 + 0x5b) += 1
                            *r11 = 0xf
                        label_142b0690d:
                            rdx_1 = arg_20
                        else
                            uint8_t* rax_15 = sx.q(rbp)
                            rbp += 1
                            rax_15[rbx] = rcx_12
                            
                            if (rsi != 0)
                                *rsi = r8
                                rsi = &rsi[1]
                            
                            rax_20 = arg_18.b
                            
                            if (rbp s>= rdx_1)
                                goto label_142b068f2
                            
                            int64_t rcx_13 = sx.q(rbp)
                            rbp += 1
                            *(rcx_13 + rbx) = rax_20
                            
                            if (rsi != 0)
                                *rsi = r8
                                rsi = &rsi[1]
                    
                    rax_1 += 1
                    r9 = var_90
                    rcx = arg_8
                    
                    if (rax_1 s>= r10_3)
                        goto label_142b06a9d
                    
                    r8 = var_98
                    r15 = var_58
                    continue
            
            if ((r14 & 0xfffff800) != 0xd800)
                r9 = var_90
                rcx = arg_8
                *arg2 = 0xa
                *(*(arg1 + 8) + 0x54) = r14
                goto label_142b06a9d
            
            if (not(test_bit(r14, 0xa)))
                r11 = arg2
                r8 = var_98
                *(*(arg1 + 8) + 0x54) = r14
                break
            
            r9 = var_90
            rcx = arg_8
            *arg2 = 0xc
            *(*(arg1 + 8) + 0x54) = r14
            goto label_142b06a9d
        
        goto label_142b069b0
else
label_142b069b0:
    
    if (r8 s>= r10_2.d)
        r9 = var_90
        rcx = arg_8
        *r11 = 0
        *(*(arg1 + 8) + 0x54) = r14
    else
        uint32_t rdx_8 = zx.d(*(*(arg1 + 0x10) + (sx.q(r8) << 1)))
        
        if ((rdx_8 & 0xfffffc00) != 0xdc00)
            r9 = var_90
            rcx = arg_8
            *r11 = 0xc
            *(*(arg1 + 8) + 0x54) = r14
        else
            void* rax_30 = *(arg1 + 8)
            r9 = var_90
            rcx = arg_8
            var_98 = r8 + 1
            int32_t r14_1 = *(rax_30 + 0x54)
            *(rax_30 + 0x54) = 0
            *r11 = 0xa
            *(*(arg1 + 8) + 0x54) = ((r14_1 - 0xd7f7) << 0xa) + rdx_8

label_142b06a9d:
*(arg1 + 0x20) += sx.q(rbp)
int64_t result = sx.q(var_98) * 2
*(arg1 + 0x10) += result
*(r9 + 0x12) = rcx
return result
