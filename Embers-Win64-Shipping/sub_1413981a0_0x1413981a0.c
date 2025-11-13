// 函数: sub_1413981a0
// 地址: 0x1413981a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = *arg1
int64_t* r15 = arg1
int32_t rdx = result[1].d

if (rdx s> 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    void* var_58 = nullptr
    int64_t var_50_1 = 0
    sub_1405c5570(&var_58, rdx)
    int64_t* rax = *r15
    uint64_t r12_1 = zx.q(var_50_1.d)
    void* r13_1 = var_58
    void* rbx_1 = *rax
    void* r14_3 = sx.q(rax[1].d) * 0xa0 + rbx_1
    
    if (rbx_1 != r14_3)
        do
            int64_t rdi_1 = sx.q(r12_1.d)
            int64_t r15_1 = *(*(rbx_1 + 0x98) + 8)
            r12_1 = zx.q((rdi_1 + 1).d)
            var_50_1.d = r12_1.d
            
            if (r12_1.d s> var_50_1:4.d)
                sub_1405a4d70(&var_58)
                r12_1 = zx.q(var_50_1.d)
                r13_1 = var_58
            
            rbx_1 += 0xa0
            *(r13_1 + (rdi_1 << 3)) = r15_1
        while (rbx_1 != r14_3)
        
        r15 = arg1
    
    void* rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    uint32_t rdx_2 = (r12_1 << 3).d
    int64_t r14_4 = sx.q(rdx_2)
    void* rax_3 = r14_4 + rdi_4
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, rdx_2 + 8)
        rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = r14_4 + rdi_4
    
    *(arg2 + 0x30) = rax_3
    int64_t i_4 = sx.q(r12_1.d)
    
    if (r12_1.d s> 0)
        void* rcx_3 = rdi_4
        int64_t i
        
        do
            *rcx_3 = *(r13_1 - rdi_4 + rcx_3)
            rcx_3 += 8
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    void* rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = rcx_6 + 0x30
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = rcx_6 + 0x30
    
    *(arg2 + 0x30) = rax_5
    int64_t r13_2 = 0
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_6
    *(arg2 + 8) = rcx_6 + 8
    *(rcx_6 + 8) = 0
    *rcx_6 = &data_142da7798
    *(rcx_6 + 0x10) = r12_1.d
    *(rcx_6 + 0x18) = rdi_4
    *(rcx_6 + 0x20) = 1
    *(rcx_6 + 0x28) = 0
    int64_t* rax_8 = *r15
    void* rdi_7 = *rax_8
    void* rax_12 = sx.q(rax_8[1].d) * 0xa0 + rdi_7
    var_58 = rax_12
    
    if (rdi_7 != rax_12)
        do
            void* rax_13 = *(rdi_7 + 0x78)
            void* r14_5 = nullptr
            
            if (rax_13 != 0)
                int64_t rdx_4 = sx.q(*(rax_13 + 0x10c))
                int64_t r12_2 = rdx_4 << 3
                int64_t* r15_2 = *(*(rdi_7 + 0x80) + 0x10)
                int64_t r14_6 = r15_2[3]
                
                if (*(r12_2 + r14_6) == 0)
                    sub_1419ccf30(r15_2, rdx_4.d)
                    r14_6 = r15_2[3]
                
                r14_5 = *(r12_2 + r14_6)
            
            *(arg2 + 0x1b0) = r14_5
            sub_14198aa60(r14_5)
            void* rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_15 = rcx_14 + 0x18
            
            if (rax_15 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x20)
                rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_15 = rcx_14 + 0x18
            
            *(arg2 + 0x30) = rax_15
            int64_t r8_3 = 0
            void** rax_16 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_16 = rcx_14
            *(arg2 + 8) = rcx_14 + 8
            *(rcx_14 + 8) = 0
            *rcx_14 = &data_142dd5b40
            *(rcx_14 + 0x10) = r14_5
            void* rax_18 = *(rdi_7 + 0x78)
            
            if (rax_18 != 0)
                int64_t rdx_5 = sx.q(*(rax_18 + 0x10c))
                int64_t r15_3 = rdx_5 << 3
                int64_t* r14_7 = *(*(rdi_7 + 0x80) + 0x10)
                int64_t rax_20 = r14_7[3]
                
                if (*(r15_3 + rax_20) == 0)
                    sub_1419ccf30(r14_7, rdx_5.d)
                    rax_20 = r14_7[3]
                
                r8_3 = *(r15_3 + rax_20)
            
            sub_141296a70(rdi_7, arg2, r8_3)
            void* r14_8 = *(rdi_7 + 0x78)
            int64_t arg_20 = 0
            
            if (r14_8 != 0)
                int64_t rdx_7 = sx.q(*(r14_8 + 0x10c))
                int64_t* r15_4 = *(*(rdi_7 + 0x80) + 0x10)
                int64_t r12_3 = rdx_7 << 3
                int64_t rax_22 = r15_4[3]
                
                if (*(r12_3 + rax_22) == 0)
                    sub_1419ccf30(r15_4, rdx_7.d)
                    rax_22 = r15_4[3]
                    r14_8 = *(rdi_7 + 0x78)
                
                arg_20 = *(r12_3 + rax_22)
            
            void* r15_5 = *(rdi_7 + 0x98)
            int64_t r12_4 = *(r15_5 + 8)
            
            if (*(r14_8 + 0x146) u> 0)
                uint32_t r13_3 = zx.d(*(r14_8 + 0x144))
                void* rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_24 = rcx_23 + 0x28
                
                if (rax_24 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_24 = rcx_23 + 0x28
                
                *(arg2 + 0x30) = rax_24
                void** rax_25 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_25 = rcx_23
                *(arg2 + 8) = rcx_23 + 8
                *(rcx_23 + 8) = 0
                *rcx_23 = &data_142da77d8
                int64_t rax_27 = arg_20
                *(rcx_23 + 0x18) = r13_3
                r13_2 = 0
                *(rcx_23 + 0x10) = rax_27
                *(rcx_23 + 0x20) = r12_4
            
            if (*(r14_8 + 0x146) u<= 0 || *(r14_8 + 0x146) u<= 0)
                int64_t r15_6 = *(r15_5 + 0x10)
                
                if (*(r14_8 + 0x142) u> 0)
                    uint32_t r14_9 = zx.d(*(r14_8 + 0x140))
                    void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_28 = &rcx_29[5]
                    
                    if (rax_28 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_28 = &rcx_29[5]
                    
                    *(arg2 + 0x30) = rax_28
                    void**** rax_29 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_29 = rcx_29
                    *(arg2 + 8) = &rcx_29[1]
                    rcx_29[1] = 0
                    *rcx_29 = &data_142d99560
                    rcx_29[2] = arg_20
                    rcx_29[3].d = r14_9
                    rcx_29[4] = r15_6
            
            int64_t rax_33
            int64_t rdx_8
            rdx_8:rax_33 = mulu.dp.q(-0x5555555555555555, zx.q(*(*(rdi_7 + 0x98) + 0x18)))
            void* rcx_34 = *(rdi_7 + 0x78)
            uint64_t var_68 = rdx_8 u>> 3
            
            if (rcx_34 != 0)
                int64_t rdx_10 = sx.q(*(rcx_34 + 0x10c))
                int64_t* r14_10 = *(*(rdi_7 + 0x80) + 0x10)
                int64_t* rax_35 = r14_10[3]
                
                if (rax_35[rdx_10] == 0)
                    sub_1419ccf30(r14_10, rdx_10.d)
                    rax_35 = r14_10[3]
                    rcx_34 = *(rdi_7 + 0x78)
                
                r13_2 = rax_35[rdx_10]
            
            uint64_t r15_8 = zx.q(*(rcx_34 + 0x14c))
            
            if (r15_8.d u>= 8)
                r15_8 = 8
            
            if (r15_8.d != 0)
                uint32_t rax_36 = zx.d(*(rcx_34 + 0x14a))
                void* r14_13 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                arg_20.d = zx.d(*(rcx_34 + 0x148))
                void* rax_38 = r14_13 + r15_8
                
                if (rax_38 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, (r15_8 + 0x10).d)
                    r14_13 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                    rax_38 = r15_8 + r14_13
                
                *(arg2 + 0x30) = rax_38
                memcpy(r14_13, &var_68, r15_8.d)
                void* rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_39 = rcx_40 + 0x30
                
                if (rax_39 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_39 = rcx_40 + 0x30
                
                *(arg2 + 0x30) = rax_39
                void** rax_40 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_40 = rcx_40
                *(arg2 + 8) = rcx_40 + 8
                *(rcx_40 + 8) = 0
                *rcx_40 = &data_142d99550
                *(rcx_40 + 0x20) = arg_20.d
                *(rcx_40 + 0x24) = rax_36
                *(rcx_40 + 0x10) = r13_2
                *(rcx_40 + 0x18) = r14_13
                *(rcx_40 + 0x28) = r15_8.d
            
            void* r8_5 = *(rdi_7 + 0x78)
            r13_2 = 0
            int64_t rax_44 = 0
            
            if (r8_5 != 0)
                int64_t rdx_13 = sx.q(*(r8_5 + 0x10c))
                int64_t* r14_16 = *(*(rdi_7 + 0x80) + 0x10)
                int64_t* rax_46 = r14_16[3]
                
                if (rax_46[rdx_13] == 0)
                    sub_1419ccf30(r14_16, rdx_13.d)
                    rax_46 = r14_16[3]
                    r8_5 = *(rdi_7 + 0x78)
                
                rax_44 = rax_46[rdx_13]
            
            arg_20 = rax_44
            sub_140741e30(arg2, &arg_20, r8_5 + 0x14e, rdi_7 + 0x8c, 0)
            void* r8_7 = *(rdi_7 + 0x78)
            int64_t rax_47 = 0
            
            if (r8_7 != 0)
                int64_t rdx_15 = sx.q(*(r8_7 + 0x10c))
                int64_t* r14_17 = *(*(rdi_7 + 0x80) + 0x10)
                int64_t* rax_49 = r14_17[3]
                
                if (rax_49[rdx_15] == 0)
                    sub_1419ccf30(r14_17, rdx_15.d)
                    rax_49 = r14_17[3]
                    r8_7 = *(rdi_7 + 0x78)
                
                rax_47 = rax_49[rdx_15]
            
            arg_20 = rax_47
            sub_140741e30(arg2, &arg_20, r8_7 + 0x154, rdi_7 + 0x90, 0)
            void* r8_9 = *(rdi_7 + 0x78)
            int64_t rax_50 = 0
            
            if (r8_9 != 0)
                int64_t rdx_17 = sx.q(*(r8_9 + 0x10c))
                int64_t* r14_18 = *(*(rdi_7 + 0x80) + 0x10)
                int64_t* rax_52 = r14_18[3]
                
                if (rax_52[rdx_17] == 0)
                    sub_1419ccf30(r14_18, rdx_17.d)
                    rax_52 = r14_18[3]
                    r8_9 = *(rdi_7 + 0x78)
                
                rax_50 = rax_52[rdx_17]
            
            arg_20 = rax_50
            sub_140741e30(arg2, &arg_20, r8_9 + 0x15a, rdi_7 + 0x94, 0)
            void* rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            uint32_t r14_21 = (*(rdi_7 + 0x88) + 0x3f) u>> 6
            void* rax_53 = rcx_52 + 0x20
            
            if (rax_53 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x28)
                rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_53 = rcx_52 + 0x20
            
            *(arg2 + 0x30) = rax_53
            void** rax_54 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_54 = rcx_52
            *(arg2 + 8) = rcx_52 + 8
            *(rcx_52 + 8) = 0
            *(rcx_52 + 0x10) = r14_21
            int64_t r14_22 = 0
            *rcx_52 = &data_142ef57a8
            *(rcx_52 + 0x14) = 1
            *(rcx_52 + 0x18) = 1
            void* rcx_56 = *(rdi_7 + 0x78)
            
            if (rcx_56 != 0)
                int64_t rdx_19 = sx.q(*(rcx_56 + 0x10c))
                int64_t* r14_23 = *(*(rdi_7 + 0x80) + 0x10)
                int64_t* rax_57 = r14_23[3]
                
                if (rax_57[rdx_19] == 0)
                    sub_1419ccf30(r14_23, rdx_19.d)
                    rax_57 = r14_23[3]
                    rcx_56 = *(rdi_7 + 0x78)
                
                r14_22 = rax_57[rdx_19]
            
            arg_20 = 0
            
            if (*(rcx_56 + 0x146) u> 0)
                uint32_t r15_13 = zx.d(*(rcx_56 + 0x144))
                void* rcx_60 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_58 = rcx_60 + 0x28
                
                if (rax_58 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_60 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_58 = rcx_60 + 0x28
                
                *(arg2 + 0x30) = rax_58
                void** rax_59 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_59 = rcx_60
                *(arg2 + 8) = rcx_60 + 8
                *(rcx_60 + 8) = 0
                *rcx_60 = &data_142da77d8
                *(rcx_60 + 0x10) = r14_22
                *(rcx_60 + 0x18) = r15_13
                *(rcx_60 + 0x20) = 0
            
            sub_1405d1550(&arg_20)
            rdi_7 += 0xa0
        while (rdi_7 != var_58)
        
        r12_1 = zx.q(r12_1.d)
        r15 = arg1
    
    uint32_t rdx_20 = (r12_1 << 3).d
    int64_t r14_24 = sx.q(rdx_20)
    void* rdi_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_61 = r14_24 + rdi_10
    
    if (rax_61 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, rdx_20 + 8)
        rdi_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_61 = r14_24 + rdi_10
    
    *(arg2 + 0x30) = rax_61
    int64_t i_5 = sx.q(r12_1.d)
    
    if (r12_1.d s> 0)
        void* rcx_66 = rdi_10
        int64_t i_1
        
        do
            *rcx_66 = *(r13_1 - rdi_10 + rcx_66)
            rcx_66 += 8
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    void* rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_63 = rcx_69 + 0x30
    
    if (rax_63 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_63 = rcx_69 + 0x30
    
    *(arg2 + 0x30) = rax_63
    void** rax_64 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_64 = rcx_69
    *(arg2 + 8) = rcx_69 + 8
    *(rcx_69 + 8) = 0
    *rcx_69 = &data_142da7798
    *(rcx_69 + 0x10) = r12_1.d
    *(rcx_69 + 0x18) = rdi_10
    *(rcx_69 + 0x20) = 0
    *(rcx_69 + 0x24) = 1
    *(rcx_69 + 0x28) = 0
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    void* rdi_13 = *(arg2 + 0x30)
    var_58 = r15[1]
    void* rdi_15 = (rdi_13 + 7) & 0xfffffffffffffff8
    var_50_1.d = r15[2].d
    zmm6 = var_58.o
    void* rax_68 = rdi_15 + 0x20
    
    if (rax_68 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x28)
        rdi_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_68 = rdi_15 + 0x20
    
    *(arg2 + 0x30) = rax_68
    void** rax_69 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    var_58.o = zmm6
    zmm6 = _mm_bsrli_si128(zmm6, 8)
    *rax_69 = rdi_15
    *(arg2 + 8) = rdi_15 + 8
    void* rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int32_t rdx_23 = zmm6.d << 5
    int64_t r15_14 = sx.q(rdx_23)
    void* rax_70 = rsi_3 + r15_14
    
    if (rax_70 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, rdx_23 + 8)
        rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_70 = rsi_3 + r15_14
    
    *(arg2 + 0x30) = rax_70
    int64_t rbx_3 = sx.q(var_50_1.d)
    memcpy(rsi_3, var_58, (rbx_3 << 5).d)
    *(rdi_15 + 8) = 0
    result = &data_142dd5b60
    var_58 = rsi_3
    *rdi_15 = &data_142dd5b60
    var_50_1.d = rbx_3.d
    *(rdi_15 + 0x10) = var_58.o
    int64_t* rsi_7 = *arg1
    int32_t i_6 = rsi_7[1].d
    void* rbx_4 = *rsi_7
    
    if (i_6 != 0)
        int32_t i_2
        
        do
            result = sub_14125cf90(rbx_4)
            rbx_4 += 0xa0
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    rsi_7[1].d = 0
    
    if (*(rsi_7 + 0xc) != 0)
        result = sub_1407c4520(rsi_7, 0)
    
    int32_t i_7 = r15[2].d
    int64_t* rbx_5 = r15[1]
    
    if (i_7 != 0)
        int32_t i_3
        
        do
            result = sub_14081c9d0(rbx_5)
            rbx_5 = &rbx_5[4]
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    
    r15[2].d = 0
    
    if (*(r15 + 0x14) != 0)
        return sub_1405a51b0(&r15[1], 0)

return result
