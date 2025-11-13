// 函数: sub_141158880
// 地址: 0x141158880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
uint64_t result = 0
int32_t* r13 = arg2 + 0x18b0
int32_t* var_58 = r13
uint64_t result_1 = 0
uint64_t result_2 = 0
int32_t arg_20 = 0
int32_t var_b8 = 0
int32_t var_7c = 0

if (r13[0x68] s> 0)
    void* rcx = &r13[0x14]
    int32_t* rsi_1 = nullptr
    int32_t i_7 = 0
    int32_t i = 0
    int64_t* rdx = nullptr
    void* r15_1 = &r13[0x30]
    int32_t* var_78 = nullptr
    int32_t var_a4_1
    __builtin_memset(&var_a4_1, 0, 0x14)
    int32_t var_6c_1 = 0
    int64_t performanceCount
    performanceCount.d = 0
    int32_t* var_a0_1
    int64_t* var_98_1
    
    do
        int64_t rbx_1 = *(rdx + *(r13 + 0x198))
        sub_141137eb0(rcx, rbx_1)
        sub_141137eb0(r15_1, rbx_1)
        int64_t* rdx_3 = var_98_1
        int32_t j = 0
        void* rcx_3 = &rdx_3[2] + *(r13 + 0x198)
        void* var_90_1 = rcx_3
        
        if (*(rcx_3 + 0x10) s> 0)
            int64_t r15_2 = 0
            
            do
                void* rax_1 = *(rcx_3 + 8)
                
                if (rax_1 != 0)
                    rcx_3 = rax_1
                
                int64_t r14_1 = sx.q(*(rcx_3 + r15_2))
                
                if (r14_1.d s>= 0)
                    void* const rbx_2 = 0x1a8
                    int128_t* rsi_4 = (r14_1 << 5) + *(r13 + 0x28)
                    
                    if (*(*(r13 + 0x198) + rdx_3 + 8) != 0)
                        rbx_2 = 0x1b8
                    
                    void* rbx_3 = rbx_2 + r13
                    int64_t r13_1 = sx.q(*(rbx_3 + 8))
                    int32_t rax_3 = (r13_1 + 1).d
                    *(rbx_3 + 8) = rax_3
                    
                    if (rax_3 s> *(rbx_3 + 0xc))
                        sub_1405a4f90(rbx_3)
                    
                    int64_t i_8 = sx.q(i_7)
                    *(*rbx_3 + r13_1 * 0x10) = *rsi_4
                    i_7 = (i_8 + 1).d
                    
                    if (i_7 s<= var_a4_1)
                        rsi_1 = var_a0_1
                    else
                        sub_14113b710(&var_78, i_8.d)
                        rsi_1 = var_78
                        var_a4_1 = var_6c_1
                        var_a0_1 = rsi_1
                    
                    r13 = var_58
                    rdx_3 = var_98_1
                    rsi_1[i_8] = r14_1.d
                
                rcx_3 = var_90_1
                j += 1
                r15_2 += 4
            while (j s< *(rcx_3 + 0x10))
            
            i = performanceCount.d
            r15_1 = &r13[0x30]
        
        i += 1
        rcx = &r13[0x14]
        rdx = &rdx_3[5]
        performanceCount.d = i
        var_98_1 = rdx
    while (i s< r13[0x68])
    
    result = zx.q(r13[0x69])
    void* r14_2 = *(r13 + 0x198)
    int32_t i_5 = r13[0x68]
    
    if (result.d s< 0)
        if (i_5 != 0)
            void* r14_4 = r14_2 + 0x18
            int32_t i_1
            
            do
                int64_t rcx_9 = *r14_4
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
                
                r14_4 += 0x28
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            result = zx.q(r13[0x69])
        
        r13[0x68] = 0
        
        if (result.d != 0)
            result = sub_1405c5660(&r13[0x66], 0)
    else
        if (i_5 != 0)
            int64_t* r14_3 = r14_2 + 0x18
            int32_t i_2
            
            do
                int64_t rcx_8 = *r14_3
                
                if (rcx_8 != 0)
                    result = sub_140a74f90(rcx_8)
                
                r14_3 = &r14_3[5]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        r13[0x68] = 0
    
    if (i_7 s> 0)
        sub_140625cf0(rsi_1, i_7)
        int64_t r15_4 = sx.q(r13[8])
        int32_t rbx_5 = *r13 - i_7
        int32_t rax_7 = rsi_1[sx.q(i_7 - 1)]
        var_98_1.d = rax_7
        void* const var_c8
        void* const var_c0
        uint64_t result_3
        
        if (rax_7 s>= rbx_5)
            QueryPerformanceCounter(&performanceCount)
            void* const var_90_2 = nullptr
            uint64_t rax_19 = zx.q(r13[8] - 1) & 1
            var_c8 = nullptr
            uint64_t rbx_6 = zx.q(rax_19.d)
            r13[8] = rbx_6.d
            var_c0 = nullptr
            int32_t* rsi_5 = *(r13 + (rax_19 << 3) + 8)
            
            if (rsi_5 == 0)
            label_141158c73:
                int32_t* rax_21 = j_sub_140a82f30(0x48)
                int32_t* rdx_15 = rax_21
                
                if (rax_21 == 0)
                    rdx_15 = nullptr
                else
                    __builtin_memset(rax_21, 0, 0x24)
                    *(rax_21 + 0x20) = 0
                    *(rax_21 + 0x40) = 0
                    __builtin_memset(&rax_21[0xa], 0, 0x1c)
                
                *(r13 + (rbx_6 << 3) + 8) = rdx_15
                *rdx_15 = **(r13 + (r15_4 << 3) + 8)
                sub_141131c20(*(r13 + (rbx_6 << 3) + 8))
            else
                if (*rsi_5 s< **(r13 + (r15_4 << 3) + 8))
                    sub_1408081b0(&rsi_5[2])
                    sub_1408081b0(&rsi_5[0xa])
                    void* rcx_26 = *(r13 + (rbx_6 << 3) + 8)
                    
                    if (rcx_26 != 0)
                        sub_14111ce20(rcx_26, 1)
                    
                    *(r13 + (rbx_6 << 3) + 8) = 0
                    goto label_141158c73
                
                if (rsi_5 == 0)
                    goto label_141158c73
            
            if (&var_c8 != &r13[0xa])
                int64_t rsi_6 = sx.q(r13[0xc])
                int64_t r14_6 = *(r13 + 0x28)
                var_c0.d = rsi_6.d
                
                if (rsi_6.d != 0)
                    sub_14083a1f0(&var_c8, rsi_6.d, 0)
                    void* const rax_23 = var_c8
                    var_90_2 = rax_23
                    memcpy(rax_23, r14_6, (rsi_6 << 5).d)
            
            int32_t rax_24 = r13[0xd]
            r13[0xc] = 0
            
            if (rax_24 s< 0 && rax_24 != 0)
                sub_1405a51b0(&r13[0xa], 0)
            
            int32_t rax_25 = 0
            int32_t rcx_33 = *r13 - i_7
            performanceCount.d = 0
            int32_t var_68_1 = rcx_33
            int32_t i_3 = 0
            int32_t rsi_7 = 0
            
            if (rcx_33 s> 0)
                int64_t r15_6 = 0
                int64_t r14_7 = 0
                var_c0 = nullptr
                int32_t* r12_1 = var_a0_1
                
                do
                    if (rsi_7 s< i_7)
                        while (r12_1[r14_7] == i_3)
                            rsi_7 += 1
                            r14_7 += 1
                            i_3 += 1
                            r15_6 += 1
                            
                            if (rsi_7 s>= i_7)
                                break
                    
                    var_c8.d = rax_25
                    int32_t rax_26 = arg_20
                    var_c8:4.d = i_3
                    var_a0_1.d = rax_26
                    arg_20 = rax_26 + 1
                    
                    if (rax_26 + 1 s> var_b8)
                        sub_1405a4f90(&result_2)
                        var_b8 = var_7c
                        arg_20 = rax_26 + 1
                        result_1 = result_2
                        rax_26 = var_a0_1.d
                    
                    int32_t r8_8 = performanceCount.d
                    void* rdx_21 = (r15_6 << 5) + var_90_2
                    *(result_1 + sx.q(rax_26) * 0x10) = var_c8.o
                    void* rcx_37 = *(rdx_21 + 0x10) + 0x88
                    void* rax_32 = *(rcx_37 + 8)
                    
                    if (rax_32 != 0)
                        rcx_37 = rax_32
                    
                    *(rcx_37 + (sx.q(*(rdx_21 + 0x18)) << 2)) = r8_8
                    int32_t rcx_38 = r13[0xc]
                    var_a0_1.d = rcx_38
                    r13[0xc] = rcx_38 + 1
                    
                    if (rcx_38 + 1 s> r13[0xd])
                        sub_1405c4e40(&r13[0xa])
                        rcx_38 = var_a0_1.d
                    
                    int64_t rax_35 = *(r13 + 0x28)
                    i_3 += 1
                    r15_6 += 1
                    int64_t rcx_41 = sx.q(rcx_38) << 5
                    *(rcx_41 + rax_35) = *rdx_21
                    *(rcx_41 + rax_35 + 0x10) = *(rdx_21 + 0x10)
                    rcx_33 = var_68_1
                    rax_25 = performanceCount.d + 1
                    performanceCount.d = rax_25
                while (rax_25 s< rcx_33)
                
                r13 = var_58
            
            *r13 = rcx_33
            
            if (data_143e56dd8 != 0)
                QueryPerformanceCounter(&performanceCount)
            
            if (var_90_2 != 0)
                sub_140a74f90(var_90_2)
            
            result_3 = result_1
        else if (i_7 s<= 0)
            result_3 = result_1
        else
            var_c0 = nullptr
            uint64_t i_6 = zx.q(i_7)
            uint64_t i_4
            
            do
                int64_t r15_5 = sx.q(*r13)
                int64_t rdi_1 = sx.q(arg_20)
                int32_t rax_8 = (r15_5 - 1).d
                int32_t r9_1 = (rdi_1 + 1).d
                *r13 = rax_8
                int64_t r14_5 = sx.q(*rsi_1)
                var_c8.d = r14_5.d
                var_c8:4.d = rax_8
                arg_20 = r9_1
                
                if (r9_1 s> var_b8)
                    sub_1405a4f90(&result_2)
                    var_b8 = var_7c
                    arg_20 = r9_1
                    result_1 = result_2
                
                result_3 = result_1
                int64_t r8_3 = r15_5 << 5
                *(result_3 + rdi_1 * 0x10) = var_c8.o
                int64_t rdx_8 = *(r13 + 0x28)
                void* rcx_15 = *(r8_3 + rdx_8 - 0x10) + 0x88
                void* rax_14 = *(rcx_15 + 8)
                
                if (rax_14 != 0)
                    rcx_15 = rax_14
                
                *(rcx_15 + (sx.q(*(r8_3 + rdx_8 - 8)) << 2)) = r14_5.d
                int32_t rcx_16 = r13[0xc]
                int32_t rdx_11 = rcx_16 - r14_5.d - 1
                
                if (rdx_11 s>= 1)
                    rdx_11 = 1
                
                if (rdx_11 != 0)
                    memcpy((r14_5 << 5) + *(r13 + 0x28), 
                        (sx.q(rcx_16 - rdx_11) << 5) + *(r13 + 0x28), rdx_11 << 5)
                    rcx_16 = r13[0xc]
                
                r13[0xc] = rcx_16 - 1
                sub_1405dad20(&r13[0xa])
                rsi_1 = &rsi_1[1]
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
        
        int32_t rax_38 = var_a4_1
        
        if (rax_38 s< 0)
            int32_t var_70_2 = 0
            
            if (rax_38 != 0)
                sub_14113b8b0(&var_78, 0)
        
        uint64_t r14_8 = zx.q(arg_20)
        
        if (r14_8.d s> 0)
            if (r14_8.d s> data_1439b5d68)
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q((r14_8 * 5).d)
                data_1439b5d68 = (temp4_1 + (temp3_1 & 3)) s>> 2
                sub_1405d16e0(&data_1439b5d70, nullptr)
                sub_1405d16e0(&data_1439b5d78, nullptr)
                sub_141131d40(u"0")
            
            int64_t* rcx_45 = data_143f0f180
            void* r8_9 = data_1439b5d70
            int32_t var_e0_1 = 1
            memcpy((*(*rcx_45 + 0x130))(rcx_45, &data_143f02b98, r8_9, 0, *(r8_9 + 0x18), 1), 
                result_3, r14_8.d << 4)
            int64_t* rcx_47 = data_143f0f180
            (*(*rcx_47 + 0x138))(rcx_47, &data_143f02b98, data_1439b5d70)
            void* r12_2 = arg_10
            int64_t* rax_47 = std::_Get_future_error_what((*U"1111")[sx.q(*(r12_2 + 8))])
            int64_t* rdx_26 = &var_c8
            void* const rsi_8
            void* r15_7
            int32_t var_e8_1
            
            if (var_98_1.d s>= rbx_5)
                sub_1419a2ec0(rax_47, rdx_26, &data_143e5a8d0, 0)
                rsi_8 = var_c8
                void* rdi_4 = nullptr
                
                if (rsi_8 != 0)
                    int64_t rdx_29 = sx.q(*(rsi_8 + 0x10c))
                    int64_t* rbx_9 = *(var_c0 + 0x10)
                    int64_t rdi_5 = rbx_9[3]
                    
                    if (*(rdi_5 + (rdx_29 << 3)) == 0)
                        sub_1419ccf30(rbx_9, rdx_29.d)
                        rdi_5 = rbx_9[3]
                    
                    rdi_4 = *(rdi_5 + (rdx_29 << 3))
                    r14_8 = zx.q(arg_20)
                
                r15_7 = arg1
                *(r15_7 + 0x1b0) = rdi_4
                sub_14198aa60(rdi_4)
                void*** rcx_63 = (*(r15_7 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_54 = &rcx_63[3]
                
                if (rax_54 u> *(r15_7 + 0x38))
                    sub_140b0e3d0(r15_7 + 0x30, 0x20)
                    rcx_63 = (*(r15_7 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_54 = &rcx_63[3]
                
                *(r15_7 + 0x30) = rax_54
                *(r15_7 + 0x14) += 1
                **(r15_7 + 8) = rcx_63
                *(r15_7 + 8) = &rcx_63[1]
                rcx_63[2] = rdi_4
                rcx_63[1] = 0
                *rcx_63 = &data_142dd5b40
                void* rcx_68 = *(r13 + (r15_4 << 3) + 8)
                var_e0_1.q = *(rcx_68 + 0x18)
                var_e8_1.q = data_1439b5d78
                sub_141142920(rsi_8, r15_7, r12_2, r14_8.d, var_e8_1, 1, *(rcx_68 + 0x38))
            else
                sub_1419a2ec0(rax_47, rdx_26, &data_143e5a770, 0)
                rsi_8 = var_c8
                void* rdi_2 = nullptr
                
                if (rsi_8 != 0)
                    int64_t rdx_27 = sx.q(*(rsi_8 + 0x10c))
                    int64_t* rbx_8 = *(var_c0 + 0x10)
                    int64_t rdi_3 = rbx_8[3]
                    
                    if (*(rdi_3 + (rdx_27 << 3)) == 0)
                        sub_1419ccf30(rbx_8, rdx_27.d)
                        rdi_3 = rbx_8[3]
                    
                    rdi_2 = *(rdi_3 + (rdx_27 << 3))
                    r14_8 = zx.q(arg_20)
                
                r15_7 = arg1
                *(r15_7 + 0x1b0) = rdi_2
                sub_14198aa60(rdi_2)
                void*** rcx_54 = (*(r15_7 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_49 = &rcx_54[3]
                
                if (rax_49 u> *(r15_7 + 0x38))
                    sub_140b0e3d0(r15_7 + 0x30, 0x20)
                    rcx_54 = (*(r15_7 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_49 = &rcx_54[3]
                
                *(r15_7 + 0x30) = rax_49
                void**** rax_50 = *(r15_7 + 8)
                *(r15_7 + 0x14) += 1
                *rax_50 = rcx_54
                *(r15_7 + 8) = &rcx_54[1]
                rcx_54[1] = 0
                *rcx_54 = &data_142dd5b40
                rcx_54[2] = rdi_2
                var_e8_1.q = data_1439b5d78
                sub_141142920(rsi_8, r15_7, r12_2, r14_8.d, var_e8_1, 0, 0)
            sub_1419cd1c0(r15_7, rsi_8, (r14_8 + 0x3f).d u>> 6, 1, 1)
            int64_t r9_5 = sx.q(r13[8])
            arg_10 = *(r15_7 + 0x1b0)
            sub_14111a3f0(rsi_8 + 0x122, r15_7, &arg_10, *(r13 + (r9_5 << 3) + 8), 1)
        
        result = result_1
        
        if (result != 0)
            return sub_140a74f90(result)

return result
