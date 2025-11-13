// 函数: sub_141a61630
// 地址: 0x141a61630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rbx = sx.q(arg2[1].d)
void* rax_2 = nullptr
int64_t rdi = *arg2
int64_t* r13 = arg1
void* var_58 = nullptr
int32_t var_4c = 0x10
int32_t i_1 = rbx.d
void var_98

if (rbx.d s> 0x10)
    sub_1408090b0(&var_98, 0)
    rax_2 = var_58

void* rcx_1 = &var_98

if (rax_2 != 0)
    rcx_1 = rax_2

memcpy(rcx_1, rdi, (rbx << 2).d)
int32_t i = i_1

if (i != 0)
    int64_t r12
    int64_t var_20_1 = r12
    
    do
        int64_t i_2 = sx.q(i)
        int64_t r14_1 = 0
        int32_t i_3 = i_2.d
        int64_t i_5 = i_2
        int64_t var_d0_1 = 0
        
        if (i s> 0)
            int64_t* rsi_1 = &r13[0xa]
            int64_t* var_b8_1 = rsi_1
            
            do
                void* rcx_2 = &var_98
                
                if (var_58 != 0)
                    rcx_2 = var_58
                
                int64_t rbx_1 = sx.q(*(rcx_2 + (r14_1 << 2)))
                int32_t var_d8 = rbx_1.d
                sub_141a61020(r13, &var_d8)
                int32_t r9_1 = rsi_1[1].d
                void* const rcx_6
                
                if (r9_1 == *(rsi_1 + 0x34))
                label_141a6176d:
                    rcx_6 = nullptr
                else
                    void* rcx_4 = rsi_1[8]
                    void* r8_2 = &rsi_1[7]
                    
                    if (rcx_4 != 0)
                        r8_2 = rcx_4
                    
                    int32_t rax_4 = *(r8_2 + (((sx.q(rsi_1[9].d) - 1) & rbx_1) << 2))
                    
                    if (rax_4 == 0xffffffff)
                    label_141a6176d_1:
                        rcx_6 = nullptr
                    else
                        int64_t r8_3 = *rsi_1
                        
                        while (true)
                            int64_t rdx_5 = sx.q(rax_4) * 5
                            rcx_6 = r8_3 + (rdx_5 << 3)
                            
                            if (*(r8_3 + (rdx_5 << 3)) == rbx_1.d)
                                break
                            
                            rax_4 = *(rcx_6 + 0x20)
                            
                            if (rax_4 == 0xffffffff)
                                goto label_141a6176d_2
                        
                        if (rax_4 == 0xffffffff)
                        label_141a6176d_2:
                            rcx_6 = nullptr
                
                void* rdi_1 = rcx_6 + 8
                
                if (rcx_6 == 0)
                    rdi_1 = nullptr
                
                if (rdi_1 != 0)
                    void* const rcx_11
                    
                    if (r9_1 - *(rsi_1 + 0x34) == 0)
                    label_141a617ea:
                        rcx_11 = nullptr
                    else
                        void* rdx_6 = rsi_1[8]
                        void* r8_4 = &rsi_1[7]
                        int64_t r9_3 = sx.q(*rdi_1)
                        
                        if (rdx_6 != 0)
                            r8_4 = rdx_6
                        
                        int32_t rax_5 = *(r8_4 + (((sx.q(rsi_1[9].d) - 1) & r9_3) << 2))
                        
                        if (rax_5 == 0xffffffff)
                        label_141a617ea_1:
                            rcx_11 = nullptr
                        else
                            int64_t r8_5 = *rsi_1
                            
                            while (true)
                                int64_t rdx_7 = sx.q(rax_5) * 5
                                rcx_11 = r8_5 + (rdx_7 << 3)
                                
                                if (*(r8_5 + (rdx_7 << 3)) == r9_3.d)
                                    break
                                
                                rax_5 = *(rcx_11 + 0x20)
                                
                                if (rax_5 == 0xffffffff)
                                    goto label_141a617ea_2
                            
                            if (rax_5 == 0xffffffff)
                            label_141a617ea_2:
                                rcx_11 = nullptr
                    
                    void* r8_6 = rcx_11 + 8
                    
                    if (rcx_11 == 0)
                        r8_6 = nullptr
                    
                    void* var_c8_1 = r8_6
                    
                    if (r8_6 != 0)
                        int64_t rcx_12 = sx.q(*(r8_6 + 0x10))
                        
                        if (rcx_12.d != 0)
                            int32_t r13_1 = 0
                            int32_t rsi_2 = 0
                            int64_t rdi_2 = 0
                            r12.b = **(r8_6 + 8) != rbx_1.d
                            
                            do
                                int64_t r9_4 = sx.q(rsi_2)
                                rdi_2 += 1
                                rsi_2 += 1
                                
                                if (rdi_2 s< rcx_12)
                                    int64_t rcx_13 = *(r8_6 + 8) + (rdi_2 << 2)
                                    
                                    do
                                        int32_t rax_8
                                        rax_8.b = *rcx_13 != rbx_1.d
                                        
                                        if (zx.d(r12.b) != rax_8)
                                            break
                                        
                                        rsi_2 += 1
                                        rdi_2 += 1
                                        rcx_13 += 4
                                    while (rdi_2 s< rcx_12)
                                
                                int32_t r14_3 = rsi_2 - r9_4.d
                                
                                if (r12.b != 0)
                                    if (r13_1 != r9_4.d)
                                        int64_t rcx_14 = *(r8_6 + 8)
                                        memmove(rcx_14 + (sx.q(r13_1) << 2), rcx_14 + (r9_4 << 2), 
                                            r14_3 << 2)
                                        r8_6 = var_c8_1
                                    
                                    r13_1 += r14_3
                                
                                r12.b ^= 1
                            while (rdi_2 s< rcx_12)
                            
                            rsi_1 = var_b8_1
                            r14_1 = var_d0_1
                            i_5 = i_2
                            *(r8_6 + 0x10) = r13_1
                            r13 = arg1
                    
                    int64_t rbx_2 = sx.q(*(rdi_1 + 0x10))
                    
                    if (rbx_2.d != 0)
                        int32_t i_4 = i_1
                        int32_t rdx_10 = i_4 + rbx_2.d
                        
                        if (rdx_10 s> var_4c)
                            sub_1408097f0(&var_98, rdx_10)
                            i_4 = i_1
                        
                        void* rcx_17 = &var_98
                        
                        if (var_58 != 0)
                            rcx_17 = var_58
                        
                        memcpy(rcx_17 + (sx.q(i_4) << 2), *(rdi_1 + 8), (rbx_2 << 2).d)
                        i_1 += rbx_2.d
                    
                    sub_1413a3450(rsi_1, &var_d8)
                
                r14_1 += 1
                var_d0_1 = r14_1
            while (r14_1 s< i_5)
            
            i = i_1
            i_2 = zx.q(i_3)
        
        if (i_2.d != 0)
            if (i != i_2.d)
                void* rcx_20 = &var_98
                
                if (var_58 != 0)
                    rcx_20 = var_58
                
                memmove(rcx_20, rcx_20 + (i_5 << 2), (i - i_2.d) << 2)
                i = i_1
            
            i_1 = i - i_2.d
            sub_141a640c0(&var_98)
            i = i_1
    while (i != 0)

if (var_58 != 0)
    i = sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_f8)
return i
