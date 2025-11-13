// 函数: sub_1407c6720
// 地址: 0x1407c6720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r15 = nullptr
uint32_t arg_18 = 0
uint32_t arg_20 = 0
int64_t rbx = 0
void* rax = *arg3

if (rax != 0)
    int64_t rdx = sx.q(*(rax + 0x10c))
    int64_t* r15_1 = *(arg3[1] + 0x10)
    int64_t rbx_1 = r15_1[3]
    
    if (*(rbx_1 + (rdx << 3)) == 0)
        sub_1419ccf30(r15_1, rdx.d)
        rbx_1 = r15_1[3]
    
    rbx = *(rbx_1 + (rdx << 3))
    r15 = nullptr

void* r10 = arg3[2]
int64_t var_138 = rbx
int64_t* rcx_5

if (*(r10 + 0xd0) == *(r10 + 0xfc))
label_1407c6814_1:
    rcx_5 = nullptr
else
    int64_t r11_1 = arg3[3]
    void* r9_1 = r10 + 0x100
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_7 =
        *(r9_1 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d) & (sx.q(*(r10 + 0x110)) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_1407c6814_2:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_7) * 0xe0 + *(r10 + 0xc8)
            
            if (*rcx_5 == r11_1)
                break
            
            rax_7 = rcx_5[0x1a].d
            
            if (rax_7 == 0xffffffff)
                goto label_1407c6814
        
        if (rax_7 == 0xffffffff)
        label_1407c6814:
            rcx_5 = nullptr

void* rax_8 = &rcx_5[2]

if (rcx_5 == 0)
    rax_8 = nullptr

if (rax_8 != 0)
    r15 = *rax_8
    
    if (r15 != 0)
        int64_t r13_1 = *(r15 + 0x158)
        
        if (*(arg1 + 0xe) u> 0)
            int64_t rcx_7 = *(arg2 + 0x30) + 7
            arg_20 = zx.d(*(arg1 + 0xc))
            void*** rcx_8 = rcx_7 & 0xfffffffffffffff8
            void* rax_10 = &rcx_8[5]
            
            if (rax_10 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_10 = &rcx_8[5]
            
            *(arg2 + 0x30) = rax_10
            int64_t* rax_11 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_11 = rcx_8
            *(arg2 + 8) = &rcx_8[1]
            rcx_8[1] = 0
            rcx_8[3].d = arg_20
            *rcx_8 = &data_142d99560
            rcx_8[2] = rbx
            rcx_8[4] = r13_1
        
        int64_t r13_2 = *(r15 + 0x160)
        
        if (*(arg1 + 0xa) u> 0)
            int64_t rcx_13 = *(arg2 + 0x30) + 7
            arg_20 = zx.d(*(arg1 + 8))
            void*** rcx_14 = rcx_13 & 0xfffffffffffffff8
            void* rax_15 = &rcx_14[5]
            
            if (rax_15 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_15 = &rcx_14[5]
            
            *(arg2 + 0x30) = rax_15
            int64_t* rax_16 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_16 = rcx_14
            *(arg2 + 8) = &rcx_14[1]
            rcx_14[1] = 0
            rcx_14[3].d = arg_20
            *rcx_14 = &data_142d99560
            rcx_14[2] = rbx
            rcx_14[4] = r13_2
        
        int64_t r13_3 = *(r15 + 0x168)
        
        if (*(arg1 + 0x2a) u> 0)
            int64_t rcx_19 = *(arg2 + 0x30) + 7
            arg_20 = zx.d(*(arg1 + 0x28))
            void*** rcx_20 = rcx_19 & 0xfffffffffffffff8
            void* rax_20 = &rcx_20[5]
            
            if (rax_20 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_20 = &rcx_20[5]
            
            *(arg2 + 0x30) = rax_20
            int64_t* rax_21 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_21 = rcx_20
            *(arg2 + 8) = &rcx_20[1]
            rcx_20[1] = 0
            rcx_20[3].d = arg_20
            *rcx_20 = &data_142d99560
            rcx_20[2] = rbx
            rcx_20[4] = r13_3
        
        arg_20 = *(r15 + 0x180)
        sub_140741e30(arg2, &var_138, arg1 + 0x74, &arg_20, 0)
        uint32_t var_128
        void*** rcx_27
        int64_t r13_4
        
        if (*(r15 + 0x180) u<= 0)
            r13_4 = sub_14082c510()
            
            if (*(arg1 + 0x2e) u> 0)
                rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                var_128 = zx.d(*(arg1 + 0x2c))
                void* rdx_4 = &rcx_27[5]
                
                if (rdx_4 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_4 = &rcx_27[5]
                
                *(arg2 + 0x30) = rdx_4
            label_1407c6aa6:
                int64_t* rax_29 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_29 = rcx_27
                *(arg2 + 8) = &rcx_27[1]
                rcx_27[1] = 0
                uint32_t rax_31 = var_128
                rcx_27[4] = r13_4
                rcx_27[3].d = rax_31
                rcx_27[2] = rbx
                *rcx_27 = &data_142d99560
        else
            r13_4 = *(r15 + 0x170)
            
            if (*(arg1 + 0x2e) u> 0)
                int64_t rcx_26 = *(arg2 + 0x30) + 7
                var_128 = zx.d(*(arg1 + 0x2c))
                rcx_27 = rcx_26 & 0xfffffffffffffff8
                void* rax_26 = &rcx_27[5]
                
                if (rax_26 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_26 = &rcx_27[5]
                
                *(arg2 + 0x30) = rax_26
                goto label_1407c6aa6
        int64_t r13_5 = *(r15 + 0x178)
        void*** rcx_38
        
        if (r13_5 == 0)
            r13_5 = sub_14082c510()
            
            if (*(arg1 + 0x32) u> 0)
                rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                var_128 = zx.d(*(arg1 + 0x30))
                void* rdx_5 = &rcx_38[5]
                
                if (rdx_5 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_5 = &rcx_38[5]
                
                *(arg2 + 0x30) = rdx_5
            label_1407c6b7d:
                void**** rax_36 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_36 = rcx_38
                *(arg2 + 8) = &rcx_38[1]
                rcx_38[1] = 0
                uint32_t rax_38 = var_128
                rcx_38[4] = r13_5
                rcx_38[3].d = rax_38
                rcx_38[2] = rbx
                *rcx_38 = &data_142d99560
        else if (*(arg1 + 0x32) u> 0)
            int64_t rcx_37 = *(arg2 + 0x30) + 7
            var_128 = zx.d(*(arg1 + 0x30))
            rcx_38 = rcx_37 & 0xfffffffffffffff8
            void* rax_33 = &rcx_38[5]
            
            if (rax_33 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_33 = &rcx_38[5]
            
            *(arg2 + 0x30) = rax_33
            goto label_1407c6b7d
        var_128 = *(r15 + 0x198)
        sub_140741e30(arg2, &var_138, arg1 + 0x5c, &var_128, 0)
        int32_t var_a0 = *(r15 + 0x19c)
        sub_140741e30(arg2, &var_138, arg1 + 0x62, &var_a0, 0)
        
        if (*(rax_8 + 0x20) == 0)
            int64_t rax_51 = sub_14082c510()
            
            if (*(arg1 + 0x36) u> 0)
                uint32_t rax_52 = zx.d(*(arg1 + 0x34))
                void*** rcx_65 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_8 = &rcx_65[5]
                
                if (rdx_8 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_65 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_8 = &rcx_65[5]
                
                *(arg2 + 0x30) = rdx_8
                void**** rax_53 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_53 = rcx_65
                *(arg2 + 8) = &rcx_65[1]
                rcx_65[1] = 0
                rcx_65[3].d = rax_52
                *rcx_65 = &data_142d99560
                rcx_65[2] = rbx
                rcx_65[4] = rax_51
            
            int64_t rax_56 = sub_14082c830()
            
            if (*(arg1 + 0x3a) u> 0)
                uint32_t rax_57 = zx.d(*(arg1 + 0x38))
                void*** rcx_71 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_9 = &rcx_71[5]
                
                if (rdx_9 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_71 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_9 = &rcx_71[5]
                
                *(arg2 + 0x30) = rdx_9
                void**** rax_58 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_58 = rcx_71
                *(arg2 + 8) = &rcx_71[1]
                rcx_71[1] = 0
                rcx_71[3].d = rax_57
                *rcx_71 = &data_142d99560
                rcx_71[2] = rbx
                rcx_71[4] = rax_56
        else
            void* r12_3 = *(r15 + 0x18)
            void* var_98 = r12_3
            
            if (r12_3 != 0)
                *(r12_3 + 8) += 1
                rbx = var_138
            
            if (*(arg1 + 0x36) u> 0)
                uint32_t rax_41 = zx.d(*(arg1 + 0x34))
                void*** rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_42 = &rcx_51[5]
                
                if (rax_42 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_42 = &rcx_51[5]
                
                *(arg2 + 0x30) = rax_42
                void** rax_43 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_43 = rcx_51
                *(arg2 + 8) = &rcx_51[1]
                rcx_51[1] = 0
                rcx_51[3].d = rax_41
                *rcx_51 = &data_142d99560
                rcx_51[2] = rbx
                rcx_51[4] = r12_3
            
            sub_1405ec8a0(&var_98)
            void* r12_4 = *(r15 + 0x28)
            void* var_90 = r12_4
            
            if (r12_4 != 0)
                *(r12_4 + 8) += 1
                rbx = var_138
            
            if (*(arg1 + 0x3a) u> 0)
                uint32_t rax_46 = zx.d(*(arg1 + 0x38))
                void*** rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_47 = &rcx_58[5]
                
                if (rax_47 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_47 = &rcx_58[5]
                
                *(arg2 + 0x30) = rax_47
                void**** rax_48 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_48 = rcx_58
                *(arg2 + 8) = &rcx_58[1]
                rcx_58[1] = 0
                rcx_58[3].d = rax_46
                *rcx_58 = &data_142d99560
                rcx_58[2] = rbx
                rcx_58[4] = r12_4
            
            sub_1405ec8a0(&var_90)
        
        int32_t var_9c = *(r15 + 0x44)
        sub_140741e30(arg2, &var_138, arg1 + 0x3c, &var_9c, 0)
        int32_t var_118 = *(r15 + 0x48)
        sub_140741e30(arg2, &var_138, arg1 + 0x42, &var_118, 0)
        
        if (*(r15 + 0x40) == 0 || *(r15 + 0x44) s<= 0)
            int64_t rax_73 = sub_14082c510()
            
            if (*(arg1 + 0x4a) u> 0)
                uint32_t rax_74 = zx.d(*(arg1 + 0x48))
                void*** rcx_93 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_12 = &rcx_93[5]
                
                if (rdx_12 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_93 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_12 = &rcx_93[5]
                
                *(arg2 + 0x30) = rdx_12
                void**** rax_75 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_75 = rcx_93
                *(arg2 + 8) = &rcx_93[1]
                rcx_93[1] = 0
                rcx_93[3].d = rax_74
                *rcx_93 = &data_142d99560
                rcx_93[2] = rbx
                rcx_93[4] = rax_73
            
            int64_t rax_78 = sub_14082c830()
            
            if (*(arg1 + 0x4e) u> 0)
                uint32_t rax_79 = zx.d(*(arg1 + 0x4c))
                void*** rcx_99 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_13 = &rcx_99[5]
                
                if (rdx_13 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_99 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_13 = &rcx_99[5]
                
                *(arg2 + 0x30) = rdx_13
                void**** rax_80 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_80 = rcx_99
                *(arg2 + 8) = &rcx_99[1]
                rcx_99[1] = 0
                rcx_99[3].d = rax_79
                *rcx_99 = &data_142d99560
                rcx_99[2] = rbx
                rcx_99[4] = rax_78
        else
            void* r12_5 = *(r15 + 0xd8)
            void* var_88 = r12_5
            
            if (r12_5 != 0)
                *(r12_5 + 8) += 1
                rbx = var_138
            
            if (*(arg1 + 0x4a) u> 0)
                uint32_t rax_63 = zx.d(*(arg1 + 0x48))
                void*** rcx_79 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_64 = &rcx_79[5]
                
                if (rax_64 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_79 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_64 = &rcx_79[5]
                
                *(arg2 + 0x30) = rax_64
                void**** rax_65 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_65 = rcx_79
                *(arg2 + 8) = &rcx_79[1]
                rcx_79[1] = 0
                rcx_79[3].d = rax_63
                *rcx_79 = &data_142d99560
                rcx_79[2] = rbx
                rcx_79[4] = r12_5
            
            sub_1405ec8a0(&var_88)
            void* r12_6 = *(r15 + 0xe8)
            void* var_80 = r12_6
            
            if (r12_6 != 0)
                *(r12_6 + 8) += 1
                rbx = var_138
            
            if (*(arg1 + 0x4e) u> 0)
                uint32_t rax_68 = zx.d(*(arg1 + 0x4c))
                void*** rcx_86 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_69 = &rcx_86[5]
                
                if (rax_69 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_86 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_69 = &rcx_86[5]
                
                *(arg2 + 0x30) = rax_69
                void**** rax_70 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_70 = rcx_86
                *(arg2 + 8) = &rcx_86[1]
                rcx_86[1] = 0
                rcx_86[3].d = rax_68
                *rcx_86 = &data_142d99560
                rcx_86[2] = rbx
                rcx_86[4] = r12_6
            
            sub_1405ec8a0(&var_80)
        
        void* var_78
        void* r12_7
        
        if (*(r15 + 0x44) s<= 0)
            r12_7 = sub_14082c830()
        else
            r12_7 = *(r15 + 0xf8)
            var_78 = r12_7
            
            if (r12_7 != 0)
                *(r12_7 + 8) += 1
                rbx = var_138
            
            arg_18 = 1
        
        if (*(arg1 + 0x52) u> 0)
            uint32_t rax_84 = zx.d(*(arg1 + 0x50))
            void*** rcx_105 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_85 = &rcx_105[5]
            
            if (rax_85 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_105 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_85 = &rcx_105[5]
            
            *(arg2 + 0x30) = rax_85
            void**** rax_86 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_86 = rcx_105
            *(arg2 + 8) = &rcx_105[1]
            rcx_105[1] = 0
            rcx_105[3].d = rax_84
            *rcx_105 = &data_142d99560
            rcx_105[2] = rbx
            rcx_105[4] = r12_7
        
        uint32_t rax_90 = arg_18
        
        if ((rax_90.b & 1) != 0)
            arg_18 = rax_90 & 0xfffffffe
            sub_1405ec8a0(&var_78)
            rax_90 = arg_18
        
        void* var_70
        void* r12_8
        
        if (*(r15 + 0x48) s<= 0)
            r12_8 = sub_14082c830()
        else
            r12_8 = *(r15 + 0x108)
            arg_18 = rax_90 | 2
            var_70 = r12_8
            
            if (r12_8 != 0)
                *(r12_8 + 8) += 1
                rbx = var_138
        
        if (*(arg1 + 0x56) u> 0)
            uint32_t rax_93 = zx.d(*(arg1 + 0x54))
            void*** rcx_112 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_94 = &rcx_112[5]
            
            if (rax_94 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_112 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_94 = &rcx_112[5]
            
            *(arg2 + 0x30) = rax_94
            void**** rax_95 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_95 = rcx_112
            *(arg2 + 8) = &rcx_112[1]
            rcx_112[1] = 0
            rcx_112[3].d = rax_93
            *rcx_112 = &data_142d99560
            rcx_112[2] = rbx
            rcx_112[4] = r12_8
        
        if ((arg_18.b & 2) != 0)
            sub_1405ec8a0(&var_70)
        
        void* r12_9 = rax_8
        int64_t r13_10 = *(*(r12_9 + 0x10) + 0x18)
        
        if (*(arg1 + 0x12) u> 0)
            uint32_t rax_100 = zx.d(*(arg1 + 0x10))
            void*** rcx_119 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_101 = &rcx_119[5]
            
            if (rax_101 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_119 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_101 = &rcx_119[5]
            
            *(arg2 + 0x30) = rax_101
            int64_t* rax_102 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_102 = rcx_119
            *(arg2 + 8) = &rcx_119[1]
            rcx_119[1] = 0
            rcx_119[3].d = rax_100
            *rcx_119 = &data_142d99560
            rcx_119[2] = rbx
            rcx_119[4] = r13_10
        
        int64_t r13_11 = *(*(r12_9 + 0x18) + 0x18)
        
        if (*(arg1 + 0x16) u> 0)
            uint32_t rax_106 = zx.d(*(arg1 + 0x14))
            void*** rcx_125 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_107 = &rcx_125[5]
            
            if (rax_107 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_125 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_107 = &rcx_125[5]
            
            r12_9 = rax_8
            *(arg2 + 0x30) = rax_107
            int64_t* rax_108 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_108 = rcx_125
            *(arg2 + 8) = &rcx_125[1]
            rcx_125[1] = 0
            rcx_125[3].d = rax_106
            *rcx_125 = &data_142d99560
            rcx_125[2] = rbx
            rcx_125[4] = r13_11
        
        uint32_t var_114 = *(r12_9 + 0x24) u>> 2
        int32_t rcx_130
        int32_t rdx_15
        rcx_130, rdx_15 = sub_140741e30(arg2, &var_138, arg1 + 0x68, &var_114, 0)
        void* r13_12 = *(r12_9 + 8)
        int32_t rax_114
        rax_114.b = *(r12_9 + 0x20) != 0
        int32_t var_e8 = (sbb.d(rdx_15, rdx_15, *(r12_9 + 0x21) != 0) & 4) | rax_114
            | (sbb.d(rcx_130, rcx_130, *(r15 + 0x40) != 0) & 2)
        int64_t* rdx_20 = &var_138
        
        if (*(r13_12 + 0x61) == 0)
            int32_t var_10c = 0
            sub_140741e30(arg2, rdx_20, arg1 + 0x7a, &var_10c, 0)
            arg_20.q = sub_14082c490()
            
            if (*(arg1 + 0x1a) u> 0)
                uint32_t rax_163 = zx.d(*(arg1 + 0x18))
                void*** rcx_167 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_22 = &rcx_167[5]
                
                if (rdx_22 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_167 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_22 = &rcx_167[5]
                
                *(arg2 + 0x30) = rdx_22
                int64_t* rax_164 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_164 = rcx_167
                *(arg2 + 8) = &rcx_167[1]
                rcx_167[1] = 0
                rcx_167[3].d = rax_163
                rcx_167[4] = arg_20.q
                *rcx_167 = &data_142d99560
                rcx_167[2] = rbx
            
            arg_20.q = sub_14082c490()
            
            if (*(arg1 + 0x1e) u> 0)
                uint32_t rax_169 = zx.d(*(arg1 + 0x1c))
                void*** rcx_173 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_23 = &rcx_173[5]
                
                if (rdx_23 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_173 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_23 = &rcx_173[5]
                
                *(arg2 + 0x30) = rdx_23
                int64_t* rax_170 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_170 = rcx_173
                *(arg2 + 8) = &rcx_173[1]
                rcx_173[1] = 0
                rcx_173[3].d = rax_169
                rcx_173[4] = arg_20.q
                *rcx_173 = &data_142d99560
                rcx_173[2] = rbx
            
            arg_20.q = sub_14082c490()
            
            if (*(arg1 + 0x22) u> 0)
                uint32_t rax_175 = zx.d(*(arg1 + 0x20))
                void*** rcx_179 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_24 = &rcx_179[5]
                
                if (rdx_24 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_179 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_24 = &rcx_179[5]
                
                *(arg2 + 0x30) = rdx_24
                int64_t* rax_176 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_176 = rcx_179
                *(arg2 + 8) = &rcx_179[1]
                rcx_179[1] = 0
                rcx_179[3].d = rax_175
                rcx_179[4] = arg_20.q
                *rcx_179 = &data_142d99560
                rcx_179[2] = rbx
            
            arg_20.q = sub_14082c490()
            
            if (*(arg1 + 0x26) u> 0)
                uint32_t rax_181 = zx.d(*(arg1 + 0x24))
                void*** rcx_185 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_25 = &rcx_185[5]
                
                if (rdx_25 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_185 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_25 = &rcx_185[5]
                
                *(arg2 + 0x30) = rdx_25
                int64_t* rax_182 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_182 = rcx_185
                *(arg2 + 8) = &rcx_185[1]
                rcx_185[1] = 0
                rcx_185[3].d = rax_181
                rcx_185[4] = arg_20.q
                *rcx_185 = &data_142d99560
                rcx_185[2] = rbx
            
            arg_20.q = sub_14082c830()
            
            if (*(arg1 + 0x5a) u> 0)
                uint32_t rax_187 = zx.d(*(arg1 + 0x58))
                void*** rcx_191 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_26 = &rcx_191[5]
                
                if (rdx_26 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_191 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_26 = &rcx_191[5]
                
                *(arg2 + 0x30) = rdx_26
                int64_t* rax_188 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_188 = rcx_191
                *(arg2 + 8) = &rcx_191[1]
                rcx_191[1] = 0
                rcx_191[3].d = rax_187
                rcx_191[4] = arg_20.q
                *rcx_191 = &data_142d99560
                rcx_191[2] = rbx
        else
            int32_t var_110 = *(r15 + 0x184)
            sub_140741e30(arg2, rdx_20, arg1 + 0x7a, &var_110, 0)
            uint32_t var_130
            var_130.q = *(((zx.q(*(r13_12 + 0x60)) & 1) << 5) + r13_12 + 0x28)
            
            if (*(arg1 + 0x1a) u> 0)
                uint32_t rax_121 = zx.d(*(arg1 + 0x18))
                void*** rcx_136 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_122 = &rcx_136[5]
                
                if (rax_122 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_136 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_122 = &rcx_136[5]
                
                *(arg2 + 0x30) = rax_122
                int64_t* rax_123 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_123 = rcx_136
                *(arg2 + 8) = &rcx_136[1]
                rcx_136[1] = 0
                rcx_136[3].d = rax_121
                rcx_136[4] = var_130.q
                *rcx_136 = &data_142d99560
                rcx_136[2] = rbx
            
            uint32_t rax_127 = zx.d(*(r13_12 + 0x60))
            
            if (*(r13_12 + 0x62) != 0)
                rax_127 += 1
            
            var_130.q = *(((zx.q(rax_127) & 1) << 5) + r13_12 + 0x28)
            
            if (*(arg1 + 0x1e) u> 0)
                uint32_t rax_131 = zx.d(*(arg1 + 0x1c))
                void*** rcx_142 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_132 = &rcx_142[5]
                
                if (rax_132 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_142 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_132 = &rcx_142[5]
                
                *(arg2 + 0x30) = rax_132
                int64_t* rax_133 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_133 = rcx_142
                *(arg2 + 8) = &rcx_142[1]
                rcx_142[1] = 0
                rcx_142[3].d = rax_131
                rcx_142[4] = var_130.q
                *rcx_142 = &data_142d99560
                rcx_142[2] = rbx
            
            var_130.q = *(((zx.q(*(r13_12 + 0x60)) & 1) << 5) + r13_12 + 0x38)
            
            if (*(arg1 + 0x22) u> 0)
                uint32_t rax_141 = zx.d(*(arg1 + 0x20))
                void*** rcx_148 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_142 = &rcx_148[5]
                
                if (rax_142 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_148 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_142 = &rcx_148[5]
                
                *(arg2 + 0x30) = rax_142
                int64_t* rax_143 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_143 = rcx_148
                *(arg2 + 8) = &rcx_148[1]
                rcx_148[1] = 0
                rcx_148[3].d = rax_141
                rcx_148[4] = var_130.q
                *rcx_148 = &data_142d99560
                rcx_148[2] = rbx
            
            uint32_t rax_147 = zx.d(*(r13_12 + 0x60))
            
            if (*(r13_12 + 0x62) != 0)
                rax_147 += 1
            
            var_130.q = *(((zx.q(rax_147) & 1) << 5) + r13_12 + 0x38)
            
            if (*(arg1 + 0x26) u> 0)
                uint32_t rax_151 = zx.d(*(arg1 + 0x24))
                void*** rcx_154 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_152 = &rcx_154[5]
                
                if (rax_152 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_154 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_152 = &rcx_154[5]
                
                *(arg2 + 0x30) = rax_152
                int64_t* rax_153 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_153 = rcx_154
                *(arg2 + 8) = &rcx_154[1]
                rcx_154[1] = 0
                rcx_154[3].d = rax_151
                rcx_154[4] = var_130.q
                *rcx_154 = &data_142d99560
                rcx_154[2] = rbx
            
            void* r12_10 = *(r15 + 0x38)
            void* var_68 = r12_10
            
            if (r12_10 != 0)
                *(r12_10 + 8) += 1
                rbx = var_138
            
            if (*(arg1 + 0x5a) u> 0)
                uint32_t rax_157 = zx.d(*(arg1 + 0x58))
                void** rax_158 = arg2 + 0x30
                void*** rcx_160 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rdx_21 = &rcx_160[5]
                
                if (rdx_21 u> rax_158[1])
                    sub_140b0e3d0(rax_158, 0x30)
                    rax_158 = arg2 + 0x30
                    rcx_160 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rdx_21 = &rcx_160[5]
                
                *rax_158 = rdx_21
                void** rax_159 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_159 = rcx_160
                *(arg2 + 8) = &rcx_160[1]
                rcx_160[1] = 0
                rcx_160[3].d = rax_157
                *rcx_160 = &data_142d99560
                rcx_160[2] = rbx
                rcx_160[4] = r12_10
            
            sub_1405ec8a0(&var_68)
        
        int32_t var_108 = *(r13_12 + 0x10)
        sub_140741e30(arg2, &var_138, arg1 + 0x80, &var_108, 0)
        int32_t rax_193 = *(r15 + 0x110)
        
        if (rax_193 s<= 0)
            arg_18.q = sub_14082c830()
            rax_193 = *(r15 + 0x110)
        else
            arg_18.q = *(r15 + 0x148)
        
        int32_t var_104 = rax_193
        sub_140741e30(arg2, &var_138, arg1 + 0x86, &var_104, 0)
        int32_t var_100 = *(r15 + 0x114)
        sub_140741e30(arg2, &var_138, arg1 + 0x8c, &var_100, 0)
        int32_t var_fc = (*(r15 + 0x118) s>> 0x1f & 1) + *(r13_12 + 0x10) - 2
        sub_140741e30(arg2, &var_138, arg1 + 0x92, &var_fc, 0)
        int32_t var_f8 = *(r15 + 0x118)
        sub_140741e30(arg2, &var_138, arg1 + 0x98, &var_f8, 0)
        
        if (*(arg1 + 0xa0) u> 0)
            uint32_t r13_13 = zx.d(*(arg1 + 0x9e))
            void*** rcx_207 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_198 = &rcx_207[5]
            
            if (rax_198 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_207 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_198 = &rcx_207[5]
            
            *(arg2 + 0x30) = rax_198
            void**** rax_199 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_199 = rcx_207
            *(arg2 + 8) = &rcx_207[1]
            rcx_207[1] = 0
            rcx_207[3].d = r13_13
            rcx_207[4] = arg_18.q
            *rcx_207 = &data_142d99560
            rcx_207[2] = rbx
        
        int32_t var_f4 = *(r15 + 0x150)
        sub_140741e30(arg2, &var_138, arg1 + 0xa2, &var_f4, 0)
        int32_t var_f0 = *(r15 + 0x154)
        sub_140741e30(arg2, &var_138, arg1 + 0xa8, &var_f0, 0)
        sub_14077c730(arg2, &var_138, arg1 + 0xae, rax_8 + 0x30, 0)
        sub_14077c730(arg2, &var_138, arg1 + 0xb4, rax_8 + 0x70, 0)
        uint32_t var_58[0x4]
        sub_14077c870(arg2, &var_138, arg1 + 0xba, sub_140ae1ba0(rax_8 + 0x30, &var_58), 0)
        uint32_t var_48[0x4]
        sub_14077c870(arg2, &var_138, arg1 + 0xc0, sub_140ae1ba0(rax_8 + 0x70, &var_48), 0)
        float var_ec = 1f f/ *(rax_8 + 0xb0)
        sub_140741e30(arg2, &var_138, arg1 + 0xc6, &var_ec, 0)
        return sub_140741e30(arg2, &var_138, arg1 + 0xcc, &var_e8, 0)

int64_t rax_207 = sub_14082c510()

if (*(arg1 + 0xe) u> 0)
    uint32_t r13_14 = zx.d(*(arg1 + 0xc))
    void*** rcx_223 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_208 = &rcx_223[5]
    
    if (rax_208 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_223 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_208 = &rcx_223[5]
    
    *(arg2 + 0x30) = rax_208
    void**** rax_209 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_209 = rcx_223
    *(arg2 + 8) = &rcx_223[1]
    rcx_223[1] = 0
    *rcx_223 = &data_142d99560
    rcx_223[2] = rbx
    rcx_223[3].d = r13_14
    rcx_223[4] = rax_207

int64_t rax_211 = sub_14082c830()

if (*(arg1 + 0xa) u> 0)
    uint32_t r13_15 = zx.d(*(arg1 + 8))
    void*** rcx_229 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_42 = &rcx_229[5]
    
    if (rdx_42 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_229 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_42 = &rcx_229[5]
    
    *(arg2 + 0x30) = rdx_42
    void**** rax_212 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_212 = rcx_229
    *(arg2 + 8) = &rcx_229[1]
    rcx_229[1] = 0
    *rcx_229 = &data_142d99560
    rcx_229[2] = rbx
    rcx_229[3].d = r13_15
    rcx_229[4] = rax_211

int64_t rax_214 = sub_14082c510()

if (*(arg1 + 0x2a) u> 0)
    uint32_t r13_16 = zx.d(*(arg1 + 0x28))
    void*** rcx_235 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_43 = &rcx_235[5]
    
    if (rdx_43 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_235 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_43 = &rcx_235[5]
    
    *(arg2 + 0x30) = rdx_43
    void**** rax_215 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_215 = rcx_235
    *(arg2 + 8) = &rcx_235[1]
    rcx_235[1] = 0
    *rcx_235 = &data_142d99560
    rcx_235[2] = rbx
    rcx_235[3].d = r13_16
    rcx_235[4] = rax_214

int32_t var_e4 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x74, &var_e4, r15.d)
int64_t rax_217 = sub_14082c510()

if (*(arg1 + 0x2e) u> 0)
    uint32_t r13_17 = zx.d(*(arg1 + 0x2c))
    void*** rcx_242 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_45 = &rcx_242[5]
    
    if (rdx_45 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_242 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_45 = &rcx_242[5]
    
    *(arg2 + 0x30) = rdx_45
    void**** rax_218 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_218 = rcx_242
    *(arg2 + 8) = &rcx_242[1]
    rcx_242[1] = 0
    *rcx_242 = &data_142d99560
    rcx_242[2] = rbx
    rcx_242[3].d = r13_17
    rcx_242[4] = rax_217

int64_t rax_220 = sub_14082c510()

if (*(arg1 + 0x32) u> 0)
    uint32_t r13_18 = zx.d(*(arg1 + 0x30))
    void*** rcx_248 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_46 = &rcx_248[5]
    
    if (rdx_46 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_248 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_46 = &rcx_248[5]
    
    *(arg2 + 0x30) = rdx_46
    void**** rax_221 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_221 = rcx_248
    *(arg2 + 8) = &rcx_248[1]
    rcx_248[1] = 0
    *rcx_248 = &data_142d99560
    rcx_248[2] = rbx
    rcx_248[3].d = r13_18
    rcx_248[4] = rax_220

int32_t var_e0 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x5c, &var_e0, r15.d)
int32_t var_dc = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x62, &var_dc, r15.d)
int64_t rax_223 = sub_14082c510()

if (*(arg1 + 0x36) u> 0)
    uint32_t r12_18 = zx.d(*(arg1 + 0x34))
    void*** rcx_256 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_49 = &rcx_256[5]
    
    if (rdx_49 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_256 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_49 = &rcx_256[5]
    
    *(arg2 + 0x30) = rdx_49
    void**** rax_224 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_224 = rcx_256
    *(arg2 + 8) = &rcx_256[1]
    rcx_256[1] = 0
    *rcx_256 = &data_142d99560
    rcx_256[2] = rbx
    rcx_256[3].d = r12_18
    rcx_256[4] = rax_223

int64_t rax_226 = sub_14082c830()

if (*(arg1 + 0x3a) u> 0)
    uint32_t r13_20 = zx.d(*(arg1 + 0x38))
    void*** rcx_262 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_50 = &rcx_262[5]
    
    if (rdx_50 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_262 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_50 = &rcx_262[5]
    
    *(arg2 + 0x30) = rdx_50
    void**** rax_227 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_227 = rcx_262
    *(arg2 + 8) = &rcx_262[1]
    rcx_262[1] = 0
    *rcx_262 = &data_142d99560
    rcx_262[2] = rbx
    rcx_262[3].d = r13_20
    rcx_262[4] = rax_226

int32_t var_d8 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x3c, &var_d8, r15.d)
int32_t var_d4 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x42, &var_d4, r15.d)
int64_t rax_229 = sub_14082c510()

if (*(arg1 + 0x4a) u> 0)
    uint32_t r12_20 = zx.d(*(arg1 + 0x48))
    void*** rcx_270 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_53 = &rcx_270[5]
    
    if (rdx_53 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_270 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_53 = &rcx_270[5]
    
    *(arg2 + 0x30) = rdx_53
    void**** rax_230 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_230 = rcx_270
    *(arg2 + 8) = &rcx_270[1]
    rcx_270[1] = 0
    *rcx_270 = &data_142d99560
    rcx_270[2] = rbx
    rcx_270[3].d = r12_20
    rcx_270[4] = rax_229

int64_t rax_232 = sub_14082c830()

if (*(arg1 + 0x4e) u> 0)
    uint32_t r13_22 = zx.d(*(arg1 + 0x4c))
    void*** rcx_276 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_54 = &rcx_276[5]
    
    if (rdx_54 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_276 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_54 = &rcx_276[5]
    
    *(arg2 + 0x30) = rdx_54
    void**** rax_233 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_233 = rcx_276
    *(arg2 + 8) = &rcx_276[1]
    rcx_276[1] = 0
    *rcx_276 = &data_142d99560
    rcx_276[2] = rbx
    rcx_276[3].d = r13_22
    rcx_276[4] = rax_232

int64_t rax_235 = sub_14082c830()

if (*(arg1 + 0x52) u> 0)
    uint32_t r13_23 = zx.d(*(arg1 + 0x50))
    void*** rcx_282 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_55 = &rcx_282[5]
    
    if (rdx_55 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_282 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_55 = &rcx_282[5]
    
    *(arg2 + 0x30) = rdx_55
    void**** rax_236 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_236 = rcx_282
    *(arg2 + 8) = &rcx_282[1]
    rcx_282[1] = 0
    *rcx_282 = &data_142d99560
    rcx_282[2] = rbx
    rcx_282[3].d = r13_23
    rcx_282[4] = rax_235

int64_t rax_238 = sub_14082c830()

if (*(arg1 + 0x56) u> 0)
    uint32_t r13_24 = zx.d(*(arg1 + 0x54))
    void*** rcx_288 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_56 = &rcx_288[5]
    
    if (rdx_56 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_288 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_56 = &rcx_288[5]
    
    *(arg2 + 0x30) = rdx_56
    void**** rax_239 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_239 = rcx_288
    *(arg2 + 8) = &rcx_288[1]
    rcx_288[1] = 0
    *rcx_288 = &data_142d99560
    rcx_288[2] = rbx
    rcx_288[3].d = r13_24
    rcx_288[4] = rax_238

int64_t rax_241 = sub_14082c830()

if (*(arg1 + 0x12) u> 0)
    uint32_t r13_25 = zx.d(*(arg1 + 0x10))
    void*** rcx_294 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_57 = &rcx_294[5]
    
    if (rdx_57 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_294 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_57 = &rcx_294[5]
    
    *(arg2 + 0x30) = rdx_57
    void**** rax_242 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_242 = rcx_294
    *(arg2 + 8) = &rcx_294[1]
    rcx_294[1] = 0
    *rcx_294 = &data_142d99560
    rcx_294[2] = rbx
    rcx_294[3].d = r13_25
    rcx_294[4] = rax_241

int64_t rax_244 = sub_14082c830()

if (*(arg1 + 0x16) u> 0)
    uint32_t r13_26 = zx.d(*(arg1 + 0x14))
    void*** rcx_300 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_58 = &rcx_300[5]
    
    if (rdx_58 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_300 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_58 = &rcx_300[5]
    
    *(arg2 + 0x30) = rdx_58
    void**** rax_245 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_245 = rcx_300
    *(arg2 + 8) = &rcx_300[1]
    rcx_300[1] = 0
    *rcx_300 = &data_142d99560
    rcx_300[2] = rbx
    rcx_300[3].d = r13_26
    rcx_300[4] = rax_244

int32_t var_d0 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x68, &var_d0, r15.d)
int32_t var_cc = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x6e, &var_cc, r15.d)
int32_t var_c8 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x7a, &var_c8, r15.d)
int64_t rax_247 = sub_14082c490()

if (*(arg1 + 0x1a) u> 0)
    uint32_t r12_26 = zx.d(*(arg1 + 0x18))
    void*** rcx_309 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_62 = &rcx_309[5]
    
    if (rdx_62 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_309 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_62 = &rcx_309[5]
    
    *(arg2 + 0x30) = rdx_62
    void**** rax_248 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_248 = rcx_309
    *(arg2 + 8) = &rcx_309[1]
    rcx_309[1] = 0
    *rcx_309 = &data_142d99560
    rcx_309[2] = rbx
    rcx_309[3].d = r12_26
    rcx_309[4] = rax_247

int64_t rax_250 = sub_14082c490()

if (*(arg1 + 0x1e) u> 0)
    uint32_t r13_28 = zx.d(*(arg1 + 0x1c))
    void*** rcx_315 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_63 = &rcx_315[5]
    
    if (rdx_63 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_315 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_63 = &rcx_315[5]
    
    *(arg2 + 0x30) = rdx_63
    void**** rax_251 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_251 = rcx_315
    *(arg2 + 8) = &rcx_315[1]
    rcx_315[1] = 0
    *rcx_315 = &data_142d99560
    rcx_315[2] = rbx
    rcx_315[3].d = r13_28
    rcx_315[4] = rax_250

int64_t rax_253 = sub_14082c490()

if (*(arg1 + 0x22) u> 0)
    uint32_t r13_29 = zx.d(*(arg1 + 0x20))
    void*** rcx_321 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_64 = &rcx_321[5]
    
    if (rdx_64 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_321 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_64 = &rcx_321[5]
    
    *(arg2 + 0x30) = rdx_64
    void**** rax_254 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_254 = rcx_321
    *(arg2 + 8) = &rcx_321[1]
    rcx_321[1] = 0
    *rcx_321 = &data_142d99560
    rcx_321[2] = rbx
    rcx_321[3].d = r13_29
    rcx_321[4] = rax_253

int64_t rax_256 = sub_14082c490()

if (*(arg1 + 0x26) u> 0)
    uint32_t r13_30 = zx.d(*(arg1 + 0x24))
    void*** rcx_327 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_65 = &rcx_327[5]
    
    if (rdx_65 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_327 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_65 = &rcx_327[5]
    
    *(arg2 + 0x30) = rdx_65
    void**** rax_257 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_257 = rcx_327
    *(arg2 + 8) = &rcx_327[1]
    rcx_327[1] = 0
    *rcx_327 = &data_142d99560
    rcx_327[2] = rbx
    rcx_327[3].d = r13_30
    rcx_327[4] = rax_256

int64_t rax_259 = sub_14082c830()

if (*(arg1 + 0x5a) u> 0)
    uint32_t r13_31 = zx.d(*(arg1 + 0x58))
    void*** rcx_333 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_66 = &rcx_333[5]
    
    if (rdx_66 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_333 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_66 = &rcx_333[5]
    
    *(arg2 + 0x30) = rdx_66
    void**** rax_260 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_260 = rcx_333
    *(arg2 + 8) = &rcx_333[1]
    rcx_333[1] = 0
    *rcx_333 = &data_142d99560
    rcx_333[2] = rbx
    rcx_333[3].d = r13_31
    rcx_333[4] = rax_259

int32_t var_c4 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x80, &var_c4, r15.d)
int32_t var_c0 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x86, &var_c0, r15.d)
int32_t var_bc = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x8c, &var_bc, r15.d)
int32_t var_b8 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x92, &var_b8, r15.d)
int32_t var_b4 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0x98, &var_b4, r15.d)
int64_t rax_262 = sub_14082c830()

if (*(arg1 + 0xa0) u> 0)
    uint32_t r12_31 = zx.d(*(arg1 + 0x9e))
    void*** rcx_344 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_72 = &rcx_344[5]
    
    if (rdx_72 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_344 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_72 = &rcx_344[5]
    
    *(arg2 + 0x30) = rdx_72
    void**** rax_263 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r15 = nullptr
    *rax_263 = rcx_344
    *(arg2 + 8) = &rcx_344[1]
    rcx_344[1] = 0
    *rcx_344 = &data_142d99560
    rcx_344[2] = rbx
    rcx_344[3].d = r12_31
    rcx_344[4] = rax_262

int32_t var_b0 = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0xa2, &var_b0, r15.d)
int32_t var_ac = r15.d
sub_140741e30(arg2, &var_138, arg1 + 0xa8, &var_ac, r15.d)
sub_14077c730(arg2, &var_138, arg1 + 0xae, &data_14399f6e0, r15.d)
sub_14077c730(arg2, &var_138, arg1 + 0xb4, &data_14399f6e0, r15.d)
sub_14077c870(arg2, &var_138, arg1 + 0xba, &data_14399f720, r15.d)
sub_14077c870(arg2, &var_138, arg1 + 0xc0, &data_14399f720, r15.d)
int32_t var_a8 = 0
sub_140741e30(arg2, &var_138, arg1 + 0xc6, &var_a8, r15.d)
int32_t var_a4 = r15.d
return sub_140741e30(arg2, &var_138, arg1 + 0xcc, &var_a4, r15.d)
