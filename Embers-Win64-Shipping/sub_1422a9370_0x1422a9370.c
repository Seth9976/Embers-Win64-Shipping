// 函数: sub_1422a9370
// 地址: 0x1422a9370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7a8
int64_t result = __security_cookie ^ &var_7a8
int64_t result_1 = result
int64_t* r12 = arg1 + 0x218
int64_t* i = *r12
void* r14 = arg1
void* r8_2 = &i[sx.q(r12[1].d) * 2]
int64_t* var_718 = r12

for (; i != r8_2; i = &i[2])
    if (*i == arg2)
        int64_t* j = *r12
        int64_t r15_1 = (i - j) s>> 4
        int64_t r13_1 = 0
        int32_t rdi_1 = 0
        
        for (; j != r8_2; j = &j[2])
            if (*j != arg2)
                rdi_1 += j[1].d
        
        int32_t rbx_1 = 0
        int64_t var_770 = 0
        int32_t var_768_1 = 0
        int64_t rsi_1 = 0
        int32_t var_764_1 = 0
        int64_t var_2e8
        sub_142289560(&var_2e8)
        
        if (rdi_1 s<= 0)
            *(r14 + 0x228) = 0
        else
            int32_t r9_1 = 0x100
            int32_t r8_3 = 0x100
            int32_t rcx_1 = 0x100
            
            if (rdi_1 s<= 0x100)
                r8_3 = rdi_1
            
            int32_t temp0_1 = divs.dp.d(sx.q(rdi_1 - 1 + r8_3), r8_3)
            
            if (temp0_1 s<= 0x100)
                rcx_1 = temp0_1
            
            int32_t temp0_2 = divs.dp.d(sx.q(temp0_1 - 1 + rcx_1), rcx_1)
            int32_t rcx_2 = *(r14 + 0x22c)
            int32_t var_760_1
            var_760_1.q = r8_3.q
            
            if (temp0_2 s<= 0x100)
                r9_1 = temp0_2
            
            int32_t var_75c_2 = rcx_1 * rcx_2
            int64_t var_708 = (r8_3 * rcx_2).q
            int32_t var_700_1 = r9_1 * rcx_2
            int32_t var_760_2
            var_760_2.q = r14 + 0x10
            sub_142284e00(&var_2e8, &var_708, r14 + 0x10)
            int64_t var_b8
            int64_t* rcx_4 = &var_b8
            void var_240
            void* rdx_4 = &var_240
            int32_t j_1 = 0
            int64_t var_c0
            __builtin_memset(&var_c0, 0, 0x30)
            
            do
                j_1 += 6
                rcx_4[-1] = *(rdx_4 - 0x38)
                rcx_4 = &rcx_4[6]
                int64_t rax_16 = *rdx_4
                rdx_4 += 0x150
                rcx_4[-6] = rax_16
                rcx_4[-5] = *(rdx_4 - 0x118)
                rcx_4[-4] = *(rdx_4 - 0xe0)
                rcx_4[-3] = *(rdx_4 - 0xa8)
                rcx_4[-2] = *(rdx_4 - 0x70)
            while (j_1 u< 6)
            
            int64_t* rdi_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_21 = &rdi_4[9]
            
            if (rax_21 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x50)
                rdi_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_21 = &rdi_4[9]
            
            data_143f02bc8 = rax_21
            int64_t var_2b0
            *rdi_4 = var_2b0
            int64_t var_128
            rdi_4[1] = var_128
            int64_t var_f0
            rdi_4[2] = var_f0
            rdi_4[3] = var_c0
            rdi_4[4] = var_b8
            __builtin_memset(&rdi_4[5], 0, 0x20)
            void*** rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_27 = &rcx_7[6]
            
            if (rax_27 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x38)
                rcx_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_27 = &rcx_7[6]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_27
            int32_t var_778_1 = 0
            *data_143f02ba0 = rcx_7
            data_143f02ba0 = &rcx_7[1]
            rcx_7[1] = 0
            *rcx_7 = &data_142da7798
            int32_t j_2 = 0
            rcx_7[2].d = 9
            rcx_7[3] = rdi_4
            rcx_7[4].d = 2
            *(rcx_7 + 0x24) = 3
            rcx_7[5] = 0
            int32_t j_5 = 0
            int32_t var_2e0
            void var_2d8
            void var_298
            void var_150
            void var_118
            
            if (r15_1.d s> 0)
                int64_t var_730_1 = 0
                
                while (j_2 s< *(r14 + 0x220))
                    uint64_t var_6f8 = var_2e8
                    int32_t var_6f0_1 = var_2e0
                    void** var_6e8
                    sub_142289700(&var_6e8, &var_2d8)
                    int64_t k = 6
                    void var_6a8
                    void* rbx_2 = &var_6a8
                    void* rdi_7 = &var_298
                    
                    do
                        uint32_t count = *(rdi_7 + 8)
                        *(rbx_2 - 8) = &data_143314ec0
                        k -= 1
                        *rbx_2 = 0
                        *(rbx_2 + 8) = count
                        
                        if (count != 0)
                            sub_1405da9e0(rbx_2, count, 0)
                            memcpy(*rbx_2, *rdi_7, count)
                        else
                            *(rbx_2 + 0xc) = 0
                        
                        *(rbx_2 + 0x10) = *(rdi_7 + 0x10)
                        *(rbx_2 + 0x14) = *(rdi_7 + 0x14)
                        void* rax_33 = *(rdi_7 + 0x18)
                        *(rbx_2 + 0x18) = rax_33
                        
                        if (rax_33 != 0)
                            *(rax_33 + 8) += 1
                        
                        void* rax_34 = *(rdi_7 + 0x20)
                        *(rbx_2 + 0x20) = rax_34
                        
                        if (rax_34 != 0)
                            *(rax_34 + 8) += 1
                        
                        char rax_35 = *(rdi_7 + 0x28)
                        rdi_7 += 0x38
                        *(rbx_2 + 0x28) = rax_35
                        rbx_2 += 0x38
                    while (k != 0)
                    
                    void** var_560
                    sub_142289700(&var_560, &var_150)
                    void** var_528
                    sub_142289700(&var_528, &var_118)
                    r12 = r14 + 0x218
                    int64_t rax_36 = *r12
                    sub_142283310(&data_143f02b98, *(rax_36 + r13_1 + 0xc), var_778_1, 
                        *(rax_36 + r13_1 + 8), r14 + 0x10, &var_6f8)
                    int64_t* rcx_17 = *r12
                    int64_t rdi_8 = sx.q(var_768_1)
                    int32_t var_734_1 = var_778_1
                    int64_t rax_37 = *(rcx_17 + r13_1)
                    rbx_1 = (rdi_8 + 1).d
                    int32_t var_738_1 = *(rcx_17 + r13_1 + 8)
                    var_768_1 = rbx_1
                    
                    if (rbx_1 s> var_764_1)
                        sub_1405a4f90(&var_770)
                        rbx_1 = var_768_1
                    
                    rsi_1 = var_770
                    int64_t rcx_20 = var_730_1 + 1
                    var_730_1 = rcx_20
                    *(rsi_1 + rdi_8 * 0x10) = rax_37.o
                    int32_t r14_2 = var_778_1 + *(*r12 + r13_1 + 8)
                    r13_1 += 0x10
                    j_2 = j_5 + 1
                    var_778_1 = r14_2
                    j_5 = j_2
                    
                    if (rcx_20 s>= sx.q(r15_1.d))
                        break
                
                r14 = arg1
            
            int32_t j_3 = (r15_1 + 1).d
            
            if (j_3 s< *(r14 + 0x220))
                int64_t r15_4 = sx.q(j_3) << 4
                
                do
                    uint64_t var_4f0 = var_2e8
                    int32_t var_4e8_1 = var_2e0
                    void** var_4e0
                    sub_142289700(&var_4e0, &var_2d8)
                    int64_t k_1 = 6
                    void var_4a0
                    void* rbx_3 = &var_4a0
                    void* rdi_9 = &var_298
                    
                    do
                        uint32_t count_1 = *(rdi_9 + 8)
                        *(rbx_3 - 8) = &data_143314ec0
                        k_1 -= 1
                        *rbx_3 = 0
                        *(rbx_3 + 8) = count_1
                        
                        if (count_1 != 0)
                            sub_1405da9e0(rbx_3, count_1, 0)
                            memcpy(*rbx_3, *rdi_9, count_1)
                        else
                            *(rbx_3 + 0xc) = 0
                        
                        *(rbx_3 + 0x10) = *(rdi_9 + 0x10)
                        *(rbx_3 + 0x14) = *(rdi_9 + 0x14)
                        void* rax_46 = *(rdi_9 + 0x18)
                        *(rbx_3 + 0x18) = rax_46
                        
                        if (rax_46 != 0)
                            *(rax_46 + 8) += 1
                        
                        void* rax_47 = *(rdi_9 + 0x20)
                        *(rbx_3 + 0x20) = rax_47
                        
                        if (rax_47 != 0)
                            *(rax_47 + 8) += 1
                        
                        char rax_48 = *(rdi_9 + 0x28)
                        rdi_9 += 0x38
                        *(rbx_3 + 0x28) = rax_48
                        rbx_3 += 0x38
                    while (k_1 != 0)
                    
                    void** var_358
                    sub_142289700(&var_358, &var_150)
                    void** var_320
                    sub_142289700(&var_320, &var_118)
                    r12 = var_718
                    int64_t rax_49 = *r12
                    sub_142283310(&data_143f02b98, *(r15_4 + rax_49 + 0xc), var_778_1, 
                        *(r15_4 + rax_49 + 8), var_760_2.q, &var_4f0)
                    int64_t* rcx_27 = *r12
                    int64_t rdi_10 = sx.q(var_768_1)
                    int32_t var_734_2 = var_778_1
                    int64_t rax_50 = *(rcx_27 + r15_4)
                    rbx_1 = (rdi_10 + 1).d
                    int32_t var_738_2 = *(rcx_27 + r15_4 + 8)
                    var_768_1 = rbx_1
                    
                    if (rbx_1 s> var_764_1)
                        sub_1405a4f90(&var_770)
                        rbx_1 = var_768_1
                    
                    rsi_1 = var_770
                    *(rsi_1 + rdi_10 * 0x10) = rax_50.o
                    int64_t rax_54 = *r12
                    sub_1422a2b90(*(r15_4 + rax_54), *(r15_4 + rax_54 + 0xc), var_778_1)
                    j_3 += 1
                    int32_t r14_4 = var_778_1 + *(r15_4 + *r12 + 8)
                    r15_4 += 0x10
                    var_778_1 = r14_4
                    r14 = arg1
                while (j_3 s< *(r14 + 0x220))
            
            int64_t var_68
            int64_t* rcx_30 = &var_68
            void* rdx_20 = &var_240
            int64_t var_70
            __builtin_memset(&var_70, 0, 0x30)
            
            for (int32_t j_4 = 0; j_4 u< 6; )
                j_4 += 6
                rcx_30[-1] = *(rdx_20 - 0x38)
                rcx_30 = &rcx_30[6]
                int64_t rax_60 = *rdx_20
                rdx_20 += 0x150
                rcx_30[-6] = rax_60
                rcx_30[-5] = *(rdx_20 - 0x118)
                rcx_30[-4] = *(rdx_20 - 0xe0)
                rcx_30[-3] = *(rdx_20 - 0xa8)
                rcx_30[-2] = *(rdx_20 - 0x70)
            
            int64_t* rdi_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_65 = &rdi_13[9]
            
            if (rax_65 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x50)
                rdi_13 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_65 = &rdi_13[9]
            
            data_143f02bc8 = rax_65
            *rdi_13 = var_2b0
            rdi_13[1] = var_128
            rdi_13[2] = var_f0
            rdi_13[3] = var_70
            rdi_13[4] = var_68
            __builtin_memset(&rdi_13[5], 0, 0x20)
            void*** rcx_33 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_71 = &rcx_33[6]
            
            if (rax_71 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x38)
                rcx_33 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_71 = &rcx_33[6]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_71
            *data_143f02ba0 = rcx_33
            data_143f02ba0 = &rcx_33[1]
            rcx_33[1] = 0
            *rcx_33 = &data_142da7798
            rcx_33[2].d = 9
            rcx_33[3] = rdi_13
            rcx_33[4].d = 0
            *(rcx_33 + 0x24) = 1
            rcx_33[5] = 0
        
        if (r12 != &var_770)
            int32_t r8_11 = *(r12 + 0xc)
            r12[1].d = rbx_1
            
            if (rbx_1 != 0 || r8_11 != 0)
                sub_1405a4be0(r12, rbx_1, r8_11)
                memcpy(*r12, rsi_1, rbx_1 << 4)
            else
                *(r12 + 0xc) = 0
        
        sub_14228a770(r14 + 0x10, &var_2e8)
        result = sub_14228a190(&var_2e8)
        
        if (rsi_1 != 0)
            result = sub_140a74f90(rsi_1)
        
        break

__security_check_cookie(result_1 ^ &var_7a8)
return result
