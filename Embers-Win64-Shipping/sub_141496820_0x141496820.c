// 函数: sub_141496820
// 地址: 0x141496820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0x8c)
void* rbx = arg1
int32_t rax_1 = (1 << (data_1439c7a34).b) - 1
uint64_t rsi = arg2

if (rdi != rax_1)
    *(arg2 + 0x8c) = rax_1
    
    if (*(arg2 + 0x14) u> 0)
        void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_2 = &rdx_2[3]
        
        if (rax_2 u> *(rsi + 0x38))
            sub_140b0e3d0(rsi + 0x30, 0x20)
            rdx_2 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
            rax_2 = &rdx_2[3]
        
        *(rsi + 0x30) = rax_2
        int64_t* rax_3 = *(rsi + 8)
        *(rsi + 0x14) += 1
        rbx = arg1
        *rax_3 = rdx_2
        int32_t rax_4 = *(rsi + 0x8c)
        *(rsi + 8) = &rdx_2[1]
        rdx_2[1] = 0
        *rdx_2 = &data_142f11588
        rdx_2[2].d = rax_4
    else
        *(arg2 + 0x90) = rax_1

int64_t* r15 = &data_143ec4c60
int64_t* var_70 = &data_143ec4c60
void* result = &data_143f02b98
char arg_18

if (rsi != &data_143f02b98)
    arg_18 = 0
else
    result = sub_140b011d0()
    
    if (result.b == 0 || (data_1439c7a0e == 0 && data_143f01c92 != 0))
        arg_18 = 0
    else
        result = data_143ed92f8
        arg_18 = 1
        
        if (*(result + 4) == 0)
            arg_18 = 0

int32_t i_1 = 0

if (*(rbx + 0x318) s> 0)
    result = nullptr
    void* result_1 = nullptr
    int64_t* r14_1 = rsi + 0x30
    int32_t i
    
    do
        void* rcx_4 = result * 9
        int64_t rax_5 = *(rbx + 0x310)
        void* rdx_5 = rax_5 + (rcx_4 << 3)
        int64_t* rcx_5 = *(rax_5 + (rcx_4 << 3) + 0x30)
        (*(*rcx_5 + 0x10))()
        void* rcx_6 = rdx_5
        void* var_b0 = rbx
        int32_t rdx_6 = 0
        void* var_a8_1 = &rcx_5[1]
        int32_t rbx_1 = 0
        int64_t* var_a0_1 = r15
        int64_t* rdi_2 = nullptr
        void** r9_1 = nullptr
        int64_t* var_d8 = nullptr
        int32_t r8_1 = 0
        int32_t arg_20 = 0
        int32_t j = 0
        int32_t var_cc_1 = 0
        void** var_e0_1 = nullptr
        void** var_c8 = nullptr
        int32_t var_f8_1 = 0
        int32_t var_bc_1 = 0
        
        if (*(rcx_6 + 0x40) s> 0)
            int64_t* r12_1 = nullptr
            int32_t r14_2 = 0
            int32_t rsi_1 = 0
            
            do
                void* r15_1 = *(r12_1 + *(rcx_6 + 0x38))
                
                if (arg_18 == 0)
                label_141496a3e:
                    int64_t rbx_3 = sx.q(rsi_1)
                    rsi_1 = (rbx_3 + 1).d
                    
                    if (rsi_1 s> r8_1)
                        sub_14083a310(&var_c8, rbx_3.d)
                        r9_1 = var_c8
                        rcx_6 = rdx_5
                        rdx_6 = var_cc_1
                        r8_1 = var_bc_1
                        var_e0_1 = r9_1
                    
                    r9_1[rbx_3] = r15_1
                else
                    char rax_8 = (*(r15_1 + 0x570)).b
                    
                    if ((rax_8 & 0x40) == 0 || *(r15_1 + 0x534) s< 0)
                        if (*(data_143ed9310 + 4) == 0)
                            goto label_141496a3e
                    else if ((rax_8 & 0x10) == 0 && *(data_143ed9310 + 4) == 0)
                        goto label_141496a3e
                    
                    int64_t rbx_2 = sx.q(r14_2)
                    r14_2 = (rbx_2 + 1).d
                    
                    if (r14_2 s> rdx_6)
                        sub_14083a310(&var_d8, rbx_2.d)
                        rcx_6 = rdx_5
                        rdx_6 = var_cc_1
                        r8_1 = var_bc_1
                        r9_1 = var_e0_1
                        rdi_2 = var_d8
                    
                    rdi_2[rbx_2] = r15_1
                
                j += 1
                r12_1 = &r12_1[1]
            while (j s< *(rcx_6 + 0x40))
            
            arg_20 = r14_2
            rbx_1 = arg_20
            var_f8_1 = rsi_1
            rsi = arg2
            r14_1 = rsi + 0x30
        
        int64_t r12_2 = 0
        
        if (rbx_1 s> 0)
            r8_1.b = 1
            sub_141476830(&var_b0, rsi, r8_1.b)
            void*** rcx_12 = (*r14_1 + 7) & 0xfffffffffffffff8
            void* rax_10 = &rcx_12[2]
            
            if (rax_10 u> r14_1[1])
                sub_140b0e3d0(r14_1, 0x18)
                rcx_12 = (*r14_1 + 7) & 0xfffffffffffffff8
                rax_10 = &rcx_12[2]
            
            *r14_1 = rax_10
            int64_t* rax_11 = *(rsi + 8)
            *(rsi + 0x14) += 1
            void* var_f0_1
            var_f0_1.d = 0
            *rax_11 = rcx_12
            *(rsi + 8) = &rcx_12[1]
            rcx_12[1] = 0
            *rcx_12 = &data_142d549b8
            *(rsi + 0x1c4) = 0
            *(rsi + 0x178) = 0
            
            if (rbx_1 s> 0)
                int64_t r13_1 = 0
                int32_t rax_25
                
                do
                    void* r15_2 = *(rdi_2 + r13_1)
                    int32_t rax_14
                    
                    if ((*(r15_2 + 0x570) & 0x800) != 0)
                        rax_14 = *(arg1 + 0x3d0)
                    else if (*(r15_2 + 0x40) != 1)
                        void* rax_15 = *(r15_2 + 0x48)
                        
                        if (rax_15 == 0)
                            rax_14 = *(arg1 + 0x3d0)
                        else
                            rax_14 = *(rax_15 + 0xad8)
                    else
                        rax_14 = (1 << (data_1439c7a34).b) - 1
                    
                    int32_t rbx_4 = *(rsi + 0x8c)
                    
                    if (rbx_4 != rax_14)
                        bool cond:5_1 = *(rsi + 0x14) u> 0
                        *(rsi + 0x8c) = rax_14
                        
                        if (cond:5_1)
                            void*** rdx_12 = (*r14_1 + 7) & 0xfffffffffffffff8
                            void* rax_17 = &rdx_12[3]
                            
                            if (rax_17 u> r14_1[1])
                                sub_140b0e3d0(r14_1, 0x20)
                                rdx_12 = (*r14_1 + 7) & 0xfffffffffffffff8
                                rax_17 = &rdx_12[3]
                            
                            *r14_1 = rax_17
                            int64_t* rax_18 = *(rsi + 8)
                            *(rsi + 0x14) += 1
                            *rax_18 = rdx_12
                            int32_t rax_19 = *(rsi + 0x8c)
                            *(rsi + 8) = &rdx_12[1]
                            rdx_12[1] = 0
                            *rdx_12 = &data_142f11588
                            rdx_12[2].d = rax_19
                        else
                            *(rsi + 0x90) = rax_14
                    
                    if (r12_2 == 0 || *(*(r15_2 + 0x5c0) + 0x20) != r12_2)
                        r12_2 = *(*(r15_2 + 0x5c0) + 0x20)
                        int64_t var_98_1 = 0
                        int64_t var_90_1 = 0
                        
                        if (var_98_1 != 0)
                            sub_140a74f90(var_98_1)
                    
                    int128_t zmm3_1 = sub_1414a3000(r15_2, rsi, *(arg1 + 8), nullptr)
                    sub_1414b3280(r15_2, rsi, *(arg1 + 8))
                    int64_t (* var_68)(void* arg1, uint64_t arg2, char* arg3) = sub_141481dd0
                    void** var_60_1 = &var_b0
                    sub_141494750(r15_2, rsi, arg1, &var_68, zmm3_1, 1)
                    
                    if (*(rsi + 0x8c) != rbx_4)
                        bool cond:7_1 = *(rsi + 0x14) u> 0
                        *(rsi + 0x8c) = rbx_4
                        
                        if (cond:7_1)
                            void*** rdx_20 = (*r14_1 + 7) & 0xfffffffffffffff8
                            void* rax_27 = &rdx_20[3]
                            
                            if (rax_27 u> r14_1[1])
                                sub_140b0e3d0(r14_1, 0x20)
                                rdx_20 = (*r14_1 + 7) & 0xfffffffffffffff8
                                rax_27 = &rdx_20[3]
                            
                            *r14_1 = rax_27
                            int64_t* rax_28 = *(rsi + 8)
                            *(rsi + 0x14) += 1
                            *rax_28 = rdx_20
                            int32_t rax_29 = *(rsi + 0x8c)
                            *(rsi + 8) = &rdx_20[1]
                            rdx_20[1] = 0
                            *rdx_20 = &data_142f11588
                            rdx_20[2].d = rax_29
                        else
                            *(rsi + 0x90) = rbx_4
                    
                    r13_1 += 8
                    rax_25 = var_f0_1.d + 1
                    var_f0_1.d = rax_25
                while (rax_25 s< arg_20)
        
        int64_t r13_2 = 0
        
        if (var_f8_1 s> 0)
            int64_t rbx_5 = data_143ed9138
            int64_t rcx_24
            
            if (data_143de5480 == 0)
                rcx_24 = 0
            else
                uint32_t rax_26
                rax_26, r8_1 = GetCurrentThreadId()
                rcx_24.b = rax_26 != data_143de5470
            
            int32_t rax_30 = *(rbx_5 + (rcx_24 << 2))
            
            if (rax_30 != 0)
                r8_1.b = 1
                sub_141476830(&var_b0, rsi, r8_1.b)
            
            int32_t r12_3 = 0
            
            if (var_f8_1 s> 0)
                int64_t rax_31 = 0
                int64_t var_f0_2 = 0
                
                do
                    void* r15_3 = *(var_e0_1 + rax_31)
                    int32_t rax_33
                    
                    if ((*(r15_3 + 0x570) & 0x800) != 0)
                        rax_33 = *(arg1 + 0x3d0)
                    else if (*(r15_3 + 0x40) != 1)
                        void* rax_34 = *(r15_3 + 0x48)
                        
                        if (rax_34 == 0)
                            rax_33 = *(arg1 + 0x3d0)
                        else
                            rax_33 = *(rax_34 + 0xad8)
                    else
                        rax_33 = (1 << (data_1439c7a34).b) - 1
                    
                    int32_t rbx_6 = *(rsi + 0x8c)
                    
                    if (rbx_6 != rax_33)
                        bool cond:6_1 = *(rsi + 0x14) u> 0
                        *(rsi + 0x8c) = rax_33
                        
                        if (cond:6_1)
                            void*** rdx_26 = (*r14_1 + 7) & 0xfffffffffffffff8
                            void* rax_36 = &rdx_26[3]
                            
                            if (rax_36 u> r14_1[1])
                                sub_140b0e3d0(r14_1, 0x20)
                                rdx_26 = (*r14_1 + 7) & 0xfffffffffffffff8
                                rax_36 = &rdx_26[3]
                            
                            *r14_1 = rax_36
                            int64_t* rax_37 = *(rsi + 8)
                            *(rsi + 0x14) += 1
                            *rax_37 = rdx_26
                            int32_t rax_38 = *(rsi + 0x8c)
                            *(rsi + 8) = &rdx_26[1]
                            rdx_26[1] = 0
                            *rdx_26 = &data_142f11588
                            rdx_26[2].d = rax_38
                        else
                            *(rsi + 0x90) = rax_33
                    
                    if (r13_2 == 0 || *(*(r15_3 + 0x5c0) + 0x20) != r13_2)
                        r13_2 = *(*(r15_3 + 0x5c0) + 0x20)
                        int64_t var_88_1 = 0
                        int64_t var_80_1 = 0
                        
                        if (var_88_1 != 0)
                            sub_140a74f90(var_88_1)
                    
                    int128_t zmm3_2 = sub_1414a3000(r15_3, rsi, *(arg1 + 8), nullptr)
                    sub_1414b3280(r15_3, rsi, *(arg1 + 8))
                    
                    if (rax_30 == 0)
                        sub_141476830(&var_b0, rsi, r12_3 == 0)
                    
                    int64_t (* var_58)(void* arg1, uint64_t arg2, char* arg3) = sub_141481dd0
                    void** var_50_1 = &var_b0
                    sub_141494750(r15_3, rsi, arg1, &var_58, zmm3_2, 0)
                    
                    if (rax_30 == 0)
                        void*** rcx_40 = (*r14_1 + 7) & 0xfffffffffffffff8
                        void* rax_43 = &rcx_40[2]
                        
                        if (rax_43 u> r14_1[1])
                            sub_140b0e3d0(r14_1, rax_30 + 0x18)
                            rcx_40 = (*r14_1 + 7) & 0xfffffffffffffff8
                            rax_43 = &rcx_40[2]
                        
                        *r14_1 = rax_43
                        int64_t* rax_44 = *(rsi + 8)
                        *(rsi + 0x14) += 1
                        *rax_44 = rcx_40
                        *(rsi + 8) = &rcx_40[1]
                        rcx_40[1] = 0
                        *rcx_40 = &data_142d549b8
                        *(rsi + 0x1c4) = 0
                        *(rsi + 0x178) = 0
                    
                    if (*(rsi + 0x8c) != rbx_6)
                        bool cond:9_1 = *(rsi + 0x14) u> 0
                        *(rsi + 0x8c) = rbx_6
                        
                        if (cond:9_1)
                            void*** rdx_36 = (*r14_1 + 7) & 0xfffffffffffffff8
                            void* rax_46 = &rdx_36[3]
                            
                            if (rax_46 u> r14_1[1])
                                sub_140b0e3d0(r14_1, 0x20)
                                rdx_36 = (*r14_1 + 7) & 0xfffffffffffffff8
                                rax_46 = &rdx_36[3]
                            
                            *r14_1 = rax_46
                            int64_t* rax_47 = *(rsi + 8)
                            *(rsi + 0x14) += 1
                            *rax_47 = rdx_36
                            int32_t rax_48 = *(rsi + 0x8c)
                            *(rsi + 8) = &rdx_36[1]
                            rdx_36[1] = 0
                            *rdx_36 = &data_142f11588
                            rdx_36[2].d = rax_48
                        else
                            *(rsi + 0x90) = rbx_6
                    
                    r12_3 += 1
                    rax_31 = var_f0_2 + 8
                    var_f0_2 = rax_31
                while (r12_3 s< var_f8_1)
            
            if (rax_30 != 0)
                void*** rcx_48 = (*r14_1 + 7) & 0xfffffffffffffff8
                void* rax_50 = &rcx_48[2]
                
                if (rax_50 u> r14_1[1])
                    sub_140b0e3d0(r14_1, 0x18)
                    rcx_48 = (*r14_1 + 7) & 0xfffffffffffffff8
                    rax_50 = &rcx_48[2]
                
                *r14_1 = rax_50
                int64_t* rax_51 = *(rsi + 8)
                *(rsi + 0x14) += 1
                *rax_51 = rcx_48
                *(rsi + 8) = &rcx_48[1]
                rcx_48[1] = 0
                *rcx_48 = &data_142d549b8
                *(rsi + 0x1c4) = 0
                *(rsi + 0x178) = 0
        
        int64_t* rbx_9 = (*r14_1 + 7) & 0xfffffffffffffff8
        int64_t rax_54 = rcx_5[1]
        void* rcx_52 = &rbx_9[1]
        arg_20.q = rax_54
        
        if (rcx_52 u> r14_1[1])
            sub_140b0e3d0(r14_1, 0x10)
            rax_54 = arg_20.q
            rbx_9 = (*r14_1 + 7) & 0xfffffffffffffff8
            rcx_52 = &rbx_9[1]
        
        *r14_1 = rcx_52
        *rbx_9 = rax_54
        void*** rcx_56 = (*r14_1 + 7) & 0xfffffffffffffff8
        void* rax_55 = &rcx_56[5]
        
        if (rax_55 u> r14_1[1])
            sub_140b0e3d0(r14_1, 0x30)
            rcx_56 = (*r14_1 + 7) & 0xfffffffffffffff8
            rax_55 = &rcx_56[5]
        
        *r14_1 = rax_55
        i = i_1 + 1
        void**** rax_56 = *(rsi + 8)
        *(rsi + 0x14) += 1
        i_1 = i
        *rax_56 = rcx_56
        *(rsi + 8) = &rcx_56[1]
        rcx_56[1] = 0
        *rcx_56 = &data_142d549c8
        rcx_56[3] = rbx_9
        result = result_1 + 1
        rbx = arg1
        rcx_56[2].d = 1
        rcx_56[4].d = 0
        result_1 = result
        r15 = var_70
    while (i s< *(rbx + 0x318))

if (*(rsi + 0x8c) != rdi)
    bool cond:0_1 = *(rsi + 0x14) u> 0
    *(rsi + 0x8c) = rdi
    
    if (not(cond:0_1))
        *(rsi + 0x90) = rdi
        return result
    
    void*** rdx_41 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_59 = &rdx_41[3]
    
    if (rax_59 u> *(rsi + 0x38))
        sub_140b0e3d0(rsi + 0x30, 0x20)
        rdx_41 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
        rax_59 = &rdx_41[3]
    
    *(rsi + 0x30) = rax_59
    void**** rax_60 = *(rsi + 8)
    *(rsi + 0x14) += 1
    *rax_60 = rdx_41
    result = zx.q(*(rsi + 0x8c))
    *(rsi + 8) = &rdx_41[1]
    rdx_41[1] = 0
    *rdx_41 = &data_142f11588
    rdx_41[2].d = result.d

return result
