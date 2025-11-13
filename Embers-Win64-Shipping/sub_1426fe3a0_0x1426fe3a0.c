// 函数: sub_1426fe3a0
// 地址: 0x1426fe3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
void* r14 = arg1
int32_t var_2d8 = 0
int64_t var_248
_vfprintf_p_l(&var_248, u"discard unreachable", u"EnvQueryGenerator")
uint128_t var_298
sub_140a96170(&var_298)
int64_t i_3 = 2
int32_t var_288
int64_t* var_240
char var_90
int32_t var_238

if (*(r14 + 0x250) != 0)
    int64_t var_2c8 = 0
    int32_t var_2c0_1 = 0
    sub_1405947f0(&var_2c8, 9)
    int32_t rax_2 = var_2c0_1 + 9
    var_2c0_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_2c8)
    
    int512_t zmm0_2 = sub_1405a7220(var_2c8, 9, "{0}: {1}", 9, 0x3f)
    int64_t rsi_1 = var_248
    
    if (var_240 != 0)
        var_240[1].d += 1
    
    int64_t var_1f8
    void var_138
    int64_t* rax_4 = sub_140aae2f0(&var_138, sub_1426ed850(r14 + 0x240, &var_1f8, zmm0_2))
    void var_1d0
    char* var_158
    var_2d8.q = sub_140a96390(&var_158, sub_140aae2f0(&var_1d0, &var_2c8))
    int32_t var_118_1 = 4
    int64_t var_108_1 = rsi_1
    int64_t* var_100_1 = var_240
    
    if (var_240 != 0)
        var_240[1].d += 1
    
    int64_t var_d8_1 = *rax_4
    void* rax_8 = rax_4[1]
    int32_t var_f8_1 = var_238
    char var_f0_1 = 1
    int32_t var_e8_1 = 4
    void* var_d0_1 = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    int32_t var_c8_1 = rax_4[2].d
    char var_c0_1 = 1
    void* var_278 = nullptr
    int32_t var_270_1 = 2
    sub_1405a4b40(&var_278, 2, 0)
    void var_110
    void* rdx_5 = &var_110
    int64_t* rcx_11 = var_278 + 8
    int32_t i_4 = 2
    int32_t i
    
    do
        rcx_11[-1].d = *(rdx_5 - 8)
        *rcx_11 = *rdx_5
        *rcx_11 = *rdx_5
        *rcx_11 = *rdx_5
        *rcx_11 = *rdx_5
        rcx_11[4].b = 0
        
        if (*(rdx_5 + 0x20) != 0)
            rcx_11[1] = *(rdx_5 + 8)
            void* rax_16 = *(rdx_5 + 0x10)
            rcx_11[2] = rax_16
            
            if (rax_16 != 0)
                *(rax_16 + 8) += 1
            
            rcx_11[3].d = *(rdx_5 + 0x18)
            rcx_11[4].b = 1
        
        rcx_11 = &rcx_11[6]
        rdx_5 += 0x30
        i = i_4
        i_4 -= 1
    while (i != 1)
    int64_t* rcx_12 = var_2d8.q
    int64_t var_218 = *rcx_12
    void* rax_19 = rcx_12[1]
    void* var_210_1 = rax_19
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    void var_1e8
    int64_t* rax_20 = sub_140aac870(&var_1e8, &var_218, &var_278)
    int64_t rax_21 = *rax_20
    void* rax_22 = rax_20[1]
    
    if (rax_22 != 0)
        *(rax_22 + 8) += 1
    
    int32_t rax_23 = rax_20[2].d
    int64_t* var_1e0
    
    if (var_1e0 != 0)
        var_1e0[1].d -= 1
        
        if (var_1e0[1].d == 1)
            (**var_1e0)(var_1e0)
            int32_t rax_26 = *(var_1e0 + 0xc)
            *(var_1e0 + 0xc) -= 1
            
            if (rax_26 == 1)
                (*(*var_1e0 + 8))(var_1e0, 1)
    
    sub_140596f50(&var_278)
    int64_t i_1 = 2
    char* rsi_2 = &var_90
    
    do
        i_1 -= 1
        rsi_2 = &rsi_2[-0x30]
        
        if (*rsi_2 != 0)
            *rsi_2 = 0
            int64_t* rbx_3 = *(rsi_2 - 0x10)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_30 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_30 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
    while (i_1 != 0)
    
    int64_t* rbx_5 = *(var_2d8.q + 8)
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t rax_34 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rax_34 == 1)
                (*(*rbx_5 + 8))(rbx_5, zx.q((i_1 + 1).d))
    
    if (var_240 != 0)
        var_240[1].d -= 1
        
        if (var_240[1].d == 1)
            (**var_240)(var_240)
            int32_t rax_38 = *(var_240 + 0xc)
            *(var_240 + 0xc) -= 1
            
            if (rax_38 == 1)
                (*(*var_240 + 8))(var_240, 1)
    
    int64_t* rbx_7 = rax_4[1]
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t rax_42 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (rax_42 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    int64_t* rbx_8 = var_298:8.q
    var_298.q = rax_21
    var_298:8.q = rax_22
    var_288 = rax_23
    int64_t var_230_2 = var_298.q
    int64_t* var_228_2 = rbx_8
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t rax_49 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (rax_49 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* var_1c8
    
    if (var_1c8 != 0)
        var_1c8[1].d -= 1
        
        if (var_1c8[1].d == 1)
            (**var_1c8)(var_1c8)
            int32_t rax_53 = *(var_1c8 + 0xc)
            *(var_1c8 + 0xc) -= 1
            
            if (rax_53 == 1)
                (*(*var_1c8 + 8))(var_1c8, 1)
    
    int64_t rcx_31 = var_1f8
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    int64_t rcx_32 = var_2c8
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
    
    r14 = arg1
else if (*(r14 + 0x270) != 0)
    if (var_240 != 0)
        var_240[1].d += 1
    
    uint128_t zmm1_1 = var_298
    uint128_t zmm0_1 = var_248.o
    int64_t var_268_1
    var_268_1.o = zmm1_1
    void* rcx_34 = _mm_bsrli_si128(zmm1_1, 8).q
    uint128_t var_58_1 = zmm0_1
    var_298 = zmm0_1
    
    if (rcx_34 != 0)
        int32_t rax_58 = *(rcx_34 + 8)
        *(rcx_34 + 8) -= 1
        
        if (rax_58 == 1)
            (**var_240)(var_240)
            int32_t rax_60 = *(var_240 + 0xc)
            *(var_240 + 0xc) -= 1
            
            if (rax_60 == 1)
                (*(*var_240 + 8))(var_240, 1)
    
    var_288 = var_238
int64_t var_2b8
int64_t* rax_55
int32_t r14_2

if ((*(r14 + 0x1f0) & 1) == 0)
    var_2b8 = 0
    int32_t var_2b0_1 = 0
    sub_1405947f0(&var_2b8, 0xe)
    int32_t rax_63 = var_2b0_1 + 0xe
    var_2b0_1 = rax_63
    
    if (rax_63 s> 0)
        sub_140594770(&var_2b8)
    
    sub_1405a7220(var_2b8, 0xe, "existing path", 0xe, 0x3f)
    void var_1b8
    rax_55 = sub_1426cfca0(r14, &var_1b8, &var_2b8)
    r14_2 = 6
else
    void var_1a0
    rax_55 = sub_1426d18b0(r14, &var_1a0)
    r14_2 = 1

int64_t* rsi_3 = rax_55[1]
int64_t r15_2 = *rax_55

if (rsi_3 != 0)
    rsi_3[1].d += 1

int32_t rax_64 = rax_55[2].d

if ((r14_2.b & 4) != 0)
    r14_2 &= 0xfffffffb
    int64_t* var_1b0
    
    if (var_1b0 != 0)
        var_1b0[1].d -= 1
        
        if (var_1b0[1].d == 1)
            (**var_1b0)(var_1b0)
            int32_t rax_67 = *(var_1b0 + 0xc)
            *(var_1b0 + 0xc) -= 1
            
            if (rax_67 == 1)
                (*(*var_1b0 + 8))(var_1b0, 1)

if ((2 & r14_2.b) != 0)
    int64_t rcx_43 = var_2b8
    r14_2 &= 0xfffffffd
    
    if (rcx_43 != 0)
        sub_140a74f90(rcx_43)

int64_t* var_198

if ((r14_2.b & 1) != 0 && var_198 != 0)
    var_198[1].d -= 1
    
    if (var_198[1].d == 1)
        (**var_198)(var_198)
        int32_t rax_71 = *(var_198 + 0xc)
        *(var_198 + 0xc) -= 1
        
        if (rax_71 == 1)
            (*(*var_198 + 8))(var_198, 1)

if (sub_140ab3dc0(&var_298) != 0)
    *arg2 = r15_2
    arg2[1] = rsi_3
    
    if (rsi_3 != 0)
        rsi_3[1].d += 1
    
    arg2[2].d = rax_64
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t rax_129 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (rax_129 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)
    
    int64_t* rbx_21 = var_298:8.q
    
    if (rbx_21 != 0)
        rbx_21[1].d -= 1
        
        if (rbx_21[1].d == 1)
            (**rbx_21)(rbx_21)
            int32_t rax_133 = *(rbx_21 + 0xc)
            *(rbx_21 + 0xc) -= 1
            
            if (rax_133 == 1)
                (*(*rbx_21 + 8))(rbx_21, 1)
    
    if (var_240 != 0)
        var_240[1].d -= 1
        
        if (var_240[1].d == 1)
            (**var_240)(var_240)
            int32_t rdi_2 = *(var_240 + 0xc)
            *(var_240 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_240 + 8))(var_240, zx.q(rdi_2))
else
    int64_t var_2a8 = 0
    int32_t var_2a0_1 = 0
    sub_1405947f0(&var_2a8, 8)
    int32_t rax_74 = var_2a0_1 + 8
    var_2a0_1 = rax_74
    
    if (rax_74 s> 0)
        sub_140594770(&var_2a8)
    
    sub_1405a7220(var_2a8, 8, "{0}\n{1}", 8, 0x3f)
    
    if (rsi_3 != 0)
        rsi_3[1].d += 1
    
    int64_t* r15_3 = var_298:8.q
    int64_t rbx_13 = var_298.q
    
    if (r15_3 != 0)
        r15_3[1].d += 1
    
    void var_170
    char* var_148
    char** rax_76 = sub_140a96390(&var_148, sub_140aae2f0(&var_170, &var_2a8))
    int32_t var_b8_1 = 4
    int64_t var_a8_1 = rbx_13
    int64_t* var_a0_1 = r15_3
    
    if (r15_3 != 0)
        r15_3[1].d += 1
    
    int64_t var_78_1 = r15_2
    int32_t var_98_1 = var_288
    var_90 = 1
    int32_t var_88_1 = 4
    int64_t* var_70_1 = rsi_3
    
    if (rsi_3 != 0)
        rsi_3[1].d += 1
    
    int32_t var_68_1 = rax_64
    char var_60_1 = 1
    void* var_258 = nullptr
    int32_t var_250_1 = 2
    sub_1405a4b40(&var_258, 2, 0)
    void var_b0
    void* rdx_14 = &var_b0
    int64_t* rcx_54 = var_258 + 8
    int32_t i_5 = 2
    int32_t i_2
    
    do
        rcx_54[-1].d = *(rdx_14 - 8)
        *rcx_54 = *rdx_14
        *rcx_54 = *rdx_14
        *rcx_54 = *rdx_14
        *rcx_54 = *rdx_14
        rcx_54[4].b = 0
        
        if (*(rdx_14 + 0x20) != 0)
            rcx_54[1] = *(rdx_14 + 8)
            void* rax_85 = *(rdx_14 + 0x10)
            rcx_54[2] = rax_85
            
            if (rax_85 != 0)
                *(rax_85 + 8) += 1
            
            rcx_54[3].d = *(rdx_14 + 0x18)
            rcx_54[4].b = 1
        
        rcx_54 = &rcx_54[6]
        rdx_14 += 0x30
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    char* var_208 = *rax_76
    void* rax_88 = rax_76[1]
    void* var_200_1 = rax_88
    
    if (rax_88 != 0)
        *(rax_88 + 8) += 1
    
    void var_188
    int64_t* rax_89 = sub_140aac870(&var_188, &var_208, &var_258)
    *arg2 = *rax_89
    void* rax_91 = rax_89[1]
    arg2[1] = rax_91
    
    if (rax_91 != 0)
        *(rax_91 + 8) += 1
    
    arg2[2].d = rax_89[2].d
    int64_t* var_180
    
    if (var_180 != 0)
        var_180[1].d -= 1
        
        if (var_180[1].d == 1)
            (**var_180)(var_180)
            int32_t rax_95 = *(var_180 + 0xc)
            *(var_180 + 0xc) -= 1
            
            if (rax_95 == 1)
                (*(*var_180 + 8))(var_180, 1)
    
    sub_140596f50(&var_258)
    int64_t __saved_r14
    int64_t* r14_4 = &__saved_r14
    
    do
        i_3 -= 1
        r14_4 = &r14_4[-6]
        
        if (*r14_4 != 0)
            *r14_4 = 0
            int64_t* rbx_15 = r14_4[-2]
            
            if (rbx_15 != 0)
                rbx_15[1].d -= 1
                
                if (rbx_15[1].d == 1)
                    (**rbx_15)(rbx_15)
                    int32_t rax_99 = *(rbx_15 + 0xc)
                    *(rbx_15 + 0xc) -= 1
                    
                    if (rax_99 == 1)
                        (*(*rbx_15 + 8))(rbx_15, 1)
    while (i_3 != 0)
    
    int64_t* rbx_17 = rax_76[1]
    
    if (rbx_17 != 0)
        rbx_17[1].d -= 1
        
        if (rbx_17[1].d == 1)
            (**rbx_17)(rbx_17)
            int32_t rax_103 = *(rbx_17 + 0xc)
            *(rbx_17 + 0xc) -= 1
            
            if (rax_103 == 1)
                (*(*rbx_17 + 8))(rbx_17, zx.q((i_3 + 1).d))
    
    if (r15_3 != 0)
        r15_3[1].d -= 1
        
        if (r15_3[1].d == 1)
            (**r15_3)(r15_3)
            int32_t rax_107 = *(r15_3 + 0xc)
            *(r15_3 + 0xc) -= 1
            
            if (rax_107 == 1)
                (*(*r15_3 + 8))(r15_3, 1)
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t rax_111 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (rax_111 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)
    
    int64_t* var_168
    
    if (var_168 != 0)
        var_168[1].d -= 1
        
        if (var_168[1].d == 1)
            (**var_168)(var_168)
            int32_t rax_115 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (rax_115 == 1)
                (*(*var_168 + 8))(var_168, 1)
    
    int64_t rcx_71 = var_2a8
    
    if (rcx_71 != 0)
        sub_140a74f90(rcx_71)
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t rax_119 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (rax_119 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)
    
    int64_t* rbx_19 = var_298:8.q
    
    if (rbx_19 != 0)
        rbx_19[1].d -= 1
        
        if (rbx_19[1].d == 1)
            (**rbx_19)(rbx_19)
            int32_t rax_123 = *(rbx_19 + 0xc)
            *(rbx_19 + 0xc) -= 1
            
            if (rax_123 == 1)
                (*(*rbx_19 + 8))(rbx_19, 1)
    
    if (var_240 != 0)
        var_240[1].d -= 1
        
        if (var_240[1].d == 1)
            (**var_240)(var_240)
            int32_t rdi_1 = *(var_240 + 0xc)
            *(var_240 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_5 = *var_240
                (*(r8_5 + 8))(var_240, zx.q(rdi_1), r8_5)

__security_check_cookie(rax_1 ^ &var_308)
return arg2
