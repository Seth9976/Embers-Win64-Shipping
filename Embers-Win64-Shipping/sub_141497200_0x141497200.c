// 函数: sub_141497200
// 地址: 0x141497200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5b8
int64_t rax_1 = __security_cookie ^ &var_5b8
void* r15 = arg1
sub_140b33630("RenderShadows")
int64_t* var_570 = &data_143ec4c60
sub_141496820(r15, arg2)
int32_t rdi = *(arg2 + 0x8c)
int32_t rdx_2 = (1 << (data_1439c7a34).b) - 1
int32_t var_578 = rdi

if (rdi != rdx_2)
    *(arg2 + 0x8c) = rdx_2
    
    if (*(arg2 + 0x14) u> 0)
        void*** rdx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_2 = &rdx_5[3]
        
        if (rax_2 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rdx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_2 = &rdx_5[3]
        
        *(arg2 + 0x30) = rax_2
        int64_t* rax_3 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_3 = rdx_5
        int32_t rax_4 = *(arg2 + 0x8c)
        *(arg2 + 8) = &rdx_5[1]
        rdx_5[1] = 0
        *rdx_5 = &data_142f11588
        rdx_5[2].d = rax_4
    else
        *(arg2 + 0x90) = rdx_2

int32_t i_5 = 0
void** r12

if (*(r15 + 0x338) s> 0)
    int64_t rdi_1 = 0
    int32_t i
    
    do
        int64_t rbx_1 = *(r15 + 0x330)
        int64_t* rcx_5 = *(rbx_1 + rdi_1 + 0x30)
        (*(*rcx_5 + 0x10))(rcx_5)
        void* r15_1 = **(rbx_1 + rdi_1 + 0x38)
        int32_t rax_8
        
        if ((*(r15_1 + 0x570) & 0x800) != 0)
            rax_8 = *(arg1 + 0x3d0)
        else if (*(r15_1 + 0x40) != 1)
            void* rax_9 = *(r15_1 + 0x48)
            
            if (rax_9 == 0)
                rax_8 = *(arg1 + 0x3d0)
            else
                rax_8 = *(rax_9 + 0xad8)
        else
            rax_8 = (1 << (data_1439c7a34).b) - 1
        
        int32_t rbx_2 = *(arg2 + 0x8c)
        
        if (rbx_2 != rax_8)
            bool cond:2_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rax_8
            
            if (cond:2_1)
                void*** rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_10 = &rdx_10[3]
                
                if (rax_10 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_10 = &rdx_10[3]
                
                *(arg2 + 0x30) = rax_10
                int64_t* rax_11 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_11 = rdx_10
                int32_t rax_12 = *(arg2 + 0x8c)
                *(arg2 + 8) = &rdx_10[1]
                rdx_10[1] = 0
                *rdx_10 = &data_142f11588
                rdx_10[2].d = rax_12
            else
                *(arg2 + 0x90) = rax_8
        
        if (arg2 != &data_143f02b98)
            r12.b = 0
        else if (sub_140b011d0() == 0)
            r12.b = 0
        else if (data_1439c7a0e != 0)
            if (*(data_143ed92f8 + 4) != 0)
                goto label_141497421
            
            r12.b = 0
        else if (data_143f01c92 != 0 || *(data_143ed92f8 + 4) == 0)
            r12.b = 0
        else
        label_141497421:
            char rax_15 = (*(r15_1 + 0x570)).b
            
            if ((rax_15 & 0x40) == 0 || *(r15_1 + 0x534) s< 0)
                if (*(data_143ed9310 + 4) == 0)
                    r12.b = 0
                else
                    r12.b = 1
            else if ((rax_15 & 0x10) != 0 || *(data_143ed9310 + 4) != 0)
                r12.b = 1
            else
                r12.b = 0
        
        int64_t var_548_1 = 0
        int64_t var_540_1 = 0
        *(*(r15_1 + 0x5c0) + 0x20)
        int128_t zmm3_1 = sub_1414a3000(r15_1, arg2, *(arg1 + 8), nullptr)
        char r11_1 = 1
        void* var_480 = arg1
        int64_t* var_470_1 = var_570
        void* var_478_1 = &rcx_5[1]
        
        if (*(r15_1 + 0x40) == 0)
            void* r9_1 = *(arg1 + 8)
            int32_t* rcx_19
            
            if (*(r9_1 + 0x1ac0) == *(r9_1 + 0x1aec))
            label_141497523:
                rcx_19 = nullptr
            else
                void* r8_2 = r9_1 + 0x1af0
                void* rdx_14 = *(r8_2 + 8)
                int64_t r10_1 = sx.q(*(*(r15_1 + 0x5c0) + 0x28))
                
                if (rdx_14 != 0)
                    r8_2 = rdx_14
                
                int32_t rax_21 = *(r8_2 + (((sx.q(*(r9_1 + 0x1b00)) - 1) & r10_1) << 2))
                
                if (rax_21 == 0xffffffff)
                label_141497523_1:
                    rcx_19 = nullptr
                else
                    while (true)
                        rcx_19 = sx.q(rax_21) * 0x290 + *(r9_1 + 0x1ab8)
                        
                        if (*rcx_19 == r10_1.d)
                            break
                        
                        rax_21 = rcx_19[0xa0]
                        
                        if (rax_21 == 0xffffffff)
                            goto label_141497523_2
                    
                    if (rax_21 == 0xffffffff)
                    label_141497523_2:
                        rcx_19 = nullptr
            
            r11_1 = 1
            
            if (rcx_19[0x9f].b != 0)
                r11_1 = 0
        
        sub_141476bf0(&var_480, arg2, r11_1)
        
        if (r12.b != 0)
            void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_22 = &rcx_23[2]
            
            if (rax_22 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x18)
                rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_22 = &rcx_23[2]
            
            *(arg2 + 0x30) = rax_22
            int64_t* rax_23 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_23 = rcx_23
            *(arg2 + 8) = &rcx_23[1]
            rcx_23[1] = 0
            *rcx_23 = &data_142d549b8
            *(arg2 + 0x1c4) = 0
            *(arg2 + 0x178) = 0
        
        int64_t (* var_468)(void* arg1, uint64_t arg2, char* arg3) = sub_141481de0
        void** var_460_1 = &var_480
        sub_141494750(r15_1, arg2, arg1, &var_468, zmm3_1, r12.b)
        
        if (r12.b == 0)
            void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_25 = &rcx_30[2]
            
            if (rax_25 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x18)
                rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_25 = &rcx_30[2]
            
            *(arg2 + 0x30) = rax_25
            int64_t* rax_26 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_26 = rcx_30
            *(arg2 + 8) = &rcx_30[1]
            rcx_30[1] = 0
            *rcx_30 = &data_142d549b8
            *(arg2 + 0x1c4) = 0
            *(arg2 + 0x178) = 0
        
        int64_t rax_28 = rcx_5[1]
        int64_t* r15_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_34 = &r15_4[1]
        
        if (rcx_34 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            r15_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_34 = &r15_4[1]
        
        *(arg2 + 0x30) = rcx_34
        *r15_4 = rax_28
        void*** rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_29 = &rcx_38[5]
        
        if (rax_29 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_29 = &rcx_38[5]
        
        *(arg2 + 0x30) = rax_29
        void**** rax_30 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_30 = rcx_38
        *(arg2 + 8) = &rcx_38[1]
        rcx_38[1] = 0
        *rcx_38 = &data_142d549c8
        rcx_38[2].d = 1
        rcx_38[3] = r15_4
        rcx_38[4].d = 0
        
        if (var_548_1 != 0)
            sub_140a74f90(var_548_1)
        
        if (*(arg2 + 0x8c) != rbx_2)
            bool cond:12_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rbx_2
            
            if (cond:12_1)
                void*** rdx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_32 = &rdx_19[3]
                
                if (rax_32 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_32 = &rdx_19[3]
                
                *(arg2 + 0x30) = rax_32
                int64_t* rax_33 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_33 = rdx_19
                int32_t rax_34 = *(arg2 + 0x8c)
                *(arg2 + 8) = &rdx_19[1]
                rdx_19[1] = 0
                *rdx_19 = &data_142f11588
                rdx_19[2].d = rax_34
            else
                *(arg2 + 0x90) = rbx_2
        
        rdi_1 += 0x48
        r15 = arg1
        i = i_5 + 1
        i_5 = i
    while (i s< *(r15 + 0x338))
    rdi = var_578

if (*(r15 + 0x380) s> 0)
    int32_t i_1 = 0
    int64_t* rax_36 = *(r15 + 0x370) + 8
    int64_t* rdi_2 = nullptr
    
    do
        void* r14_1 = *(rdi_2 + *(r15 + 0x378))
        
        if ((*(r14_1 + 0x570) & 8) == 0)
            int32_t rbx_3 = *(arg2 + 0x8c)
            int32_t rax_39 = (1 << (data_1439c7a34).b) - 1
            
            if (rbx_3 != rax_39)
                bool cond:4_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rax_39
                
                if (cond:4_1)
                    void*** rdx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_40 = &rdx_24[3]
                    
                    if (rax_40 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_40 = &rdx_24[3]
                    
                    r15 = arg1
                    *(arg2 + 0x30) = rax_40
                    int64_t* rax_41 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_41 = rdx_24
                    int32_t rax_42 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_24[1]
                    rdx_24[1] = 0
                    *rdx_24 = &data_142f11588
                    rdx_24[2].d = rax_42
                else
                    *(arg2 + 0x90) = rax_39
            
            if (arg2 != &data_143f02b98)
                r12.b = 0
            else if (sub_140b011d0() == 0)
                r12.b = 0
            else if (data_1439c7a0e != 0)
                if (*(data_143ed92f8 + 4) != 0)
                    goto label_1414978cf
                
                r12.b = 0
            else if (data_143f01c92 != 0 || *(data_143ed92f8 + 4) == 0)
                r12.b = 0
            else
            label_1414978cf:
                char rax_45 = (*(r14_1 + 0x570)).b
                
                if ((rax_45 & 0x40) == 0 || *(r14_1 + 0x534) s< 0)
                    if (*(data_143ed9310 + 4) == 0)
                        r12.b = 0
                    else
                        r12.b = 1
                else if ((rax_45 & 0x10) != 0 || *(data_143ed9310 + 4) != 0)
                    r12.b = 1
                else
                    r12.b = 0
            
            int64_t r8_7
            int128_t zmm3_2
            r8_7, zmm3_2 = sub_1414a3000(r14_1, arg2, *(r15 + 8), nullptr)
            r8_7.b = 1
            void* var_4a0 = r15
            void* var_498_1 = r14_1
            sub_141477350(&var_4a0, arg2)
            
            if (r12.b != 0)
                void*** rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_47 = &rcx_52[2]
                
                if (rax_47 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x18)
                    rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_47 = &rcx_52[2]
                
                r15 = arg1
                *(arg2 + 0x30) = rax_47
                int64_t* rax_48 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_48 = rcx_52
                *(arg2 + 8) = &rcx_52[1]
                rcx_52[1] = 0
                *rcx_52 = &data_142d549b8
                *(arg2 + 0x1c4) = 0
                *(arg2 + 0x178) = 0
            
            char var_598_2 = r12.b
            int64_t (* var_458)(int64_t* arg1, void* arg2, char* arg3) = sub_141481df0
            void** var_450_1 = &var_4a0
            sub_141494750(r14_1, arg2, r15, &var_458, zmm3_2, var_598_2)
            
            if (r12.b == 0)
                void*** rcx_59 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_50 = &rcx_59[2]
                
                if (rax_50 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x18)
                    rcx_59 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_50 = &rcx_59[2]
                
                r15 = arg1
                *(arg2 + 0x30) = rax_50
                int64_t* rax_51 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_51 = rcx_59
                *(arg2 + 8) = &rcx_59[1]
                rcx_59[1] = 0
                *rcx_59 = &data_142d549b8
                *(arg2 + 0x1c4) = 0
                *(arg2 + 0x178) = 0
            
            *(r14_1 + 0x570) |= 8
            
            if (*(arg2 + 0x8c) != rbx_3)
                bool cond:9_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rbx_3
                
                if (cond:9_1)
                    void*** rdx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_53 = &rdx_32[3]
                    
                    if (rax_53 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_53 = &rdx_32[3]
                    
                    *(arg2 + 0x30) = rax_53
                    int64_t* rax_54 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_54 = rdx_32
                    int32_t rax_55 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_32[1]
                    rdx_32[1] = 0
                    *rdx_32 = &data_142f11588
                    rdx_32[2].d = rax_55
                else
                    *(arg2 + 0x90) = rbx_3
        
        i_1 += 1
        rdi_2 = &rdi_2[1]
    while (i_1 s< *(r15 + 0x380))
    
    int64_t* rbx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rax_57 = *rax_36
    void* rcx_65 = &rbx_6[1]
    
    if (rcx_65 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_65 = &rbx_6[1]
    
    *(arg2 + 0x30) = rcx_65
    *rbx_6 = rax_57
    void*** rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_58 = &rcx_69[5]
    
    if (rax_58 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_69 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_58 = &rcx_69[5]
    
    *(arg2 + 0x30) = rax_58
    void**** rax_59 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    rdi = var_578
    *rax_59 = rcx_69
    *(arg2 + 8) = &rcx_69[1]
    rcx_69[1] = 0
    *rcx_69 = &data_142d549c8
    rcx_69[2].d = 1
    rcx_69[3] = rbx_6
    rcx_69[4].d = 0

int32_t i_6 = 0
int64_t var_568

if (*(r15 + 0x390) s> 0)
    int64_t rax_61 = 0
    var_568 = 0
    int32_t i_2
    
    do
        int64_t rcx_73 = rax_61 * 9
        int64_t rax_62 = *(r15 + 0x388)
        int64_t* rbx_9 = rax_62 + (rcx_73 << 3)
        int64_t* rax_63 = *(rax_62 + (rcx_73 << 3) + 0x20)
        int64_t* rcx_74 = rbx_9
        
        if (rax_63 != 0)
            rcx_74 = rax_63
        
        int64_t* rcx_75 = *rcx_74
        (*(*rcx_75 + 0x10))(rcx_75)
        int64_t* rax_65 = rbx_9[4]
        int64_t* rcx_76 = rbx_9
        
        if (rax_65 != 0)
            rcx_76 = rax_65
        
        void* r12_2 = *rcx_76
        void* rax_66 = *(r12_2 + 8)
        void* var_390 = rax_66
        
        if (rax_66 != 0)
            *(rax_66 + 8) += 1
        
        void* rax_67 = *(r12_2 + 0x10)
        void* var_388 = rax_67
        
        if (rax_67 != 0)
            *(rax_67 + 8) += 1
        
        void* rax_68 = *(r12_2 + 0x18)
        void* var_380 = rax_68
        
        if (rax_68 != 0)
            *(rax_68 + 8) += 1
        
        void* rbx_10 = r12_2 + 0x20
        void* var_370_1 = nullptr
        int32_t j_12 = *(rbx_10 + 0x10)
        void* r13_2 = *(rbx_10 + 8)
        int32_t j_18 = j_12
        void var_378
        
        if (j_12 != 0)
            sub_14119a5f0(&var_378, j_12, 0)
            void* rcx_78 = &var_378
            
            if (r13_2 != 0)
                rbx_10 = r13_2
            
            if (var_370_1 != 0)
                rcx_78 = var_370_1
            
            int32_t j
            
            do
                void* rax_70 = *rbx_10
                *rcx_78 = rax_70
                
                if (rax_70 != 0)
                    *(rax_70 + 8) += 1
                
                rcx_78 += 8
                rbx_10 += 8
                j = j_12
                j_12 -= 1
            while (j != 1)
        else
            int32_t var_364_1 = 1
        
        void* rbx_11 = r12_2 + 0x38
        void* var_348_1 = nullptr
        int32_t j_13 = *(rbx_11 + 0x20)
        void* r13_3 = *(rbx_11 + 0x18)
        int32_t j_19 = j_13
        void var_360
        
        if (j_13 != 0)
            sub_14119a440(&var_360, j_13, 0)
            void* rcx_80 = &var_360
            
            if (r13_3 != 0)
                rbx_11 = r13_3
            
            if (var_348_1 != 0)
                rcx_80 = var_348_1
            
            int32_t j_1
            
            do
                *rcx_80 = *rbx_11
                void* rax_72 = *(rbx_11 + 0x10)
                *(rcx_80 + 0x10) = rax_72
                
                if (rax_72 != 0)
                    *(rax_72 + 8) += 1
                
                rcx_80 += 0x18
                rbx_11 += 0x18
                j_1 = j_13
                j_13 -= 1
            while (j_1 != 1)
        else
            int32_t var_33c_1 = 1
        
        void* rax_73 = *(r12_2 + 0x60)
        void* var_338 = rax_73
        
        if (rax_73 != 0)
            *(rax_73 + 8) += 1
        
        void* rax_74 = *(r12_2 + 0x68)
        void* var_330 = rax_74
        
        if (rax_74 != 0)
            *(rax_74 + 8) += 1
        
        void* rax_75 = *(r12_2 + 0x70)
        void* var_328 = rax_75
        
        if (rax_75 != 0)
            *(rax_75 + 8) += 1
        
        void* rax_76 = *(r12_2 + 0x78)
        void* var_320 = rax_76
        
        if (rax_76 != 0)
            *(rax_76 + 8) += 1
        
        int64_t* rcx_81 = rbx_9
        int64_t* rax_77 = rbx_9[4]
        
        if (rax_77 != 0)
            rcx_81 = rax_77
        
        void* r12_3 = rcx_81[1]
        void* rax_78 = *(r12_3 + 8)
        void* var_408 = rax_78
        
        if (rax_78 != 0)
            *(rax_78 + 8) += 1
        
        void* rax_79 = *(r12_3 + 0x10)
        void* var_400 = rax_79
        
        if (rax_79 != 0)
            *(rax_79 + 8) += 1
        
        void* rax_80 = *(r12_3 + 0x18)
        void* var_3f8 = rax_80
        
        if (rax_80 != 0)
            *(rax_80 + 8) += 1
        
        void* rbx_12 = r12_3 + 0x20
        void* var_3e8_1 = nullptr
        int32_t j_14 = *(rbx_12 + 0x10)
        void* r13_4 = *(rbx_12 + 8)
        int32_t j_16 = j_14
        void var_3f0
        
        if (j_14 != 0)
            sub_14119a5f0(&var_3f0, j_14, 0)
            void* rcx_83 = &var_3f0
            
            if (r13_4 != 0)
                rbx_12 = r13_4
            
            if (var_3e8_1 != 0)
                rcx_83 = var_3e8_1
            
            int32_t j_2
            
            do
                void* rax_82 = *rbx_12
                *rcx_83 = rax_82
                
                if (rax_82 != 0)
                    *(rax_82 + 8) += 1
                
                rcx_83 += 8
                rbx_12 += 8
                j_2 = j_14
                j_14 -= 1
            while (j_2 != 1)
        else
            int32_t var_3dc_1 = 1
        
        void* rbx_13 = r12_3 + 0x38
        void* var_3c0_1 = nullptr
        int32_t j_15 = *(rbx_13 + 0x20)
        void* r13_5 = *(rbx_13 + 0x18)
        int32_t j_17 = j_15
        void var_3d8
        
        if (j_15 != 0)
            sub_14119a440(&var_3d8, j_15, 0)
            void* rcx_85 = &var_3d8
            
            if (r13_5 != 0)
                rbx_13 = r13_5
            
            if (var_3c0_1 != 0)
                rcx_85 = var_3c0_1
            
            int32_t j_3
            
            do
                *rcx_85 = *rbx_13
                void* rax_84 = *(rbx_13 + 0x10)
                *(rcx_85 + 0x10) = rax_84
                
                if (rax_84 != 0)
                    *(rax_84 + 8) += 1
                
                rcx_85 += 0x18
                rbx_13 += 0x18
                j_3 = j_15
                j_15 -= 1
            while (j_3 != 1)
        else
            int32_t var_3b4_1 = 1
        
        void* rax_85 = *(r12_3 + 0x60)
        void* var_3b0 = rax_85
        
        if (rax_85 != 0)
            *(rax_85 + 8) += 1
        
        void* rax_86 = *(r12_3 + 0x68)
        void* var_3a8 = rax_86
        
        if (rax_86 != 0)
            *(rax_86 + 8) += 1
        
        void* rax_87 = *(r12_3 + 0x70)
        void* var_3a0 = rax_87
        
        if (rax_87 != 0)
            *(rax_87 + 8) += 1
        
        void* rax_88 = *(r12_3 + 0x78)
        void* var_398 = rax_88
        
        if (rax_88 != 0)
            *(rax_88 + 8) += 1
        
        int32_t j_7 = 0
        int128_t zmm1_1 = data_142d3f5a0
        void* var_318 = var_390
        void* var_300_1 = var_408
        int32_t var_240_1 = 0
        int32_t var_23c
        __builtin_memset(&var_23c, 0xff, 0x14)
        int128_t var_228_1 = zmm1_1
        int64_t var_218
        __builtin_memset(&var_218, 0, 0x1a)
        int64_t var_310_1 = 0
        int32_t var_308_1 = 0xffffffff
        int16_t var_304_1 = 0x500
        int64_t var_2f8_1 = 0
        int32_t var_2f0_1 = 0xffffffff
        int16_t var_2ec_1 = 0x500
        int64_t var_258
        __builtin_memset(&var_258, 0, 0x11)
        int32_t var_244_1 = 0
        void var_2e8
        memset(&var_2e8, 0, 0x90)
        int32_t j_20 = 0
        void** rax_91 = &var_318
        int64_t rcx_87 = 0
        uint64_t r15_7 = 0
        
        while (*rax_91 != 0)
            j_20 += 1
            rcx_87 += 1
            rax_91 = &rax_91[3]
            
            if (rcx_87 s>= 8)
                break
        
        void var_88
        
        if (j_20 != 0)
            void* rdx_39 = &var_88
            uint64_t j_11 = zx.q(j_20)
            void** rax_92 = &var_318
            uint64_t j_4
            
            do
                void* rcx_88 = *rax_92
                
                if (rcx_88 != 0)
                    r15_7 = zx.q(r15_7.d + 1)
                    *rdx_39 = rcx_88
                    rdx_39 += 8
                
                rax_92 = &rax_92[3]
                j_4 = j_11
                j_11 -= 1
            while (j_4 != 1)
        
        int64_t r12_4 = var_258
        
        if (r12_4 != 0 && ((var_244_1.b & 0xf) == 2 || (var_244_1.b & 0xf0) == 0x20))
            void*** rcx_91 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_95 = &rcx_91[4]
            
            if (rax_95 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x28)
                rcx_91 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_95 = &rcx_91[4]
            
            *(arg2 + 0x30) = rax_95
            int64_t* rax_96 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_96 = rcx_91
            *(arg2 + 8) = &rcx_91[1]
            rcx_91[1] = 0
            *rcx_91 = &data_142f115e8
            rcx_91[2].d = var_244_1
            rcx_91[3] = r12_4
        
        uint32_t rdx_40 = (r15_7 << 3).d
        int64_t r12_5 = sx.q(rdx_40)
        int64_t* rbx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_98 = rbx_17 + r12_5
        
        if (rax_98 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, rdx_40 + 8)
            rbx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_98 = rbx_17 + r12_5
        
        *(arg2 + 0x30) = rax_98
        int64_t j_10 = sx.q(r15_7.d)
        
        if (r15_7.d s> 0)
            int64_t* rcx_96 = rbx_17
            int64_t j_5
            
            do
                *rcx_96 = *(&var_88 - rbx_17 + rcx_96)
                rcx_96 = &rcx_96[1]
                j_5 = j_10
                j_10 -= 1
            while (j_5 != 1)
        
        void*** rcx_99 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_100 = &rcx_99[5]
        
        if (rax_100 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_99 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_100 = &rcx_99[5]
        
        *(arg2 + 0x30) = rax_100
        r12 = nullptr
        void**** rax_101 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_101 = rcx_99
        *(arg2 + 8) = &rcx_99[1]
        rcx_99[1] = 0
        rcx_99[3] = rbx_17
        *rcx_99 = &data_142d549c8
        rcx_99[2].d = r15_7.d
        rcx_99[4].d = 1
        int64_t rbx_22 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_103 = rbx_22 + 0x32
        
        if (rax_103 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x34)
            rbx_22 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_103 = rbx_22 + 0x32
        
        *(arg2 + 0x30) = rax_103
        wchar16 const* const rcx_104 = u"RenderTranslucencyDepths"
        wchar16 const j_6
        
        do
            j_6 = *rcx_104
            *(rbx_22 - u"RenderTranslucencyDepths" + rcx_104) = j_6
            rcx_104 = &rcx_104[1]
        while (j_6 != 0)
        void*** rcx_107 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_104 = &rcx_107[0x27]
        
        if (rax_104 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_107 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_104 = &rcx_107[0x27]
        
        *(arg2 + 0x30) = rax_104
        void**** rax_105 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_105 = rcx_107
        *(arg2 + 8) = &rcx_107[1]
        sub_1405d11b0(rcx_107, &var_318, rbx_22)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_318)
        int64_t var_208
        *(arg2 + 0x178) = var_208:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        
        if (rbx_9[8].d s> 0)
            do
                void* r15_8 = *(r12 + rbx_9[7])
                int32_t rax_110
                
                if ((*(r15_8 + 0x570) & 0x800) != 0)
                    rax_110 = *(arg1 + 0x3d0)
                else if (*(r15_8 + 0x40) != 1)
                    void* rax_111 = *(r15_8 + 0x48)
                    
                    if (rax_111 == 0)
                        rax_110 = *(arg1 + 0x3d0)
                    else
                        rax_110 = *(rax_111 + 0xad8)
                else
                    rax_110 = (1 << (data_1439c7a34).b) - 1
                
                int32_t rbx_25 = *(arg2 + 0x8c)
                
                if (rbx_25 != rax_110)
                    bool cond:13_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_110
                    
                    if (cond:13_1)
                        void*** rcx_115 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_113 = &rcx_115[3]
                        
                        if (rax_113 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rcx_115 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_113 = &rcx_115[3]
                        
                        *(arg2 + 0x30) = rax_113
                        int64_t* rax_114 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_114 = rcx_115
                        int32_t rax_115 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rcx_115[1]
                        rcx_115[1] = 0
                        *rcx_115 = &data_142f11588
                        rcx_115[2].d = rax_115
                    else
                        *(arg2 + 0x90) = rax_110
                
                sub_1414d9e60(r15_8, arg2, arg1)
                
                if (*(arg2 + 0x8c) != rbx_25)
                    bool cond:14_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rbx_25
                    
                    if (cond:14_1)
                        void*** rdx_50 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_116 = &rdx_50[3]
                        
                        if (rax_116 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_50 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_116 = &rdx_50[3]
                        
                        *(arg2 + 0x30) = rax_116
                        int64_t* rax_117 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_117 = rdx_50
                        int32_t rax_118 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_50[1]
                        rdx_50[1] = 0
                        *rdx_50 = &data_142f11588
                        rdx_50[2].d = rax_118
                    else
                        *(arg2 + 0x90) = rbx_25
                
                j_7 += 1
                r12 = &r12[1]
            while (j_7 s< rbx_9[8].d)
        
        void*** rcx_124 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_119 = &rcx_124[2]
        
        if (rax_119 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x18)
            rcx_124 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_119 = &rcx_124[2]
        
        *(arg2 + 0x30) = rax_119
        int64_t* rax_120 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_120 = rcx_124
        *(arg2 + 8) = &rcx_124[1]
        rcx_124[1] = 0
        *rcx_124 = &data_142d549b8
        void* rax_122 = var_390
        *(arg2 + 0x1c4) = 0
        *(arg2 + 0x178) = 0
        void** rbx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_128 = &rbx_28[1]
        
        if (rcx_128 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_128 = &rbx_28[1]
        
        *(arg2 + 0x30) = rcx_128
        *rbx_28 = rax_122
        void*** rcx_132 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_123 = &rcx_132[5]
        
        if (rax_123 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_132 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_123 = &rcx_132[5]
        
        *(arg2 + 0x30) = rax_123
        void**** rax_124 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_124 = rcx_132
        *(arg2 + 8) = &rcx_132[1]
        rcx_132[3] = rbx_28
        *rcx_132 = &data_142d549c8
        rcx_132[2].d = 1
        rcx_132[4].d = 0
        rcx_132[1] = 0
        void* rax_126 = var_408
        void** rbx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_136 = &rbx_33[1]
        
        if (rcx_136 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_136 = &rbx_33[1]
        
        *(arg2 + 0x30) = rcx_136
        *rbx_33 = rax_126
        void*** rcx_140 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_127 = &rcx_140[5]
        
        if (rax_127 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_140 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_127 = &rcx_140[5]
        
        *(arg2 + 0x30) = rax_127
        void**** rax_128 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_128 = rcx_140
        *(arg2 + 8) = &rcx_140[1]
        *rcx_140 = &data_142d549c8
        rcx_140[2].d = 1
        rcx_140[3] = rbx_33
        rcx_140[4].d = 0
        rcx_140[1] = 0
        int64_t var_210
        sub_1405d1550(&var_210)
        sub_1405ec8a0(&var_398)
        sub_1405d1550(&var_3a0)
        sub_1405ec8a0(&var_3a8)
        sub_1405ec8a0(&var_3b0)
        sub_14117b380(&var_3d8)
        sub_14117b570(&var_3f0)
        sub_1405d1550(&var_3f8)
        sub_1405d1550(&var_400)
        sub_1405d1550(&var_408)
        sub_1405ec8a0(&var_320)
        sub_1405d1550(&var_328)
        sub_1405ec8a0(&var_330)
        sub_1405ec8a0(&var_338)
        sub_14117b380(&var_360)
        sub_14117b570(&var_378)
        sub_1405d1550(&var_380)
        sub_1405d1550(&var_388)
        sub_1405d1550(&var_390)
        i_2 = i_6 + 1
        rax_61 = var_568 + 1
        i_6 = i_2
        var_568 = rax_61
        r15 = arg1
    while (i_2 s< *(arg1 + 0x390))
    rdi = var_578

int32_t i_3 = 0

if (*(r15 + 0xa8) s> 0)
    int64_t rbx_36 = 0
    
    do
        void* rcx_164 = *(rbx_36 + *(r15 + 0xa0) + 0x15a8)
        
        if (rcx_164 != 0)
            void* rax_132 = sub_1412278d0(rcx_164, *(r15 + 0x3b0), 0)
            
            if (rax_132 != 0)
                sub_14123d010(rax_132)
        
        i_3 += 1
        rbx_36 += 0x5240
    while (i_3 s< *(r15 + 0xa8))

int32_t i_4 = 0
var_568.d = 0

if (*(r15 + 0x328) s> 0)
    int64_t rdi_4 = 0
    int64_t var_570_3 = 0
    
    do
        void** rbx_38 = *(r15 + 0x320) + rdi_4
        void** rdx_54 = rbx_38
        void** var_558_2 = rbx_38
        void** rax_133 = rbx_38[4]
        
        if (rax_133 != 0)
            rdx_54 = rax_133
        
        int64_t* var_108
        sub_14117b030(&var_108, *rdx_54 + 8)
        void** rax_134 = rbx_38[4]
        void** rdx_57 = rbx_38
        
        if (rax_134 != 0)
            rdx_57 = rax_134
        
        int64_t* var_180
        sub_14117b030(&var_180, rdx_57[1] + 8)
        int64_t* var_1f8
        sub_14117b030(&var_1f8, rbx_38[6] + 8)
        int64_t* rcx_169 = rbx_38[6]
        (*(*rcx_169 + 0x10))(rcx_169)
        int32_t j_9 = 0
        int64_t var_1f0
        int64_t var_178
        int64_t var_100
        
        if (rbx_38[8].d s> 0)
            void** rcx_170 = nullptr
            void** var_560_2 = nullptr
            int32_t j_8
            
            do
                void* r15_10 = *(rcx_170 + rbx_38[7])
                int32_t rax_138
                
                if ((*(r15_10 + 0x570) & 0x800) != 0)
                    rax_138 = *(arg1 + 0x3d0)
                else if (*(r15_10 + 0x40) != 1)
                    void* rax_139 = *(r15_10 + 0x48)
                    
                    if (rax_139 == 0)
                        rax_138 = *(arg1 + 0x3d0)
                    else
                        rax_138 = *(rax_139 + 0xad8)
                else
                    rax_138 = (1 << (data_1439c7a34).b) - 1
                
                int32_t rbx_39 = *(arg2 + 0x8c)
                
                if (rbx_39 != rax_138)
                    bool cond:8_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_138
                    
                    if (cond:8_1)
                        void*** rdx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_140 = &rdx_64[3]
                        
                        if (rax_140 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_64 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_140 = &rdx_64[3]
                        
                        *(arg2 + 0x30) = rax_140
                        int64_t* rax_141 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_141 = rdx_64
                        int32_t rax_142 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_64[1]
                        rdx_64[1] = 0
                        *rdx_64 = &data_142f11588
                        rdx_64[2].d = rax_142
                    else
                        *(arg2 + 0x90) = rax_138
                
                if (arg2 != &data_143f02b98)
                    r12.b = 0
                else if (sub_140b011d0() == 0)
                    r12.b = 0
                else if (data_1439c7a0e != 0)
                    if (*(data_143ed92f8 + 4) != 0)
                        goto label_141498906
                    
                    r12.b = 0
                else if (data_143f01c92 != 0 || *(data_143ed92f8 + 4) == 0)
                    r12.b = 0
                else
                label_141498906:
                    char rax_145 = (*(r15_10 + 0x570)).b
                    
                    if ((rax_145 & 0x40) == 0 || *(r15_10 + 0x534) s< 0)
                        if (*(data_143ed9310 + 4) == 0)
                            r12.b = 0
                        else
                            r12.b = 1
                    else if ((rax_145 & 0x10) != 0 || *(data_143ed9310 + 4) != 0)
                        r12.b = 1
                    else
                        r12.b = 0
                
                void* rax_148 = sub_1412278d0(*(*(r15_10 + 0x48) + 8), *(arg1 + 0x3b0), 0)
                int64_t r8_13
                int128_t zmm3_3
                r8_13, zmm3_3 = sub_1414a3000(r15_10, arg2, *(arg1 + 8), rax_148)
                void* var_438 = arg1
                int64_t* var_420_1 = &var_108
                void* var_430_1 = rax_148
                int64_t* var_418_1 = &var_180
                r8_13.b = 1
                void* var_428_1 = r15_10
                int64_t* var_410_1 = &var_1f8
                sub_1414783b0(&var_438, arg2)
                
                if (r12.b != 0)
                    void*** rcx_179 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_149 = &rcx_179[2]
                    
                    if (rax_149 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x18)
                        rcx_179 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_149 = &rcx_179[2]
                    
                    *(arg2 + 0x30) = rax_149
                    int64_t* rax_150 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_150 = rcx_179
                    *(arg2 + 8) = &rcx_179[1]
                    rcx_179[1] = 0
                    *rcx_179 = &data_142d549b8
                    *(arg2 + 0x1c4) = 0
                    *(arg2 + 0x178) = 0
                
                char var_598_3 = r12.b
                int64_t (* var_448)(int64_t* arg1, void* arg2, char* arg3) = sub_141481ef0
                void** var_440_1 = &var_438
                sub_141494750(r15_10, arg2, arg1, &var_448, zmm3_3, var_598_3)
                
                if (r12.b == 0)
                    void*** rcx_186 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_152 = &rcx_186[2]
                    
                    if (rax_152 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x18)
                        rcx_186 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_152 = &rcx_186[2]
                    
                    *(arg2 + 0x30) = rax_152
                    int64_t* rax_153 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_153 = rcx_186
                    *(arg2 + 8) = &rcx_186[1]
                    rcx_186[1] = 0
                    *rcx_186 = &data_142d549b8
                    *(arg2 + 0x1c4) = 0
                    *(arg2 + 0x178) = 0
                
                int64_t r13_7 = var_1f0
                void*** r15_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                int64_t* r12_6 = var_1f8
                int128_t var_538_1 = data_142d57d10
                int128_t zmm0_2 = data_142d57920
                void* rax_155 = &r15_13[0xa]
                int128_t var_528_1 = data_142d3f800
                
                if (rax_155 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x58)
                    r15_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_155 = &r15_13[0xa]
                
                *(arg2 + 0x30) = rax_155
                int64_t* rax_156 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_156 = r15_13
                *(arg2 + 8) = &r15_13[1]
                r15_13[1] = 0
                *r15_13 = &data_142d56628
                r15_13[2].d = var_538_1.d
                __builtin_memset(r15_13 + 0x14, 0xff, 0x20)
                *(r15_13 + 0x34) = zmm0_2:4.d
                r15_13[7].d = zmm0_2:8.d
                *(r15_13 + 0x3c) = zmm0_2:0xc.d
                r15_13[8] = r12_6
                r15_13[9] = r13_7
                
                if ((*(*r12_6 + 8))(r12_6) == 0)
                    int64_t* rcx_192 = r15_13[8]
                    
                    if ((*(*rcx_192 + 0x18))(rcx_192) == 0)
                        int64_t* rcx_193 = r15_13[8]
                        
                        if ((*(*rcx_193 + 0x20))(rcx_193) == 0)
                            int64_t* rcx_194 = r15_13[8]
                            (*(*rcx_194 + 0x10))(rcx_194)
                
                int64_t* rcx_195 = r15_13[9]
                
                if ((*(*rcx_195 + 8))(rcx_195) == 0)
                    int64_t* rcx_196 = r15_13[9]
                    
                    if ((*(*rcx_196 + 0x18))(rcx_196) == 0)
                        int64_t* rcx_197 = r15_13[9]
                        
                        if ((*(*rcx_197 + 0x20))(rcx_197) == 0)
                            int64_t* rcx_198 = r15_13[9]
                            (*(*rcx_198 + 0x10))(rcx_198)
                
                int64_t r13_8 = var_100
                void*** r15_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                int64_t* r12_7 = var_108
                int128_t var_508_1 = data_142d57d10
                zmm0_2 = data_142d57920
                void* rax_176 = &r15_18[0xa]
                int128_t var_4f8_1 = data_142d3f800
                
                if (rax_176 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x58)
                    r15_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_176 = &r15_18[0xa]
                
                *(arg2 + 0x30) = rax_176
                int64_t* rax_177 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_177 = r15_18
                *(arg2 + 8) = &r15_18[1]
                r15_18[1] = 0
                *r15_18 = &data_142d56628
                r15_18[2].d = var_508_1.d
                __builtin_memset(r15_18 + 0x14, 0xff, 0x20)
                *(r15_18 + 0x34) = zmm0_2:4.d
                r15_18[7].d = zmm0_2:8.d
                *(r15_18 + 0x3c) = zmm0_2:0xc.d
                r15_18[8] = r12_7
                r15_18[9] = r13_8
                
                if ((*(*r12_7 + 8))(r12_7) == 0)
                    int64_t* rcx_201 = r15_18[8]
                    
                    if ((*(*rcx_201 + 0x18))(rcx_201) == 0)
                        int64_t* rcx_202 = r15_18[8]
                        
                        if ((*(*rcx_202 + 0x20))(rcx_202) == 0)
                            int64_t* rcx_203 = r15_18[8]
                            (*(*rcx_203 + 0x10))(rcx_203)
                
                int64_t* rcx_204 = r15_18[9]
                
                if ((*(*rcx_204 + 8))(rcx_204) == 0)
                    int64_t* rcx_205 = r15_18[9]
                    
                    if ((*(*rcx_205 + 0x18))(rcx_205) == 0)
                        int64_t* rcx_206 = r15_18[9]
                        
                        if ((*(*rcx_206 + 0x20))(rcx_206) == 0)
                            int64_t* rcx_207 = r15_18[9]
                            (*(*rcx_207 + 0x10))(rcx_207)
                
                int64_t r13_9 = var_178
                void*** r15_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                int64_t* r12_8 = var_180
                int128_t var_4d8_1 = data_142d57d10
                zmm0_2 = data_142d57920
                void* rax_197 = &r15_23[0xa]
                int128_t var_4c8_1 = data_142d3f800
                
                if (rax_197 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x58)
                    r15_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_197 = &r15_23[0xa]
                
                *(arg2 + 0x30) = rax_197
                int64_t* rax_198 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_198 = r15_23
                *(arg2 + 8) = &r15_23[1]
                r15_23[1] = 0
                *r15_23 = &data_142d56628
                r15_23[2].d = var_4d8_1.d
                __builtin_memset(r15_23 + 0x14, 0xff, 0x20)
                *(r15_23 + 0x34) = zmm0_2:4.d
                r15_23[7].d = zmm0_2:8.d
                *(r15_23 + 0x3c) = zmm0_2:0xc.d
                r15_23[8] = r12_8
                r15_23[9] = r13_9
                
                if ((*(*r12_8 + 8))(r12_8) == 0)
                    int64_t* rcx_210 = r15_23[8]
                    
                    if ((*(*rcx_210 + 0x18))(rcx_210) == 0)
                        int64_t* rcx_211 = r15_23[8]
                        
                        if ((*(*rcx_211 + 0x20))(rcx_211) == 0)
                            int64_t* rcx_212 = r15_23[8]
                            (*(*rcx_212 + 0x10))(rcx_212)
                
                int64_t* rcx_213 = r15_23[9]
                
                if ((*(*rcx_213 + 8))(rcx_213) == 0)
                    int64_t* rcx_214 = r15_23[9]
                    
                    if ((*(*rcx_214 + 0x18))(rcx_214) == 0)
                        int64_t* rcx_215 = r15_23[9]
                        
                        if ((*(*rcx_215 + 0x20))(rcx_215) == 0)
                            int64_t* rcx_216 = r15_23[9]
                            (*(*rcx_216 + 0x10))(rcx_216)
                
                int64_t* r15_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                int64_t rdx_71 = *(*(rax_148 + 0x130) + 8)
                int64_t rcx_218 = *(*(rax_148 + 0x128) + 0x18)
                void* rax_220 = &r15_28[2]
                
                if (rax_220 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x18)
                    r15_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_220 = &r15_28[2]
                
                *(arg2 + 0x30) = rax_220
                *r15_28 = rdx_71
                r15_28[1] = rcx_218
                void*** rcx_222 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_222 = &rcx_222[6]
                
                if (rax_222 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rcx_222 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_222 = &rcx_222[6]
                
                *(arg2 + 0x30) = rax_222
                void**** rax_223 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_223 = rcx_222
                *(arg2 + 8) = &rcx_222[1]
                rcx_222[1] = 0
                *rcx_222 = &data_142da7798
                rcx_222[2].d = 2
                rcx_222[3] = r15_28
                rcx_222[4].d = 0
                *(rcx_222 + 0x24) = 2
                rcx_222[5] = 0
                
                if (*(arg2 + 0x8c) != rbx_39)
                    *(arg2 + 0x8c) = rbx_39
                    
                    if (*(arg2 + 0x14) u> 0)
                        void*** rdx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_225 = &rdx_74[3]
                        
                        if (rax_225 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_225 = &rdx_74[3]
                        
                        *(arg2 + 0x30) = rax_225
                        int64_t* rax_226 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_226 = rdx_74
                        int32_t rax_227 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_74[1]
                        rdx_74[1] = 0
                        *rdx_74 = &data_142f11588
                        rdx_74[2].d = rax_227
                    else
                        *(arg2 + 0x90) = rbx_39
                
                j_8 = j_9 + 1
                rbx_38 = var_558_2
                rcx_170 = &var_560_2[1]
                j_9 = j_8
                var_560_2 = rcx_170
            while (j_8 s< rbx_38[8].d)
            rdi_4 = var_570_3
            i_4 = var_568.d
            r15 = arg1
        
        void var_188
        sub_1405ec8a0(&var_188)
        void var_190
        sub_1405d1550(&var_190)
        void var_198
        sub_1405ec8a0(&var_198)
        void var_1a0
        sub_1405ec8a0(&var_1a0)
        void var_1c8
        sub_14117b380(&var_1c8)
        void var_1e0
        sub_14117b570(&var_1e0)
        void var_1e8
        sub_1405d1550(&var_1e8)
        sub_1405d1550(&var_1f0)
        sub_1405d1550(&var_1f8)
        void var_110
        sub_1405ec8a0(&var_110)
        void var_118
        sub_1405d1550(&var_118)
        void var_120
        sub_1405ec8a0(&var_120)
        void var_128
        sub_1405ec8a0(&var_128)
        void var_150
        sub_14117b380(&var_150)
        void var_168
        sub_14117b570(&var_168)
        void var_170
        sub_1405d1550(&var_170)
        sub_1405d1550(&var_178)
        sub_1405d1550(&var_180)
        void var_98
        sub_1405ec8a0(&var_98)
        void var_a0
        sub_1405d1550(&var_a0)
        void var_a8
        sub_1405ec8a0(&var_a8)
        void var_b0
        sub_1405ec8a0(&var_b0)
        void var_d8
        sub_14117b380(&var_d8)
        void var_f0
        sub_14117b570(&var_f0)
        void var_f8
        sub_1405d1550(&var_f8)
        sub_1405d1550(&var_100)
        sub_1405d1550(&var_108)
        i_4 += 1
        rdi_4 += 0x48
        var_568.d = i_4
        var_570_3 = rdi_4
    while (i_4 s< *(r15 + 0x328))
    
    rdi = var_578

if (*(arg2 + 0x8c) != rdi)
    bool cond:5_1 = *(arg2 + 0x14) u> 0
    *(arg2 + 0x8c) = rdi
    
    if (cond:5_1)
        void*** rcx_258 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_228 = &rcx_258[3]
        
        if (rax_228 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_258 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_228 = &rcx_258[3]
        
        *(arg2 + 0x30) = rax_228
        int64_t* rax_229 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_229 = rcx_258
        int32_t rax_230 = *(arg2 + 0x8c)
        *(arg2 + 8) = &rcx_258[1]
        rcx_258[1] = 0
        *rcx_258 = &data_142f11588
        rcx_258[2].d = rax_230
    else
        *(arg2 + 0x90) = rdi

int64_t result = sub_140b37f60("RenderShadows")
__security_check_cookie(rax_1 ^ &var_5b8)
return result
