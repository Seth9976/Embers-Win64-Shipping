// 函数: sub_1419e3bf0
// 地址: 0x1419e3bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
sub_141dd15d0(arg1)
void* rax_2 = sub_141dc9840(arg1)
void* var_2d8
void* var_200

if (rax_2 != 0)
    if (sub_140d3e110(rax_2 + 0x220) != 0)
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x2c)
        int32_t var_88_1 = 0xffffffff
        int32_t var_8c_1 = 0x80
        int32_t var_84_1 = 0
        int64_t var_78_1 = 0
        int32_t var_70_1 = 0
        int64_t var_2a0 = *(sub_140d21d80(rax_2) + 0x18)
        int16_t* var_288
        sub_140b63b70(&var_2a0, &var_288)
        int16_t* const rsi_1 = &data_142d40450
        int32_t rdx_3 = 0
        int64_t var_2e8 = 0
        int32_t var_280
        
        if (var_280 != 0)
            rsi_1 = var_288
        
        int32_t rcx_6 = 0
        int32_t var_2e0_1 = 0
        int32_t var_2dc_1 = 0
        
        if (rsi_1 != 0 && *rsi_1 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rsi_1[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_2e8, rbx_1.d + 1)
                rcx_6 = var_2dc_1
                rdx_3 = var_2e0_1
            
            int32_t rax_5 = rdx_3 + rbx_1.d + 1
            int32_t var_2e0_2 = rax_5
            
            if (rax_5 s> rcx_6)
                sub_140594770(&var_2e8)
            
            UnDecorator::getReferenceType(var_2e8, rsi_1, (rbx_1.d + 1) * 2)
        
        void var_188
        int64_t* rax_6 = sub_140aae2f0(&var_188, &var_2e8)
        int32_t var_68 = 4
        int64_t var_58_1 = *rax_6
        int64_t* rcx_12 = rax_6[1]
        
        if (rcx_12 != 0)
            rcx_12[1].d += 1
        
        int32_t var_48_1 = rax_6[2].d
        char var_40_1 = 1
        int64_t var_2f8 = 0
        int32_t var_2f0_1 = 0
        sub_1405947f0(&var_2f8, 6)
        int32_t rax_8 = var_2f0_1 + 6
        var_2f0_1 = rax_8
        
        if (rax_8 s> 0)
            sub_140594770(&var_2f8)
        
        UnDecorator::getReferenceType(var_2f8, u"Level", 0xc)
        int64_t* var_230 = &var_2f8
        int32_t* var_228_1 = &var_68
        sub_140b91dc0(&var_b8, &var_2d8, &var_230, nullptr)
        int64_t rcx_17 = var_2f8
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        if (var_40_1 != 0)
            char var_40_2 = 0
            
            if (rcx_12 != 0)
                rcx_12[1].d -= 1
                
                if (rcx_12[1].d == 1)
                    (**rcx_12)(rcx_12)
                    int32_t rax_11 = *(rcx_12 + 0xc)
                    *(rcx_12 + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*(*rcx_12 + 8))(rcx_12, 1)
        
        int64_t* var_180
        
        if (var_180 != 0)
            var_180[1].d -= 1
            
            if (var_180[1].d == 1)
                (**var_180)(var_180)
                int32_t rax_15 = *(var_180 + 0xc)
                *(var_180 + 0xc) -= 1
                
                if (rax_15 == 1)
                    (*(*var_180 + 8))(var_180, 1)
        
        int64_t rcx_22 = var_2e8
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        int16_t* rcx_23 = var_288
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        void*** var_198
        void var_140
        char* var_128
        void**** rax_20 = sub_140a005b0(&var_198, 
            sub_140aaca20(&var_140, 
                sub_140a96390(&var_128, 
                    _vfprintf_p_l(&var_200, 
                        Level {Level} has an unexpected duplicate Instanced Foliage Actor.", 
                    InstancedFoliage")), &var_b8))
        void*** var_268 = *rax_20
        int64_t* rcx_29 = rax_20[1]
        
        if (rcx_29 != 0)
            rcx_29[1].d += 1
        
        void*** var_1a8
        void var_158
        void**** rax_22 = sub_140b9e470(&var_1a8, arg1, sub_140a96170(&var_158))
        void*** var_278 = *rax_22
        int64_t* rcx_33 = rax_22[1]
        
        if (rcx_33 != 0)
            rcx_33[1].d += 1
        
        void var_298
        sub_140b58170(&var_298, "MapCheck", 1)
        void var_170
        int64_t* rax_23 = sub_140a96170(&var_170)
        void var_1d8
        void var_1c8
        void var_1b8
        void var_108
        sub_140aced10(
            *sub_140aced10(*sub_140ae44d0(sub_140accdf0(&var_108, &var_298), &var_1b8, rax_23), 
                &var_1c8, &var_278), 
            &var_1d8, &var_268)
        int64_t* var_1d0
        
        if (var_1d0 != 0)
            var_1d0[1].d -= 1
            
            if (var_1d0[1].d == 1)
                (**var_1d0)(var_1d0)
                int32_t temp7_1 = *(var_1d0 + 0xc)
                *(var_1d0 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_1d0 + 8))(var_1d0, 1)
        
        int64_t* var_1c0
        
        if (var_1c0 != 0)
            var_1c0[1].d -= 1
            
            if (var_1c0[1].d == 1)
                (**var_1c0)(var_1c0)
                int32_t temp9_1 = *(var_1c0 + 0xc)
                *(var_1c0 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*var_1c0 + 8))(var_1c0, 1)
        
        int64_t* var_1b0
        
        if (var_1b0 != 0)
            var_1b0[1].d -= 1
            
            if (var_1b0[1].d == 1)
                (**var_1b0)(var_1b0)
                int32_t temp10_1 = *(var_1b0 + 0xc)
                *(var_1b0 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_1b0 + 8))(var_1b0, 1)
        
        sub_140acd9c0(&var_108)
        int64_t* var_168
        
        if (var_168 != 0)
            var_168[1].d -= 1
            
            if (var_168[1].d == 1)
                (**var_168)(var_168)
                int32_t rax_35 = *(var_168 + 0xc)
                *(var_168 + 0xc) -= 1
                
                if (rax_35 == 1)
                    (*(*var_168 + 8))(var_168, 1)
        
        if (rcx_33 != 0)
            rcx_33[1].d -= 1
            
            if (rcx_33[1].d == 1)
                (**rcx_33)(rcx_33)
                int32_t temp13_1 = *(rcx_33 + 0xc)
                *(rcx_33 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rcx_33 + 8))(rcx_33, 1)
        
        int64_t* var_1a0
        
        if (var_1a0 != 0)
            var_1a0[1].d -= 1
            
            if (var_1a0[1].d == 1)
                (**var_1a0)(var_1a0)
                int32_t temp14_1 = *(var_1a0 + 0xc)
                *(var_1a0 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*var_1a0 + 8))(var_1a0, 1)
        
        int64_t* var_150
        
        if (var_150 != 0)
            var_150[1].d -= 1
            
            if (var_150[1].d == 1)
                (**var_150)(var_150)
                int32_t rax_43 = *(var_150 + 0xc)
                *(var_150 + 0xc) -= 1
                
                if (rax_43 == 1)
                    (*(*var_150 + 8))(var_150, 1)
        
        if (rcx_29 != 0)
            rcx_29[1].d -= 1
            
            if (rcx_29[1].d == 1)
                (**rcx_29)(rcx_29)
                int32_t temp17_1 = *(rcx_29 + 0xc)
                *(rcx_29 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rcx_29 + 8))(rcx_29, 1)
        
        int64_t* var_190
        
        if (var_190 != 0)
            var_190[1].d -= 1
            
            if (var_190[1].d == 1)
                (**var_190)(var_190)
                int32_t temp18_1 = *(var_190 + 0xc)
                *(var_190 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_190 + 8))(var_190, 1)
        
        int64_t* var_138
        
        if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t rax_51 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (rax_51 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        int64_t* var_1f8
        
        if (var_1f8 != 0)
            var_1f8[1].d -= 1
            
            if (var_1f8[1].d == 1)
                (**var_1f8)(var_1f8)
                int32_t rdi_1 = *(var_1f8 + 0xc)
                *(var_1f8 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_1f8 + 8))(var_1f8, zx.q(rdi_1))
        
        void var_290
        sub_140b58170(&var_290, "MapCheck", 1)
        void var_e0
        sub_140add570(sub_140accdf0(&var_e0, &var_290), 3, 0)
        sub_140acd9c0(&var_e0)
        int32_t var_70_2 = 0
        
        if (var_78_1 != 0)
            sub_140a74f90(var_78_1)
        
        sub_140acd610(&var_b8)
    else
        sub_140d3a3a0(rax_2 + 0x220, arg1)

int32_t* result = data_143f222d8

if (*result != 0)
    int32_t rcx_69 = 0
    int32_t r8_9 = 0
    void* r15_1 = &arg1[0x44]
    int32_t var_2d0_1 = 0
    int32_t rbx_17 = *(r15_1 + 0x28)
    void* r14_1 = r15_1 + 0x10
    var_2d8 = r15_1
    int32_t var_2cc_1 = 1
    void* var_2c8_1 = r14_1
    int32_t var_2c0_1 = 0xffffffff
    int64_t var_2bc_1 = 0
    
    if (rbx_17 != 0)
        void* rax_57 = *(r14_1 + 0x10)
        void* r9_2 = r14_1
        
        if (rax_57 != 0)
            r9_2 = rax_57
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rbx_17 - 1)
        int32_t rdx_21 = *r9_2
        
        if (rdx_21 != 0)
        label_1419e42ed:
            int32_t rax_64 = neg.d(rdx_21) & rdx_21
            uint64_t rflags_1
            int32_t temp0_13
            temp0_13, rflags_1 = _bit_scan_reverse(rax_64)
            int32_t var_2cc_2 = rax_64
            int32_t rax_65
            
            if (rax_64 == 0)
                rax_65 = 0x20
            else
                rax_65 = 0x1f - temp0_13
            
            var_2bc_1.d = r8_9 - rax_65 + 0x1f
            
            if (r8_9 - rax_65 + 0x1f s> rbx_17)
                var_2bc_1.d = rbx_17
        else
            while (true)
                int64_t rdx_22 = sx.q(rcx_69)
                r8_9 += 0x20
                rcx_69 += 1
                var_2bc_1:4.d = r8_9
                var_2d0_1 = rcx_69
                
                if (rdx_22.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_21 = *(r9_2 + (rdx_22 << 2) + 4)
                var_2c0_1 = 0xffffffff
                
                if (rdx_21 != 0)
                    goto label_1419e42ed
            
            var_2bc_1.d = rbx_17
    
    int32_t rdx_23 = *(r15_1 + 0x28)
    var_200 = r15_1
    double zmm2_1[0x2] = var_2c0_1.o
    int128_t var_1f8_1 = var_2d0_1.o
    int32_t rsi_2 = 0xffffffff << (rdx_23.b & 0x1f)
    int128_t zmm0_1 = var_200.o
    int32_t r8_12 = rdx_23 s>> 5
    int32_t r9_4 = rdx_23 & 0xffffffe0
    int32_t var_210_1 = rsi_2
    int32_t var_20c_1 = rdx_23
    double var_1e8_1[0x2] = zmm2_1
    int64_t var_238_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int128_t var_258 = zmm0_1
    int128_t var_248_1 = var_1f8_1
    
    if (rdx_23 != rbx_17)
        void* rax_67 = *(r14_1 + 0x10)
        void* r10_1 = r14_1
        
        if (rax_67 != 0)
            r10_1 = rax_67
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rbx_17 - 1)
        int32_t rdx_27 = *(r10_1 + (sx.q(r8_12) << 2)) & rsi_2
        int32_t var_20c_3
        
        if (rdx_27 != 0)
        label_1419e43c2:
            int32_t rax_74 = neg.d(rdx_27) & rdx_27
            uint64_t rflags_2
            int32_t temp0_15
            temp0_15, rflags_2 = _bit_scan_reverse(rax_74)
            int32_t r11_1
            
            if (rax_74 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_15
            
            int32_t var_20c_2 = r9_4 - r11_1 + 0x1f
            
            if (r9_4 - r11_1 + 0x1f s> rbx_17)
                var_20c_3 = rbx_17
        else
            while (true)
                int64_t rcx_74 = sx.q(r8_12)
                r9_4 += 0x20
                r8_12 += 1
                
                if (rcx_74.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_27 = *(r10_1 + (rcx_74 << 2) + 4)
                var_210_1 = 0xffffffff
                
                if (rdx_27 != 0)
                    goto label_1419e43c2
            
            var_20c_3 = rbx_17
    
    while (true)
        result = sx.q(var_248_1:0xc.d)
        int64_t* rdx_28 = var_258.q
        
        if (result.d == (var_210_1.q u>> 0x20).d && var_248_1.q == r14_1 && rdx_28 == r15_1)
            break
        
        void* rcx_76 = result * 3
        int64_t rax_76 = *rdx_28
        void* r12_1 = rax_76 + (rcx_76 << 3)
        void* rax_77 = *(rax_76 + (rcx_76 << 3))
        
        if (rax_77 == 0 || (*(rax_77 + 0x364) & 0x8000) != 0)
            char* rax_78 = *(r12_1 + 8)
            char rcx_77 = *rax_78
            
            if (rcx_77 == 1)
                void* rbx_18 = *(rax_78 + 8)
                int64_t* rcx_78 = *(rbx_18 + 8)
                
                if (rcx_78 != 0)
                    sub_140cd85e0(rcx_78)
                    int64_t* rcx_79 = *(rbx_18 + 8)
                    (*(*rcx_79 + 0x3a0))(rcx_79, 0)
            else if (rcx_77 == 2)
                void* rbx_19 = *(rax_78 + 8)
                int64_t* r15_2 = nullptr
                uint64_t var_2b0 = 0
                int64_t rdi_2 = sx.q(*(rbx_19 + 0x10))
                int64_t rsi_3 = *(rbx_19 + 8)
                int32_t var_2a8_1 = rdi_2.d
                
                if (rdi_2.d != 0)
                    sub_1405c4a00(&var_2b0, rdi_2.d, 0)
                    r15_2 = var_2b0
                    memcpy(r15_2, rsi_3, (rdi_2 << 3).d)
                    rdi_2 = zx.q(var_2a8_1)
                else
                    int32_t var_2a4_1 = 0
                
                *(rbx_19 + 0x10) = 0
                
                if (*(rbx_19 + 0x14) != 0)
                    sub_140638c50(rbx_19 + 8, 0)
                
                int64_t rsi_4 = 0
                int64_t* rdi_3 = r15_2
                void* rcx_83 = &r15_2[sx.q(rdi_2.d)]
                uint64_t r14_5 = (rcx_83 - r15_2 + 7) u>> 3
                
                if (r15_2 u> rcx_83)
                    r14_5 = 0
                
                if (r14_5 != 0)
                    do
                        int64_t* rbx_20 = *rdi_3
                        
                        if (rbx_20 != 0)
                            sub_140cd85e0(rbx_20)
                            sub_1420e0c80((*(*rbx_20 + 0x150))(rbx_20), rbx_20, 0, 1)
                        
                        rdi_3 = &rdi_3[1]
                        rsi_4 += 1
                    while (rsi_4 != r14_5)
                
                if (r15_2 != 0)
                    sub_140a74f90(r15_2)
                
                r15_1 = var_2d8
                r14_1 = var_2c8_1
        
        char* rax_83 = *(r12_1 + 8)
        *rax_83 = 1
        void var_110
        
        if (&rax_83[8] != &var_110)
            int64_t* rcx_88 = *(rax_83 + 8)
            *(rax_83 + 8) = 0
            
            if (rcx_88 != 0)
                (**rcx_88)(rcx_88, 1)
        
        var_248_1:8.d &= not.d(var_258:0xc.d)
        sub_14059bdd0(&var_258:8)

__security_check_cookie(rax_1 ^ &var_318)
return result
