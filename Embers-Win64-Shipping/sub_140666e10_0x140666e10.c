// 函数: sub_140666e10
// 地址: 0x140666e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg2
uint64_t r15 = 0
int64_t var_130 = 1
int64_t* var_138 = nullptr
sub_140610660(&var_138)
int64_t* r9 = var_138
*r9 = *arg1
void* rax_1 = arg1[1]
r9[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* r14
void* var_38 = r14

if (var_130.d s> 0)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    
    do
        int64_t rcx_1 = sx.q(var_130.d - 1)
        void* rax_4 = &var_138[rcx_1 * 2]
        int64_t* r13_1 = *(rax_4 + 8)
        void* rsi_1 = *rax_4
        
        if (r13_1 != 0)
            r13_1[1].d += 1
        
        r14 = &var_138[rcx_1 * 2]
        int64_t* rbx_1 = *(r14 + 8)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (1 != 1)
            memmove(r14, &var_138[sx.q(var_130.d) * 2], 0 << 4)
        
        var_130.d -= 1
        int64_t r9_1 = sub_140638bc0(&var_138)
        int64_t* rcx_7 = *(rsi_1 + 0x10)
        int32_t rax_12 = rcx_7[1].d - 1
        int16_t arg_8
        
        if (rax_12 u> 5)
            sub_140af98a0("Unknown", 0x1b7, u"Could not print Json Value, unrecognized type.", r9_1)
            sub_140afbb40()
        else
            switch (rax_12)
                case 0
                    int32_t rcx_48 = r12[4].d
                    
                    if (*(rsi_1 + 8) s> 1)
                        if (((rcx_48 - 2) & 0xfffffff5) != 0 || rcx_48 == 0xa)
                            int64_t* rcx_55 = r12[1]
                            arg_8 = 0x2c
                            (*(*rcx_55 + 0x150))(rcx_55, &arg_8, 2)
                        
                        (*(*r12 + 0x10))(r12, rsi_1)
                        int64_t* rcx_57 = r12[1]
                        arg_8 = 0x3a
                        (*(*rcx_57 + 0x150))(rcx_57, &arg_8, 2)
                        int16_t* var_f8 = nullptr
                        int32_t var_f0_1 = 0
                        sub_1405947f0(&var_f8, 5)
                        int32_t rdi_6 = var_f0_1 + 5
                        
                        if (rdi_6 s> 0)
                            sub_140594770(&var_f8)
                        
                        int16_t* rbx_10 = var_f8
                        UnDecorator::getReferenceType(rbx_10, u"null", 0xa)
                        int64_t* rcx_61 = r12[1]
                        int16_t* const rdx_42
                        int32_t rdi_7
                        
                        if (rdi_6 == 0)
                            rdi_7 = 0
                            rdx_42 = &data_142d40450
                        else
                            rdi_7 = rdi_6 - 1
                            rdx_42 = rbx_10
                        
                        (*(*rcx_61 + 0x150))(rcx_61, rdx_42, sx.q(rdi_7) * 2)
                        
                        if (rbx_10 != 0)
                            sub_140a74f90(rbx_10)
                        
                        r12[4].d = 0xb
                    else
                        if (((rcx_48 - 2) & 0xfffffff5) != 0 || rcx_48 == 0xa)
                            int64_t* rcx_49 = r12[1]
                            arg_8 = 0x2c
                            (*(*rcx_49 + 0x150))(rcx_49, &arg_8, 2)
                        
                        int16_t* var_108 = nullptr
                        int32_t var_100_1 = 0
                        sub_1405947f0(&var_108, 5)
                        int32_t rbx_8 = var_100_1 + 5
                        
                        if (rbx_8 s> 0)
                            sub_140594770(&var_108)
                        
                        int16_t* rdi_5 = var_108
                        UnDecorator::getReferenceType(rdi_5, u"null", 0xa)
                        int64_t* rcx_53 = r12[1]
                        int16_t* const rdx_37
                        int32_t rbx_9
                        
                        if (rbx_8 == 0)
                            rbx_9 = 0
                            rdx_37 = &data_142d40450
                        else
                            rbx_9 = rbx_8 - 1
                            rdx_37 = rdi_5
                        
                        (*(*rcx_53 + 0x150))(rcx_53, rdx_37, sx.q(rbx_9) * 2)
                        
                        if (rdi_5 == 0)
                            r12[4].d = 0xb
                        else
                            sub_140a74f90(rdi_5)
                            r12[4].d = 0xb
                case 1
                    if (*(rsi_1 + 8) s> 1)
                        void var_68
                        int64_t* rax_36 = sub_140b74df0(rcx_7, &var_68)
                        int32_t rdx_30 = r12[4].d
                        
                        if (((rdx_30 - 2) & 0xfffffff5) != 0 || rdx_30 == 0xa)
                            int64_t* rcx_43 = r12[1]
                            arg_8 = 0x2c
                            int64_t r9_6 = *rcx_43
                            (*(r9_6 + 0x150))(rcx_43, &arg_8, 2, r9_6)
                        
                        (*(*r12 + 0x10))(r12, rsi_1)
                        int64_t* rcx_45 = r12[1]
                        arg_8 = 0x3a
                        (*(*rcx_45 + 0x150))(rcx_45, &arg_8, 2)
                        (*(*r12 + 0x10))(r12, rax_36)
                        r12[4].d = 7
                        int64_t rcx_47 = *rax_36
                        
                        if (rcx_47 != 0)
                            sub_140a74f90(rcx_47)
                    else
                        int64_t var_78
                        int64_t* rax_34 = sub_140b74df0(rcx_7, &var_78)
                        int32_t rdx_26 = r12[4].d
                        
                        if (((rdx_26 - 2) & 0xfffffff5) != 0 || rdx_26 == 0xa)
                            int64_t* rcx_39 = r12[1]
                            arg_8 = 0x2c
                            int64_t r9_5 = *rcx_39
                            (*(r9_5 + 0x150))(rcx_39, &arg_8, 2, r9_5)
                        
                        (*(*r12 + 0x10))(r12, rax_34)
                        int64_t rcx_41 = var_78
                        r12[4].d = 7
                        
                        if (rcx_41 != 0)
                            sub_140a74f90(rcx_41)
                case 2
                    int16_t* rcx_14
                    int512_t zmm2
                    
                    if (*(rsi_1 + 8) s> 1)
                        int128_t zmm0_2 = sub_140b74be0(rcx_7)
                        int32_t rcx_15 = r12[4].d
                        
                        if (((rcx_15 - 2) & 0xfffffff5) != 0 || rcx_15 == 0xa)
                            int64_t* rcx_16 = r12[1]
                            arg_8 = 0x2c
                            (*(*rcx_16 + 0x150))(rcx_16, &arg_8, 2)
                        
                        (*(*r12 + 0x10))(r12, rsi_1)
                        int64_t* rcx_18 = r12[1]
                        arg_8 = 0x3a
                        (*(*rcx_18 + 0x150))(rcx_18, &arg_8, 2)
                        zmm2.o = zmm0_2
                        int16_t* var_88
                        sub_140a2e390(&var_88, u"%.17g", zmm0_2.q)
                        int64_t* r9_3 = r12[1]
                        int32_t var_80
                        int32_t rcx_21
                        int16_t* rdx_11
                        
                        if (var_80 == 0)
                            rcx_21 = 0
                            rdx_11 = &data_142d40450
                        else
                            rdx_11 = var_88
                            rcx_21 = var_80 - 1
                        
                        (*(*r9_3 + 0x150))(r9_3, rdx_11, sx.q(rcx_21) * 2)
                        rcx_14 = var_88
                    else
                        int128_t zmm0_1 = sub_140b74be0(rcx_7)
                        int32_t rcx_8 = r12[4].d
                        
                        if (((rcx_8 - 2) & 0xfffffff5) != 0 || rcx_8 == 0xa)
                            int64_t* rcx_9 = r12[1]
                            arg_8 = 0x2c
                            (*(*rcx_9 + 0x150))(rcx_9, &arg_8, 2)
                        
                        zmm2.o = zmm0_1
                        int16_t* var_98
                        sub_140a2e390(&var_98, u"%.17g", zmm0_1.q)
                        int64_t* r9_2 = r12[1]
                        int32_t var_90
                        int32_t rcx_12
                        int16_t* const rdx_7
                        
                        if (var_90 == 0)
                            rcx_12 = 0
                            rdx_7 = &data_142d40450
                        else
                            rdx_7 = var_98
                            rcx_12 = var_90 - 1
                        
                        (*(*r9_2 + 0x150))(r9_2, rdx_7, sx.q(rcx_12) * 2)
                        rcx_14 = var_98
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    r12[4].d = 8
                case 3
                    int64_t rax_25
                    int64_t* rcx_36
                    void* rdx_17
                    int64_t r8_10
                    char r15_1
                    
                    if (*(rsi_1 + 8) s> 1)
                        char rax_26 = sub_140b74b60(rcx_7)
                        int32_t rdx_18 = r12[4].d
                        r15_1 = rax_26
                        
                        if (((rdx_18 - 2) & 0xfffffff5) != 0 || rdx_18 == 0xa)
                            int64_t* rcx_29 = r12[1]
                            arg_8 = 0x2c
                            (*(*rcx_29 + 0x150))(rcx_29, &arg_8, 2)
                        
                        (*(*r12 + 0x10))(r12, rsi_1)
                        int64_t* rcx_31 = r12[1]
                        arg_8 = 0x3a
                        (*(*rcx_31 + 0x150))(rcx_31, &arg_8, 2)
                        wchar16 const* const rdi_4 = u"false"
                        
                        if (r15_1 != 0)
                            rdi_4 = u"true"
                        
                        r14 = nullptr
                        int32_t rsi_4 = 0
                        void* var_118 = nullptr
                        int32_t rax_30 = 0
                        int64_t var_110_1 = 0
                        
                        if (*rdi_4 != 0)
                            int64_t rbx_4 = -1
                            
                            do
                                rbx_4 += 1
                            while (rdi_4[rbx_4] != 0)
                            
                            if (rbx_4.d + 1 s> 0)
                                sub_1405947f0(&var_118, rbx_4.d + 1)
                                rax_30 = var_110_1:4.d
                                rsi_4 = var_110_1.d
                                r14 = var_118
                            
                            rsi_4 += rbx_4.d + 1
                            var_110_1.d = rsi_4
                            
                            if (rsi_4 s> rax_30)
                                sub_140594770(&var_118)
                                rsi_4 = var_110_1.d
                                r14 = var_118
                            
                            UnDecorator::getReferenceType(r14, rdi_4, (rbx_4.d + 1) * 2)
                        
                        int64_t* r9_4 = r12[1]
                        int32_t rcx_35
                        
                        if (rsi_4 == 0)
                            rcx_35 = 0
                            rdx_17 = &data_142d40450
                        else
                            rcx_35 = rsi_4 - 1
                            rdx_17 = r14
                        
                        rax_25 = *r9_4
                        r8_10 = sx.q(rcx_35)
                        rcx_36 = r9_4
                    else
                        char rax_22 = sub_140b74b60(rcx_7)
                        int32_t rdx_12 = r12[4].d
                        r15_1 = rax_22
                        
                        if (((rdx_12 - 2) & 0xfffffff5) != 0 || rdx_12 == 0xa)
                            int64_t* rcx_24 = r12[1]
                            arg_8 = 0x2c
                            (*(*rcx_24 + 0x150))(rcx_24, &arg_8, 2)
                        
                        wchar16 const* const rdi_3 = u"false"
                        
                        if (r15_1 != 0)
                            rdi_3 = u"true"
                        
                        r14 = nullptr
                        int32_t rsi_2 = 0
                        void* var_128 = nullptr
                        int32_t rax_24 = 0
                        int64_t var_120_1 = 0
                        
                        if (*rdi_3 != 0)
                            int64_t rbx_2 = -1
                            
                            do
                                rbx_2 += 1
                            while (rdi_3[rbx_2] != 0)
                            
                            if (rbx_2.d + 1 s> 0)
                                sub_1405947f0(&var_128, rbx_2.d + 1)
                                rax_24 = var_120_1:4.d
                                rsi_2 = var_120_1.d
                                r14 = var_128
                            
                            rsi_2 += rbx_2.d + 1
                            var_120_1.d = rsi_2
                            
                            if (rsi_2 s> rax_24)
                                sub_140594770(&var_128)
                                rsi_2 = var_120_1.d
                                r14 = var_128
                            
                            UnDecorator::getReferenceType(r14, rdi_3, (rbx_2.d + 1) * 2)
                        
                        rcx_36 = r12[1]
                        
                        if (rsi_2 == 0)
                            rax_25 = *rcx_36
                            rdx_17 = &data_142d40450
                            r8_10 = 0
                        else
                            rax_25 = *rcx_36
                            r8_10 = sx.q(rsi_2 - 1)
                            rdx_17 = r14
                    
                    int32_t rax_31 = (*(rax_25 + 0x150))(rcx_36, rdx_17, r8_10 * 2)
                    
                    if (r14 != 0)
                        rax_31 = sub_140a74f90(r14)
                    
                    r12[4].d = sbb.d(rax_31, rax_31, r15_1 != 0) + 0xa
                    r15 = 0
                case 4
                    if (*(rsi_1 + 0x20) == 0)
                        int64_t rbx_11 = sx.q(var_130.d)
                        *(rsi_1 + 0x20) = 1
                        int32_t rax_48 = (rbx_11 + 1).d
                        var_130.d = rax_48
                        
                        if (rax_48 s> var_130:4.d)
                            sub_140610660(&var_138)
                        
                        void* rax_51 = &var_138[rbx_11 * 2]
                        *rax_51 = rsi_1
                        *(rax_51 + 8) = r13_1
                        
                        if (r13_1 != 0)
                            r13_1[1].d += 1
                        
                        int32_t rcx_66 = r12[4].d
                        int16_t rax_52
                        
                        if (*(rsi_1 + 8) s> 1)
                            if (((rcx_66 - 2) & 0xfffffff5) != 0 || rcx_66 == 0xa)
                                int64_t* rcx_67 = r12[1]
                                arg_8 = 0x2c
                                (*(*rcx_67 + 0x150))(rcx_67, &arg_8, 2)
                            
                            (*(*r12 + 0x10))(r12, rsi_1)
                            rax_52 = 0x3a
                            goto label_1406676d3
                        
                        if (rcx_66 u> 0xc || not(test_bit(0x1015, rcx_66)))
                            rax_52 = 0x2c
                        label_1406676d3:
                            int64_t* rcx_69 = r12[1]
                            arg_8 = rax_52
                            (*(*rcx_69 + 0x150))(rcx_69, &arg_8, 2)
                        
                        int64_t* rcx_70 = r12[1]
                        arg_8 = 0x5b
                        (*(*rcx_70 + 0x150))(rcx_70, &arg_8, 2)
                        *(r12 + 0x24) += 1
                        int64_t rdi_8 = sx.q(r12[3].d)
                        int32_t rax_58 = (rdi_8 + 1).d
                        r12[3].d = rax_58
                        
                        if (rax_58 s> *(r12 + 0x1c))
                            sub_1406105e0(&r12[2])
                        
                        *(r12[2] + (rdi_8 << 2)) = 5
                        r12[4].d = 4
                        int64_t* rax_60 = sub_140b74a70(*(rsi_1 + 0x10))
                        uint64_t var_a8 = 0
                        r14 = zx.q(rax_60[1].d)
                        int64_t rbx_12 = *rax_60
                        int32_t var_a0_1 = r14.d
                        
                        if (r14.d != 0)
                            sub_14061cb30(&var_a8, r14.d, 0)
                            r15 = var_a8
                            void* rcx_74 = r15
                            void* rbx_13 = rbx_12 - r15
                            int32_t i
                            
                            do
                                *rcx_74 = *(rbx_13 + rcx_74)
                                void* rax_62 = *(rbx_13 + rcx_74 + 8)
                                *(rcx_74 + 8) = rax_62
                                
                                if (rax_62 != 0)
                                    *(rax_62 + 8) += 1
                                
                                rcx_74 += 0x10
                                i = r14.d
                                r14 = zx.q(r14.d - 1)
                            while (i != 1)
                            r14 = zx.q(var_a0_1)
                        else
                            int32_t var_9c_1 = 0
                        
                        int32_t rax_63 = (r14 - 1).d
                        int64_t rsi_5 = sx.q(rax_63)
                        
                        if (rax_63 s>= 0)
                            int64_t* rdi_11 = (rsi_5 << 4) + r15
                            int64_t temp19_1
                            
                            do
                                void*** rax_64 = j_sub_140a82f30(0x38)
                                int64_t* rcx_75 = rax_64
                                
                                if (rax_64 == 0)
                                    rcx_75 = nullptr
                                else
                                    rax_64[1].d = 1
                                    *(rax_64 + 0xc) = 1
                                    *rax_64 = &data_142d84f88
                                    rax_64[2] = 0
                                    rax_64[3] = 0
                                    rcx_75[4] = *rdi_11
                                    void* rax_66 = rdi_11[1]
                                    rcx_75[5] = rax_66
                                    
                                    if (rax_66 != 0)
                                        *(rax_66 + 8) += 1
                                    
                                    rcx_75[6].b = 0
                                
                                int64_t rbx_14 = sx.q(var_130.d)
                                int32_t rax_67 = (rbx_14 + 1).d
                                var_130.d = rax_67
                                
                                if (rax_67 s> var_130:4.d)
                                    sub_140610660(&var_138)
                                
                                void* rcx_79 = &var_138[rbx_14 * 2]
                                *rcx_79 = &rcx_75[2]
                                *(rcx_79 + 8) = rcx_75
                                
                                if (rcx_75 != 0)
                                    rcx_75[1].d += 1
                                    
                                    if (rcx_75 != 0)
                                        rcx_75[1].d -= 1
                                        
                                        if (rcx_75[1].d == 1)
                                            (**rcx_75)(rcx_75)
                                            int32_t temp24_1 = *(rcx_75 + 0xc)
                                            *(rcx_75 + 0xc) -= 1
                                            
                                            if (temp24_1 == 1)
                                                (*(*rcx_75 + 8))(rcx_75, 1)
                                
                                rdi_11 -= 0x10
                                temp19_1 = rsi_5
                                rsi_5 -= 1
                            while (temp19_1 - 1 s>= 0)
                        
                        if (r14.d != 0)
                            int64_t* rdi_12 = r15 + 8
                            int32_t i_1
                            
                            do
                                int64_t* rbx_16 = *rdi_12
                                
                                if (rbx_16 != 0)
                                    rbx_16[1].d -= 1
                                    
                                    if (rbx_16[1].d == 1)
                                        (**rbx_16)(rbx_16)
                                        int32_t temp16_1 = *(rbx_16 + 0xc)
                                        *(rbx_16 + 0xc) -= 1
                                        
                                        if (temp16_1 == 1)
                                            (*(*rbx_16 + 8))(rbx_16, 1)
                                
                                rdi_12 = &rdi_12[2]
                                i_1 = r14.d
                                r14 = zx.q(r14.d - 1)
                            while (i_1 != 1)
                        
                        if (r15 != 0)
                            sub_140a74f90(r15)
                        
                        r15 = 0
                    else
                        int64_t* rcx_63 = r12[1]
                        *(r12 + 0x24) -= 1
                        arg_8 = 0x5d
                        (*(*rcx_63 + 0x150))(rcx_63, &arg_8, 2)
                        r12[3].d -= 1
                        sub_140679af0(&r12[2])
                        r12[4].d = 5
                case 5
                    if (*(rsi_1 + 0x20) == 0)
                        int64_t rbx_17 = sx.q(var_130.d)
                        *(rsi_1 + 0x20) = 1
                        int32_t rax_76 = (rbx_17 + 1).d
                        var_130.d = rax_76
                        
                        if (rax_76 s> var_130:4.d)
                            sub_140610660(&var_138)
                        
                        void* rax_79 = &var_138[rbx_17 * 2]
                        *rax_79 = rsi_1
                        *(rax_79 + 8) = r13_1
                        
                        if (r13_1 != 0)
                            r13_1[1].d += 1
                        
                        int32_t rcx_88 = r12[4].d
                        int16_t rax_80
                        
                        if (*(rsi_1 + 8) s> 1)
                            if (((rcx_88 - 2) & 0xfffffff5) != 0 || rcx_88 == 0xa)
                                int64_t* rcx_89 = r12[1]
                                arg_8 = 0x2c
                                (*(*rcx_89 + 0x150))(rcx_89, &arg_8, 2)
                            
                            (*(*r12 + 0x10))(r12, rsi_1)
                            rax_80 = 0x3a
                            goto label_140667a0b
                        
                        if (rcx_88 u> 0xc || not(test_bit(0x1015, rcx_88)))
                            rax_80 = 0x2c
                        label_140667a0b:
                            int64_t* rcx_91 = r12[1]
                            arg_8 = rax_80
                            (*(*rcx_91 + 0x150))(rcx_91, &arg_8, 2)
                        
                        int64_t* rcx_92 = r12[1]
                        arg_8 = 0x7b
                        (*(*rcx_92 + 0x150))(rcx_92, &arg_8, 2)
                        *(r12 + 0x24) += 1
                        int64_t rdi_13 = sx.q(r12[3].d)
                        int32_t rax_86 = (rdi_13 + 1).d
                        r12[3].d = rax_86
                        
                        if (rax_86 s> *(r12 + 0x1c))
                            sub_1406105e0(&r12[2])
                        
                        *(r12[2] + (rdi_13 << 2)) = 6
                        r12[4].d = 2
                        int64_t* rcx_94 = *(rsi_1 + 0x10)
                        void* var_b8 = nullptr
                        int32_t i_9 = 0
                        void* var_e8 = nullptr
                        int32_t i_8 = 0
                        int64_t* rax_89 = (**rcx_94)(rcx_94)
                        int64_t* r12_1 = rax_89[1]
                        void* rbx_18 = *rax_89
                        arg_8.q = r12_1
                        
                        if (r12_1 != 0)
                            r12_1[1].d += 1
                        
                        sub_140666260(rbx_18, &var_b8)
                        EmitDataAndRelocs(rbx_18, &var_e8)
                        int32_t i_7 = i_8
                        r14 = zx.q(i_7 - 1)
                        
                        if (r14.d s>= 0)
                            int64_t rax_91 = sx.q(r14.d) << 4
                            int64_t* rsi_7 = var_e8 + rax_91
                            int64_t* r15_3 = var_b8 + rax_91
                            int32_t temp18_1
                            
                            do
                                void*** rax_92 = j_sub_140a82f30(0x38)
                                int64_t* rbx_19 = rax_92
                                
                                if (rax_92 == 0)
                                    rbx_19 = nullptr
                                else
                                    rax_92[1].d = 1
                                    *(rax_92 + 0xc) = 1
                                    *rax_92 = &data_142d84f88
                                    sub_140596d10(&rax_92[2], r15_3)
                                    rbx_19[4] = *rsi_7
                                    void* rax_93 = rsi_7[1]
                                    rbx_19[5] = rax_93
                                    
                                    if (rax_93 != 0)
                                        *(rax_93 + 8) += 1
                                    
                                    rbx_19[6].b = 0
                                
                                int64_t rbx_20 = sx.q(var_130.d)
                                int32_t rax_94 = (rbx_20 + 1).d
                                var_130.d = rax_94
                                
                                if (rax_94 s> var_130:4.d)
                                    sub_140610660(&var_138)
                                
                                void* rcx_102 = &var_138[rbx_20 * 2]
                                *rcx_102 = &rbx_19[2]
                                *(rcx_102 + 8) = rbx_19
                                
                                if (rbx_19 != 0)
                                    rbx_19[1].d += 1
                                    
                                    if (rbx_19 != 0)
                                        rbx_19[1].d -= 1
                                        
                                        if (rbx_19[1].d == 1)
                                            (**rbx_19)(rbx_19)
                                            int32_t temp23_1 = *(rbx_19 + 0xc)
                                            *(rbx_19 + 0xc) -= 1
                                            
                                            if (temp23_1 == 1)
                                                (*(*rbx_19 + 8))(rbx_19, 1)
                                
                                r15_3 -= 0x10
                                rsi_7 -= 0x10
                                temp18_1 = r14.d
                                r14 = zx.q(r14.d - 1)
                            while (temp18_1 - 1 s>= 0)
                            r12_1 = arg_8.q
                        
                        if (r12_1 != 0)
                            r12_1[1].d -= 1
                            
                            if (r12_1[1].d == 1)
                                (**r12_1)(r12_1)
                                int32_t temp11_1 = *(r12_1 + 0xc)
                                *(r12_1 + 0xc) -= 1
                                
                                if (temp11_1 == 1)
                                    (*(*r12_1 + 8))(r12_1, 1)
                        
                        if (i_7 != 0)
                            void* rdi_15 = var_e8 + 8
                            int32_t i_2
                            
                            do
                                int64_t* rbx_22 = *rdi_15
                                
                                if (rbx_22 != 0)
                                    rbx_22[1].d -= 1
                                    
                                    if (rbx_22[1].d == 1)
                                        (**rbx_22)(rbx_22)
                                        int32_t temp17_1 = *(rbx_22 + 0xc)
                                        *(rbx_22 + 0xc) -= 1
                                        
                                        if (temp17_1 == 1)
                                            (*(*rbx_22 + 8))(rbx_22, 1)
                                
                                rdi_15 += 0x10
                                i_2 = i_7
                                i_7 -= 1
                            while (i_2 != 1)
                        
                        void* rax_104 = var_e8
                        
                        if (rax_104 != 0)
                            sub_140a74f90(rax_104)
                        
                        int32_t i_6 = i_9
                        void* rsi_8 = var_b8
                        void* rbx_23 = rsi_8
                        
                        if (i_6 != 0)
                            int32_t i_3
                            
                            do
                                int64_t rcx_110 = *rbx_23
                                
                                if (rcx_110 != 0)
                                    sub_140a74f90(rcx_110)
                                
                                rbx_23 += 0x10
                                i_3 = i_6
                                i_6 -= 1
                            while (i_3 != 1)
                        
                        if (rsi_8 != 0)
                            sub_140a74f90(rsi_8)
                        
                        r12 = arg2
                        r15 = 0
                    else
                        int64_t* rcx_85 = r12[1]
                        *(r12 + 0x24) -= 1
                        arg_8 = 0x7d
                        (*(*rcx_85 + 0x150))(rcx_85, &arg_8, 2)
                        r12[3].d -= 1
                        sub_140679af0(&r12[2])
                        r12[4].d = 3
        
        if (r13_1 != 0)
            r13_1[1].d -= 1
            
            if (r13_1[1].d == 1)
                (**r13_1)(r13_1)
                int32_t temp7_1 = *(r13_1 + 0xc)
                *(r13_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*r13_1 + 8))(r13_1, 1)
    while (var_130.d s> 0)

if (arg3 == 0)
    r14.b = 1
else
    r14 = zx.q((*(*r12 + 8))(r12))

int32_t i_5 = var_130.d

if (i_5 != 0)
    void* rdi_17 = &var_138[1]
    int32_t i_4
    
    do
        int64_t* rbx_24 = *rdi_17
        
        if (rbx_24 != 0)
            rbx_24[1].d -= 1
            
            if (rbx_24[1].d == 1)
                (**rbx_24)(rbx_24)
                int32_t temp5_1 = *(rbx_24 + 0xc)
                *(rbx_24 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_24 + 8))(rbx_24, 1)
        
        rdi_17 += 0x10
        i_4 = i_5
        i_5 -= 1
    while (i_4 != 1)

int64_t* rcx_117 = var_138

if (rcx_117 != 0)
    sub_140a74f90(rcx_117)

return zx.q(r14.b)
