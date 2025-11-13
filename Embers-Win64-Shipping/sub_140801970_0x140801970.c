// 函数: sub_140801970
// 地址: 0x140801970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* r13 = *(arg1 + 0x778)
void* rsi = arg1
char* rbx = nullptr
*(arg1 + 0xc) = arg2
*(arg1 + 0x828) = arg3
void* rcx = *(arg1 + 0x780)
int32_t var_168 = 0
int32_t var_150 = 0
int64_t* var_148 = r13
void* rax_2 = sub_140852300(rcx)
int16_t* i_18 = sx.q(*(rsi + 0xc)) * 0x30 + *sub_140851dc0(rax_2)
int16_t* i_14 = i_18
void* rcx_2 = *(i_18 + 0x28)
*(rsi + 0x788) = rcx_2
uint64_t result = *(i_18 + 0x10)
*(rsi + 0x790) = result
*(rsi + 0x924) = 0
*(rsi + 0x92c) = 0
*(rsi + 0x928) = 0xffffffff

if (rcx_2 == 0)
    *(rsi + 0x24) = 4
else
    int32_t rax_4 = sub_1407fb000(rcx_2)
    void* rcx_3 = *(rsi + 0x780)
    *(rsi + 0x924) = rax_4
    void* rax_5 = sub_140852300(rcx_3)
    int64_t rdx_2 = sx.q(*(rsi + 0xc)) * 3
    result = *sub_140851dc0(rax_5)
    
    if (*(result + rdx_2 * 0x10 + 0x18) == 0)
        *(rsi + 0x24) = 4
    else
        result = sub_140834690(*(rsi + 0x788) + 0x118)
        
        if (result.b == 0)
            *(rsi + 0x24) = 4
        else if (*(*(rsi + 0x788) + 0xd8) != 1)
        label_140801a9e:
            result = sub_140852300(*(rsi + 0x780))
            int64_t rcx_9 = sx.q(*(rsi + 0xc))
            
            if (rcx_9.d s< 0 || rcx_9.d s>= *(result + 0xa0))
                *(rsi + 0x24) = 4
            else
                uint64_t* rcx_11 = (rcx_9 << 4) + *(result + 0x98)
                int64_t* rdi_2 = rcx_11[1]
                result = *rcx_11
                
                if (rdi_2 != 0)
                    rdi_2[1].d += 1
                
                void* var_160
                
                if (rsi + 0x948 == &var_160)
                label_140801b38:
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            result = (**rdi_2)(rdi_2)
                            int32_t temp4_1 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                result = (*(*rdi_2 + 8))(rdi_2, 1)
                else
                    *(rsi + 0x948) = result
                    int64_t* r14_1 = *(rsi + 0x950)
                    
                    if (rdi_2 == r14_1)
                        goto label_140801b38
                    
                    *(rsi + 0x950) = rdi_2
                    
                    if (r14_1 != 0)
                        r14_1[1].d -= 1
                        
                        if (r14_1[1].d == 1)
                            result = (**r14_1)(r14_1)
                            int32_t temp6_1 = *(r14_1 + 0xc)
                            *(r14_1 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                result = (*(*r14_1 + 8))(r14_1, 1)
                
                if (*(rsi + 0x24) != 4)
                    int64_t r14_2 = sx.q(*(rsi + 0x50))
                    int32_t i_15 = *(*(rsi + 0x788) + 0x1d8)
                    int32_t rcx_15 = *(*(rsi + 0x948) + 8)
                    
                    if (rcx_15 s> r14_2.d)
                        *(rsi + 0x50) = rcx_15
                        int32_t i_8 = rcx_15 - r14_2.d
                        
                        if (rcx_15 s> *(rsi + 0x54))
                            sub_1405a4f90(rsi + 0x48)
                        
                        int64_t* rax_15 = (r14_2 << 4) + *(rsi + 0x48)
                        
                        if (i_8 != 0)
                            int32_t i
                            
                            do
                                *rax_15 = 0
                                rax_15[1] = 0x3f800000
                                rax_15 = &rax_15[2]
                                i = i_8
                                i_8 -= 1
                            while (i != 1)
                    else if (rcx_15 s< r14_2.d && rcx_15 != r14_2.d)
                        *(rsi + 0x50) = rcx_15
                        sub_1405a5010(rsi + 0x48)
                    
                    uint64_t rax_16 = *(rsi + 0x948)
                    void* rdx_5 = &data_143ce2ed0
                    
                    if (rax_16 != -0x100)
                        rdx_5 = rax_16 + 0x100
                    
                    sub_1407e50a0(r13, rdx_5)
                    *(r13 + 0xcc) = 1
                    sub_140808700(r13)
                    sub_140808860(rsi, 1)
                    sub_1407eccf0(rsi + 0x7b8, 0)
                    int64_t zmm0_1 = *(r13 + 0x2c)
                    int32_t var_f8_1 = *(r13 + 0x34)
                    int64_t* var_108 = r13
                    int64_t var_100
                    int64_t* var_a0 = &var_100
                    var_100 = zmm0_1
                    int64_t** var_98_1 = &var_108
                    void var_130
                    sub_1407d13c0(rsi + 0x7b8, &var_130, &var_a0, nullptr)
                    sub_1407eba30(*(rsi + 0x788) + 0x38)
                    *(rsi + 0x7a0) = 0
                    
                    if (*(rsi + 0x7a4) != 0)
                        sub_1405c5570(rsi + 0x798, 0)
                    
                    sub_14080c910(rsi + 0x808, *(*(rsi + 0x788) + 0x58), 1)
                    void* rax_20 = *(rsi + 0x788)
                    void* r13_1 = *(rax_20 + 0x50)
                    void* rax_24 = sx.q(*(rax_20 + 0x58)) * 0x50 + r13_1
                    var_160 = rax_24
                    
                    if (r13_1 != rax_24)
                        char* r12_2 = nullptr
                        int64_t* r15_1 = r13_1 + 4
                        
                        do
                            int64_t* rax_26 = sub_14084c3a0(*(rsi + 0x780), *(i_14 + 0x10), *r15_1)
                            void** rdx_9 = &data_143ce2ed0
                            
                            if (r15_1 != -0xc)
                                rdx_9 = r15_1 + 0xc
                            
                            sub_1407e50a0(rax_26, rdx_9)
                            *(rax_26 + 0xcc) = 1
                            sub_140808700(rax_26)
                            int64_t rdi_4 = sx.q(*(rsi + 0x7a0))
                            int32_t rax_27 = (rdi_4 + 1).d
                            *(rsi + 0x7a0) = rax_27
                            
                            if (rax_27 s> *(rsi + 0x7a4))
                                sub_1405a4d70(rsi + 0x798)
                            
                            *(*(rsi + 0x798) + (rdi_4 << 3)) = rax_26
                            void* rcx_32 = *(rsi + 0x788)
                            int64_t* rdx_11 = *(rcx_32 + 0x1f8)
                            void* rcx_34 = &rdx_11[sx.q(*(rcx_32 + 0x200))]
                            
                            if (rdx_11 == rcx_34)
                            label_140801d79:
                                rcx_34.b = 0
                            else
                                while (*rdx_11 != *r15_1)
                                    rdx_11 = &rdx_11[1]
                                    
                                    if (rdx_11 == rcx_34)
                                        goto label_140801d79
                                
                                rcx_34.b = 1
                            
                            r13_1 += 0x50
                            r15_1 = &r15_1[0xa]
                            r12_2[*(rsi + 0x808)] = rcx_34.b
                            r12_2 = &r12_2[1]
                        while (r13_1 != var_160)
                    
                    sub_1407eba30(*(rsi + 0x788) + 0x60)
                    bool cond:3_1 = *(rsi + 0x7b4) == 0
                    *(rsi + 0x7b0) = 0
                    
                    if (not(cond:3_1))
                        sub_1405c5570(rsi + 0x7a8, 0)
                    
                    int64_t rdi_5 = sx.q(*(rsi + 0x820))
                    int32_t rcx_38 = *(*(rsi + 0x788) + 0x80)
                    
                    if (rcx_38 s> rdi_5.d)
                        *(rsi + 0x820) = rcx_38
                        
                        if (rcx_38 s> *(rsi + 0x824))
                            sub_140679a80(rsi + 0x818)
                        
                        memset(rdi_5 + *(rsi + 0x818), 0, sx.q(rcx_38 - rdi_5.d))
                    else if (rcx_38 s< rdi_5.d && rcx_38 != rdi_5.d)
                        *(rsi + 0x820) = rcx_38
                        sub_1405dac10(rsi + 0x818)
                    
                    void* rax_32 = *(rsi + 0x788)
                    void* r15_3 = *(rax_32 + 0x78)
                    void* rax_36 = sx.q(*(rax_32 + 0x80)) * 0x50 + r15_3
                    
                    if (r15_3 != rax_36)
                        int64_t* r12_3 = r15_3 + 4
                        
                        do
                            int64_t* rax_38 = sub_14084c3a0(*(rsi + 0x780), *(i_14 + 0x10), *r12_3)
                            void** rdx_14 = &data_143ce2ed0
                            
                            if (r12_3 != -0xc)
                                rdx_14 = r12_3 + 0xc
                            
                            sub_1407e50a0(rax_38, rdx_14)
                            *(rax_38 + 0xcc) = 1
                            sub_140808700(rax_38)
                            int64_t rdi_6 = sx.q(*(rsi + 0x7b0))
                            int32_t rax_39 = (rdi_6 + 1).d
                            *(rsi + 0x7b0) = rax_39
                            
                            if (rax_39 s> *(rsi + 0x7b4))
                                sub_1405a4d70(rsi + 0x7a8)
                            
                            *(*(rsi + 0x7a8) + (rdi_6 << 3)) = rax_38
                            void* rcx_48 = *(rsi + 0x788)
                            int64_t* rdx_16 = *(rcx_48 + 0x1f8)
                            void* rcx_50 = &rdx_16[sx.q(*(rcx_48 + 0x200))]
                            
                            if (rdx_16 == rcx_50)
                            label_140801f02:
                                rcx_50.b = 0
                            else
                                while (*rdx_16 != *r12_3)
                                    rdx_16 = &rdx_16[1]
                                    
                                    if (rdx_16 == rcx_50)
                                        goto label_140801f02
                                
                                rcx_50.b = 1
                            
                            r15_3 += 0x50
                            r12_3 = &r12_3[0xa]
                            rbx[*(rsi + 0x818)] = rcx_50.b
                            rbx = &rbx[1]
                        while (r15_3 != rax_36)
                        
                        rbx = nullptr
                    
                    void* rdx_17 = *(rsi + 0x788)
                    sub_140853210(rsi + 0x58, *(rdx_17 + 0x60), *(rdx_17 + 0xd8))
                    void* rdx_19 = *(rsi + 0x788)
                    sub_140853210(rsi + 0x3c0, *(rdx_19 + 0x38), *(rdx_19 + 0xd8))
                    void* rax_43 = *(rsi + 0x788)
                    
                    if (*(rax_43 + 0xd8) == 1)
                        int32_t* rax_44 = j_sub_140a82f30(0x270)
                        int32_t* rax_45
                        
                        if (rax_44 == 0)
                            rax_45 = nullptr
                        else
                            rax_45 = sub_1408427d0(rax_44)
                        
                        void* rdx_21 = *(rsi + 0x788)
                        *(rsi + 0x728) = rax_45
                        int32_t rdi_7
                        
                        if ((*(rdx_21 + 0x1a8) & 2) == 0)
                            rdi_7 = 1
                        else
                            rdi_7 = *(rdx_21 + 0x154)
                        
                        int64_t var_f0
                        __builtin_memset(&var_f0, 0, 0x2c)
                        int32_t var_c4_1 = 0x80
                        int32_t var_c0_1 = 0xffffffff
                        int32_t var_bc_1 = 0
                        int64_t var_b0_1 = 0
                        int32_t var_a8_1 = 0
                        sub_140780cc0(&var_f0, rdx_21 + 0x158)
                        void* rdx_23 = *(rsi + 0x788)
                        sub_140856740(*(rsi + 0x728), *(rdx_23 + 0x1f0), *(rdx_23 + 0xd8), 
                            *(rdx_23 + 0x150), rdi_7, &var_f0)
                        *(*(rsi + 0x728) + 8) = var_148
                        *(*(rsi + 0x728) + 0x18) = *(*(rsi + 0x788) + 0x1f0) + 0x238
                        sub_140820ac0(rsi + 0x80, *(rsi + 0x728) + 0x58, nullptr)
                        sub_140820ac0(rsi + 0x3e8, *(rsi + 0x728) + 0x58, nullptr)
                        rax_43 = *(rsi + 0x788)
                        int32_t i_1 = 0
                        
                        if (*(rax_43 + 0x1e8) s> 0)
                            int64_t rdi_8 = 0
                            
                            do
                                sub_140820ac0(
                                    *(*(*(*(rsi + 0x788) + 0x1e0) + rdi_8) + 0x28) + 0x40, 
                                    *(rsi + 0x728) + 0x58, nullptr)
                                rax_43 = *(rsi + 0x788)
                                rdi_8 += 8
                                i_1 += 1
                            while (i_1 s< *(rax_43 + 0x1e8))
                    
                    int32_t rdx_31 = *(rax_43 + 0x1d8)
                    void* r13_3 = rsi + 0x730
                    int64_t rdi_9 = sx.q(*(r13_3 + 8))
                    var_148 = r13_3
                    
                    if (rdx_31 s> rdi_9.d)
                        *(r13_3 + 8) = rdx_31
                        int32_t i_11 = rdx_31 - rdi_9.d
                        
                        if (rdx_31 s> *(r13_3 + 0xc))
                            sub_140809580(r13_3)
                        
                        void* rdi_11 = rdi_9 * 0x368 + *r13_3
                        
                        if (i_11 != 0)
                            int32_t i_2
                            
                            do
                                sub_140843230(rdi_11)
                                rdi_11 += 0x368
                                i_2 = i_11
                                i_11 -= 1
                            while (i_2 != 1)
                    else if (rdx_31 s< rdi_9.d)
                        sub_140808570(r13_3, rdx_31, rdi_9.d - rdx_31, 1)
                    
                    int64_t i_13 = sx.q(i_15)
                    int32_t r14_8 = 0
                    i_14 = i_13
                    
                    if (i_13 s> 0)
                        int64_t* rdi_13 = nullptr
                        int64_t i_3
                        
                        do
                            void* rdx_33 = *(rsi + 0x788)
                            void* rcx_67 = *(rdi_13 + *(rdx_33 + 0x1d0))
                            
                            if (rcx_67 != 0)
                                sub_140856ea0(rcx_67, 0)
                                rdx_33 = *(rsi + 0x788)
                            
                            sub_140853210(sx.q(r14_8) * 0x368 + *r13_3, 
                                *(*(rdx_33 + 0x1d0) + rdi_13), 0)
                            r14_8 += 1
                            rdi_13 = &rdi_13[0xb]
                            i_3 = i_13
                            i_13 -= 1
                        while (i_3 != 1)
                        i_13 = i_14
                    
                    int32_t* rax_54 = (*(*(rsi + 0x80) + 0x30))(rsi + 0x80, *(rsi + 0x948) + 0x10)
                    int64_t rax_55
                    
                    if (rax_54 != 0)
                        rax_55 = sx.q(*rax_54)
                    
                    int64_t rax_56
                    
                    if (rax_54 == 0 || rax_55.d == 0xffffffff)
                        rax_56 = 0
                    else
                        rax_56 = rax_55 + *(rsi + 0xa0)
                    
                    *(rsi + 0x740) = rax_56
                    int32_t* rax_58 = (*(*(rsi + 0x80) + 0x30))(rsi + 0x80, *(rsi + 0x948) + 0x38)
                    int64_t rax_59
                    
                    if (rax_58 != 0)
                        rax_59 = sx.q(*rax_58)
                    
                    int64_t rax_60
                    
                    if (rax_58 == 0 || rax_59.d == 0xffffffff)
                        rax_60 = 0
                    else
                        rax_60 = rax_59 + *(rsi + 0xa0)
                    
                    *(rsi + 0x748) = rax_60
                    int32_t* rax_62 = (*(*(rsi + 0x80) + 0x30))(rsi + 0x80, *(rsi + 0x948) + 0x60)
                    int64_t rax_63
                    
                    if (rax_62 != 0)
                        rax_63 = sx.q(*rax_62)
                    
                    int64_t rax_64
                    
                    if (rax_62 == 0 || rax_63.d == 0xffffffff)
                        rax_64 = 0
                    else
                        rax_64 = rax_63 + *(rsi + 0xa0)
                    
                    *(rsi + 0x750) = rax_64
                    int32_t* rax_66 = (*(*(rsi + 0x80) + 0x30))(rsi + 0x80, &data_14396f658)
                    int64_t rax_67
                    
                    if (rax_66 != 0)
                        rax_67 = sx.q(*rax_66)
                    
                    int64_t rax_68
                    
                    if (rax_66 == 0 || rax_67.d == 0xffffffff)
                        rax_68 = 0
                    else
                        rax_68 = rax_67 + *(rsi + 0xa0)
                    
                    *(rsi + 0x758) = rax_68
                    int32_t* rax_70 = (*(*(rsi + 0x3e8) + 0x30))(rsi + 0x3e8, &data_14396f658)
                    int64_t rax_71
                    
                    if (rax_70 != 0)
                        rax_71 = sx.q(*rax_70)
                    
                    int64_t rax_72
                    
                    if (rax_70 == 0 || rax_71.d == 0xffffffff)
                        rax_72 = 0
                    else
                        rax_72 = rax_71 + *(rsi + 0x408)
                    
                    *(rsi + 0x760) = rax_72
                    int64_t rdi_15 = sx.q(*(rsi + 0x770))
                    
                    if (i_15 s> rdi_15.d)
                        *(rsi + 0x770) = i_15
                        int32_t r14_10 = i_15 - rdi_15.d
                        
                        if (i_15 s> *(rsi + 0x774))
                            sub_1405a4d70(rsi + 0x768)
                        
                        if (r14_10 != 0)
                            __builtin_memset(*(rsi + 0x768) + (rdi_15 << 3), 0, zx.q(r14_10) << 3)
                    else if (i_15 s< rdi_15.d && i_15 != rdi_15.d)
                        *(rsi + 0x770) = i_15
                        sub_1405c53d0(rsi + 0x768)
                    
                    if (i_13 s> 0)
                        int16_t* i_20 = i_14
                        int64_t rdi_17 = 0
                        int64_t r15_4 = 0
                        
                        do
                            int64_t r14_11 = *r13_3
                            int64_t r13_4 = *(rsi + 0x768)
                            int32_t* rax_76 = (*(*(r14_11 + r15_4 + 0x28) + 0x30))(
                                r15_4 + 0x28 + r14_11, &data_14396f658)
                            int64_t rax_77
                            
                            if (rax_76 != 0)
                                rax_77 = sx.q(*rax_76)
                            
                            int64_t rax_78
                            
                            if (rax_76 == 0 || rax_77.d == 0xffffffff)
                                rax_78 = 0
                            else
                                rax_78 = rax_77 + *(r14_11 + r15_4 + 0x48)
                            
                            *(r13_4 + (rdi_17 << 3)) = rax_78
                            r15_4 += 0x368
                            r13_3 = var_148
                            rdi_17 += 1
                        while (rdi_17 s< i_20)
                        
                        rsi = arg1
                    
                    void* rdi_19 = *(rsi + 0x788)
                    int64_t* rcx_80 = nullptr
                    int64_t* var_40_1 = nullptr
                    int32_t var_34_1 = 8
                    int64_t var_80 = *(rdi_19 + 0x60)
                    int32_t var_38_1 = 2
                    int64_t var_78_1 = *(rdi_19 + 0x38)
                    int64_t* r14_12 = *(rdi_19 + 0x1d0)
                    void* r15_6 = sx.q(*(rdi_19 + 0x1d8)) * 0x58 + r14_12
                    
                    if (r14_12 != r15_6)
                        do
                            int64_t rdi_18 = sx.q(var_38_1)
                            int32_t rax_82 = (rdi_18 + 1).d
                            var_38_1 = rax_82
                            
                            if (rax_82 s> var_34_1)
                                sub_140809370(&var_80, rdi_18.d)
                                rcx_80 = var_40_1
                            
                            int64_t rax_83 = *r14_12
                            int64_t* rdx_44 = &var_80
                            
                            if (rcx_80 != 0)
                                rdx_44 = rcx_80
                            
                            r14_12 = &r14_12[0xb]
                            rdx_44[rdi_18] = rax_83
                            rcx_80 = var_40_1
                        while (r14_12 != r15_6)
                        
                        rdi_19 = *(rsi + 0x788)
                    
                    int64_t r15_7 = 0
                    int64_t* r14_13 = *(rdi_19 + 0x1e0)
                    uint64_t r12_6 = sx.q(*(rdi_19 + 0x1e8)) << 3 u>> 3
                    
                    if (r14_13 u> &r14_13[sx.q(*(rdi_19 + 0x1e8))])
                        r12_6 = 0
                    
                    if (r12_6 != 0)
                        do
                            int64_t rdi_20 = sx.q(var_38_1)
                            void* r13_5 = *r14_13
                            int32_t rax_86 = (rdi_20 + 1).d
                            var_38_1 = rax_86
                            
                            if (rax_86 s> var_34_1)
                                sub_140809370(&var_80, rdi_20.d)
                                rcx_80 = var_40_1
                            
                            int64_t* rdx_46 = &var_80
                            
                            if (rcx_80 != 0)
                                rdx_46 = rcx_80
                            
                            r14_13 = &r14_13[1]
                            r15_7 += 1
                            rdx_46[rdi_20] = *(r13_5 + 0x28)
                            rcx_80 = var_40_1
                        while (r15_7 != r12_6)
                        
                        rdi_19 = *(rsi + 0x788)
                    
                    int64_t* rax_88 = &var_80
                    int64_t* r13_6 = rsi + 0x850
                    
                    if (rcx_80 != 0)
                        rax_88 = rcx_80
                    
                    int64_t* var_90 = rax_88
                    int32_t var_88_1 = var_38_1
                    sub_14074cfd0(rdi_19, &var_90, r13_6)
                    
                    if (*(rsi + 0x84c) == 0)
                        void* rax_90 = *(rsi + 0x788)
                        
                        if ((*(rax_90 + 0x148) & 2) == 0 && *(rax_90 + 0xd8) == 0)
                            int32_t rdx_48 = *(rax_90 + 0x1c8)
                            
                            if (rdx_48 s> *(rsi + 0x944))
                                sub_140809a30(rsi + 0x930, rdx_48)
                                rax_90 = *(rsi + 0x788)
                            
                            int64_t* r12_7 = *(rax_90 + 0x1c0)
                            int64_t r13_7 = 0
                            void* rdi_22 = sx.q(*(rax_90 + 0x1c8)) << 3 u>> 3
                            
                            if (r12_7 u> &r12_7[sx.q(*(rax_90 + 0x1c8))])
                                rdi_22 = nullptr
                            
                            var_160 = rdi_22
                            
                            if (rdi_22 != 0)
                                void* rax_93 = rdi_22
                                
                                do
                                    int64_t* rdi_23 = *r12_7
                                    
                                    if (rdi_23 != 0)
                                        if ((*(*rdi_23 + 0x288))(rdi_23) != 0)
                                            int64_t* rax_97 = (*(*rdi_23 + 0x268))(rdi_23)
                                            
                                            if (rax_97 != 0)
                                                (*(*rax_97 + 8))(rax_97, *(rsi + 0x778))
                                                int64_t rdi_25 = sx.q(*(rsi + 0x940))
                                                int32_t rcx_88 = (rdi_25 + 1).d
                                                *(rsi + 0x940) = rcx_88
                                                
                                                if (rcx_88 s> *(rsi + 0x944))
                                                    sub_140809610(rsi + 0x930, rdi_25.d)
                                                
                                                void* rax_98 = *(rsi + 0x938)
                                                void* rcx_90 = rsi + 0x930
                                                
                                                if (rax_98 != 0)
                                                    rcx_90 = rax_98
                                                
                                                *(rcx_90 + (rdi_25 << 3)) = rax_97
                                        
                                        rax_93 = var_160
                                    
                                    r12_7 = &r12_7[1]
                                    r13_7 += 1
                                while (r13_7 != rax_93)
                            
                            r13_6 = rsi + 0x850
                    
                    void* rax_99 = *(rsi + 0x780)
                    int64_t* rdi_26 = *(rax_99 + 0x20)
                    
                    if (rdi_26 != 0)
                        rdi_26[1].d += 1
                    
                    uint64_t rax_100 = sub_1408522e0(*(rax_99 + 0x18))
                    
                    if (rdi_26 != 0)
                        rdi_26[1].d -= 1
                        
                        if (rdi_26[1].d == 1)
                            int64_t rdx_52 = *rdi_26
                            (*rdx_52)(rdi_26, rdx_52)
                            int32_t r14_15 = *(rdi_26 + 0xc)
                            *(rdi_26 + 0xc) -= 1
                            
                            if (r14_15 == 1)
                                (*(*rdi_26 + 8))(rdi_26, zx.q(r14_15))
                    
                    sub_140820ac0(rax_100, rsi + 0x80, nullptr)
                    sub_140820ac0(r13_6, rsi + 0x80, nullptr)
                    sub_1408400b0(rsi + 0x80)
                    sub_140820ac0(rax_100, rsi + 0x3e8, nullptr)
                    sub_140820ac0(r13_6, rsi + 0x3e8, nullptr)
                    sub_1408400b0(rsi + 0x3e8)
                    void* r14_16 = *(rsi + 0x730)
                    void* r15_10 = sx.q(*(rsi + 0x738)) * 0x368 + r14_16
                    
                    if (r14_16 != r15_10)
                        int64_t* rdi_27 = r14_16 + 0x28
                        
                        do
                            sub_140820ac0(rax_100, rdi_27, nullptr)
                            sub_140820ac0(r13_6, rdi_27, nullptr)
                            sub_1408400b0(rdi_27)
                            r14_16 += 0x368
                            rdi_27 = &rdi_27[0x6d]
                        while (r14_16 != r15_10)
                    
                    if (var_40_1 != 0)
                        sub_140a74f90(var_40_1)
                    
                    void* rdi_28 = *(rsi + 0x910)
                    int32_t i_12 = *(rsi + 0x918)
                    int64_t i_16 = sx.q(*(*(rsi + 0x788) + 0x1d8))
                    int32_t rax_104 = *(rsi + 0x91c)
                    int32_t r14_17
                    
                    if (rax_104 s< 0)
                        if (i_12 != 0)
                            void* rdi_30 = rdi_28 + 0x58
                            int32_t i_4
                            
                            do
                                void* rax_106 = *rdi_30
                                
                                if (rax_106 != 0)
                                    *(rax_106 + 8) -= 1
                                
                                *rdi_30 = 0
                                int64_t rcx_105 = *(rdi_30 - 0x18)
                                
                                if (rcx_105 != 0)
                                    sub_140a74f90(rcx_105)
                                
                                rdi_30 += 0x78
                                i_4 = i_12
                                i_12 -= 1
                            while (i_4 != 1)
                            rax_104 = *(rsi + 0x91c)
                        
                        *(rsi + 0x918) = 0
                        r14_17 = 0
                        
                        if (rax_104 != 0)
                            sub_1407c4420(rsi + 0x910, 0)
                            r14_17 = *(rsi + 0x918)
                    else
                        if (i_12 != 0)
                            int64_t* rdi_29 = rdi_28 + 0x58
                            int32_t i_5
                            
                            do
                                void* rax_105 = *rdi_29
                                
                                if (rax_105 != 0)
                                    *(rax_105 + 8) -= 1
                                
                                *rdi_29 = 0
                                int64_t rcx_104 = rdi_29[-3]
                                
                                if (rcx_104 != 0)
                                    sub_140a74f90(rcx_104)
                                
                                rdi_29 = &rdi_29[0xf]
                                i_5 = i_12
                                i_12 -= 1
                            while (i_5 != 1)
                        
                        *(rsi + 0x918) = 0
                        r14_17 = 0
                    
                    if (i_16.d s> r14_17)
                        *(rsi + 0x918) = i_16.d
                        int32_t i_9 = i_16.d - r14_17
                        
                        if (i_16.d s> *(rsi + 0x91c))
                            sub_1407c3920(rsi + 0x910)
                        
                        if (i_9 != 0)
                            void* rax_110 = sx.q(r14_17) * 0x78 + 0x68 + *(rsi + 0x910)
                            int32_t i_6
                            
                            do
                                *(rax_110 - 0x28) = 0
                                *(rax_110 - 0x20) = 0
                                *(rax_110 - 0x1c) = 0x10
                                *(rax_110 - 0x10) = 0
                                *(rax_110 - 8) = 0
                                *rax_110 = 0
                                *(rax_110 + 8) = 0
                                rax_110 += 0x78
                                i_6 = i_9
                                i_9 -= 1
                            while (i_6 != 1)
                    else if (i_16.d s< r14_17)
                        sub_1408084a0(rsi + 0x910, i_16.d, r14_17 - i_16.d, 1)
                    
                    int64_t i_10 = i_16
                    
                    if (i_16.d s> 0)
                        int64_t r14_19 = 0
                        int64_t r12_9 = 0
                        int64_t i_7
                        
                        do
                            void* rdi_33 = *(rsi + 0x910) + r12_9
                            *(rdi_33 + 0x60) = *(*(*(rsi + 0x788) + 0x1d0) + r14_19 + 0x34)
                            int64_t rcx_112
                            
                            if ((*(rdi_33 + 0x6c) | *(rdi_33 + 0x68) | *(rdi_33 + 0x64)
                                    | *(rdi_33 + 0x60)) == 0)
                                rcx_112 = *(rsi + 0x790)
                                int64_t var_110_2 = rcx_112
                            else
                                var_168 |= 1
                                sub_140b291e0(rdi_33 + 0x60, &i_14, 0)
                                int16_t* i_19 = &data_142d40450
                                int32_t var_138
                                
                                if (var_138 != 0)
                                    i_19 = i_14
                                
                                rcx_112 = *sub_140b58260(&var_148, i_19, 1)
                            
                            *(rdi_33 + 0x70) = rcx_112
                            
                            if ((var_168.b & 1) != 0)
                                int16_t* i_17 = i_14
                                var_168 &= 0xfffffffe
                                
                                if (i_17 != 0)
                                    sub_140a74f90(i_17)
                            
                            int32_t rax_119 = *(rdi_33 + 0x4c)
                            *(rdi_33 + 0x48) = 0
                            
                            if (rax_119 s< 0 && rax_119 != 0)
                                sub_1408097f0(rdi_33, 0)
                            
                            r12_9 += 0x78
                            *(rdi_33 + 0x50) = 0
                            r14_19 += 0x58
                            *(rdi_33 + 0x58) = 0
                            i_7 = i_10
                            i_10 -= 1
                        while (i_7 != 1)
                    
                    int64_t* rax_120 = *(rsi + 0x788)
                    var_148 = rax_120
                    int32_t r15_13
                    
                    if (rax_120[0x1b].b != 0 || data_14396fef8 == 0)
                        void* rax_130 = *(rsi + 0x778)
                        r15_13 = *(rax_130 + 0x24)
                        
                        if (*(rax_130 + 0x20) u>= r15_13)
                            r15_13 = *(rax_130 + 0x20)
                    else
                        int64_t* r12_10 = rax_120[0x38]
                        int64_t* r13_8 = nullptr
                        int64_t rax_121 = sx.q(rax_120[0x39].d)
                        int32_t r14_20 = 0
                        int64_t* var_128 = nullptr
                        int16_t* i_21 = nullptr
                        int32_t var_11c_1 = 0
                        i_14 = nullptr
                        void* rdi_35 = rax_121 << 3 u>> 3
                        
                        if (r12_10 u> &r12_10[rax_121])
                            rdi_35 = nullptr
                        
                        var_160 = rdi_35
                        
                        if (rdi_35 != 0)
                            int32_t rsi_1 = 0
                            void* rax_123 = rdi_35
                            int64_t* rbx_1 = var_148
                            
                            do
                                int64_t* rdi_36 = *r12_10
                                
                                if (rdi_36 != 0)
                                    if ((*(*rdi_36 + 0x288))(rdi_36) != 0
                                            && (*(*rdi_36 + 0x278))(rdi_36, zx.q(rbx_1[0x1b].b))
                                            != 0)
                                        int64_t r15_12 = sx.q(r14_20)
                                        r14_20 = (r15_12 + 1).d
                                        
                                        if (r14_20 s> rsi_1)
                                            sub_1405a4d70(&var_128)
                                            r13_8 = var_128
                                            rsi_1 = var_11c_1
                                        
                                        r13_8[r15_12] = rdi_36
                                        i_21 = i_14
                                    
                                    rax_123 = var_160
                                
                                i_21 += 1
                                r12_10 = &r12_10[1]
                                i_14 = i_21
                            while (i_21 != rax_123)
                            
                            rsi = arg1
                            rbx = nullptr
                        
                        r15_13 = 1
                        int64_t* r14_21 = r13_8
                        void* rcx_118 = &r13_8[sx.q(r14_20)]
                        uint64_t rdi_40 = (rcx_118 - r13_8 + 7) u>> 3
                        
                        if (r13_8 u> rcx_118)
                            rdi_40 = 0
                        
                        if (rdi_40 != 0)
                            do
                                int32_t rax_129 = sub_140822180(*r14_21, *(rsi + 0x778))
                                r14_21 = &r14_21[1]
                                
                                if (r15_13 u>= rax_129)
                                    rax_129 = r15_13
                                
                                rbx = &rbx[1]
                                r15_13 = rax_129
                            while (rbx != rdi_40)
                        
                        if (r13_8 != 0)
                            sub_140a74f90(r13_8)
                    
                    int64_t rax_131 = sx.q(data_143ce2ab0)
                    
                    if (rax_131.d s<= 0)
                        rax_131 = data_1439c7a80
                    
                    int64_t rax_132 = divu.dp.q(0:rax_131, zx.q(r15_13))
                    int32_t rcx_122 = -1
                    
                    if (rax_132 u<= 0xffffffff)
                        rcx_122 = rax_132.d
                    
                    void* rax_133 = *(rsi + 0x788)
                    *(rsi + 0x958) = rcx_122
                    
                    if (*(rax_133 + 0xd8) == 1)
                        *(rsi + 0x958) = (rcx_122 & 0xffffffc0) - 1
                        rcx_122 = (rcx_122 & 0xffffffc0) - 1
                    
                    result = *(rsi + 0x778)
                    *(result + 0xc8) = rcx_122
        else
            result = *(rsi + 0x908)
            
            if (result == 0)
                *(rsi + 0x24) = 4
            else
                result = sub_14074a210(*(result + 0x14))
                
                if (result.b != 0)
                    goto label_140801a9e
                
                *(rsi + 0x24) = 4

__security_check_cookie(rax_1 ^ &var_198)
return result
