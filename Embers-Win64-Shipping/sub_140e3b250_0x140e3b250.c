// 函数: sub_140e3b250
// 地址: 0x140e3b250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _SETJMP_FLOAT128* r15 = arg1
int32_t i = 0
int32_t arg_10 = 0
int32_t i_1 = 0

if (*(arg1 + 0x284) s<= 0)
    return 

do
    if (*(r15 + 0x24fc) != 0 && r15[0x250].d == 0)
        sub_140e42430(r15, arg2)
    
    int32_t rcx_28 = *(r15 + 0x27c)
    int16_t* r14_1 = *(r15 + 0x2538)
    int32_t arg_18 = 0
    
    if (rcx_28 s> 0)
        void* __offset(_SETJMP_FLOAT128, 0x2540) rdi_1 = &r15[0x254]
        void* __offset(_SETJMP_FLOAT128, 0x2540) var_58_1 = rdi_1
        int32_t r8_7
        
        do
            int64_t rsi_1 = sx.q(*(rdi_1 - 0x22b4))
            int32_t r9_1 = *(r15 + 0x24f8)
            int16_t* r13_1 = *(r15 + (sx.q(*(r15 + (rsi_1 << 2) + 0x1f0)) << 3) + 0x1a8)
            int64_t rdx_1 = *(r15 + (sx.q(*(r15 + (rsi_1 << 2) + 0x244)) << 3) + 0x2c8)
            uint32_t j = *(rdx_1 + (zx.q(r9_1) u>> 0x18 << 2) + 0x404)
            int32_t rdx_5
            
            if (j s>= 0)
                int32_t rdx_8 = j s>> 8 & 0x1f
                
                if (not(test_bit(j, 0xf)))
                    int32_t rdi_3 = j & 0xf
                    int32_t rcx_6 = rdi_3 + rdx_8
                    
                    if (rcx_6 s> *(r15 + 0x24f4) + 0x10)
                        sub_140e3cc80(r15, rdx_8, arg2)
                        rdx_5 = sub_140e3cc80(r15, rdi_3, arg2)
                    else
                        rdx_5 = sub_140e3cc80(r15, rcx_6, arg2) & ((1 << rdi_3.b) - 1)
                    
                    rdi_1 = var_58_1
                else
                    sub_140e3cc80(r15, rdx_8, arg2)
                    rdx_5 = j s>> 0x10
                
                j = zx.d(j.b)
            else
                int32_t r8_1 = 0x17
                
                do
                    int64_t rcx_2 = 0x241 - sx.q((r9_1 u>> r8_1.b & 1) + j)
                    r8_1 -= 1
                    j = *(rdx_1 + (rcx_2 << 2))
                while (j s< 0)
                
                sub_140e3cc80(r15, 0x1f - r8_1, arg2)
                rdx_5 = sub_140e3cc80(r15, j & 0xf, arg2)
            
            int64_t j_3 = sx.q(j)
            
            if (rdx_5 s< *((j_3 << 2) + 0x142ed66b0))
                rdx_5 += *((j_3 << 2) + 0x142ed66f0)
            
            *(r15 + (rsi_1 << 2) + 0x2524) += rdx_5
            int32_t j_1 = 1
            *r14_1 = *r13_1 * *(r15 + (rsi_1 << 2) + 0x2524)
            int64_t rbp_1 = sx.q(*rdi_1)
            int64_t r12 = *(r15 + (sx.q(*(r15 + (rsi_1 << 2) + 0x254)) << 3) + 0x2c8)
            
            do
                int32_t rdx_13 = *(r15 + 0x24f8)
                uint32_t k = *(r12 + (zx.q(rdx_13) u>> 0x18 << 2) + 0x404)
                int32_t r8_3
                
                if (k s>= 0)
                    int32_t rdx_19 = k s>> 8 & 0x1f
                    
                    if (not(test_bit(k, 0xf)))
                        int32_t rsi_3 = k & 0xf
                        int32_t rcx_18 = rsi_3 + rdx_19
                        
                        if (rcx_18 s> *(r15 + 0x24f4) + 0x10)
                            sub_140e3cc80(r15, rdx_19, arg2)
                            r8_3 = sub_140e3cc80(r15, rsi_3, arg2)
                        else
                            r8_3 = sub_140e3cc80(r15, rcx_18, arg2) & ((1 << rsi_3.b) - 1)
                    else
                        sub_140e3cc80(r15, rdx_19, arg2)
                        r8_3 = k s>> 0x10
                    
                    k = zx.d(k.b)
                else
                    int32_t r8_2 = 0x17
                    
                    do
                        int64_t rcx_14 = 0x241 - sx.q((rdx_13 u>> r8_2.b & 1) + k)
                        r8_2 -= 1
                        k = *(r12 + (rcx_14 << 2))
                    while (k s< 0)
                    
                    sub_140e3cc80(r15, 0x1f - r8_2, arg2)
                    r8_3 = sub_140e3cc80(r15, k & 0xf, arg2)
                
                int32_t k_4 = k s>> 4
                uint64_t rdi_4 = zx.q(k) & 0xf
                
                if (rdi_4.d == 0)
                    if (k_4 != 0xf)
                        break
                    
                    if (j_1 + 0x10 s> 0x40)
                        sub_140e43530(r15, 0xffffff1a)
                        noreturn
                    
                    if (j_1 s< rbp_1.d)
                        int32_t k_3 = rbp_1.d - j_1
                        
                        if (k_3 s> 0x10)
                            k_3 = k_4 + 1
                        label_140e3b5e4:
                            void* rdx_25 = (sx.q(j_1) << 2) + &data_1439b36b0
                            int32_t k_1
                            
                            do
                                int64_t rcx_27 = sx.q(*rdx_25)
                                rdx_25 += 4
                                r14_1[rcx_27] = 0
                                k_1 = k_3
                                k_3 -= 1
                            while (k_1 != 1)
                        else if (k_3 != 0)
                            goto label_140e3b5e4
                    
                    j_1 += 0xf
                else
                    if (k_4 != 0)
                        int32_t j_6 = j_1 + k_4
                        
                        if (j_6 s> 0x3f)
                            sub_140e43530(r15, 0xffffff1a)
                            noreturn
                        
                        if (j_1 s< rbp_1.d)
                            int32_t k_5 = rbp_1.d - j_1
                            
                            if (k_4 s>= k_5)
                                k_4 = k_5
                            
                            if (k_4 != 0)
                                void* rdx_23 = (sx.q(j_1) << 2) + &data_1439b36b0
                                int32_t k_2
                                
                                do
                                    int64_t rax_36 = sx.q(*rdx_23)
                                    rdx_23 += 4
                                    r14_1[rax_36] = 0
                                    k_2 = k_4
                                    k_4 -= 1
                                while (k_2 != 1)
                        
                        j_1 = j_6
                    
                    if (r8_3 s< *((rdi_4 << 2) + 0x142ed66b0))
                        r8_3 += *((rdi_4 << 2) + 0x142ed66f0)
                    
                    int64_t j_5 = sx.q(j_1)
                    r14_1[sx.q(*((j_5 << 2) + &data_1439b36b0))] = r13_1[j_5] * r8_3.w
                
                j_1 += 1
            while (j_1 s< 0x40)
            
            if (j_1 s< rbp_1.d)
                int64_t j_4 = sx.q(j_1)
                
                if (j_4 s< rbp_1)
                    do
                        int64_t rax_41 = sx.q(*((j_4 << 2) + &data_1439b36b0))
                        j_4 += 1
                        r14_1[rax_41] = 0
                    while (j_4 s< rbp_1)
                    
                    r15 = arg1
            
            r14_1 -= -0x80
            arg_10 += 1
            r8_7 = arg_18 + 1
            arg_18 = r8_7
            *var_58_1 = j_1
            rdi_1 = var_58_1 + 4
            rcx_28 = *(r15 + 0x27c)
            var_58_1 = rdi_1
        while (r8_7 s< rcx_28)
        i = i_1
    
    uint32_t rax
    
    if (*(r15 + 0x251c) == 0)
        int16_t* rsi_4 = *(r15 + 0x2538)
        int32_t j_2 = 0
        uint32_t* rbx_2 = sx.q((rcx_28 * i) << 6) + *(r15 + 0x2568)
        
        if (rcx_28 s> 0)
            void* __offset(_SETJMP_FLOAT128, 0x2540) rdi_6 = &r15[0x254]
            
            do
                sub_140e3df00(rsi_4, rbx_2, zx.q(*rdi_6))
                rsi_4 -= -0x80
                rdi_6 += 4
                rbx_2 = &rbx_2[0x10]
                j_2 += 1
            while (j_2 s< *(r15 + 0x27c))
    else
        rax, arg2 = _input_s_l(r15, i)
    r15[0x250].d -= 1
    i += 1
    i_1 = i
while (i s< *(r15 + 0x284))
