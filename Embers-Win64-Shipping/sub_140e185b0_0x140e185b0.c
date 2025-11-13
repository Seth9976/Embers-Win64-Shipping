// 函数: sub_140e185b0
// 地址: 0x140e185b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_10 = arg2
void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t* result_1 = nullptr
int64_t* rdx_5

if (arg1[7].d == *(arg1 + 0x64))
label_140e1864e_1:
    rdx_5 = nullptr
else
    int32_t rax_4 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = &arg1[0xd]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_6 = *(r8 + (((sx.q(arg1[0xf].d) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_140e1864e_2:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_6) << 5) + arg1[6]
            
            if (*rdx_5 == arg3)
                break
            
            rax_6 = rdx_5[3].d
            
            if (rax_6 == 0xffffffff)
                goto label_140e1864e
        
        if (rax_6 == 0xffffffff)
        label_140e1864e:
            rdx_5 = nullptr

void* r15 = &rdx_5[1]

if (rdx_5 == 0)
    r15 = nullptr

int64_t* result
char var_b0

if (r15 != 0)
    int64_t* result_2 = *r15
    int64_t* r15_2 = *(r15 + 8)
    
    if (r15_2 != 0)
        r15_2[1].d += 1
    
    void var_248
    
    if (*(*(*result_2 + 0x10))(result_2, &var_248) == arg_10)
        result_1 = result_2
    else
        void var_240
        void var_188
        int64_t* rax_59 = sub_140aae2b0(&var_188, (*(*result_2 + 0x10))(result_2, &var_240))
        void var_170
        int64_t* rax_60 = sub_140aae2b0(&var_170, &arg_10)
        void var_158
        int64_t* rax_61 = sub_140aae2b0(&var_158, &arg_18)
        void var_1f0
        char* var_1c8
        char** rax_63 = sub_140a96390(&var_1c8, 
            _vfprintf_p_l(&var_1f0, 
                The Slate Widget Style '{0}' is not of the desired type. Desired: '{1}', Actual: '{2}'", 
            SlateStyleSet"))
        int64_t var_c8_1 = *rax_61
        void* rcx_38 = rax_61[1]
        int32_t var_d8_1 = 4
        void* var_c0_1 = rcx_38
        
        if (rcx_38 != 0)
            *(rcx_38 + 8) += 1
        
        int32_t var_b8_1 = rax_61[2].d
        int64_t var_98_1 = *rax_60
        void* rax_66 = rax_60[1]
        var_b0 = 1
        int32_t var_a8_1 = 4
        void* var_90_1 = rax_66
        
        if (rax_66 != 0)
            *(rax_66 + 8) += 1
        
        int32_t var_88_1 = rax_60[2].d
        int64_t var_68_1 = *rax_59
        void* rax_69 = rax_59[1]
        char var_80_1 = 1
        int32_t var_78_1 = 4
        void* var_60_1 = rax_69
        
        if (rax_69 != 0)
            *(rax_69 + 8) += 1
        
        int64_t i_1 = 3
        int32_t var_58_1 = rax_59[2].d
        char var_50_1 = 1
        void* var_2b8 = nullptr
        int32_t var_2b0_1 = 3
        sub_1405a4b40(&var_2b8, 3, 0)
        void var_d0
        void* rdx_19 = &var_d0
        int64_t* rcx_41 = var_2b8 + 8
        int32_t i_5 = 3
        int32_t i
        
        do
            rcx_41[-1].d = *(rdx_19 - 8)
            *rcx_41 = *rdx_19
            *rcx_41 = *rdx_19
            *rcx_41 = *rdx_19
            *rcx_41 = *rdx_19
            rcx_41[4].b = 0
            
            if (*(rdx_19 + 0x20) != 0)
                rcx_41[1] = *(rdx_19 + 8)
                void* rax_77 = *(rdx_19 + 0x10)
                rcx_41[2] = rax_77
                
                if (rax_77 != 0)
                    *(rax_77 + 8) += 1
                
                rcx_41[3].d = *(rdx_19 + 0x18)
                rcx_41[4].b = 1
            
            rcx_41 = &rcx_41[6]
            rdx_19 += 0x30
            i = i_5
            i_5 -= 1
        while (i != 1)
        char* var_258 = *rax_63
        void* rax_80 = rax_63[1]
        void* var_250_1 = rax_80
        
        if (rax_80 != 0)
            *(rax_80 + 8) += 1
        
        void var_208
        int64_t* rax_81 = sub_140aac870(&var_208, &var_258, &var_2b8)
        int64_t var_280 = *rax_81
        int64_t* rcx_44 = rax_81[1]
        
        if (rcx_44 != 0)
            rcx_44[1].d += 1
        
        int32_t var_270_1 = rax_81[2].d
        int64_t* var_200
        
        if (var_200 != 0)
            var_200[1].d -= 1
            
            if (var_200[1].d == 1)
                (**var_200)(var_200)
                int32_t rax_85 = *(var_200 + 0xc)
                *(var_200 + 0xc) -= 1
                
                if (rax_85 == 1)
                    (*(*var_200 + 8))(var_200, 1)
        
        sub_140596f50(&var_2b8)
        int64_t __saved_r13
        int64_t* rsi_3 = &__saved_r13
        
        do
            i_1 -= 1
            rsi_3 = &rsi_3[-6]
            
            if (*rsi_3 != 0)
                *rsi_3 = 0
                int64_t* rdi_12 = rsi_3[-2]
                
                if (rdi_12 != 0)
                    rdi_12[1].d -= 1
                    
                    if (rdi_12[1].d == 1)
                        (**rdi_12)(rdi_12)
                        int32_t rax_89 = *(rdi_12 + 0xc)
                        *(rdi_12 + 0xc) -= 1
                        
                        if (rax_89 == 1)
                            (*(*rdi_12 + 8))(rdi_12, 1)
        while (i_1 != 0)
        
        int64_t* rdi_14 = rax_63[1]
        
        if (rdi_14 != 0)
            rdi_14[1].d -= 1
            
            if (rdi_14[1].d == 1)
                (**rdi_14)(rdi_14)
                int32_t rax_93 = *(rdi_14 + 0xc)
                *(rdi_14 + 0xc) -= 1
                
                if (rax_93 == 1)
                    (*(*rdi_14 + 8))(rdi_14, zx.q((i_1 + 1).d))
        
        int64_t* rdi_16 = rax_61[1]
        
        if (rdi_16 != 0)
            rdi_16[1].d -= 1
            
            if (rdi_16[1].d == 1)
                (**rdi_16)(rdi_16)
                int32_t rax_97 = *(rdi_16 + 0xc)
                *(rdi_16 + 0xc) -= 1
                
                if (rax_97 == 1)
                    (*(*rdi_16 + 8))(rdi_16, 1)
        
        int64_t* rdi_18 = rax_60[1]
        
        if (rdi_18 != 0)
            rdi_18[1].d -= 1
            
            if (rdi_18[1].d == 1)
                (**rdi_18)(rdi_18)
                int32_t rax_101 = *(rdi_18 + 0xc)
                *(rdi_18 + 0xc) -= 1
                
                if (rax_101 == 1)
                    (*(*rdi_18 + 8))(rdi_18, 1)
        
        int64_t* rdi_20 = rax_59[1]
        
        if (rdi_20 != 0)
            rdi_20[1].d -= 1
            
            if (rdi_20[1].d == 1)
                (**rdi_20)(rdi_20)
                int32_t rax_105 = *(rdi_20 + 0xc)
                *(rdi_20 + 0xc) -= 1
                
                if (rax_105 == 1)
                    (*(*rdi_20 + 8))(rdi_20, 1)
        
        (*(*arg1 + 0x90))(arg1, 1, &var_280)
        
        if (rcx_44 != 0)
            rcx_44[1].d -= 1
            
            if (rcx_44[1].d == 1)
                (**rcx_44)(rcx_44)
                int32_t rax_110 = *(rcx_44 + 0xc)
                *(rcx_44 + 0xc) -= 1
                
                if (rax_110 == 1)
                    (*(*rcx_44 + 8))(rcx_44, 1)
        
        int64_t* var_1e8
        
        if (var_1e8 != 0)
            var_1e8[1].d -= 1
            
            if (var_1e8[1].d == 1)
                (**var_1e8)(var_1e8)
                int32_t rbx_5 = *(var_1e8 + 0xc)
                *(var_1e8 + 0xc) -= 1
                
                if (rbx_5 == 1)
                    (*(*var_1e8 + 8))(var_1e8, zx.q(rbx_5))
    
    if (r15_2 != 0)
        r15_2[1].d -= 1
        
        if (r15_2[1].d == 1)
            int64_t rdx_23 = *r15_2
            (*rdx_23)(r15_2, rdx_23)
            int32_t temp3_1 = *(r15_2 + 0xc)
            *(r15_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                int64_t r8_6 = *r15_2
                (*(r8_6 + 8))(r15_2, 1, r8_6)
    
    result = result_1
else
    void var_1b8
    int64_t* rax_7 = sub_140aae2b0(&var_1b8, &arg_10)
    void var_1a0
    int64_t* rax_8 = sub_140aae2b0(&var_1a0, &arg_18)
    void var_220
    char* var_1d8
    char** rax_10 = sub_140a96390(&var_1d8, 
        _vfprintf_p_l(&var_220, 
            Unable to find Slate Widget Style '{0}'. Using {1} defaults instead.", 
        SlateStyleSet"))
    int64_t var_128_1 = *rax_8
    void* rcx_7 = rax_8[1]
    int32_t var_138_1 = 4
    void* var_120_1 = rcx_7
    
    if (rcx_7 != 0)
        *(rcx_7 + 8) += 1
    
    int32_t var_118_1 = rax_8[2].d
    int64_t var_f8_1 = *rax_7
    void* rax_13 = rax_7[1]
    char var_110_1 = 1
    int32_t var_108_1 = 4
    void* var_f0_1 = rax_13
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
    
    int64_t i_3 = 2
    int32_t var_e8_1 = rax_7[2].d
    char var_e0_1 = 1
    void* var_2c8 = nullptr
    int32_t var_2c0_1 = 2
    sub_1405a4b40(&var_2c8, 2, 0)
    void var_130
    void* rdx_9 = &var_130
    int64_t* rcx_10 = var_2c8 + 8
    int32_t i_4 = 2
    int32_t i_2
    
    do
        rcx_10[-1].d = *(rdx_9 - 8)
        *rcx_10 = *rdx_9
        *rcx_10 = *rdx_9
        *rcx_10 = *rdx_9
        *rcx_10 = *rdx_9
        rcx_10[4].b = 0
        
        if (*(rdx_9 + 0x20) != 0)
            rcx_10[1] = *(rdx_9 + 8)
            void* rax_21 = *(rdx_9 + 0x10)
            rcx_10[2] = rax_21
            
            if (rax_21 != 0)
                *(rax_21 + 8) += 1
            
            rcx_10[3].d = *(rdx_9 + 0x18)
            rcx_10[4].b = 1
        
        rcx_10 = &rcx_10[6]
        rdx_9 += 0x30
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    char* var_268 = *rax_10
    void* rax_24 = rax_10[1]
    void* var_260_1 = rax_24
    
    if (rax_24 != 0)
        *(rax_24 + 8) += 1
    
    void var_238
    int64_t* rax_25 = sub_140aac870(&var_238, &var_268, &var_2c8)
    int64_t var_298 = *rax_25
    int64_t* rcx_13 = rax_25[1]
    
    if (rcx_13 != 0)
        rcx_13[1].d += 1
    
    int32_t var_288_1 = rax_25[2].d
    int64_t* var_230
    
    if (var_230 != 0)
        var_230[1].d -= 1
        
        if (var_230[1].d == 1)
            (**var_230)(var_230)
            int32_t rax_29 = *(var_230 + 0xc)
            *(var_230 + 0xc) -= 1
            
            if (rax_29 == 1)
                (*(*var_230 + 8))(var_230, 1)
    
    sub_140596f50(&var_2c8)
    char* rsi_1 = &var_b0
    
    do
        i_3 -= 1
        rsi_1 = &rsi_1[-0x30]
        
        if (*rsi_1 != 0)
            *rsi_1 = 0
            int64_t* rdi_2 = *(rsi_1 - 0x10)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rax_33 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rax_33 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
    while (i_3 != 0)
    
    int64_t* rdi_4 = rax_10[1]
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t rax_37 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (rax_37 == 1)
                (*(*rdi_4 + 8))(rdi_4, zx.q((i_3 + 1).d))
    
    int64_t* rdi_6 = rax_8[1]
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t rax_41 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (rax_41 == 1)
                (*(*rdi_6 + 8))(rdi_6, 1)
    
    int64_t* rdi_7 = rax_7[1]
    
    if (rdi_7 != 0)
        rdi_7[1].d -= 1
        
        if (rdi_7[1].d == 1)
            (**rdi_7)(rdi_7)
            int32_t rax_45 = *(rdi_7 + 0xc)
            *(rdi_7 + 0xc) -= 1
            
            if (rax_45 == 1)
                (*(*rdi_7 + 8))(rdi_7, 1)
    
    (*(*arg1 + 0x90))(arg1, 3, &var_298)
    
    if (rcx_13 != 0)
        rcx_13[1].d -= 1
        
        if (rcx_13[1].d == 1)
            (**rcx_13)(rcx_13)
            int32_t rax_50 = *(rcx_13 + 0xc)
            *(rcx_13 + 0xc) -= 1
            
            if (rax_50 == 1)
                (*(*rcx_13 + 8))(rcx_13, 1)
    
    int64_t* var_218
    
    if (var_218 != 0)
        var_218[1].d -= 1
        
        if (var_218[1].d == 1)
            (**var_218)(var_218)
            int32_t rbx_2 = *(var_218 + 0xc)
            *(var_218 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*(*var_218 + 8))(var_218, zx.q(rbx_2))
    
    result = nullptr
__security_check_cookie(rax_1 ^ &var_2f8)
return result
