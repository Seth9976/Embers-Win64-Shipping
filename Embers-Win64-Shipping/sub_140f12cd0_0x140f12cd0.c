// 函数: sub_140f12cd0
// 地址: 0x140f12cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int64_t* rbx = arg3
int64_t* r14 = arg2
int64_t* var_190 = rbx
void var_260
struct icu_64::Replaceable::icu_64::UnicodeString::VTable*** result =
    sub_140a61110(&var_260, arg1 + 0x18, r14, arg5)
int32_t i_1 = 0

if (rbx[1].d s> 0)
    result = nullptr
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable*** result_1 = nullptr
    int32_t i
    
    do
        int64_t rbx_1 = *rbx
        int64_t* r12_1 = nullptr
        int64_t* var_290 = nullptr
        int32_t r13_1 = 0
        int64_t var_288_1 = 0
        int32_t rsi_1 = 0
        int64_t rbx_2 = *(rbx_1 + (result << 3))
        int64_t var_298_1 = rbx_2
        int32_t r15_1 = rbx_2.d
        char rax_2
        int512_t zmm1
        rax_2, zmm1 =
            sub_140a73e30(&var_260, sub_140a8c510(&var_260, zx.q(var_298_1.d), rbx_2 u>> 0x20))
        int64_t var_188
        uint64_t var_168
        
        if (rax_2 != 0)
            int32_t var_250_1 = rbx_2.d
            char j
            
            do
                int32_t rax_3 = sub_140a7a110(&var_260)
                int32_t rsi_2 = rax_3
                int32_t rax_4 = sub_140a7a1a0(&var_260)
                int32_t var_1f0_1 = rsi_2
                int32_t var_1ec_1 = rax_4
                int64_t rdi_1 = sx.q(sub_140a77dc0(&var_260, 1))
                int32_t rax_6 = sub_140a77e50(&var_260, 1)
                int64_t var_248_1 = 0
                int32_t r12_2 = 0
                
                if (rax_6 - rdi_1.d s>= 0)
                    int32_t r8_3 = r14[1].d
                    int32_t rbx_3 = r8_3 - 1
                    
                    if (r8_3 == 0)
                        rbx_3 = 0
                    
                    int32_t rcx_7
                    
                    if (rdi_1.d s>= 0)
                        rcx_7 = rbx_3
                        
                        if (rdi_1.d s< rbx_3)
                            rcx_7 = rdi_1.d
                    else
                        rcx_7 = 0
                    
                    int64_t rdx_3 = sx.q(rax_6 - rdi_1.d) + rdi_1
                    int64_t r9 = sx.q(rcx_7)
                    
                    if (rdx_3 s< r9)
                        rbx_3 = rcx_7
                    else if (rdx_3 s< sx.q(rbx_3))
                        rbx_3 = rdx_3.d
                    
                    int16_t* const rax_9
                    
                    if (r8_3 == 0)
                        rax_9 = &data_142d40450
                    else
                        rax_9 = *r14
                    
                    int16_t* rdi_2 = &rax_9[r9]
                    var_248_1 = 0
                    int32_t rbx_4 = rbx_3 - rcx_7
                    int64_t var_270 = 0
                    int32_t var_268_1 = 0
                    int32_t rax_10 = 0
                    int32_t var_264_1 = 0
                    int64_t r14_1 = 0
                    
                    if (rdi_2 != 0 && *rdi_2 != 0 && rbx_4 s> 0)
                        if (rbx_4 + 1 s> 0)
                            sub_1405947f0(&var_270, rbx_4 + 1)
                            r14_1 = var_270
                            rax_10 = var_264_1
                            r12_2 = var_268_1
                            var_248_1 = r14_1
                        
                        r12_2 = r12_2 + 1 + rbx_4
                        
                        if (r12_2 s> rax_10)
                            sub_140594770(&var_270)
                            r14_1 = var_270
                            var_248_1 = r14_1
                        
                        UnDecorator::getReferenceType(r14_1, rdi_2, rbx_4 * 2)
                        *(r14_1 + (sx.q(r12_2) << 1) - 2) = 0
                    
                    r14 = arg2
                    var_270 = 0
                    var_268_1.q = 0
                
                int32_t rax_12 = sub_140a77dc0(&var_260, 2)
                int32_t rax_13 = sub_140a77e50(&var_260, 2)
                int32_t rax_14 = sub_140a77dc0(&var_260, 3)
                int32_t var_1e4_1 = sub_140a77e50(&var_260, 3)
                int64_t var_118
                __builtin_memset(&var_118, 0, 0x2c)
                int32_t var_ec_1 = 0x80
                int32_t var_e8_1 = 0xffffffff
                int32_t var_e4_1 = 0
                int64_t var_d8_1 = 0
                int32_t var_d0_1 = 0
                
                if (rax_12 != 0xffffffff && rax_13 != 0xffffffff)
                    void var_240
                    sub_140a61110(&var_240, arg1 + 0x28, r14, zmm1)
                    
                    if (sub_140a73e30(&var_240, sub_140a8c510(&var_240, zx.q(rax_12), zx.q(rax_13)))
                            != 0)
                        char k
                        
                        do
                            int64_t rdi_4 = sx.q(sub_140a77dc0(&var_240, 1))
                            int32_t rax_18 = sub_140a77e50(&var_240, 1)
                            int32_t var_200 = sub_140a77dc0(&var_240, 2)
                            int32_t var_1fc_1 = sub_140a77e50(&var_240, 2)
                            int64_t var_228 = 0
                            int64_t var_220_1 = 0
                            
                            if (rax_18 - rdi_4.d s>= 0)
                                int32_t r8_8 = r14[1].d
                                int32_t rbx_6 = r8_8 - 1
                                
                                if (r8_8 == 0)
                                    rbx_6 = 0
                                
                                int32_t rcx_22
                                
                                if (rdi_4.d s>= 0)
                                    rcx_22 = rbx_6
                                    
                                    if (rdi_4.d s< rbx_6)
                                        rcx_22 = rdi_4.d
                                else
                                    rcx_22 = 0
                                
                                int64_t rdx_11 = sx.q(rax_18 - rdi_4.d) + rdi_4
                                int64_t r9_1 = sx.q(rcx_22)
                                
                                if (rdx_11 s< r9_1)
                                    rbx_6 = rcx_22
                                else if (rdx_11 s< sx.q(rbx_6))
                                    rbx_6 = rdx_11.d
                                
                                int16_t* const rax_22
                                
                                if (r8_8 == 0)
                                    rax_22 = &data_142d40450
                                else
                                    rax_22 = *r14
                                
                                int16_t* r15_2 = &rax_22[r9_1]
                                int64_t var_280 = 0
                                int32_t rbx_7 = rbx_6 - rcx_22
                                int64_t var_278_1 = 0
                                int64_t rsi_5 = 0
                                int32_t rdi_5 = 0
                                int32_t r14_2 = 0
                                
                                if (r15_2 != 0 && *r15_2 != 0 && rbx_7 s> 0)
                                    if (rbx_7 + 1 s> 0)
                                        sub_1405947f0(&var_280, rbx_7 + 1)
                                        r14_2 = var_278_1:4.d
                                        rdi_5 = var_278_1.d
                                        rsi_5 = var_280
                                    
                                    rdi_5 = rdi_5 + 1 + rbx_7
                                    var_278_1.d = rdi_5
                                    
                                    if (rdi_5 s> r14_2)
                                        sub_140594770(&var_280)
                                        r14_2 = var_278_1:4.d
                                        rdi_5 = var_278_1.d
                                        rsi_5 = var_280
                                    
                                    UnDecorator::getReferenceType(rsi_5, r15_2, rbx_7 * 2)
                                    *(rsi_5 + (sx.q(rdi_5) << 1) - 2) = 0
                                
                                var_220_1:4.d = r14_2
                                r14 = arg2
                                var_228 = rsi_5
                                var_280 = 0
                                var_220_1.d = rdi_5
                                int64_t var_278_2 = 0
                            
                            int512_t zmm0_3 = sub_14093bda0(&var_118, &var_228, &var_200)
                            int64_t rcx_27 = var_228
                            
                            if (rcx_27 != 0)
                                zmm0_3 = sub_140a74f90(rcx_27)
                            
                            k = sub_140a73e30(&var_240, zmm0_3)
                        while (k != 0)
                        r13_1 = var_288_1.d
                        rsi_2 = rax_3
                        r15_1 = var_250_1
                    
                    int64_t* var_238
                    
                    if (var_238 != 0)
                        var_238[1].d -= 1
                        
                        if (var_238[1].d == 1)
                            (**var_238)(var_238)
                            int32_t temp5_1 = *(var_238 + 0xc)
                            *(var_238 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*var_238 + 8))(var_238, 1)
                
                int32_t var_1f4_1 = rsi_2
                
                if (rsi_2 - r15_1 s> 0)
                    int64_t var_1d0 = 0
                    int64_t var_1c8_1 = 0
                    int64_t var_c8
                    sub_140596d10(&var_c8, &var_1d0)
                    int64_t var_b0_1 = -1
                    int64_t var_a8
                    memset(&var_a8, 0, 0x50)
                    int64_t rcx_33 = var_1d0
                    __builtin_memset(&var_a8, 0, 0x2c)
                    int32_t var_7c_1 = 0x80
                    int32_t var_78_1 = 0xffffffff
                    int32_t var_74_1 = 0
                    int64_t var_68_1 = 0
                    int32_t var_60_1 = 0
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                    
                    int64_t rbx_9 = sx.q(r13_1)
                    r13_1 = (rbx_9 + 1).d
                    var_288_1.d = r13_1
                    
                    if (r13_1 s> var_288_1:4.d)
                        sub_1405fdd60(&var_290)
                        r13_1 = var_288_1.d
                    
                    int64_t* rbx_11 = &var_290[rbx_9 * 0xe]
                    sub_140596d10(rbx_11, &var_c8)
                    rbx_11[2] = r15_1.q
                    void* rdx_19 = &rbx_11[6]
                    rbx_11[3] = var_b0_1
                    rbx_11[4] = 0
                    rbx_11[5] = 0
                    *(rdx_19 + 0x1c) = 0x80
                    void* rax_29 = *(rdx_19 + 0x10)
                    
                    if (rax_29 != 0)
                        rdx_19 = rax_29
                    
                    __builtin_memset(rdx_19, 0, 0x1c)
                    rbx_11[0xa].d = 0xffffffff
                    *(rbx_11 + 0x54) = 0
                    rbx_11[0xc] = 0
                    rbx_11[0xd].d = 0
                    sub_140ee4880(&rbx_11[4], &var_a8)
                    int32_t var_60_2 = 0
                    
                    if (var_68_1 != 0)
                        sub_140a74f90(var_68_1)
                    
                    sub_140aeeb60(&var_a8, 0)
                    int64_t var_88
                    
                    if (var_88 != 0)
                        sub_140a74f90(var_88)
                    
                    int64_t rcx_40 = var_a8
                    
                    if (rcx_40 != 0)
                        sub_140a74f90(rcx_40)
                    
                    int64_t rcx_41 = var_c8
                    
                    if (rcx_41 != 0)
                        sub_140a74f90(rcx_41)
                
                int64_t var_218 = 0
                int32_t var_210_1 = r12_2
                int64_t rdi_7
                
                if (r12_2 != 0)
                    sub_1405a4c70(&var_218, r12_2, 0)
                    rdi_7 = var_248_1
                    memcpy(var_218, rdi_7, r12_2 * 2)
                else
                    rdi_7 = var_248_1
                    int32_t var_20c_1 = 0
                
                sub_140596d10(&var_188, &var_218)
                memset(&var_168, 0, 0x50)
                int64_t rcx_46 = var_218
                __builtin_memset(&var_168, 0, 0x2c)
                int32_t var_13c_1 = 0x80
                int32_t var_138_1 = 0xffffffff
                int32_t var_134_1 = 0
                int64_t var_128_1 = 0
                int32_t var_120_1 = 0
                
                if (rcx_46 != 0)
                    sub_140a74f90(rcx_46)
                
                sub_140ee4880(&var_168, &var_118)
                rsi_1 = var_288_1:4.d
                int64_t rbx_12 = sx.q(r13_1)
                r13_1 = (rbx_12 + 1).d
                var_288_1.d = r13_1
                
                if (r13_1 s> rsi_1)
                    sub_1405fdd60(&var_290)
                    r13_1 = var_288_1.d
                    rsi_1 = var_288_1:4.d
                
                r12_1 = var_290
                void* rbx_14 = rbx_12 * 0x70 + r12_1
                sub_140596d10(rbx_14, &var_188)
                *(rbx_14 + 0x10) = var_1f0_1.q
                void* rdx_27 = rbx_14 + 0x30
                *(rbx_14 + 0x18) = rax_14.q
                *(rbx_14 + 0x20) = 0
                *(rbx_14 + 0x28) = 0
                *(rdx_27 + 0x10) = 0
                *(rdx_27 + 0x18) = 0
                *(rdx_27 + 0x1c) = 0x80
                void* rax_34 = *(rdx_27 + 0x10)
                
                if (rax_34 != 0)
                    rdx_27 = rax_34
                
                *rdx_27 = 0
                *(rdx_27 + 8) = 0
                *(rbx_14 + 0x50) = 0xffffffff
                *(rbx_14 + 0x54) = 0
                *(rbx_14 + 0x60) = 0
                *(rbx_14 + 0x68) = 0
                sub_140ee4880(rbx_14 + 0x20, &var_168)
                r15_1 = rax_4
                var_250_1 = r15_1
                int32_t var_120_2 = 0
                
                if (var_128_1 != 0)
                    sub_140a74f90(var_128_1)
                
                sub_140aeeb60(&var_168, 0)
                int64_t var_148
                
                if (var_148 != 0)
                    sub_140a74f90(var_148)
                
                uint64_t rcx_54 = var_168
                
                if (rcx_54 != 0)
                    sub_140a74f90(rcx_54)
                
                int64_t rcx_55 = var_188
                
                if (rcx_55 != 0)
                    sub_140a74f90(rcx_55)
                
                int32_t var_d0_2 = 0
                
                if (var_d8_1 != 0)
                    sub_140a74f90(var_d8_1)
                
                int512_t zmm0_4 = sub_140aeeb60(&var_118, 0)
                int64_t var_f8
                
                if (var_f8 != 0)
                    zmm0_4 = sub_140a74f90(var_f8)
                
                int64_t rcx_59 = var_118
                
                if (rcx_59 != 0)
                    zmm0_4 = sub_140a74f90(rcx_59)
                
                if (rdi_7 != 0)
                    zmm0_4 = sub_140a74f90(rdi_7)
                
                j, zmm1 = sub_140a73e30(&var_260, zmm0_4)
            while (j != 0)
            rbx_2 = var_298_1
        
        int32_t rax_35 = var_298_1:4.d
        int32_t var_1dc_1 = rax_35
        
        if (rax_35 - r15_1 s> 0)
            int64_t var_1c0 = 0
            int64_t var_1b8_1 = 0
            sub_140596d10(&var_188, &var_1c0)
            int64_t var_170_2 = -1
            memset(&var_168, 0, 0x50)
            int64_t rcx_64 = var_1c0
            __builtin_memset(&var_168, 0, 0x2c)
            int32_t var_13c_2 = 0x80
            int32_t var_138_2 = 0xffffffff
            int32_t var_134_2 = 0
            int64_t var_128_2 = 0
            int32_t var_120_3 = 0
            
            if (rcx_64 != 0)
                sub_140a74f90(rcx_64)
            
            int64_t rdi_8 = sx.q(r13_1)
            r13_1 = (rdi_8 + 1).d
            var_288_1.d = r13_1
            
            if (r13_1 s> rsi_1)
                sub_1405fdd60(&var_290)
                r13_1 = var_288_1.d
                rbx_2 = var_298_1
                rsi_1 = var_288_1:4.d
                r12_1 = var_290
            
            void* rdi_10 = rdi_8 * 0x70 + r12_1
            sub_140596d10(rdi_10, &var_188)
            *(rdi_10 + 0x10) = r15_1.q
            void* rdx_32 = rdi_10 + 0x30
            *(rdi_10 + 0x18) = var_170_2
            *(rdi_10 + 0x20) = 0
            *(rdi_10 + 0x28) = 0
            *(rdx_32 + 0x1c) = 0x80
            void* rax_40 = *(rdx_32 + 0x10)
            
            if (rax_40 != 0)
                rdx_32 = rax_40
            
            __builtin_memset(rdx_32, 0, 0x1c)
            *(rdi_10 + 0x50) = 0xffffffff
            *(rdi_10 + 0x54) = 0
            *(rdi_10 + 0x60) = 0
            *(rdi_10 + 0x68) = 0
            sub_140ee4880(rdi_10 + 0x20, &var_168)
            sub_140ee3cc0(&var_168)
            int64_t rcx_69 = var_188
            
            if (rcx_69 != 0)
                sub_140a74f90(rcx_69)
        
        if (r13_1 == 0)
            int64_t var_1b0 = 0
            int64_t var_1a8_1 = 0
            sub_140596d10(&var_188, &var_1b0)
            int64_t var_178_3 = rbx_2
            int64_t var_170_3 = -1
            memset(&var_168, 0, zx.q(r13_1 + 0x50))
            int64_t rcx_72 = var_1b0
            __builtin_memset(&var_168, 0, 0x2c)
            int32_t var_13c_3 = 0x80
            int32_t var_138_3 = 0xffffffff
            int32_t var_134_3 = 0
            int64_t var_128_3 = 0
            int32_t var_120_4 = 0
            
            if (rcx_72 != 0)
                sub_140a74f90(rcx_72)
            
            r13_1 = 1
            var_288_1.d = 1
            
            if (rsi_1 s< 1)
                sub_1405fdd60(&var_290)
                r13_1 = var_288_1.d
                rbx_2 = var_298_1
                r12_1 = var_290
            
            sub_140ee2620(r12_1, &var_188)
            sub_140ee3cc0(&var_168)
            int64_t rcx_76 = var_188
            
            if (rcx_76 != 0)
                sub_140a74f90(rcx_76)
        
        int64_t rdi_11 = sx.q(arg4[1].d)
        int32_t rax_41 = (rdi_11 + 1).d
        arg4[1].d = rax_41
        
        if (rax_41 s> *(arg4 + 0xc))
            sub_1405a4df0(arg4)
        
        int64_t rax_42 = *arg4
        int32_t var_2a8_1 = 0
        *(rax_42 + ((rdi_11 * 3 + 1) << 3) - 8) = rbx_2
        int64_t* rcx_80 = rax_42 + ((rdi_11 * 3 + 1) << 3)
        *rcx_80 = 0
        sub_140edf710(rcx_80, r12_1, r13_1, 0, var_2a8_1)
        sub_140ee3b50(&var_290)
        result = result_1 + 1
        rbx = var_190
        i = i_1 + 1
        i_1 = i
        result_1 = result
    while (i s< rbx[1].d)

int64_t* var_258

if (var_258 != 0)
    var_258[1].d -= 1
    
    if (var_258[1].d == 1)
        result = (**var_258)(var_258)
        int32_t temp1_1 = *(var_258 + 0xc)
        *(var_258 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_258 + 8))(var_258, 1)

__security_check_cookie(rax_1 ^ &var_2c8)
return result
