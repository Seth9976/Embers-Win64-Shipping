// 函数: sub_1426b5430
// 地址: 0x1426b5430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg2
int16_t rax_1 = (*(*arg2 + 0x298))(arg2)
int16_t rax_2 = (*(*r13 + 0x280))(r13)
int16_t r9 = *arg4
int16_t rdi = (rax_1 + 3) & 0xfffc
int64_t var_60 = arg1
rax_2 += rdi
char var_52 = arg3
int16_t var_54 = rdi

if (rax_2 u> 2)
    rax_2 = (rax_2 + 3) & 0xfffc

int64_t* rsi_1 = arg5
int16_t var_56 = rax_2
int64_t rbx_1 = sx.q(rsi_1[1].d)
int32_t rax_3 = (rbx_1 + 1).d
rsi_1[1].d = rax_3

if (rax_3 s> *(rsi_1 + 0xc))
    sub_1405a4df0(rsi_1)

int64_t rdx_1 = *rsi_1
int64_t rcx_3 = rbx_1 * 3
*(rdx_1 + (rcx_3 << 3)) = r13.o
*(rdx_1 + (rcx_3 << 3) + 0x10) = r9.q
(*(*r13 + 0x260))(r13, arg6)
int16_t* rdi_1 = arg4
*rdi_1 += 1
void* rax_5 = sub_14272e980()
void* rdx_3 = r13[2]
int64_t result = sx.q(*(rax_5 + 0x38))

if (result.d s<= *(rdx_3 + 0x38))
    int64_t result_1 = result
    result = *(rdx_3 + 0x30)
    
    if (*(result + (result_1 << 3)) == rax_5 + 0x30)
        int32_t i = 0
        
        if (r13[0xe].d s> 0)
            int64_t r15_1 = 0
            int32_t r12_1 = 1
            
            do
                int64_t* r9_1 = r13[0xd]
                void* rcx_5 = *(r9_1 + r15_1)
                
                if (rcx_5 != 0)
                    int32_t var_a8_1 = 0x7f800000
                    arg5 = nullptr
                    void* rax_12 = sub_140d2e1f0(rcx_5, arg7, 0, 0xfffffff, 0, 0)
                    void* rdi_2 = rax_12
                    void* rax_13
                    int64_t rax_14
                    void* rdx_6
                    
                    if (rax_12 != 0)
                        rax_13 = sub_1427329a0()
                        rdx_6 = *(rdi_2 + 0x10)
                        rax_14 = sx.q(*(rax_13 + 0x38))
                    
                    if (rax_12 == 0 || rax_14.d s> *(rdx_6 + 0x38)
                            || *(*(rdx_6 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                        rdi_2 = nullptr
                    
                    *(r13[0xd] + r15_1) = rdi_2
                    int16_t rax_18 = (*(*rdi_2 + 0x298))(rdi_2)
                    int64_t rdx_7 = *rdi_2
                    int16_t rax_19 = (*(rdx_7 + 0x280))(rdi_2, rdx_7)
                    int64_t* var_60_1 = r13
                    int16_t rcx_12 = *arg4
                    char var_52_1 = arg3
                    int16_t rbx_2 = (rax_18 + 3) & 0xfffc
                    rax_19 += rbx_2
                    int16_t var_54_1 = rbx_2
                    
                    if (rax_19 u> 2)
                        rax_19 = (rax_19 + 3) & 0xfffc
                    
                    int64_t rbx_3 = sx.q(rsi_1[1].d)
                    int16_t var_56_1 = rax_19
                    int32_t rax_20 = (rbx_3 + 1).d
                    rsi_1[1].d = rax_20
                    
                    if (rax_20 s> *(rsi_1 + 0xc))
                        sub_1405a4df0(rsi_1)
                    
                    int64_t r8_4 = *rsi_1
                    int64_t rdx_9 = rbx_3 * 3
                    *(r8_4 + (rdx_9 << 3)) = rdi_2.o
                    *(r8_4 + (rdx_9 << 3) + 0x10) = rcx_12.q
                    (*(*rdi_2 + 0x260))(rdi_2, arg6)
                    rdi_1 = arg4
                    *rdi_1 += 1
                else
                    int32_t rcx_6 = r13[0xe].d
                    int32_t rax_7 = rcx_6 - i
                    
                    if (rax_7 != 1)
                        memmove(&r9_1[sx.q(i)], &r9_1[sx.q(r12_1)], (rax_7 - 1) << 3)
                        rcx_6 = r13[0xe].d
                    
                    i -= 1
                    r12_1 -= 1
                    r13[0xe].d = rcx_6 - 1
                    r15_1 -= 8
                
                i += 1
                r12_1 += 1
                r15_1 += 8
            while (i s< r13[0xe].d)
        
        int32_t i_1 = 0
        arg5.d = 0
        
        if (r13[0xc].d s> 0)
            do
                int32_t j = 0
                int64_t* r12_4 = sx.q(i_1) * 0x30 + r13[0xb]
                
                if (r12_4[3].d s> 0)
                    int64_t r15_2 = 0
                    int32_t r13_1 = 1
                    
                    do
                        int64_t* r9_2 = r12_4[2]
                        void* rcx_16 = *(r9_2 + r15_2)
                        
                        if (rcx_16 != 0)
                            int32_t var_a8_2 = 0x7f800000
                            void* rax_29 = sub_140d2e1f0(rcx_16, arg7, 0, 0xfffffff, 0, 0)
                            void* rdi_3 = rax_29
                            void* rax_30
                            void* rcx_19
                            int64_t rdx_13
                            
                            if (rax_29 != 0)
                                rax_30 = sub_14272f060()
                                rcx_19 = *(rdi_3 + 0x10)
                                rdx_13 = sx.q(*(rax_30 + 0x38))
                            
                            if (rax_29 == 0 || rdx_13.d s> *(rcx_19 + 0x38)
                                    || *(*(rcx_19 + 0x30) + (rdx_13 << 3)) != rax_30 + 0x30)
                                rdi_3 = nullptr
                            
                            *(r12_4[2] + r15_2) = rdi_3
                            int16_t rax_34 = (*(*rdi_3 + 0x298))(rdi_3)
                            int64_t rdx_14 = *rdi_3
                            int16_t rax_35 = (*(rdx_14 + 0x280))(rdi_3, rdx_14)
                            int64_t* var_60_2 = arg2
                            int16_t rcx_24 = *arg4
                            char var_52_2 = arg3
                            int16_t rbx_4 = (rax_34 + 3) & 0xfffc
                            rax_35 += rbx_4
                            int16_t var_54_2 = rbx_4
                            
                            if (rax_35 u> 2)
                                rax_35 = (rax_35 + 3) & 0xfffc
                            
                            int64_t rbx_5 = sx.q(rsi_1[1].d)
                            int16_t var_56_2 = rax_35
                            int32_t rax_36 = (rbx_5 + 1).d
                            rsi_1[1].d = rax_36
                            
                            if (rax_36 s> *(rsi_1 + 0xc))
                                sub_1405a4df0(rsi_1)
                            
                            int64_t rdx_17 = *rsi_1
                            int64_t rcx_27 = rbx_5 * 3
                            *(rdx_17 + (rcx_27 << 3)) = rdi_3.o
                            *(rdx_17 + (rcx_27 << 3) + 0x10) = rcx_24.q
                            (*(*rdi_3 + 0x260))(rdi_3, arg6)
                            *(rdi_3 + 0x59) = arg5.b
                            rdi_1 = arg4
                            *rdi_1 += 1
                        else
                            int32_t rcx_17 = r12_4[3].d
                            int32_t rax_24 = rcx_17 - j
                            
                            if (rax_24 != 1)
                                memmove(&r9_2[sx.q(j)], &r9_2[sx.q(r13_1)], (rax_24 - 1) << 3)
                                rcx_17 = r12_4[3].d
                            
                            j -= 1
                            r13_1 -= 1
                            r12_4[3].d = rcx_17 - 1
                            r15_2 -= 8
                        
                        j += 1
                        r13_1 += 1
                        r15_2 += 8
                    while (j s< r12_4[3].d)
                
                void* rbx_6 = r12_4[1]
                void* arg_8
                
                if (rbx_6 != 0)
                    void* rax_39 = sub_142738b80()
                    void* rdx_19 = *(rbx_6 + 0x10)
                    int64_t rax_40 = sx.q(*(rax_39 + 0x38))
                    
                    if (rax_40.d s<= *(rdx_19 + 0x38)
                            && *(*(rdx_19 + 0x30) + (rax_40 << 3)) == rax_39 + 0x30)
                        void* rdx_20 = *(rbx_6 + 0x70)
                        void* var_70_1 = rdx_20
                        
                        if (rdx_20 != 0)
                            int32_t rax_42 = *(rdx_20 + 0x48)
                            
                            if (rax_42 != 0)
                                int32_t r8_8 = r12_4[3].d
                                arg_8.d = r8_8
                                int32_t j_1 = 0
                                int32_t r9_3 = r8_8
                                
                                if (rax_42 s> 0)
                                    int64_t r15_3 = 0
                                    
                                    do
                                        void* rcx_30 = *(*(rdx_20 + 0x40) + r15_3)
                                        
                                        if (rcx_30 != 0)
                                            int32_t var_a8_3 = 0x7f800000
                                            void* rax_44 =
                                                sub_140d2e1f0(rcx_30, arg7, 0, 0xfffffff, 0, 0)
                                            void* rdi_4 = rax_44
                                            void* rax_45
                                            void* rcx_31
                                            int64_t rdx_22
                                            
                                            if (rax_44 != 0)
                                                rax_45 = sub_14272f060()
                                                rcx_31 = *(rdi_4 + 0x10)
                                                rdx_22 = sx.q(*(rax_45 + 0x38))
                                            
                                            if (rax_44 == 0 || rdx_22.d s> *(rcx_31 + 0x38)
                                                    || *(*(rcx_31 + 0x30) + (rdx_22 << 3))
                                                    != rax_45 + 0x30)
                                                rdi_4 = nullptr
                                            
                                            int64_t r14_1 = sx.q(r12_4[3].d)
                                            int32_t rax_47 = (r14_1 + 1).d
                                            r12_4[3].d = rax_47
                                            
                                            if (rax_47 s> *(r12_4 + 0x1c))
                                                sub_1405a4d70(&r12_4[2])
                                            
                                            *(r12_4[2] + (r14_1 << 3)) = rdi_4
                                            int16_t rax_49 = (*(*rdi_4 + 0x298))(rdi_4)
                                            int64_t rdx_24 = *rdi_4
                                            int16_t rax_50 = (*(rdx_24 + 0x280))(rdi_4, rdx_24)
                                            int64_t* var_60_3 = arg2
                                            int16_t rcx_38 = *arg4
                                            char var_52_3 = arg3
                                            int16_t rbx_7 = (rax_49 + 3) & 0xfffc
                                            rax_50 += rbx_7
                                            int16_t var_54_3 = rbx_7
                                            
                                            if (rax_50 u> 2)
                                                rax_50 = (rax_50 + 3) & 0xfffc
                                            
                                            int64_t rbx_8 = sx.q(rsi_1[1].d)
                                            int16_t var_56_3 = rax_50
                                            int32_t rax_51 = (rbx_8 + 1).d
                                            rsi_1[1].d = rax_51
                                            
                                            if (rax_51 s> *(rsi_1 + 0xc))
                                                sub_1405a4df0(rsi_1)
                                            
                                            int64_t rdx_27 = *rsi_1
                                            int64_t rcx_41 = rbx_8 * 3
                                            *(rdx_27 + (rcx_41 << 3)) = rdi_4.o
                                            *(rdx_27 + (rcx_41 << 3) + 0x10) = rcx_38.q
                                            int64_t rax_52 = *rdi_4
                                            *(rdi_4 + 0x55) |= 2
                                            (*(rax_52 + 0x260))(rdi_4, arg6)
                                            rdx_20 = var_70_1
                                            *(rdi_4 + 0x59) = arg5.b
                                            rdi_1 = arg4
                                            *rdi_1 += 1
                                        
                                        j_1 += 1
                                        r15_3 += 8
                                    while (j_1 s< *(rdx_20 + 0x48))
                                    
                                    r9_3 = r12_4[3].d
                                    r8_8 = arg_8.d
                                
                                sub_1426b6ed0(&r12_4[4], rdx_20 + 0x50, r8_8, r9_3 - r8_8)
                
                void* rcx_44 = *r12_4
                int32_t var_b0_1
                int32_t var_a8_4
                void* rbx_9
                void* r14_2
                
                if (rcx_44 != 0)
                    r14_2 = arg7
                    var_a8_4 = 0x7f800000
                    var_b0_1 = 0
                    int64_t var_88_1 = 0
                    void* rax_54 = sub_140d2e1f0(rcx_44, r14_2, 0, 0xfffffff, 0, 0)
                    rbx_9 = rax_54
                    void* rax_55
                    int64_t rax_56
                    void* rdx_31
                    
                    if (rax_54 != 0)
                        rax_55 = sub_14272e980()
                        rdx_31 = *(rbx_9 + 0x10)
                        rax_56 = sx.q(*(rax_55 + 0x38))
                    
                    if (rax_54 == 0 || rax_56.d s> *(rdx_31 + 0x38)
                            || *(*(rdx_31 + 0x30) + (rax_56 << 3)) != rax_55 + 0x30)
                        rbx_9 = nullptr
                    
                    *r12_4 = rbx_9
                    goto label_1426b5d05
                
                void* rcx_46 = r12_4[1]
                
                if (rcx_46 == 0)
                    r13 = arg2
                else
                    var_a8_4 = 0x7f800000
                    var_b0_1 = 0
                    void* rax_58 = sub_140d2e1f0(rcx_46, arg7, 0, 0xfffffff, 0, 0)
                    arg_8 = rax_58
                    rbx_9 = rax_58
                    void* rax_59
                    int64_t rax_60
                    void* rdx_33
                    
                    if (rax_58 != 0)
                        rax_59 = sub_1427393b0()
                        rdx_33 = *(rbx_9 + 0x10)
                        rax_60 = sx.q(*(rax_59 + 0x38))
                    
                    if (rax_58 == 0 || rax_60.d s> *(rdx_33 + 0x38)
                            || *(*(rdx_33 + 0x30) + (rax_60 << 3)) != rax_59 + 0x30)
                        rbx_9 = nullptr
                        arg_8 = nullptr
                    
                    r12_4[1] = rbx_9
                    int32_t j_2 = 0
                    
                    if (*(rbx_9 + 0x60) s> 0)
                        void** r15_4 = nullptr
                        int32_t r13_2 = 1
                        
                        do
                            void** r9_5 = *(rbx_9 + 0x58)
                            void* rcx_48 = *(r9_5 + r15_4)
                            
                            if (rcx_48 != 0)
                                var_a8_4 = 0x7f800000
                                var_b0_1 = 0
                                void* rax_68 = sub_140d2e1f0(rcx_48, arg7, 0, 0xfffffff, 0, 0)
                                void* rbx_10 = rax_68
                                void* rax_69
                                int64_t rax_70
                                void* rdx_36
                                
                                if (rax_68 != 0)
                                    rax_69 = sub_1427329a0()
                                    rdx_36 = *(rbx_10 + 0x10)
                                    rax_70 = sx.q(*(rax_69 + 0x38))
                                
                                if (rax_68 == 0 || rax_70.d s> *(rdx_36 + 0x38)
                                        || *(*(rdx_36 + 0x30) + (rax_70 << 3)) != rax_69 + 0x30)
                                    rbx_10 = nullptr
                                
                                *(r15_4 + *(r12_4[1] + 0x58)) = rbx_10
                                int16_t rax_74 = (*(*rbx_10 + 0x298))(rbx_10)
                                int64_t rdx_37 = *rbx_10
                                int16_t rax_75 = (*(rdx_37 + 0x280))(rbx_10, rdx_37)
                                int64_t* var_60_4 = arg2
                                int16_t rcx_57 = *arg4
                                char var_52_4 = arg3
                                int16_t rdi_5 = (rax_74 + 3) & 0xfffc
                                rax_75 += rdi_5
                                int16_t var_54_4 = rdi_5
                                
                                if (rax_75 u> 2)
                                    rax_75 = (rax_75 + 3) & 0xfffc
                                
                                int64_t rdi_6 = sx.q(rsi_1[1].d)
                                int16_t var_56_4 = rax_75
                                int32_t rax_76 = (rdi_6 + 1).d
                                rsi_1[1].d = rax_76
                                
                                if (rax_76 s> *(rsi_1 + 0xc))
                                    sub_1405a4df0(rsi_1)
                                
                                int64_t rax_77 = *rsi_1
                                int64_t rcx_60 = rdi_6 * 3
                                *(rax_77 + (rcx_60 << 3)) = rbx_10.o
                                *(rax_77 + (rcx_60 << 3) + 0x10) = rcx_57.q
                                (*(*rbx_10 + 0x260))(rbx_10, arg6)
                                rdi_1 = arg4
                                *(rbx_10 + 0x59) = arg5.b
                                *rdi_1 += 1
                            else
                                int32_t rcx_49 = *(rbx_9 + 0x60)
                                int32_t rax_63 = rcx_49 - j_2
                                
                                if (rax_63 != 1)
                                    memmove(&r9_5[sx.q(j_2)], &r9_5[sx.q(r13_2)], (rax_63 - 1) << 3)
                                    rcx_49 = *(rbx_9 + 0x60)
                                
                                j_2 -= 1
                                r13_2 -= 1
                                *(rbx_9 + 0x60) = rcx_49 - 1
                                r15_4 -= 8
                            
                            rbx_9 = r12_4[1]
                            j_2 += 1
                            r13_2 += 1
                            r15_4 = &r15_4[1]
                        while (j_2 s< *(rbx_9 + 0x60))
                        
                        rbx_9 = arg_8
                    
                    r14_2 = arg7
                label_1426b5d05:
                    r13 = arg2
                    
                    if (rbx_9 != 0)
                        var_a8_4.q = r14_2
                        var_b0_1.q = arg6
                        sub_1426b5430(r13, rbx_9, arg3 + 1, rdi_1, rsi_1, 0, 0x7f800000)
                
                i_1 = arg5.d + 1
                arg5.d = i_1
            while (i_1 s< r13[0xc].d)
        
        result.w = *rdi_1 - 1
        *(r13 + 0x8c) = result.w

return result
