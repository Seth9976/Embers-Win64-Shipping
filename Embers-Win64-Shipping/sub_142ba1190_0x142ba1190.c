// 函数: sub_142ba1190
// 地址: 0x142ba1190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void* rdi = arg2
int64_t* var_248 = arg1
int64_t r8 = sx.q(*(*arg1 + 0xc))
void* r11 = &data_143683060 + (r8 << 3)
int32_t i = *(&data_143683060 + (r8 << 3))
void* var_238 = r11

if (i != 0x1469)
    int64_t r15
    int64_t var_38_1 = r15
    
    do
        r15.b = 1
        void* rbx_2 = sx.q(i) + &data_1436816e0
        int64_t rax_3 = 0x1c94
        
        if ((*(r11 + 4) & 2) != 0)
            rax_3 = 0x3c
        
        uint64_t r12_1 = 0
        int32_t r13_1 = 0
        void* rdx = arg1 + rax_3
    label_142ba1256:
        int32_t var_240_1 = r13_1
        int32_t var_1e8[0x34]
        int32_t var_118[0x34]
        
        while (true)
            char rax_4 = *rbx_2
            
            if (rax_4 == 0)
                break
            
            if (rax_4 == 0x20)
                do
                    rbx_2 += 1
                while (*rbx_2 == 0x20)
            
            if (*rbx_2 != 0x7c)
                int32_t var_230
                int32_t var_22c
                rbx_2 = sub_142ba67f0(rbx_2, arg1, &var_22c, &var_230)
                arg1 = var_248
                
                if (var_230 u<= 1)
                    int32_t rdx_2 = var_22c
                    
                    if (rdx_2 != 0)
                        int32_t rax_6
                        rax_6, arg3 = sub_142b92f00(rdi, rdx_2, 1, arg3)
                        void* rcx_2 = *(rdi + 0x78)
                        arg3.o = *(rcx_2 + 0x98)
                        arg1 = var_248
                        int128_t var_218_1 = arg3.o
                        
                        if (rax_6 == 0 && (var_218_1.q u>> 0x10).w s> 2)
                            int64_t rbp_1 = sx.q(var_218_1.w)
                            int32_t j_8 = -1
                            int32_t rdx_3 = 0
                            int32_t j_4 = 0
                            int64_t rdi_1 = 0
                            
                            if (rbp_1 s> 0)
                                int64_t r11_1 = var_218_1:8.q
                                
                                do
                                    int64_t rsi_1 = sx.q(*((*(rcx_2 + 0xa8)):8.q + (rdi_1 << 1)))
                                    
                                    if (rsi_1.d s> j_4)
                                        char rcx_3 = (*(var_238 + 4)).b
                                        
                                        if ((rcx_3 & 2) == 0)
                                            int64_t j_9 = sx.q(j_4)
                                            
                                            if ((rcx_3 & 1) == 0)
                                                if (j_9 s<= rsi_1)
                                                    int32_t* rcx_7 = r11_1 + 4 + (j_9 << 3)
                                                    int64_t j_7 = rsi_1 - j_9 + 1
                                                    int64_t j
                                                    
                                                    do
                                                        if (j_8 s< 0 || *rcx_7 s< rdx_3)
                                                            rdx_3 = *rcx_7
                                                            j_8 = j_4
                                                        
                                                        j_4 += 1
                                                        rcx_7 = &rcx_7[2]
                                                        j = j_7
                                                        j_7 -= 1
                                                    while (j != 1)
                                            else if (j_9 s<= rsi_1)
                                                int32_t* rcx_5 = r11_1 + 4 + (j_9 << 3)
                                                int64_t j_6 = rsi_1 - j_9 + 1
                                                int64_t j_1
                                                
                                                do
                                                    if (j_8 s< 0 || *rcx_5 s> rdx_3)
                                                        rdx_3 = *rcx_5
                                                        j_8 = j_4
                                                    
                                                    j_4 += 1
                                                    rcx_5 = &rcx_5[2]
                                                    j_1 = j_6
                                                    j_6 -= 1
                                                while (j_1 != 1)
                                        else
                                            int64_t j_2 = sx.q(j_4)
                                            
                                            if ((rcx_3 & 1) == 0)
                                                for (; j_2 s<= rsi_1; j_2 += 1)
                                                    if (j_8 s< 0 || *(r11_1 + (j_2 << 3)) s< rdx_3)
                                                        rdx_3 = *(r11_1 + (j_2 << 3))
                                                        j_8 = j_4
                                                    
                                                    j_4 += 1
                                            else
                                                for (; j_2 s<= rsi_1; j_2 += 1)
                                                    if (j_8 s< 0 || *(r11_1 + (j_2 << 3)) s> rdx_3)
                                                        rdx_3 = *(r11_1 + (j_2 << 3))
                                                        j_8 = j_4
                                                    
                                                    j_4 += 1
                                    
                                    rdi_1 += 1
                                    j_4 = (rsi_1 + 1).d
                                while (rdi_1 s< rbp_1)
                                
                                r13_1 = var_240_1
                            
                            arg1 = var_248
                            rdi = arg2
                            
                            if (r15.b == 0)
                                uint64_t rax_10 = zx.q(r13_1)
                                r13_1 += 1
                                var_118[rax_10] = rdx_3
                                goto label_142ba1256
                            
                            var_1e8[r12_1] = rdx_3
                            r12_1 = zx.q(r12_1.d + 1)
            else
                r15.b = 0
                rbx_2 += 1
        
        void* r11_3
        
        if (r13_1 != 0 || r12_1.d != 0)
            int32_t j_3 = 1
            
            if (r12_1.d u> 1)
                do
                    uint64_t j_5 = zx.q(j_3)
                    
                    if (j_3 != 0)
                        void* rcx_8 = &var_1e8[zx.q(j_3)]
                        
                        do
                            int32_t r8_2 = *rcx_8
                            j_5 = zx.q(j_5.d - 1)
                            int32_t r9_5 = var_1e8[j_5]
                            
                            if (r8_2 s>= r9_5)
                                break
                            
                            *rcx_8 = r9_5
                            rcx_8 -= 4
                            var_1e8[j_5] = r8_2
                        while (j_5.d != 0)
                    
                    j_3 += 1
                while (j_3 u< r12_1.d)
            
            int32_t r10_1 = 1
            
            if (r13_1 u> 1)
                do
                    uint64_t rdx_4 = zx.q(r10_1)
                    
                    if (r10_1 != 0)
                        void* rcx_9 = &var_118[zx.q(r10_1)]
                        
                        do
                            int32_t r8_3 = *rcx_9
                            rdx_4 = zx.q(rdx_4.d - 1)
                            int32_t r9_6 = var_118[rdx_4]
                            
                            if (r8_3 s>= r9_6)
                                break
                            
                            *rcx_9 = r9_6
                            rcx_9 -= 4
                            var_118[rdx_4] = r8_3
                        while (rdx_4.d != 0)
                    
                    r10_1 += 1
                while (r10_1 u< r13_1)
            
            uint64_t rcx_10 = zx.q(*(rdx + 0xd8))
            void* r8_5 = rdx + 0xdc + rcx_10 * 0x1c
            *(rdx + 0xd8) = (rcx_10 + 1).d
            
            if (r13_1 == 0)
                int32_t rcx_11 = var_1e8[zx.q(r12_1.d) u>> 1]
                *(r8_5 + 0xc) = rcx_11
                *r8_5 = rcx_11
            else if (r12_1.d != 0)
                *r8_5 = var_1e8[zx.q(r12_1.d) u>> 1]
                *(r8_5 + 0xc) = var_118[zx.q(r13_1) u>> 1]
            else
                int32_t rcx_12 = var_118[zx.q(r13_1) u>> 1]
                *(r8_5 + 0xc) = rcx_12
                *r8_5 = rcx_12
            
            int32_t rdx_5 = *r8_5
            r11_3 = var_238
            
            if (*(r8_5 + 0xc) != rdx_5)
                int32_t r9_7 = *(r8_5 + 0xc)
                int16_t rcx_13
                rcx_13.b = r9_7 s< rdx_5
                
                if (rcx_13 != (*(r11_3 + 4) & 1))
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r9_7 + rdx_5)
                    int32_t rax_29 = (temp1_1 - temp0_1) s>> 1
                    *(r8_5 + 0xc) = rax_29
                    *r8_5 = rax_29
            
            arg1 = var_248
            *(r8_5 + 0x18) = 0
            int32_t rax_30 = *(r8_5 + 0x18)
            
            if ((*(r11_3 + 4) & 1) != 0)
                rax_30 = 2
            
            *(r8_5 + 0x18) = rax_30
        else
            r11_3 = var_238
        
        i = *(r11_3 + 8)
        r11 = r11_3 + 8
        var_238 = r11
    while (i != 0x1469)

__security_check_cookie(rax_1 ^ &var_268)
return i
