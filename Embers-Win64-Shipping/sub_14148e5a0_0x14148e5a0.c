// 函数: sub_14148e5a0
// 地址: 0x14148e5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
*(arg1 + 0x3b0)
int32_t rax = sub_14141f720()
void* var_b8
void** result = sub_1407453e0(&var_b8, *(rbx + 8) + 0xee8)
int32_t i_1
int32_t i = i_1
void** result_1

if (i s< result_1[3].d)
    int128_t zmm6 = 0x3f800000
    
    do
        int64_t i_2 = sx.q(i)
        int32_t j = 0
        int64_t i_3 = i_2
        void* rsi_2 = i_2 * 0x70 + *(rbx + 0x2f0)
        void* var_f0_1 = rsi_2
        int64_t arg_20
        
        if (*(rbx + 0xa8) s> 0)
            void* r12_1 = i_2 * 0x78
            int64_t rcx_2 = 0
            arg_20 = 0
            
            do
                void* r14_1 = *(rcx_2 + *(rbx + 0xa0) + 0x18d0)
                int32_t rax_2 = *(rsi_2 + 0x18)
                void* rbx_2 = r14_1 + 0x10 + r12_1
                uint32_t rsi_4 = (rax_2 + 0x1f) u>> 5
                int32_t* r15_1 = rbx_2 + 0x18
                *r15_1 = rax_2
                uint64_t rcx_5 = zx.q((*(rbx_2 + 0x1c) + 0x1f) u>> 5)
                
                if (rsi_4 u<= rcx_5.d)
                    void* rax_7 = *(rbx_2 + 0x10)
                    
                    if (rax_7 != 0)
                        rbx_2 = rax_7
                    
                    if (rcx_5.d u> 8)
                        memset(rbx_2, 0, zx.q(rcx_5.d) << 2)
                    else if (rcx_5.d != 0)
                        __builtin_memset(rbx_2, 0, rcx_5 << 2)
                else
                    zmm6 = sub_1410b36b0(rbx_2, 0, rsi_4, 4)
                    *(rbx_2 + 0x1c) = rsi_4 << 5
                    void* rax_5 = *(rbx_2 + 0x10)
                    
                    if (rax_5 != 0)
                        rbx_2 = rax_5
                    
                    if (rsi_4 u> 8)
                        memset(rbx_2, 0, zx.q(rsi_4) << 2)
                    else if (rsi_4 != 0)
                        __builtin_memset(rbx_2, 0, zx.q(rsi_4) << 2)
                    
                    uint64_t rdx_2 = zx.q(rsi_4 - 1)
                    *(rbx_2 + (rdx_2 << 2)) &= 0xffffffff u>> ((neg.d(*r15_1)).b & 0x1f)
                
                void* rdi_3 = r12_1 + r14_1
                int32_t rbx_3 = 0
                int32_t rdx_3 = *(var_f0_1 + 0x18)
                *(rdi_3 + 0x38) = 0
                
                if (*(rdi_3 + 0x3c) != rdx_3)
                    zmm6 = sub_14083ae30(rdi_3 + 0x30, rdx_3)
                    rbx_3 = *(r12_1 + r14_1 + 0x38)
                
                int64_t rsi_6 = sx.q(*(var_f0_1 + 0x18))
                int32_t rax_8 = rsi_6.d + rbx_3
                *(rdi_3 + 0x38) = rax_8
                
                if (rax_8 s> *(rdi_3 + 0x3c))
                    zmm6 = sub_14083a990(rdi_3 + 0x30, rbx_3)
                
                memset((sx.q(rbx_3) << 4) + *(rdi_3 + 0x30), 0, rsi_6 << 4)
                j += 1
                rbx = arg1
                rcx_2 = arg_20 + 0x5240
                rsi_2 = var_f0_1
                arg_20 = rcx_2
            while (j s< *(rbx + 0xa8))
            
            i_2 = i_3
        
        int32_t j_1 = 0
        
        if (*(rsi_2 + 0x18) s> 0)
            int64_t rdi_4 = 0
            int64_t* rcx_19 = nullptr
            int64_t var_e8_1 = 0
            int64_t* var_d8_1 = nullptr
            
            do
                int32_t k = 0
                int64_t r12_2 = 0
                void* rsi_7 = *(rcx_19 + *(rsi_2 + 0x10))
                *(rsi_7 + 0x50) = j_1
                
                if (*(rbx + 0xa8) s> 0)
                    int64_t rcx_21 = 0
                    arg_20.d = rol.d(1, j_1.b)
                    int64_t var_108_1 = 0
                    
                    do
                        int64_t rax_11 = *(rsi_7 + 0x48)
                        void* rbx_5 = *(rbx + 0xa0) + rcx_21
                        
                        if (rax_11 == 0 || rax_11 == rbx_5)
                        label_14148e895:
                            void* r14_3 = i_2 * 0x78 + *(rbx_5 + 0x18d0)
                            
                            if ((*(r14_3 + 0x40) & 1) != 0)
                                void* rcx_25 = *(rsi_7 + 0x600)
                                int64_t var_fd_1 = 0
                                int32_t var_f5_1 = 0
                                char var_f1_1 = 0
                                char var_fe_1 = 1
                                int32_t rdi_7
                                int128_t zmm0_1
                                
                                if (rcx_25 == 0)
                                    rdi_7 = var_fd_1:5.d | 0x80 | 0xf
                                    var_fd_1:5.d = rdi_7
                                    zmm0_1 = 0.o
                                else
                                    int64_t* rcx_26 = *(rcx_25 + 8)
                                    void var_68
                                    zmm0_1 = *(*(*rcx_26 + 0x70))(rcx_26, &var_68, rbx_5)
                                    int16_t var_100_1
                                    var_100_1.o = zmm0_1
                                    rdi_7 = var_fd_1:5.d
                                
                                *(*(r14_3 + 0x30) + var_e8_1) = zmm0_1
                                int128_t* rax_17
                                rax_17.b = 0
                                
                                if ((*(rbx_5 + 0x497c) & 0x10) == 0)
                                    void* r10_1 = *(rbx_5 + 8)
                                    
                                    if (r10_1 != 0)
                                        void* rax_18 = *(rsi_7 + 0x600)
                                        int32_t rcx_28
                                        
                                        if (rax_18 == 0)
                                            rcx_28 = 0
                                        else
                                            rcx_28 = *(rax_18 + 0x10)
                                        
                                        int64_t var_c8_1 = *(*(*(rsi_7 + 0x5c0) + 0x20) + 0x10)
                                        int32_t rax_21 = *(rsi_7 + 0x534)
                                        uint8_t rax_23 = (*(rsi_7 + 0x570) u>> 8).b & 1
                                        int128_t var_88 = rcx_28.o
                                        uint8_t var_bc_1 = rax_23
                                        int64_t var_78_1 = rax_21.q
                                        rax_17 = sub_141421690(r10_1, arg2, &var_88, rax)
                                
                                if (((rdi_7 u>> 3).b & 1) != 0 && rax_17.b == 0)
                                    void* rax_24 = *(r14_3 + 0x20)
                                    void* rcx_31 = r14_3 + 0x10
                                    
                                    if (rax_24 != 0)
                                        rcx_31 = rax_24
                                    
                                    int32_t j_2 = j_1
                                    
                                    if (j_1 s< 0)
                                        j_2 = j_1 + 0x1f
                                    
                                    int64_t rax_26 = sx.q(j_2 s>> 5)
                                    *(rcx_31 + (rax_26 << 2)) |= arg_20.d
                                
                                rcx_21 = var_108_1
                        else if (sub_142391cc0(rbx_5) == 0)
                            rcx_21 = var_108_1
                        else if (sub_142391c60(*(rsi_7 + 0x48)) == 0 || r12_2 s< 0
                                || k s>= *(rsi_7 + 0x568))
                            rcx_21 = var_108_1
                        else
                            void* rcx_24 = rsi_7 + 0x558
                            void* rax_14 = *(rcx_24 + 8)
                            
                            if (rax_14 != 0)
                                rcx_24 = rax_14
                            
                            rcx_21 = var_108_1
                            
                            if (not(zmm6.d f!= *(rcx_24 + (r12_2 << 2))))
                                goto label_14148e895
                        
                        rbx = arg1
                        rcx_21 += 0x5240
                        i_2 = i_3
                        k += 1
                        r12_2 += 1
                        var_108_1 = rcx_21
                    while (k s< *(rbx + 0xa8))
                    
                    rdi_4 = var_e8_1
                    rcx_19 = var_d8_1
                
                rsi_2 = var_f0_1
                rcx_19 = &rcx_19[1]
                i_2 = i_3
                rdi_4 += 0x10
                j_1 += 1
                var_d8_1 = rcx_19
                var_e8_1 = rdi_4
            while (j_1 s< *(rsi_2 + 0x18))
        
        int32_t var_ac
        int32_t var_a0 = var_a0 & not.d(var_ac)
        void var_b0
        sub_14059bdd0(&var_b0)
        result = result_1
        i = i_1
    while (i s< result[3].d)

return result
