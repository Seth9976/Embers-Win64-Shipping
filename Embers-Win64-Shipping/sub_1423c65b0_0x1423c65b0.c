// 函数: sub_1423c65b0
// 地址: 0x1423c65b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rcx = *(arg1 + 0x20)
void* r15 = arg2
int64_t r8 = data_143de5458
int64_t result = sx.q(*(rcx + 4))

if (result != r8)
    *(rcx + 4) = r8.d
    
    if (*(arg1 + 0xb) != 0)
        uint32_t i_6 = 0
        int32_t i = 0
        void* var_60_1 = nullptr
        int32_t i_7 = 0
        int32_t var_54_1 = 4
        void var_80
        
        if (*(arg1 + 0x18) s> 0)
            int64_t r14_1 = 0
            
            do
                int32_t* rbx_2 = *(arg1 + 0x10) + r14_1
                arg2.b = 1
                char rax_2
                rax_2, arg2 = sub_140d3e170(rbx_2, arg2.b, 0)
                void* rbx_3
                
                if (rax_2 != 0)
                    rbx_3 = *(rbx_2 + 8)
                
                if (rax_2 == 0 || rbx_3 == 0)
                    int32_t rdx_2 = *(arg1 + 0x18)
                    int32_t rcx_8 = rdx_2 - i - 1
                    
                    if (rcx_8 s>= 1)
                        rcx_8 = 1
                    
                    if (rcx_8 != 0)
                        memcpy((sx.q(i) << 4) + *(arg1 + 0x10), 
                            (sx.q(rdx_2 - rcx_8) << 4) + *(arg1 + 0x10), rcx_8 << 4)
                        rdx_2 = *(arg1 + 0x18)
                    
                    *(arg1 + 0x18) = rdx_2 - 1
                    sub_1405a5010(arg1 + 0x10)
                    i -= 1
                    r14_1 -= 0x10
                else
                    char* rax_3 = *(rbx_3 + 0x20)
                    
                    if (rax_3 != 0 && (*rax_3 & 1) != 0)
                        sub_1423c65b0(rbx_3, r15, arg3)
                        void* rcx_3 = *(rbx_3 + 0x20)
                        
                        if (sx.q(*(rcx_3 + 8)) == data_143de5458)
                            void* rbx_4 = *(rcx_3 + 0x10)
                            
                            if (rbx_4 != 0)
                                uint32_t i_8 = zx.d(*(rcx_3 + 1))
                                void* rbx_5 = *(rbx_4 + 0x40)
                                
                                if (i_6 s>= i_8)
                                    i_8 = i_6
                                
                                i_6 = i_8
                                
                                if (rbx_5 != 0)
                                    *(rbx_5 + 0x48) += 1
                                
                                int64_t i_10 = sx.q(i_7)
                                int32_t i_9 = (i_10 + 1).d
                                i_7 = i_9
                                
                                if (i_9 s> var_54_1)
                                    sub_14083a490(&var_80, i_10.d)
                                
                                void* rcx_5 = &var_80
                                
                                if (var_60_1 != 0)
                                    rcx_5 = var_60_1
                                
                                *(rcx_5 + (i_10 << 3)) = rbx_5
                
                i += 1
                r14_1 += 0x10
            while (i s< *(arg1 + 0x18))
        
        uint32_t i_4 = zx.d(*(arg1 + 8))
        uint32_t i_1 = *(arg3 + 8)
        
        if (i_4 s>= i_1)
            i_1 = i_4
        
        if (i_6 s>= i_1)
            i_1 = i_6
        
        if (i_1 != i_4)
            while (i_1 == 1 || i_1 == 3)
                i_1 += 1
        
        *(*(arg1 + 0x20) + 1) = i_1.b
        *(*(arg1 + 0x20) + 2) = i_1.b
        
        if (zx.d(*(arg1 + 9)) s> i_1)
            int32_t i_2 = i_1 + 1
            
            do
                if (i_2 != 1 && i_2 != 3)
                    *(*(arg1 + 0x20) + 2) = i_2.b
                
                i_2 += 1
            while (i_2 s<= zx.d(*(arg1 + 9)))
        
        if (*(arg1 + 0xb) == 1)
            char rdx_13 = *(arg1 + 0xa)
            int64_t r14_2 = arg3[1].q
            int32_t rdi_1 = *(arg3 + 4)
            int32_t rbp_1 = *(arg3 + 8)
            int32_t var_b0_1 = (*arg3).d
            int32_t var_ac_1 = rdi_1
            int32_t var_a8_1 = rbp_1
            int64_t var_a0_1 = r14_2
            int32_t rbx_7
            
            if ((rdx_13 & 0x20) == 0 || *(r15 + 0x9b4) == 0 || *(*(arg1 + 0x20) + 1) != *(arg1 + 8))
                rbx_7 = (zx.d(rdx_13) & 0x10) << 5 | 2
            else if ((rdx_13 & 0x10) == 0)
                int32_t rax_14 = data_143f5a6b8
                bool cond:3_1
                
                if (rax_14 == 0x400)
                    if (data_143cf0848 == 0 || data_143f5a6c4 != 1)
                        cond:3_1 = data_14399e5cc != 0
                        goto label_1423c68ca
                    
                    rbx_7 = data_143f5a6c0 | 0xff
                else if (rax_14 != 0x800)
                    rbx_7 = data_143f5a6bc | rax_14 | 0xff
                else
                    cond:3_1 = data_14399e5c8 != 0
                label_1423c68ca:
                    
                    if (cond:3_1)
                        rbx_7 = data_143f5a6bc | rax_14 | 0xff
                    else
                        rbx_7 = data_143f5a6c0 | 0xff
            else
                int32_t rax_13 = data_143f5a6e8
                
                if (rax_13 != 0x400)
                    if (rax_13 != 0x800 || data_14399e5c8 != 0)
                        rbx_7 = data_143f5a6ec | rax_13 | 0xff
                    else
                        rbx_7 = data_143f5a6f0 | 0xff
                else if (data_143cf0848 == 0)
                    if (data_14399e5cc != 0)
                        rbx_7 = data_143f5a6ec | rax_13 | 0xff
                    else
                        rbx_7 = data_143f5a6f0 | 0xff
                else if (data_143f5a6f4 == 1 || data_14399e5cc == 0)
                    rbx_7 = data_143f5a6f0 | 0xff
                else
                    rbx_7 = data_143f5a6ec | rax_13 | 0xff
            
            void var_98
            int64_t* rax_15
            int32_t zmm6_1
            rax_15, zmm6_1 = sub_1423be8c0(&var_98, &var_80, *(arg3 + 0xc))
            char rdx_15 = *(r15 + 0x9b6)
            char rcx_15 = *(r15 + 0x9b5)
            void* r8_5 = *rax_15
            *(r8_5 + 0x10) = arg1
            *(r8_5 + 0x18) = zmm6_1
            *(r8_5 + 0x1c) = rdi_1
            *(r8_5 + 0x20) = rbp_1
            *(r8_5 + 0x24) = rbx_7
            *(r8_5 + 0x28) = r14_2
            *(r8_5 + 0x30) = rcx_15
            *(r8_5 + 0x31) = rdx_15
            void* rbx_17 = *rax_15
            sub_1423ca470(rbx_17, rax_15[1], rax_15[2].d, 0)
            *(*(arg1 + 0x20) + 0x10) = rbx_17
            void* rax_17 = *(arg1 + 0x20)
            uint64_t rcx_17 = zx.q(*(rax_17 + 1))
            void* rbp_2 = *(rax_17 + 0x10)
            uint64_t r14_3 = zx.q(*(rax_17 + 2))
            int64_t rbx_18 = rcx_17 + 3
            
            if ((*(arg1 + 0xa) & 0x10) == 0)
                rbx_18 = rcx_17 + 0xb
            
            void* rbx_21 = ((r14_3 + (rbx_18 << 3)) << 4) + r15
            int64_t rdi_2 = sx.q(*(rbx_21 + 8))
            int32_t rax_18 = (rdi_2 + 1).d
            bool cond:1_1 = rax_18 s<= *(rbx_21 + 0xc)
            *(rbx_21 + 8) = rax_18
            
            if (not(cond:1_1))
                sub_1405a4d70(rbx_21)
            
            void* rbx_24 = r14_3 * 0x30 + r15
            *(*rbx_21 + (rdi_2 << 3)) = rbp_2
            int64_t rdi_3 = sx.q(*(rbx_24 + 0x28))
            int32_t rax_20 = (rdi_3 + 1).d
            *(rbx_24 + 0x28) = rax_20
            
            if (rax_20 s> *(rbx_24 + 0x2c))
                sub_14083a490(rbx_24, rdi_3.d)
            
            void* rax_21 = *(rbx_24 + 0x20)
            
            if (rax_21 != 0)
                rbx_24 = rax_21
            
            void* rcx_20 = rbx_24 + (rdi_3 << 3)
            
            if (rcx_20 != 0)
                void* rax_22 = *(rbp_2 + 0x40)
                *rcx_20 = rax_22
                
                if (rax_22 != 0)
                    *(rax_22 + 0x48) += 1
        
        void* rcx_22 = var_60_1
        void* rbx_25 = &var_80
        int32_t i_5 = i_7
        
        if (rcx_22 != 0)
            rbx_25 = rcx_22
        
        if (i_5 != 0)
            int32_t i_3
            
            do
                int64_t* rcx_21 = *rbx_25
                
                if (rcx_21 != 0)
                    rcx_21[9].d -= 1
                    
                    if (rcx_21[9].d == 1)
                        sub_140a2f6e0(rcx_21)
                
                rbx_25 += 8
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
            rcx_22 = var_60_1
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
    
    result = zx.q(data_143de5458.d)
    *(*(arg1 + 0x20) + 8) = result.d

__security_check_cookie(rax_1 ^ &var_d8)
return result
