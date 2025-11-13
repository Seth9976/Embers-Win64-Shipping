// 函数: sub_140ae21f0
// 地址: 0x140ae21f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void* rdi = arg1
sub_140a96170(arg2)
int32_t i_1 = 0
int32_t rax_4

if (*(rdi + 0x18) s> 0)
    int64_t* rcx_1 = **(rdi + 0x10)
    rax_4 = (*(*rcx_1 + 8))(rcx_1)

int64_t* rbx
bool cond:0_1

if (*(rdi + 0x18) s<= 0 || rax_4 != 5)
    void var_168
    int64_t* rax_47 = sub_140ad86f0(&var_168, *(rdi + 0x30))
    int64_t rdx_4 = *arg2
    *arg2 = *rax_47
    *rax_47 = rdx_4
    int64_t rdx_5 = arg2[1]
    arg2[1] = rax_47[1]
    rax_47[1] = rdx_5
    int64_t* var_160
    rbx = var_160
    arg2[2].d = rax_47[2].d
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rax_51 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            cond:0_1 = rax_51 != 1
        label_140ae25fa:
            
            if (not(cond:0_1))
                (*(*rbx + 8))(rbx, 1)
else
    int64_t* rax_5 = *(rdi + 0x10)
    rbx = rax_5[1]
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int32_t rdx = *(rdi + 0x30)
    
    if (*(*rax_5 + 0x40) != rdx)
        void var_100
        int64_t* rax_6 = sub_140ad86f0(&var_100, rdx)
        void var_180
        char* var_120
        char** rax_8 = sub_140a96390(&var_120, _vfprintf_p_l(&var_180, u"{0}:", u"Core.MessageLog"))
        int64_t rcx_6 = *rax_6
        int64_t* rcx_7 = rax_6[1]
        int32_t var_e8_1 = 4
        
        if (rcx_7 != 0)
            rcx_7[1].d += 1
        
        int32_t rcx_8 = rax_6[2].d
        char var_c0_1 = 1
        int32_t* var_218 = nullptr
        int32_t var_210_1 = 1
        sub_1405a4b40(&var_218, 1, 0)
        int32_t* rcx_10 = var_218
        *rcx_10 = var_e8_1
        int64_t var_e0
        *(rcx_10 + 8) = var_e0
        *(rcx_10 + 8) = var_e0
        rcx_10[2] = var_e0.d
        *(rcx_10 + 8) = var_e0
        rcx_10[0xa].b = 0
        
        if (var_c0_1 != 0)
            *(rcx_10 + 0x10) = rcx_6
            *(rcx_10 + 0x18) = rcx_7
            
            if (rcx_7 != 0)
                rcx_7[1].d += 1
            
            rcx_10[8] = rcx_8
            rcx_10[0xa].b = 1
        
        char* var_1b8 = *rax_8
        void* rax_16 = rax_8[1]
        void* var_1b0_1 = rax_16
        
        if (rax_16 != 0)
            *(rax_16 + 8) += 1
        
        void var_198
        int64_t* rax_17 = sub_140aac870(&var_198, &var_1b8, &var_218)
        int64_t rcx_12 = *rax_17
        void* rcx_13 = rax_17[1]
        
        if (rcx_13 != 0)
            *(rcx_13 + 8) += 1
        
        int32_t rax_18 = rax_17[2].d
        int64_t* var_190
        
        if (var_190 != 0)
            var_190[1].d -= 1
            
            if (var_190[1].d == 1)
                (**var_190)(var_190)
                int32_t rax_21 = *(var_190 + 0xc)
                *(var_190 + 0xc) -= 1
                
                if (rax_21 == 1)
                    (*(*var_190 + 8))(var_190, 1)
        
        sub_140596f50(&var_218)
        
        if (var_c0_1 != 0)
            char var_c0_2 = 0
            
            if (rcx_7 != 0)
                rcx_7[1].d -= 1
                
                if (rcx_7[1].d == 1)
                    (**rcx_7)(rcx_7)
                    int32_t rax_25 = *(rcx_7 + 0xc)
                    *(rcx_7 + 0xc) -= 1
                    
                    if (rax_25 == 1)
                        (*(*rcx_7 + 8))(rcx_7, 1)
        
        int64_t* rdi_3 = rax_8[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_29 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rdi_4 = rax_6[1]
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_33 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_33 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        int64_t rcx_23 = *arg2
        *arg2 = rcx_12
        int64_t* rdi_5 = arg2[1]
        arg2[1] = rcx_13
        arg2[2].d = rax_18
        int64_t var_1f8_2 = rcx_23
        int64_t* var_1f0_2 = rdi_5
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t rax_40 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (rax_40 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
        
        int64_t* var_178
        
        if (var_178 != 0)
            var_178[1].d -= 1
            
            if (var_178[1].d == 1)
                (**var_178)(var_178)
                int32_t rax_44 = *(var_178 + 0xc)
                *(var_178 + 0xc) -= 1
                
                if (rax_44 == 1)
                    (*(*var_178 + 8))(var_178, 1)
        
        rdi = arg1
    
    i_1 = 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            cond:0_1 = temp2_1 != 1
            goto label_140ae25fa
int32_t i = i_1

if (i s< *(rdi + 0x18))
    uint64_t rdi_8 = zx.q(i) << 4
    uint64_t var_220_1 = rdi_8
    
    do
        bool cond:1_1 = sub_140ab3dc0(arg2) != 0
        int64_t* rcx_37 = *(rdi_8 + *(arg1 + 0x10))
        int64_t rax_54 = *rcx_37
        
        if (cond:1_1)
            int64_t* rax_106 = (*(rax_54 + 0x10))(rcx_37)
            int64_t var_238 = *rax_106
            int64_t* rcx_66 = rax_106[1]
            int64_t* var_230_1 = rcx_66
            
            if (rcx_66 != 0)
                rcx_66[1].d += 1
                rcx_66 = var_230_1
            
            if (&var_238 != arg2)
                int128_t zmm1_1 = var_238.o
                int128_t var_58_1 = zmm1_1
                var_238.o = *arg2
                rcx_66 = var_230_1
                *arg2 = zmm1_1
            
            if (rcx_66 != 0)
                rcx_66[1].d -= 1
                
                if (rcx_66[1].d == 1)
                    (**var_230_1)(var_230_1)
                    int32_t rax_109 = *(var_230_1 + 0xc)
                    *(var_230_1 + 0xc) -= 1
                    
                    if (rax_109 == 1)
                        int64_t r8_3 = *var_230_1
                        (*(r8_3 + 8))(var_230_1, zx.q(rax_109), r8_3)
                    
                    i = i_1
            
            arg2[2].d = rax_106[2].d
        else
            int64_t* rax_55 = (*(rax_54 + 0x10))(rcx_37)
            int64_t* r14_2 = rax_55[1]
            int64_t rcx_38 = *rax_55
            
            if (r14_2 != 0)
                r14_2[1].d += 1
            
            int64_t* r12_1 = arg2[1]
            int32_t rax_56 = rax_55[2].d
            int64_t r13_1 = *arg2
            
            if (r12_1 != 0)
                r12_1[1].d += 1
            
            int32_t rsi_2 = arg2[2].d
            void var_138
            char* var_110
            char** rax_58 =
                sub_140a96390(&var_110, _vfprintf_p_l(&var_138, {0} {1}", Core.MessageLog"))
            int32_t var_b8_1 = 4
            int64_t var_a8_1 = r13_1
            int64_t* var_a0_1 = r12_1
            
            if (r12_1 != 0)
                r12_1[1].d += 1
            
            int64_t var_78_1 = rcx_38
            int32_t var_98_1 = rsi_2
            char var_90_1 = 1
            int32_t var_88_1 = 4
            int64_t* var_70_1 = r14_2
            
            if (r14_2 != 0)
                r14_2[1].d += 1
            
            int32_t var_68_1 = rax_56
            char var_60_1 = 1
            void* var_208 = nullptr
            int32_t var_200_1 = 2
            sub_1405a4b40(&var_208, 2, 0)
            void var_b0
            void* rdx_7 = &var_b0
            int64_t* rcx_43 = var_208 + 8
            int32_t j_2 = 2
            int32_t j
            
            do
                rcx_43[-1].d = *(rdx_7 - 8)
                *rcx_43 = *rdx_7
                *rcx_43 = *rdx_7
                *rcx_43 = *rdx_7
                *rcx_43 = *rdx_7
                rcx_43[4].b = 0
                
                if (*(rdx_7 + 0x20) != 0)
                    rcx_43[1] = *(rdx_7 + 8)
                    void* rax_67 = *(rdx_7 + 0x10)
                    rcx_43[2] = rax_67
                    
                    if (rax_67 != 0)
                        *(rax_67 + 8) += 1
                    
                    rcx_43[3].d = *(rdx_7 + 0x18)
                    rcx_43[4].b = 1
                
                rcx_43 = &rcx_43[6]
                rdx_7 += 0x30
                j = j_2
                j_2 -= 1
            while (j != 1)
            char* var_1a8 = *rax_58
            void* rax_70 = rax_58[1]
            void* var_1a0_1 = rax_70
            
            if (rax_70 != 0)
                *(rax_70 + 8) += 1
            
            void var_150
            int64_t* rax_71 = sub_140aac870(&var_150, &var_1a8, &var_208)
            int64_t rcx_45 = *rax_71
            void* rcx_46 = rax_71[1]
            
            if (rcx_46 != 0)
                *(rcx_46 + 8) += 1
            
            int32_t rax_72 = rax_71[2].d
            int64_t* var_148
            
            if (var_148 != 0)
                var_148[1].d -= 1
                
                if (var_148[1].d == 1)
                    (**var_148)(var_148)
                    int32_t rax_75 = *(var_148 + 0xc)
                    *(var_148 + 0xc) -= 1
                    
                    if (rax_75 == 1)
                        (*(*var_148 + 8))(var_148, 1)
            
            sub_140596f50(&var_208)
            int64_t j_1 = 2
            int64_t __saved_r15
            int64_t* rdi_9 = &__saved_r15
            
            do
                j_1 -= 1
                rdi_9 = &rdi_9[-6]
                
                if (*rdi_9 != 0)
                    *rdi_9 = 0
                    int64_t* rbx_2 = rdi_9[-2]
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t rax_79 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (rax_79 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
            while (j_1 != 0)
            
            int64_t* rbx_3 = rax_58[1]
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_83 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_83 == 1)
                        (*(*rbx_3 + 8))(rbx_3, zx.q((j_1 + 1).d))
            
            if (r12_1 != 0)
                r12_1[1].d -= 1
                
                if (r12_1[1].d == 1)
                    (**r12_1)(r12_1)
                    int32_t rax_87 = *(r12_1 + 0xc)
                    *(r12_1 + 0xc) -= 1
                    
                    if (rax_87 == 1)
                        (*(*r12_1 + 8))(r12_1, 1)
            
            if (r14_2 != 0)
                r14_2[1].d -= 1
                
                if (r14_2[1].d == 1)
                    (**r14_2)(r14_2)
                    int32_t rax_91 = *(r14_2 + 0xc)
                    *(r14_2 + 0xc) -= 1
                    
                    if (rax_91 == 1)
                        (*(*r14_2 + 8))(r14_2, 1)
            
            int64_t rcx_58 = *arg2
            *arg2 = rcx_45
            int64_t* rbx_4 = arg2[1]
            arg2[1] = rcx_46
            arg2[2].d = rax_72
            int64_t var_1e0_2 = rcx_58
            int64_t* var_1d8_2 = rbx_4
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_98 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_98 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            int64_t* var_130
            
            if (var_130 != 0)
                var_130[1].d -= 1
                
                if (var_130[1].d == 1)
                    (**var_130)(var_130)
                    int32_t rax_102 = *(var_130 + 0xc)
                    *(var_130 + 0xc) -= 1
                    
                    if (rax_102 == 1)
                        (*(*var_130 + 8))(var_130, 1)
            
            i = i_1
        
        i += 1
        rdi_8 = var_220_1 + 0x10
        i_1 = i
        var_220_1 = rdi_8
    while (i s< *(arg1 + 0x18))

__security_check_cookie(rax_1 ^ &var_268)
return arg2
