// 函数: ?CheckSrcTarg@MRE@@IEAAXPEAUFI@@KKH@Z
// 地址: 0x141772350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rax_2 = sx.q(arg2)
int32_t var_100 = arg4
int64_t* rsi_2 = (rax_2 << 4) + *(arg3 + 0x88)
int64_t rdx = rax_2 * 3
int64_t rax_3 = arg1[4]
int32_t r14 = *(rax_3 + (rdx << 3) + 4)
int32_t* r12 = rax_3 + (rdx << 3)
int32_t rax_4 = *(rax_3 + (rdx << 3) + 0x14)
void* rbx = *(r12 + 8)
int32_t i_7 = r12[4]
int32_t rbx_1

if (rax_4 s< 0)
    if (i_7 != 0)
        int32_t i
        
        do
            *(rbx + 0x48) = 0
            int64_t rcx_2 = *(rbx + 0x40)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            sub_140597460(rbx)
            rbx += 0x50
            i = i_7
            i_7 -= 1
        while (i != 1)
        rax_4 = r12[5]
    
    r12[4] = 0
    rbx_1 = 0
    
    if (rax_4 != 0)
        sub_1405a5310(&r12[2], 0)
        rbx_1 = r12[4]
else
    if (i_7 != 0)
        int32_t i_1
        
        do
            *(rbx + 0x48) = 0
            int64_t rcx = *(rbx + 0x40)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            sub_140597460(rbx)
            rbx += 0x50
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
    
    r12[4] = 0
    rbx_1 = 0

if (r14 + 1 s> rbx_1)
    r12[4] = r14 + 1
    int32_t i_8 = r14 + 1 - rbx_1
    
    if (r14 + 1 s> r12[5])
        sub_1405c5060(&r12[2])
    
    int64_t* r8_2 = sx.q(rbx_1) * 0x50 + *(r12 + 8)
    
    if (i_8 != 0)
        int64_t* rdx_3 = &r8_2[4]
        int32_t i_2
        
        do
            *r8_2 = 0
            int64_t* rcx_6 = &rdx_3[-2]
            rdx_3[-3] = 0
            r8_2 = &r8_2[0xa]
            *rdx_3 = 0
            rdx_3[1].d = 0
            *(rdx_3 + 0xc) = 0x80
            int64_t* rax_6 = *rdx_3
            rdx_3 = &rdx_3[0xa]
            
            if (rax_6 != 0)
                rcx_6 = rax_6
            
            *rcx_6 = 0
            rcx_6[1] = 0
            rdx_3[-8].d = 0xffffffff
            *(rdx_3 - 0x3c) = 0
            rdx_3[-6] = 0
            rdx_3[-5].d = 0
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
else if (r14 + 1 s< rbx_1)
    arg4.b = 1
    sub_14177d9e0(&r12[2], r14 + 1, rbx_1 - (r14 + 1), arg4.b)

*r12 = 0xffffffff
int64_t r15 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t i_3 = 0
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
int64_t* rcx_8 = *rsi_2
int64_t rax_7 = sx.q(rsi_2[1].d)
int64_t var_130 = 0
int32_t var_124 = 0
int64_t* var_e0 = rcx_8
void* rax_8 = &rcx_8[rax_7]
int64_t var_90

if (rcx_8 != rax_8)
    void* rsi_3 = arg3
    int64_t* rdi_1 = rsi_3 + 0x38
    
    do
        int64_t* rbx_3 = *rcx_8
        int32_t var_108
        sub_140865c40(rdi_1, &var_108, rbx_3)
        int64_t rax_9 = sx.q(var_108)
        int64_t rcx_10
        
        if (rax_9.d == 0xffffffff)
            rcx_10 = 0
        else
            rcx_10 = *rdi_1 + rax_9 * 0x18
        
        int64_t rax_11 = rcx_10 + 8
        
        if (rcx_10 == 0)
            rax_11 = 0
        
        if (rax_11 != 0)
            int32_t var_104
            sub_140865c40(rdi_1, &var_104, rbx_3)
            int64_t rax_12 = sx.q(var_104)
            void* const rcx_12
            
            if (rax_12.d == 0xffffffff)
                rcx_12 = nullptr
            else
                rcx_12 = *rdi_1 + rax_12 * 0x18
            
            char rdx_8 = *(rbx_3 + 0xc)
            int64_t* rax_14 = nullptr
            int64_t rdi_2 = sx.q(*(rcx_12 + 8))
            
            if (rdx_8 u>= 2)
                rax_14 = rbx_3
            
            char r8_6
            
            if (rax_14 == 0)
                r8_6 = 0
            else
                int64_t* rcx_13 = nullptr
                
                if (rdx_8 u>= 1)
                    rcx_13 = rbx_3
                
                if (rcx_13 == 0)
                    r8_6 = 0
                else
                    int64_t* rax_15 = nullptr
                    
                    if (*(rcx_13 + 0xc) u>= 2)
                        rax_15 = rcx_13
                    
                    if (rax_15 == 0 || *(sx.q(rax_15[1].d) + *(*rax_15 + 0x398)) != 4)
                        r8_6 = 0
                    else
                        r8_6 = 1
            
            void var_60
            
            if (var_90.d == var_64)
            label_141772694:
                
                if (r8_6 != 0)
                    int32_t rcx_19 = var_124
                    int64_t i_5 = sx.q(i_3)
                    i_3 = (i_5 + 1).d
                    int32_t i_4 = i_3
                    
                    if (i_3 s> rcx_19)
                        sub_1405a4cf0(&var_130)
                        rcx_19 = var_124
                        r15 = var_130
                        i_4 = i_3
                    
                    *(r15 + (i_5 << 2)) = rdi_2.d
                    
                    while (i_3 != 0)
                        int32_t rbx_4 = i_3 - 1
                        int64_t rdx_13 = sx.q(*(r15 + (sx.q(rbx_4) << 2)))
                        int32_t* r12_2 = rdx_13 * 0x58 + *arg1
                        int64_t* rdi_5 = (rdx_13 << 5) + *(rsi_3 + 8)
                        int32_t var_fc_1 = rdx_13.d
                        int32_t var_118 = rdx_13.d
                        
                        if (rbx_4 s> i_3)
                            int32_t rbx_5 = rbx_4 - i_3
                            int64_t i_6 = sx.q(i_3)
                            i_3 = i_6.d + rbx_5
                            i_4 = i_3
                            
                            if (i_3 s> rcx_19)
                                sub_1405a4cf0(&var_130)
                                r15 = var_130
                                i_4 = i_3
                            
                            memset(r15 + (i_6 << 2), 0, sx.q(rbx_5) << 2)
                            rsi_3 = arg3
                        else if (rbx_4 s< i_3)
                            int32_t rax_25 = i_3 - rbx_4
                            
                            if (i_3 != rbx_4)
                                i_3 -= rax_25
                                i_4 = i_3
                                
                                if (i_3 != rbx_4)
                                    memmove(r15 + (sx.q(rbx_4) << 2), 
                                        r15 + (sx.q(rax_25 + rbx_4) << 2), (i_3 - rbx_4) << 2)
                        
                        void var_c8
                        sub_14077a5e0(&var_98, &var_c8, &var_118, nullptr)
                        int32_t* rcx_28 = *rdi_5
                        int32_t* var_f0_1 = rcx_28
                        int64_t var_e8_1 = 0
                        uint64_t rdx_18 = sx.q(rdi_5[1].d) << 2 u>> 2
                        
                        if (rcx_28 u> &rcx_28[rdi_5[1]])
                            rdx_18 = 0
                        
                        if (rdx_18 != 0)
                            int64_t* r11_1 = arg1
                            int64_t rax_70
                            
                            do
                                int64_t rdx_19 = sx.q(*rcx_28)
                                int32_t* rsi_4 = *(rsi_3 + 0x18) + rdx_19 * 0x18
                                int32_t* r15_1 = r11_1[2] + (rdx_19 << 3)
                                
                                if (rsi_4[2] != var_100 || *r15_1 s>= 0)
                                    r15 = var_130
                                    rsi_3 = arg3
                                else
                                    int32_t rcx_30 = *rsi_4
                                    int32_t r14_1 = -1
                                    int32_t rax_33 = rsi_4[1]
                                    
                                    if (rcx_30 == var_fc_1)
                                        r14_1 = rax_33
                                    
                                    int32_t rbx_6 = *r12_2
                                    
                                    if (rax_33 == var_fc_1)
                                        r14_1 = rcx_30
                                    
                                    int32_t rbx_7
                                    
                                    while (true)
                                        int32_t rax_36
                                        
                                        if (r12_2[4] != r12_2[0xf])
                                            void* rcx_31 = *(r12_2 + 0x48)
                                            void* r8_12 = &r12_2[0x10]
                                            
                                            if (rcx_31 != 0)
                                                r8_12 = rcx_31
                                            
                                            rax_36 = *(r8_12
                                                + (((sx.q(r12_2[0x14]) - 1) & sx.q(rbx_6)) << 2))
                                        
                                        if (r12_2[4] == r12_2[0xf] || rax_36 == 0xffffffff)
                                        label_141772897:
                                            rax_36 = -1
                                        else
                                            int64_t r8_13 = *(r12_2 + 8)
                                            
                                            while (true)
                                                int64_t rdx_24 = sx.q(rax_36) * 3
                                                
                                                if (*(r8_13 + (rdx_24 << 2)) == rbx_6)
                                                    break
                                                
                                                rax_36 = *(r8_13 + (rdx_24 << 2) + 4)
                                                
                                                if (rax_36 == 0xffffffff)
                                                    goto label_141772897
                                        
                                        rbx_7 = *r12_2
                                        
                                        if (rax_36 == 0xffffffff)
                                            break
                                        
                                        rbx_6 = rbx_7 + 1
                                        *r12_2 = rbx_6
                                    
                                    var_118 = rbx_7
                                    
                                    if (r14_1 != 0xffffffff)
                                        int64_t rcx_33 = sx.q(r14_1)
                                        void* r9_1 = rcx_33 * 0x58 + *r11_1
                                        int64_t* rdx_25 = *((rcx_33 << 5) + *(arg3 + 8) + 0x10)
                                        int64_t* rax_38 = nullptr
                                        char r8_15 = *(rdx_25 + 0xc)
                                        
                                        if (r8_15 u>= 2)
                                            rax_38 = rdx_25
                                        
                                        if (rax_38 != 0)
                                            int64_t* rcx_35 = nullptr
                                            
                                            if (r8_15 u>= 1)
                                                rcx_35 = rdx_25
                                            
                                            if (rcx_35 != 0)
                                                int64_t* rax_39 = nullptr
                                                
                                                if (*(rcx_35 + 0xc) u>= 2)
                                                    rax_39 = rcx_35
                                                
                                                if (rax_39 != 0 &&
                                                        *(sx.q(rax_39[1].d) + *(*rax_39 + 0x398)) == 4)
                                                    int32_t r11_3 = *(r9_1 + 0x10) - *(r9_1 + 0x3c)
                                                    
                                                    while (true)
                                                        if (r11_3 == 0)
                                                        label_141772997:
                                                            
                                                            if (r12_2[4] == r12_2[0xf])
                                                                break
                                                            
                                                            void* rcx_39 = *(r12_2 + 0x48)
                                                            void* r8_18 = &r12_2[0x10]
                                                            
                                                            if (rcx_39 != 0)
                                                                r8_18 = rcx_39
                                                            
                                                            int32_t rax_45 = *(r8_18 + (((
                                                                sx.q(r12_2[0x14]) - 1) & sx.q(rbx_7))
                                                                << 2))
                                                            
                                                            if (rax_45 == 0xffffffff)
                                                                break
                                                            
                                                            int64_t r8_19 = *(r12_2 + 8)
                                                            
                                                            while (true)
                                                                int64_t rdx_34 = sx.q(rax_45) * 3
                                                                
                                                                if (*(r8_19 + (rdx_34 << 2)) == rbx_7)
                                                                    break
                                                                
                                                                rax_45 = *(r8_19 + (rdx_34 << 2) + 4)
                                                                
                                                                if (rax_45 == 0xffffffff)
                                                                    goto label_1417729f9
                                                            
                                                            if (rax_45 == 0xffffffff)
                                                                break
                                                        else
                                                            void* rcx_37 = *(r9_1 + 0x48)
                                                            void* r8_16 = r9_1 + 0x40
                                                            
                                                            if (rcx_37 != 0)
                                                                r8_16 = rcx_37
                                                            
                                                            int32_t rax_42 = *(r8_16 + (((
                                                                sx.q(*(r9_1 + 0x50)) - 1) & sx.q(rbx_7))
                                                                << 2))
                                                            
                                                            if (rax_42 == 0xffffffff)
                                                                goto label_141772997
                                                            
                                                            int64_t r8_17 = *(r9_1 + 8)
                                                            
                                                            while (true)
                                                                int64_t rdx_30 = sx.q(rax_42) * 3
                                                                
                                                                if (*(r8_17 + (rdx_30 << 2)) == rbx_7)
                                                                    break
                                                                
                                                                rax_42 = *(r8_17 + (rdx_30 << 2) + 4)
                                                                
                                                                if (rax_42 == 0xffffffff)
                                                                    goto label_141772997
                                                            
                                                            if (rax_42 == 0xffffffff)
                                                                goto label_141772997
                                                        
                                                        rbx_7 += 1
                                                        var_118 = rbx_7
                                    
                                label_1417729f9:
                                    int32_t rax_46 = *r12
                                    
                                    if (rbx_7 s>= rax_46)
                                        rax_46 = rbx_7
                                    
                                    *r12 = rax_46
                                    void var_c4
                                    sub_14077a5e0(&r12_2[2], &var_c4, &var_118, nullptr)
                                    *r15_1 = rbx_7
                                    int32_t rax_47 = *r12_2
                                    
                                    if (rbx_7 == rax_47 && r8_6 == 1)
                                        *r12_2 = rax_47 + 1
                                    
                                    int64_t rax_49 = sx.q(r15_1[1])
                                    
                                    if (rax_49.d s< 0 || rax_49.d s>= r12[4])
                                        rsi_3 = arg3
                                        r15 = var_130
                                    else
                                        int64_t r9_2 = sx.q(*r15_1)
                                        int64_t rbx_9 = rax_49 * 0x50
                                        int64_t* r10_2 = *(r12 + 8) + rbx_9
                                        
                                        if (r10_2[1].d == *(r10_2 + 0x34))
                                        label_141772ab7:
                                            int64_t var_d8 = 0
                                            int64_t* var_a0_1 = &var_d8
                                            int64_t var_d0_1 = 0
                                            int32_t* var_a8 = r15_1
                                            void var_c0
                                            sub_14175da80(r10_2, &var_c0, &var_a8, nullptr)
                                            int64_t rcx_47 = var_d8
                                            
                                            if (rcx_47 != 0)
                                                sub_140a74f90(rcx_47)
                                        else
                                            void* rcx_43 = r10_2[8]
                                            void* r8_21 = &r10_2[7]
                                            
                                            if (rcx_43 != 0)
                                                r8_21 = rcx_43
                                            
                                            int32_t rax_51 =
                                                *(r8_21 + (((sx.q(r10_2[9].d) - 1) & r9_2) << 2))
                                            
                                            if (rax_51 == 0xffffffff)
                                                goto label_141772ab7
                                            
                                            int64_t rdx_39 = *r10_2
                                            
                                            while (true)
                                                int32_t* rcx_45 = sx.q(rax_51) << 5
                                                
                                                if (*(rcx_45 + rdx_39) == r9_2.d)
                                                    break
                                                
                                                rax_51 = *(rcx_45 + rdx_39 + 0x18)
                                                
                                                if (rax_51 == 0xffffffff)
                                                    goto label_141772ab7
                                            
                                            if (rax_51 == 0xffffffff)
                                                goto label_141772ab7
                                        
                                        int64_t rsi_5 = *(rsi_4 + 0x10)
                                        int64_t* r9_4 = *(r12 + 8) + rbx_9
                                        int32_t* rdx_44
                                        
                                        if (r9_4[1].d == *(r9_4 + 0x34))
                                        label_141772b4e:
                                            rdx_44 = nullptr
                                        else
                                            void* rdx_41 = r9_4[8]
                                            void* r8_23 = &r9_4[7]
                                            int64_t r10_3 = sx.q(*r15_1)
                                            
                                            if (rdx_41 != 0)
                                                r8_23 = rdx_41
                                            
                                            int32_t rax_53 =
                                                *(r8_23 + (((sx.q(r9_4[9].d) - 1) & r10_3) << 2))
                                            
                                            if (rax_53 == 0xffffffff)
                                            label_141772b4e_1:
                                                rdx_44 = nullptr
                                            else
                                                while (true)
                                                    rdx_44 = (sx.q(rax_53) << 5) + *r9_4
                                                    
                                                    if (*rdx_44 == r10_3.d)
                                                        break
                                                    
                                                    rax_53 = rdx_44[6]
                                                    
                                                    if (rax_53 == 0xffffffff)
                                                        goto label_141772b4e_2
                                                
                                                if (rax_53 == 0xffffffff)
                                                label_141772b4e_2:
                                                    rdx_44 = nullptr
                                        
                                        int64_t rdi_7 = sx.q(rdx_44[4])
                                        int32_t rax_54 = (rdi_7 + 1).d
                                        rdx_44[4] = rax_54
                                        
                                        if (rax_54 s> rdx_44[5])
                                            sub_1405a4d70(&rdx_44[2])
                                        
                                        *(*(rdx_44 + 8) + (rdi_7 << 3)) = rsi_5
                                        rsi_3 = arg3
                                        
                                        if (r14_1 == 0xffffffff)
                                            r15 = var_130
                                        else
                                            int64_t rbx_11 = sx.q(r14_1)
                                            int64_t* rdx_46 = *((rbx_11 << 5) + *(rsi_3 + 8) + 0x10)
                                            int64_t* rax_57 = nullptr
                                            char r8_25 = *(rdx_46 + 0xc)
                                            
                                            if (r8_25 u>= 2)
                                                rax_57 = rdx_46
                                            
                                            if (rax_57 == 0)
                                                r15 = var_130
                                            else
                                                int64_t* rcx_54 = nullptr
                                                
                                                if (r8_25 u>= 1)
                                                    rcx_54 = rdx_46
                                                
                                                if (rcx_54 == 0)
                                                    r15 = var_130
                                                else
                                                    int64_t* rax_58 = nullptr
                                                    
                                                    if (*(rcx_54 + 0xc) u>= 2)
                                                        rax_58 = rcx_54
                                                    
                                                    if (rax_58 == 0 || *(sx.q(rax_58[1].d)
                                                            + *(*rax_58 + 0x398)) != 4)
                                                        r15 = var_130
                                                    else
                                                        void var_bc
                                                        sub_14077a5e0(rbx_11 * 0x58 + *arg1 + 8, 
                                                            &var_bc, r15_1, nullptr)
                                                        
                                                        if (var_90.d == var_64)
                                                        label_141772c61:
                                                            int64_t i_10 = sx.q(i_4)
                                                            int32_t i_9 = (i_10 + 1).d
                                                            i_4 = i_9
                                                            
                                                            if (i_9 s> var_124)
                                                                sub_1405a4cf0(&var_130)
                                                                i_4 = i_9
                                                            
                                                            r15 = var_130
                                                            *(r15 + (i_10 << 2)) = r14_1
                                                        else
                                                            void* rax_66 = &var_60
                                                            
                                                            if (var_58 != 0)
                                                                rax_66 = var_58
                                                            
                                                            int32_t rax_67 = *(rax_66
                                                                + ((sx.q(var_50 - 1) & rbx_11) << 2))
                                                            
                                                            if (rax_67 == 0xffffffff)
                                                                goto label_141772c61
                                                            
                                                            while (true)
                                                                int64_t rdx_50 = sx.q(rax_67) * 3
                                                                int64_t rcx_61 = var_98
                                                                
                                                                if (*(rcx_61 + (rdx_50 << 2)) == r14_1)
                                                                    break
                                                                
                                                                rax_67 = *(rcx_61 + (rdx_50 << 2) + 4)
                                                                
                                                                if (rax_67 == 0xffffffff)
                                                                    goto label_141772c61
                                                            
                                                            if (rax_67 == 0xffffffff)
                                                                goto label_141772c61
                                                            
                                                            r15 = var_130
                                    
                                    r11_1 = arg1
                                
                                rcx_28 = &var_f0_1[1]
                                rax_70 = var_e8_1 + 1
                                var_f0_1 = rcx_28
                                var_e8_1 = rax_70
                            while (rax_70 != rdx_18)
                            i_3 = i_4
                        
                        rcx_19 = var_124
            else
                void* rax_20 = &var_60
                
                if (var_58 != 0)
                    rax_20 = var_58
                
                int32_t rax_21 = *(rax_20 + ((sx.q(var_50 - 1) & rdi_2) << 2))
                
                if (rax_21 == 0xffffffff)
                    goto label_141772694
                
                while (true)
                    int64_t rdx_11 = sx.q(rax_21) * 3
                    int64_t rcx_18 = var_98
                    
                    if (*(rcx_18 + (rdx_11 << 2)) == rdi_2.d)
                        break
                    
                    rax_21 = *(rcx_18 + (rdx_11 << 2) + 4)
                    
                    if (rax_21 == 0xffffffff)
                        goto label_141772694
                
                if (rax_21 == 0xffffffff)
                    goto label_141772694
            rdi_1 = rsi_3 + 0x38
        
        rcx_8 = &var_e0[1]
        var_e0 = rcx_8
    while (rcx_8 != rax_8)
    
    if (r15 != 0)
        sub_140a74f90(r15)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

bool cond:1 = var_90:4.d == 0
var_90.d = 0

if (not(cond:1))
    sub_140638cc0(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
void* result = sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_70 = var_98

if (rcx_70 != 0)
    result = sub_140a74f90(rcx_70)

__security_check_cookie(rax_1 ^ &var_158)
return result
