// 函数: sub_140d08b50
// 地址: 0x140d08b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_138
int64_t rax_2 = __security_cookie ^ &var_138
int64_t r11_1 = arg4
void* rdx = *(arg1 + 0x78)
void* r9 = arg1
void* rcx = *(arg1 + 0x80)
int64_t r10_2 = *(rdx + 0x40) & 0x8000080000
uint64_t rax = *(rcx + 0x40) & 0x8000080000
uint64_t var_d8_1 = rax

if (r10_2 != 0 || rax != 0)
    int32_t r10_3 = *(r9 + 0xa0)
    int64_t zmm1 = *(r9 + 0x98)
    rax.b = not.b(r10_3.b)
    int128_t zmm0 = *(r9 + 0x88)
    rax.b &= 1
    
    if (arg3 == 0)
        int32_t r14_2 = arg2[1].d
        int32_t rsi_4 = 0
        int32_t i
        
        if (rax.b != 0)
            i = r14_2 - *(arg2 + 0x34)
        else
            i = r14_2 - *(arg2 + 0x24)
        
        if (i != 0)
            r10_3.b = not.b(r10_3.b)
            int32_t r12_2 = 1
            r10_3.b &= 1
            int32_t var_108_2 = r10_3
            int32_t r15_2 = 0
            
            do
                void* rdi_4
                
                if (r10_3.b != 0)
                    if (rsi_4 s>= 0 && rsi_4 s< arg2[5].d)
                        void* rax_25 = arg2[4]
                        void* rcx_14 = &arg2[2]
                        
                        if (rax_25 != 0)
                            rcx_14 = rax_25
                        
                        int32_t rax_26 = rsi_4
                        
                        if (rsi_4 s< 0)
                            rax_26 = rsi_4 + 0x1f
                        
                        if ((*(rcx_14 + (sx.q(rax_26 s>> 5) << 2)) & r12_2) != 0)
                            if (arg2[1].d != *(arg2 + 0x34))
                                rdi_4 = sx.q(r15_2) + *arg2
                            else
                                rdi_4 = nullptr
                            
                        label_140d08f32:
                            
                            if (r10_2 != 0)
                                int64_t* rcx_15 = *(r9 + 0x78)
                                (*(*rcx_15 + 0x100))(rcx_15, rdi_4, 0, r11_1, arg5)
                                r9 = arg1
                                r11_1 = arg4
                            
                            if (var_d8_1 != 0)
                                int64_t* rcx_16 = *(r9 + 0x80)
                                (*(*rcx_16 + 0x100))(rcx_16, sx.q(*(r9 + 0x88)) + rdi_4, 0, r11_1, 
                                    arg5)
                            
                            r9 = arg1
                            i -= 1
                            r10_3 = var_108_2
                            r11_1 = arg4
                else if (rsi_4 s>= 0 && rsi_4 s< arg2[3].d)
                    void* rcx_12 = arg2[2]
                    
                    if ((rcx_12.b & 1) != 0)
                        rcx_12 = (rcx_12 s>> 1) + &arg2[2]
                    
                    int32_t rax_22 = rsi_4
                    
                    if (rsi_4 s< 0)
                        rax_22 = rsi_4 + 0x1f
                    
                    if ((*(rcx_12 + (sx.q(rax_22 s>> 5) << 2)) & r12_2) != 0)
                        if (arg2[1].d != *(arg2 + 0x24))
                            rax = *arg2
                            
                            if ((rax.b & 1) != 0)
                                rax = (rax s>> 1) + arg2
                            
                            rdi_4 = sx.q(r15_2) + rax
                        else
                            rdi_4 = nullptr
                        
                        goto label_140d08f32
                rsi_4 += 1
                r12_2 = rol.d(r12_2, 1)
                r15_2 += zmm1:4.d
            while (i != 0)
    else
        int32_t r14_1 = 0
        void* var_b8 = rdx
        void* var_b0_1 = rcx
        char var_88_1 = r10_3.b
        int128_t var_a0_1 = zmm0
        int32_t r15_1 = arg2[1].d
        int32_t i_1
        
        if (rax.b != 0)
            i_1 = r15_1 - *(arg2 + 0x34)
        else
            i_1 = r15_1 - *(arg2 + 0x24)
        
        if (i_1 != 0)
            r10_3.b = not.b(r10_3.b)
            int32_t r12_1 = 1
            r10_3.b &= 1
            int32_t var_108_1 = r10_3
            int32_t r13_1 = 0
            
            do
                void* rsi_1
                
                if (r10_3.b != 0)
                    if (r14_1 s>= 0 && r14_1 s< arg2[5].d)
                        void* rax_11 = arg2[4]
                        void* rcx_3 = &arg2[2]
                        
                        if (rax_11 != 0)
                            rcx_3 = rax_11
                        
                        int32_t rax_12 = r14_1
                        
                        if (r14_1 s< 0)
                            rax_12 = r14_1 + 0x1f
                        
                        if ((*(rcx_3 + (sx.q(rax_12 s>> 5) << 2)) & r12_1) != 0)
                            if (arg2[1].d != *(arg2 + 0x34))
                                rsi_1 = sx.q(r13_1) + *arg2
                            else
                                rsi_1 = nullptr
                            
                        label_140d08d2f:
                            int32_t var_e8 = r14_1
                            void** var_d0 = &var_b8
                            void* var_c8_1 = rsi_1
                            int32_t* var_c0_1 = &var_e8
                            rax = sub_140ceef40(&var_b8, &var_d0)
                            int32_t r8 = rax.d
                            void* rdi_2
                            
                            if (rax.d s< 0)
                                rdi_2 = nullptr
                            else if ((not.b(var_88_1) & 1) != 0)
                                if (arg3[1].d == *(arg3 + 0x34))
                                    rdi_2 = nullptr
                                else
                                    rdi_2 = sx.q(zmm1:4.d * r8) + *arg3
                            else if (arg3[1].d == *(arg3 + 0x24))
                                rdi_2 = nullptr
                            else
                                void* rcx_7 = *arg3
                                
                                if ((rcx_7.b & 1) != 0)
                                    rcx_7 = (rcx_7 s>> 1) + arg3
                                
                                rdi_2 = sx.q(zmm1:4.d * r8) + rcx_7
                            
                            if (r10_2 != 0)
                                int64_t* rcx_10 = *(arg1 + 0x78)
                                (*(*rcx_10 + 0x100))(rcx_10, rsi_1, rdi_2, arg4, arg5)
                            
                            if (var_d8_1 != 0)
                                int64_t rdx_5
                                void* r8_2
                                
                                if (rdi_2 == 0)
                                    rdx_5 = zx.q(*(arg1 + 0x88))
                                    r8_2 = nullptr
                                else
                                    rdx_5 = sx.q(*(arg1 + 0x88))
                                    r8_2 = rdi_2 + rdx_5
                                
                                int64_t* rcx_11 = *(arg1 + 0x80)
                                (*(*rcx_11 + 0x100))(rcx_11, sx.q(rdx_5.d) + rsi_1, r8_2, arg4, 
                                    arg5)
                            
                            r10_3 = var_108_1
                            i_1 -= 1
                else if (r14_1 s>= 0 && r14_1 s< arg2[3].d)
                    void* rcx_1 = arg2[2]
                    
                    if ((rcx_1.b & 1) != 0)
                        rcx_1 = (rcx_1 s>> 1) + &arg2[2]
                    
                    int32_t rax_6 = r14_1
                    
                    if (r14_1 s< 0)
                        rax_6 = r14_1 + 0x1f
                    
                    if ((*(rcx_1 + (sx.q(rax_6 s>> 5) << 2)) & r12_1) != 0)
                        if (arg2[1].d != *(arg2 + 0x24))
                            void* rax_9 = *arg2
                            
                            if ((rax_9.b & 1) != 0)
                                rax_9 = (rax_9 s>> 1) + arg2
                            
                            rsi_1 = sx.q(r13_1) + rax_9
                        else
                            rsi_1 = nullptr
                        
                        goto label_140d08d2f
                r13_1 += zmm1:4.d
                r14_1 += 1
                r12_1 = rol.d(r12_1, 1)
            while (i_1 != 0)

__security_check_cookie(rax_2 ^ &var_138)
