// 函数: sub_140667df0
// 地址: 0x140667df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg2
int64_t var_110 = 1
int64_t* var_118 = nullptr
sub_140610660(&var_118)
int64_t* r9 = var_118
*r9 = *arg1
void* rax_1 = arg1[1]
r9[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

uint64_t r14
uint64_t var_38 = r14

if (var_110.d s> 0)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    
    do
        int64_t rcx_1 = sx.q(var_110.d - 1)
        void* rax_4 = &var_118[rcx_1 * 2]
        int64_t* r12_1 = *(rax_4 + 8)
        r14 = *rax_4
        
        if (r12_1 != 0)
            r12_1[1].d += 1
        
        void* rsi_2 = &var_118[rcx_1 * 2]
        int64_t* rbx_1 = *(rsi_2 + 8)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (1 != 1)
            memmove(rsi_2, &var_118[sx.q(var_110.d) * 2], 0 << 4)
        
        var_110.d -= 1
        int64_t r9_1 = sub_140638bc0(&var_118)
        int64_t* rcx_7 = *(r14 + 0x10)
        int32_t rax_12 = rcx_7[1].d - 1
        int16_t arg_8
        
        if (rax_12 u> 5)
            sub_140af98a0("Unknown", 0x1b7, u"Could not print Json Value, unrecognized type.", r9_1)
            sub_140afbb40()
        else
            switch (rax_12)
                case 0
                    if (*(r14 + 8) s> 1)
                        int32_t rcx_56 = r15[4].d
                        
                        if (((rcx_56 - 2) & 0xfffffff5) != 0 || rcx_56 == 0xa)
                            int64_t* rcx_57 = r15[1]
                            arg_8 = 0x2c
                            (*(*rcx_57 + 0x150))(rcx_57, &arg_8, 2)
                        
                        sub_14067f880(r15[1])
                        int32_t i_37 = *(r15 + 0x24)
                        int64_t* rdi_7 = r15[1]
                        
                        if (i_37 s> 0)
                            uint64_t i_19 = zx.q(i_37)
                            uint64_t i
                            
                            do
                                int64_t rax_44 = *rdi_7
                                arg_8 = 9
                                (*(rax_44 + 0x150))(rdi_7, &arg_8, 2)
                                i = i_19
                                i_19 -= 1
                            while (i != 1)
                        
                        (*(*r15 + 0x10))(r15, r14)
                        int64_t* rcx_61 = r15[1]
                        arg_8 = 0x3a
                        (*(*rcx_61 + 0x150))(rcx_61, &arg_8, 2)
                        int64_t* rcx_62 = r15[1]
                        arg_8 = 0x20
                        (*(*rcx_62 + 0x150))(rcx_62, &arg_8, 2)
                        int16_t* var_f8 = nullptr
                        int32_t var_f0_1 = 0
                        sub_1405947f0(&var_f8, 5)
                        int32_t rdi_8 = var_f0_1 + 5
                        
                        if (rdi_8 s> 0)
                            sub_140594770(&var_f8)
                        
                        int16_t* rbx_4 = var_f8
                        UnDecorator::getReferenceType(rbx_4, u"null", 0xa)
                        int64_t* rcx_66 = r15[1]
                        int16_t* const rdx_42
                        int32_t rdi_9
                        
                        if (rdi_8 == 0)
                            rdi_9 = 0
                            rdx_42 = &data_142d40450
                        else
                            rdi_9 = rdi_8 - 1
                            rdx_42 = rbx_4
                        
                        (*(*rcx_66 + 0x150))(rcx_66, rdx_42, sx.q(rdi_9) * 2)
                        
                        if (rbx_4 != 0)
                            sub_140a74f90(rbx_4)
                        
                        r15[4].d = 0xb
                    else
                        int32_t rax_37 = r15[4].d
                        int32_t rcx_46 = rax_37
                        
                        if (rax_37 == 2 || rax_37 == 4)
                            goto label_14066836d
                        
                        if (rax_37 == 0xc)
                            if (rcx_46 - 8 u<= 3)
                                goto label_140668392
                            
                            sub_14067f880(r15[1])
                            sub_14067fc50(r15[1], *(r15 + 0x24))
                        else
                            int64_t* rcx_47 = r15[1]
                            arg_8 = 0x2c
                            (*(*rcx_47 + 0x150))(rcx_47, &arg_8, 2)
                            rcx_46 = r15[4].d
                        label_14066836d:
                            
                            if (rcx_46 == 4 || rcx_46 - 8 u<= 3)
                            label_140668392:
                                int64_t* rcx_50 = r15[1]
                                arg_8 = 0x20
                                (*(*rcx_50 + 0x150))(rcx_50, &arg_8, 2)
                            else
                                sub_14067f880(r15[1])
                                sub_14067fc50(r15[1], *(r15 + 0x24))
                        
                        int16_t* var_108 = nullptr
                        int32_t var_100_1 = 0
                        sub_1405947f0(&var_108, 5)
                        int32_t rbx_2 = var_100_1 + 5
                        
                        if (rbx_2 s> 0)
                            sub_140594770(&var_108)
                        
                        int16_t* rdi_6 = var_108
                        UnDecorator::getReferenceType(rdi_6, u"null", 0xa)
                        int64_t* rcx_54 = r15[1]
                        int16_t* const rdx_35
                        int32_t rbx_3
                        
                        if (rbx_2 == 0)
                            rbx_3 = 0
                            rdx_35 = &data_142d40450
                        else
                            rbx_3 = rbx_2 - 1
                            rdx_35 = rdi_6
                        
                        (*(*rcx_54 + 0x150))(rcx_54, rdx_35, sx.q(rbx_3) * 2)
                        
                        if (rdi_6 == 0)
                            r15[4].d = 0xb
                        else
                            sub_140a74f90(rdi_6)
                            r15[4].d = 0xb
                case 1
                    if (*(r14 + 8) s> 1)
                        void var_68
                        int64_t* rax_31 = sub_140b74df0(rcx_7, &var_68)
                        int32_t rdx_24 = r15[4].d
                        
                        if (((rdx_24 - 2) & 0xfffffff5) != 0 || rdx_24 == 0xa)
                            int64_t* rcx_38 = r15[1]
                            arg_8 = 0x2c
                            int64_t r9_5 = *rcx_38
                            (*(r9_5 + 0x150))(rcx_38, &arg_8, 2, r9_5)
                        
                        sub_14067f880(r15[1])
                        int32_t i_36 = *(r15 + 0x24)
                        int64_t* rdi_5 = r15[1]
                        
                        if (i_36 s> 0)
                            uint64_t i_18 = zx.q(i_36)
                            uint64_t i_1
                            
                            do
                                int64_t rax_32 = *rdi_5
                                arg_8 = 9
                                (*(rax_32 + 0x150))(rdi_5, &arg_8, 2)
                                i_1 = i_18
                                i_18 -= 1
                            while (i_1 != 1)
                        
                        (*(*r15 + 0x10))(r15, r14)
                        int64_t* rcx_42 = r15[1]
                        arg_8 = 0x3a
                        (*(*rcx_42 + 0x150))(rcx_42, &arg_8, 2)
                        int64_t* rcx_43 = r15[1]
                        arg_8 = 0x20
                        (*(*rcx_43 + 0x150))(rcx_43, &arg_8, 2)
                        (*(*r15 + 0x10))(r15, rax_31)
                        r15[4].d = 7
                        int64_t rcx_45 = *rax_31
                        
                        if (rcx_45 != 0)
                            sub_140a74f90(rcx_45)
                    else
                        int64_t var_78
                        int64_t* rax_28 = sub_140b74df0(rcx_7, &var_78)
                        int32_t rdx_19 = r15[4].d
                        
                        if (((rdx_19 - 2) & 0xfffffff5) != 0 || rdx_19 == 0xa)
                            int64_t* rcx_32 = r15[1]
                            arg_8 = 0x2c
                            int64_t r9_4 = *rcx_32
                            (*(r9_4 + 0x150))(rcx_32, &arg_8, 2, r9_4)
                        
                        sub_14067f880(r15[1])
                        int32_t i_35 = *(r15 + 0x24)
                        int64_t* rdi_4 = r15[1]
                        
                        if (i_35 s> 0)
                            uint64_t i_17 = zx.q(i_35)
                            uint64_t i_2
                            
                            do
                                int64_t rax_29 = *rdi_4
                                arg_8 = 9
                                (*(rax_29 + 0x150))(rdi_4, &arg_8, 2)
                                i_2 = i_17
                                i_17 -= 1
                            while (i_2 != 1)
                        
                        (*(*r15 + 0x10))(r15, rax_28)
                        int64_t rcx_36 = var_78
                        r15[4].d = 7
                        
                        if (rcx_36 != 0)
                            sub_140a74f90(rcx_36)
                case 2
                    int16_t* rcx_17
                    int512_t zmm2
                    
                    if (*(r14 + 8) s> 1)
                        int128_t zmm0_2 = sub_140b74be0(rcx_7)
                        int32_t rcx_18 = r15[4].d
                        
                        if (((rcx_18 - 2) & 0xfffffff5) != 0 || rcx_18 == 0xa)
                            int64_t* rcx_19 = r15[1]
                            arg_8 = 0x2c
                            (*(*rcx_19 + 0x150))(rcx_19, &arg_8, 2)
                        
                        sub_14067f880(r15[1])
                        int32_t i_34 = *(r15 + 0x24)
                        int64_t* rdi_3 = r15[1]
                        
                        if (i_34 s> 0)
                            uint64_t i_16 = zx.q(i_34)
                            uint64_t i_3
                            
                            do
                                int64_t rax_21 = *rdi_3
                                arg_8 = 9
                                (*(rax_21 + 0x150))(rdi_3, &arg_8, 2)
                                i_3 = i_16
                                i_16 -= 1
                            while (i_3 != 1)
                        
                        (*(*r15 + 0x10))(r15, r14)
                        int64_t* rcx_23 = r15[1]
                        arg_8 = 0x3a
                        (*(*rcx_23 + 0x150))(rcx_23, &arg_8, 2)
                        int64_t* rcx_24 = r15[1]
                        arg_8 = 0x20
                        (*(*rcx_24 + 0x150))(rcx_24, &arg_8, 2)
                        zmm2.o = zmm0_2
                        int16_t* var_88
                        sub_140a2e390(&var_88, u"%.17g", zmm0_2.q)
                        int64_t* r9_3 = r15[1]
                        int32_t var_80
                        int32_t rcx_27
                        int16_t* rdx_15
                        
                        if (var_80 == 0)
                            rcx_27 = 0
                            rdx_15 = &data_142d40450
                        else
                            rdx_15 = var_88
                            rcx_27 = var_80 - 1
                        
                        (*(*r9_3 + 0x150))(r9_3, rdx_15, sx.q(rcx_27) * 2)
                        rcx_17 = var_88
                    else
                        int128_t zmm0_1 = sub_140b74be0(rcx_7)
                        int32_t rax_14 = r15[4].d
                        int32_t rcx_8 = rax_14
                        
                        if (rax_14 == 2 || rax_14 == 4)
                            goto label_140667f9c
                        
                        if (rax_14 == 0xc)
                            if (rcx_8 - 8 u<= 3)
                                goto label_140667fc1
                            
                            sub_14067f880(r15[1])
                            sub_14067fc50(r15[1], *(r15 + 0x24))
                        else
                            int64_t* rcx_9 = r15[1]
                            arg_8 = 0x2c
                            (*(*rcx_9 + 0x150))(rcx_9, &arg_8, 2)
                            rcx_8 = r15[4].d
                        label_140667f9c:
                            
                            if (rcx_8 == 4 || rcx_8 - 8 u<= 3)
                            label_140667fc1:
                                int64_t* rcx_12 = r15[1]
                                arg_8 = 0x20
                                (*(*rcx_12 + 0x150))(rcx_12, &arg_8, 2)
                            else
                                sub_14067f880(r15[1])
                                sub_14067fc50(r15[1], *(r15 + 0x24))
                        
                        zmm2.o = zmm0_1
                        int16_t* var_98
                        sub_140a2e390(&var_98, u"%.17g", zmm0_1.q)
                        int64_t* r9_2 = r15[1]
                        int32_t var_90
                        int32_t rcx_15
                        int16_t* const rdx_9
                        
                        if (var_90 == 0)
                            rcx_15 = 0
                            rdx_9 = &data_142d40450
                        else
                            rdx_9 = var_98
                            rcx_15 = var_90 - 1
                        
                        (*(*r9_2 + 0x150))(r9_2, rdx_9, sx.q(rcx_15) * 2)
                        rcx_17 = var_98
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    r15[4].d = 8
                case 3
                    if (*(r14 + 8) s> 1)
                        sub_140668ff0(r15, r14, sub_140b74b60(rcx_7))
                    else
                        sub_1406691e0(r15, sub_140b74b60(rcx_7))
                case 4
                    if (*(r14 + 0x20) == 0)
                        int64_t rbx_5 = sx.q(var_110.d)
                        *(r14 + 0x20) = 1
                        int32_t rax_52 = (rbx_5 + 1).d
                        var_110.d = rax_52
                        
                        if (rax_52 s> var_110:4.d)
                            sub_140610660(&var_118)
                        
                        void* rax_55 = &var_118[rbx_5 * 2]
                        *rax_55 = r14
                        *(rax_55 + 8) = r12_1
                        
                        if (r12_1 != 0)
                            r12_1[1].d += 1
                        
                        int32_t rcx_75 = r15[4].d
                        
                        if (*(r14 + 8) s> 1)
                            if (((rcx_75 - 2) & 0xfffffff5) != 0 || rcx_75 == 0xa)
                                int64_t* rcx_80 = r15[1]
                                arg_8 = 0x2c
                                (*(*rcx_80 + 0x150))(rcx_80, &arg_8, 2)
                            
                            sub_14067f880(r15[1])
                            int32_t i_40 = *(r15 + 0x24)
                            int64_t* rdi_12 = r15[1]
                            
                            if (i_40 s> 0)
                                uint64_t i_22 = zx.q(i_40)
                                uint64_t i_4
                                
                                do
                                    int64_t rax_61 = *rdi_12
                                    arg_8 = 9
                                    (*(rax_61 + 0x150))(rdi_12, &arg_8, 2)
                                    i_4 = i_22
                                    i_22 -= 1
                                while (i_4 != 1)
                            
                            (*(*r15 + 0x10))(r15, r14)
                            int64_t* rcx_84 = r15[1]
                            arg_8 = 0x3a
                            (*(*rcx_84 + 0x150))(rcx_84, &arg_8, 2)
                            int64_t* rcx_85 = r15[1]
                            arg_8 = 0x20
                            (*(*rcx_85 + 0x150))(rcx_85, &arg_8, 2)
                        else if (rcx_75 != 0)
                            if (((rcx_75 - 2) & 0xfffffff5) != 0 || rcx_75 == 0xa)
                                int64_t* rcx_76 = r15[1]
                                arg_8 = 0x2c
                                (*(*rcx_76 + 0x150))(rcx_76, &arg_8, 2)
                            
                            if ((((rcx_75 - 2) & 0xfffffff5) == 0 && rcx_75 != 0xa)
                                    || r15[4].d != 0)
                                sub_14067f880(r15[1])
                                int32_t i_39 = *(r15 + 0x24)
                                int64_t* rdi_11 = r15[1]
                                
                                if (i_39 s> 0)
                                    uint64_t i_21 = zx.q(i_39)
                                    uint64_t i_5
                                    
                                    do
                                        int64_t rax_58 = *rdi_11
                                        arg_8 = 9
                                        (*(rax_58 + 0x150))(rdi_11, &arg_8, 2)
                                        i_5 = i_21
                                        i_21 -= 1
                                    while (i_5 != 1)
                        
                        int64_t* rcx_86 = r15[1]
                        arg_8 = 0x5b
                        (*(*rcx_86 + 0x150))(rcx_86, &arg_8, 2)
                        *(r15 + 0x24) += 1
                        int64_t rdi_13 = sx.q(r15[3].d)
                        int32_t rax_66 = (rdi_13 + 1).d
                        r15[3].d = rax_66
                        
                        if (rax_66 s> *(r15 + 0x1c))
                            sub_1406105e0(&r15[2])
                        
                        *(r15[2] + (rdi_13 << 2)) = 5
                        r15[4].d = 4
                        int64_t* rax_68 = sub_140b74a70(*(r14 + 0x10))
                        int64_t* r15_1 = nullptr
                        uint64_t var_a8 = 0
                        int32_t i_25 = rax_68[1].d
                        int64_t rbx_6 = *rax_68
                        int32_t i_33 = i_25
                        
                        if (i_25 != 0)
                            sub_14061cb30(&var_a8, i_25, 0)
                            r15_1 = var_a8
                            int64_t* rcx_90 = r15_1
                            void* rbx_7 = rbx_6 - r15_1
                            int32_t i_6
                            
                            do
                                *rcx_90 = *(rcx_90 + rbx_7)
                                void* rax_70 = *(rcx_90 + rbx_7 + 8)
                                rcx_90[1] = rax_70
                                
                                if (rax_70 != 0)
                                    *(rax_70 + 8) += 1
                                
                                rcx_90 = &rcx_90[2]
                                i_6 = i_25
                                i_25 -= 1
                            while (i_6 != 1)
                            i_25 = i_33
                        else
                            int32_t var_9c_1 = 0
                        
                        r14 = sx.q(i_25 - 1)
                        
                        if (i_25 - 1 s>= 0)
                            int64_t* rdi_16 = &r15_1[r14 * 2]
                            uint64_t temp27_1
                            
                            do
                                void*** rax_72 = j_sub_140a82f30(0x38)
                                int64_t* rcx_91 = rax_72
                                
                                if (rax_72 == 0)
                                    rcx_91 = nullptr
                                else
                                    rax_72[1].d = 1
                                    *(rax_72 + 0xc) = 1
                                    *rax_72 = &data_142d84f88
                                    rax_72[2] = 0
                                    rax_72[3] = 0
                                    rcx_91[4] = *rdi_16
                                    void* rax_74 = rdi_16[1]
                                    rcx_91[5] = rax_74
                                    
                                    if (rax_74 != 0)
                                        *(rax_74 + 8) += 1
                                    
                                    rcx_91[6].b = 0
                                
                                int64_t rbx_8 = sx.q(var_110.d)
                                int32_t rax_75 = (rbx_8 + 1).d
                                var_110.d = rax_75
                                
                                if (rax_75 s> var_110:4.d)
                                    sub_140610660(&var_118)
                                
                                void* rcx_95 = &var_118[rbx_8 * 2]
                                *rcx_95 = &rcx_91[2]
                                *(rcx_95 + 8) = rcx_91
                                
                                if (rcx_91 != 0)
                                    rcx_91[1].d += 1
                                    
                                    if (rcx_91 != 0)
                                        rcx_91[1].d -= 1
                                        
                                        if (rcx_91[1].d == 1)
                                            (**rcx_91)(rcx_91)
                                            int32_t temp33_1 = *(rcx_91 + 0xc)
                                            *(rcx_91 + 0xc) -= 1
                                            
                                            if (temp33_1 == 1)
                                                (*(*rcx_91 + 8))(rcx_91, 1)
                                
                                rdi_16 -= 0x10
                                temp27_1 = r14
                                r14 -= 1
                            while (temp27_1 - 1 s>= 0)
                        
                        if (i_25 != 0)
                            int64_t* rdi_17 = &r15_1[1]
                            int32_t i_7
                            
                            do
                                int64_t* rbx_10 = *rdi_17
                                
                                if (rbx_10 != 0)
                                    rbx_10[1].d -= 1
                                    
                                    if (rbx_10[1].d == 1)
                                        (**rbx_10)(rbx_10)
                                        int32_t temp24_1 = *(rbx_10 + 0xc)
                                        *(rbx_10 + 0xc) -= 1
                                        
                                        if (temp24_1 == 1)
                                            (*(*rbx_10 + 8))(rbx_10, 1)
                                
                                rdi_17 = &rdi_17[2]
                                i_7 = i_25
                                i_25 -= 1
                            while (i_7 != 1)
                        
                        if (r15_1 != 0)
                            sub_140a74f90(r15_1)
                    else
                        int32_t rcx_68 = r15[4].d
                        *(r15 + 0x24) -= 1
                        
                        if (((rcx_68 - 3) & 0xfffffff9) == 0 && rcx_68 != 9)
                            sub_14067f880(r15[1])
                            int32_t i_38 = *(r15 + 0x24)
                            int64_t* rdi_10 = r15[1]
                            
                            if (i_38 s> 0)
                                uint64_t i_20 = zx.q(i_38)
                                uint64_t i_8
                                
                                do
                                    int64_t rax_50 = *rdi_10
                                    arg_8 = 9
                                    (*(rax_50 + 0x150))(rdi_10, &arg_8, 2)
                                    i_8 = i_20
                                    i_20 -= 1
                                while (i_8 != 1)
                        else if (rcx_68 != 4)
                            sub_14067f940(r15[1])
                        
                        int64_t* rcx_72 = r15[1]
                        arg_8 = 0x5d
                        (*(*rcx_72 + 0x150))(rcx_72, &arg_8, 2)
                        r15[3].d -= 1
                        sub_140679af0(&r15[2])
                        r15[4].d = 5
                case 5
                    if (*(r14 + 0x20) == 0)
                        int64_t rbx_12 = sx.q(var_110.d)
                        *(r14 + 0x20) = 1
                        int32_t rax_85 = (rbx_12 + 1).d
                        var_110.d = rax_85
                        
                        if (rax_85 s> var_110:4.d)
                            sub_140610660(&var_118)
                        
                        void* rax_88 = &var_118[rbx_12 * 2]
                        *rax_88 = r14
                        *(rax_88 + 8) = r12_1
                        
                        if (r12_1 != 0)
                            r12_1[1].d += 1
                        
                        int32_t rcx_106 = r15[4].d
                        int64_t rax_92
                        int64_t* rcx_118
                        
                        if (*(r14 + 8) s> 1)
                            if (((rcx_106 - 2) & 0xfffffff5) != 0 || rcx_106 == 0xa)
                                int64_t* rcx_111 = r15[1]
                                arg_8 = 0x2c
                                (*(*rcx_111 + 0x150))(rcx_111, &arg_8, 2)
                            
                            sub_14067f880(r15[1])
                            int32_t i_43 = *(r15 + 0x24)
                            int64_t* rdi_19 = r15[1]
                            
                            if (i_43 s> 0)
                                uint64_t i_24 = zx.q(i_43)
                                uint64_t i_9
                                
                                do
                                    int64_t rax_95 = *rdi_19
                                    arg_8 = 9
                                    (*(rax_95 + 0x150))(rdi_19, &arg_8, 2)
                                    i_9 = i_24
                                    i_24 -= 1
                                while (i_9 != 1)
                            
                            (*(*r15 + 0x10))(r15, r14)
                            int64_t* rcx_115 = r15[1]
                            arg_8 = 0x3a
                            (*(*rcx_115 + 0x150))(rcx_115, &arg_8, 2)
                            sub_14067f880(r15[1])
                            int32_t i_44 = *(r15 + 0x24)
                            int64_t* rbx_13 = r15[1]
                            
                            if (i_44 s> 0)
                                uint64_t i_28 = zx.q(i_44)
                                uint64_t i_10
                                
                                do
                                    int64_t rax_98 = *rbx_13
                                    arg_8 = 9
                                    (*(rax_98 + 0x150))(rbx_13, &arg_8, 2)
                                    i_10 = i_28
                                    i_28 -= 1
                                while (i_10 != 1)
                                rbx_13 = r15[1]
                            
                            rcx_118 = rbx_13
                            arg_8 = 0x7b
                            rax_92 = *rbx_13
                        else
                            if (rcx_106 != 0)
                                if (((rcx_106 - 2) & 0xfffffff5) != 0 || rcx_106 == 0xa)
                                    int64_t* rcx_107 = r15[1]
                                    arg_8 = 0x2c
                                    (*(*rcx_107 + 0x150))(rcx_107, &arg_8, 2)
                                
                                if ((((rcx_106 - 2) & 0xfffffff5) == 0 && rcx_106 != 0xa)
                                        || r15[4].d != 0)
                                    sub_14067f880(r15[1])
                                    int32_t i_42 = *(r15 + 0x24)
                                    int64_t* rdi_18 = r15[1]
                                    
                                    if (i_42 s> 0)
                                        uint64_t i_23 = zx.q(i_42)
                                        uint64_t i_11
                                        
                                        do
                                            int64_t rax_91 = *rdi_18
                                            arg_8 = 9
                                            (*(rax_91 + 0x150))(rdi_18, &arg_8, 2)
                                            i_11 = i_23
                                            i_23 -= 1
                                        while (i_11 != 1)
                            
                            rcx_118 = r15[1]
                            arg_8 = 0x7b
                            rax_92 = *rcx_118
                        
                        (*(rax_92 + 0x150))(rcx_118, &arg_8, 2)
                        *(r15 + 0x24) += 1
                        int64_t rdi_20 = sx.q(r15[3].d)
                        int32_t rax_99 = (rdi_20 + 1).d
                        r15[3].d = rax_99
                        
                        if (rax_99 s> *(r15 + 0x1c))
                            sub_1406105e0(&r15[2])
                        
                        *(r15[2] + (rdi_20 << 2)) = 6
                        r15[4].d = 2
                        int64_t* rcx_120 = *(r14 + 0x10)
                        void* var_b8 = nullptr
                        int32_t i_32 = 0
                        void* var_e8 = nullptr
                        int32_t i_31 = 0
                        int64_t* rax_102 = (**rcx_120)(rcx_120)
                        int64_t* r12_2 = rax_102[1]
                        void* rbx_14 = *rax_102
                        arg_8.q = r12_2
                        
                        if (r12_2 != 0)
                            r12_2[1].d += 1
                        
                        sub_140666260(rbx_14, &var_b8)
                        EmitDataAndRelocs(rbx_14, &var_e8)
                        int32_t i_30 = i_31
                        r14 = zx.q(i_30 - 1)
                        
                        if (r14.d s>= 0)
                            int64_t rax_104 = sx.q(r14.d) << 4
                            int64_t* rsi_6 = var_e8 + rax_104
                            int64_t* r15_3 = var_b8 + rax_104
                            int32_t temp30_1
                            
                            do
                                void*** rax_105 = j_sub_140a82f30(0x38)
                                int64_t* rbx_15 = rax_105
                                
                                if (rax_105 == 0)
                                    rbx_15 = nullptr
                                else
                                    rax_105[1].d = 1
                                    *(rax_105 + 0xc) = 1
                                    *rax_105 = &data_142d84f88
                                    sub_140596d10(&rax_105[2], r15_3)
                                    rbx_15[4] = *rsi_6
                                    void* rax_106 = rsi_6[1]
                                    rbx_15[5] = rax_106
                                    
                                    if (rax_106 != 0)
                                        *(rax_106 + 8) += 1
                                    
                                    rbx_15[6].b = 0
                                
                                int64_t rbx_16 = sx.q(var_110.d)
                                int32_t rax_107 = (rbx_16 + 1).d
                                var_110.d = rax_107
                                
                                if (rax_107 s> var_110:4.d)
                                    sub_140610660(&var_118)
                                
                                void* rcx_128 = &var_118[rbx_16 * 2]
                                *rcx_128 = &rbx_15[2]
                                *(rcx_128 + 8) = rbx_15
                                
                                if (rbx_15 != 0)
                                    rbx_15[1].d += 1
                                    
                                    if (rbx_15 != 0)
                                        rbx_15[1].d -= 1
                                        
                                        if (rbx_15[1].d == 1)
                                            (**rbx_15)(rbx_15)
                                            int32_t temp34_1 = *(rbx_15 + 0xc)
                                            *(rbx_15 + 0xc) -= 1
                                            
                                            if (temp34_1 == 1)
                                                (*(*rbx_15 + 8))(rbx_15, 1)
                                
                                r15_3 -= 0x10
                                rsi_6 -= 0x10
                                temp30_1 = r14.d
                                r14 = zx.q(r14.d - 1)
                            while (temp30_1 - 1 s>= 0)
                            r12_2 = arg_8.q
                        
                        if (r12_2 != 0)
                            r12_2[1].d -= 1
                            
                            if (r12_2[1].d == 1)
                                (**r12_2)(r12_2)
                                int32_t temp21_1 = *(r12_2 + 0xc)
                                *(r12_2 + 0xc) -= 1
                                
                                if (temp21_1 == 1)
                                    (*(*r12_2 + 8))(r12_2, 1)
                        
                        if (i_30 != 0)
                            void* rdi_22 = var_e8 + 8
                            int32_t i_12
                            
                            do
                                int64_t* rbx_18 = *rdi_22
                                
                                if (rbx_18 != 0)
                                    rbx_18[1].d -= 1
                                    
                                    if (rbx_18[1].d == 1)
                                        (**rbx_18)(rbx_18)
                                        int32_t temp29_1 = *(rbx_18 + 0xc)
                                        *(rbx_18 + 0xc) -= 1
                                        
                                        if (temp29_1 == 1)
                                            (*(*rbx_18 + 8))(rbx_18, 1)
                                
                                rdi_22 += 0x10
                                i_12 = i_30
                                i_30 -= 1
                            while (i_12 != 1)
                        
                        void* rax_117 = var_e8
                        
                        if (rax_117 != 0)
                            sub_140a74f90(rax_117)
                        
                        int32_t i_29 = i_32
                        void* rsi_7 = var_b8
                        void* rbx_19 = rsi_7
                        
                        if (i_29 != 0)
                            int32_t i_13
                            
                            do
                                int64_t rcx_136 = *rbx_19
                                
                                if (rcx_136 != 0)
                                    sub_140a74f90(rcx_136)
                                
                                rbx_19 += 0x10
                                i_13 = i_29
                                i_29 -= 1
                            while (i_13 != 1)
                        
                        if (rsi_7 != 0)
                            sub_140a74f90(rsi_7)
                    else
                        sub_14067f880(r15[1])
                        *(r15 + 0x24) -= 1
                        int32_t i_41 = *(r15 + 0x24)
                        int64_t* rbx_11 = r15[1]
                        
                        if (i_41 s> 0)
                            uint64_t i_27 = zx.q(i_41)
                            uint64_t i_14
                            
                            do
                                int64_t rax_83 = *rbx_11
                                arg_8 = 9
                                (*(rax_83 + 0x150))(rbx_11, &arg_8, 2)
                                i_14 = i_27
                                i_27 -= 1
                            while (i_14 != 1)
                            rbx_11 = r15[1]
                        
                        arg_8 = 0x7d
                        (*(*rbx_11 + 0x150))(rbx_11, &arg_8, 2)
                        r15[3].d -= 1
                        sub_140679af0(&r15[2])
                        r15[4].d = 3
        
        if (r12_1 != 0)
            r12_1[1].d -= 1
            
            if (r12_1[1].d == 1)
                (**r12_1)(r12_1)
                int32_t temp7_1 = *(r12_1 + 0xc)
                *(r12_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*r12_1 + 8))(r12_1, 1)
        
        r15 = arg2
    while (var_110.d s> 0)

if (arg3 == 0)
    r14.b = 1
else
    r14 = zx.q((*(*r15 + 8))(r15))

int32_t i_26 = var_110.d

if (i_26 != 0)
    void* rdi_24 = &var_118[1]
    int32_t i_15
    
    do
        int64_t* rbx_20 = *rdi_24
        
        if (rbx_20 != 0)
            rbx_20[1].d -= 1
            
            if (rbx_20[1].d == 1)
                (**rbx_20)(rbx_20)
                int32_t temp5_1 = *(rbx_20 + 0xc)
                *(rbx_20 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_20 + 8))(rbx_20, 1)
        
        rdi_24 += 0x10
        i_15 = i_26
        i_26 -= 1
    while (i_15 != 1)

int64_t* rcx_143 = var_118

if (rcx_143 != 0)
    sub_140a74f90(rcx_143)

return zx.q(r14.b)
