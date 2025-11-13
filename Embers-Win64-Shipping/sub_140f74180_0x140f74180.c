// 函数: sub_140f74180
// 地址: 0x140f74180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rcx = *arg1
uint32_t result = (**rcx)(rcx)

if (result.b == 0)
    char r8_1 = arg1[0xf1].b
    int32_t rbx_1 = 0
    void* r13_1 = &arg1[0xf2]
    int32_t rcx_1 = 0
    int32_t r9_1 = *r13_1
    int32_t rax_3
    rax_3.b = *(r13_1 + 8) == 1
    int32_t var_f8 = r9_1
    
    if (rax_3 + *(r13_1 + 4) s>= 0)
        rcx_1 = rax_3 + *(r13_1 + 4)
    
    void* rax_5 = &arg1[0xf0]
    int32_t var_f4_1 = rcx_1
    
    if (r8_1 == 0)
        rax_5 = &var_f8
    
    int64_t rax_6 = *rax_5
    
    if (rax_6.d == r9_1)
        result = (rax_6 u>> 0x20).d
    
    if (rax_6.d != r9_1 || result != rcx_1)
        var_f8 = r9_1
        int32_t* rax_7 = &var_f8
        
        if (r8_1 != 0)
            rax_7 = &arg1[0xf0]
        
        int32_t var_f4_2 = rcx_1
        int64_t rcx_2 = var_f8.q
        int64_t rax_8 = *rax_7
        uint32_t r8_3
        int32_t r15_1
        
        if (rax_8.d != r9_1)
            r15_1 = rax_8.d
            
            if (rax_8.d s>= r9_1)
                r15_1 = r9_1
            
            r8_3 = (rax_8 u>> 0x20).d
        else
            r8_3 = (rax_8 u>> 0x20).d
            r15_1 = r9_1
            
            if (r8_3 s< (rcx_2 u>> 0x20).d)
                r15_1 = rax_8.d
        
        uint32_t r12_2
        
        if (rax_8.d != r9_1)
            r12_2 = (rcx_2 u>> 0x20).d
            
            if (rax_8.d s< r9_1)
                r12_2 = (rax_8 u>> 0x20).d
        else
            uint32_t rdx_5 = (rcx_2 u>> 0x20).d
            
            if (r8_3 s>= rdx_5)
                r12_2 = rdx_5
            else
                r12_2 = (rax_8 u>> 0x20).d
        
        int32_t rdi_1 = r9_1
        bool cond:3_1 = rax_8.d s> r9_1
        
        if (rax_8.d == r9_1)
            cond:3_1 = (rax_8 u>> 0x20).d s> (rcx_2 u>> 0x20).d
        
        if (cond:3_1)
            rdi_1 = rax_8.d
        
        uint32_t rcx_3 = (rcx_2 u>> 0x20).d
        
        if (rax_8.d == r9_1)
            uint32_t rax_9 = (rax_8 u>> 0x20).d
            
            if (rax_9 s> rcx_3)
                rcx_3 = rax_9
        else if (rax_8.d s> r9_1)
            rcx_3 = (rax_8 u>> 0x20).d
        
        int64_t* r14_1 = arg1[9]
        int64_t zmm0_1
        
        if (r15_1 != rdi_1)
            int32_t rax_12 = *(*(sx.q(rdi_1) * 0x70 + r14_1[3]) + 8)
            int32_t rdx_13 = rax_12 - 1
            
            if (rax_12 == 0)
                rdx_13 = 0
            
            float entry_zmm2
            
            if (rdx_13 != rcx_3)
                var_f8 = rdi_1
                int32_t var_f4_4 = 0
                sub_140f143a0(r14_1, &var_f8, rcx_3)
            else
                sub_140f14980(r14_1, rdi_1, entry_zmm2)
            
            for (int32_t i = rdi_1 - 1; i s> r15_1; i -= 1)
                sub_140f14980(arg1[9], i, entry_zmm2)
            
            int32_t rax_15 = *(*(sx.q(r15_1) * 0x70 + r14_1[3]) + 8)
            int64_t* rcx_11 = arg1[9]
            var_f8 = r15_1
            uint32_t var_f4_5 = r12_2
            int32_t r8_10 = rax_15 - 1
            
            if (rax_15 == 0)
                r8_10 = 0
            
            int32_t r9_3 = sub_140f143a0(rcx_11, &var_f8, r8_10 - r12_2)
            zmm0_1 = sub_140f07c30(arg1[9], r15_1, entry_zmm2, r9_3)
            
            if (r14_1[4].d == 0)
                int64_t* rax_16 = j_sub_140a82f30(0x20)
                
                if (rax_16 == 0)
                    rax_16 = nullptr
                else
                    rax_16[1].d = 1
                    *rax_16 = &data_142df7bd8
                    *(rax_16 + 0xc) = 1
                    rax_16[2] = 0
                    rax_16[3] = 0
                
                uint128_t zmm0_2 = (&rax_16[2]).o
                uint128_t var_e8 = zmm0_2
                void* rax_17 = _mm_bsrli_si128(zmm0_2, 8).q
                var_f8.q = 0
                int32_t var_ec_1 = 0
                
                if (rax_17 != 0)
                    *(rax_17 + 8) += 1
                
                int64_t var_98 = 0
                int32_t var_90_1 = 0
                void var_8c
                memset(&var_8c, 0, 0x54)
                int64_t* rcx_14 = *arg1
                int64_t var_88
                __builtin_memset(&var_88, 0, 0x2c)
                int32_t var_5c_1 = 0x80
                int32_t var_58_1 = 0xffffffff
                int32_t var_54_1 = 0
                int64_t var_48_1 = 0
                int32_t var_40_1 = 0
                int64_t* r8_13 = &var_e8
                int64_t* rdx_20 = &var_98
                void*** var_c8
                int64_t* rdi_2
                void*** r13_2
                int64_t* r14_2
                
                if ((*(*rcx_14 + 8))(rcx_14) == 0)
                    void**** rax_21 = sub_140ef77e0(&var_c8, rdx_20, r8_13, &arg1[0xc])
                    rdi_2 = rax_21[1]
                    r13_2 = *rax_21
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d += 1
                    
                    int64_t* var_c0
                    r14_2 = var_c0
                else
                    void*** var_a8
                    void**** rax_20 = sub_140ef7390(&var_a8, rdx_20, r8_13, &arg1[0xc])
                    rdi_2 = rax_20[1]
                    r13_2 = *rax_20
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d += 1
                    
                    int64_t* var_a0
                    r14_2 = var_a0
                
                if (r14_2 != 0)
                    r14_2[1].d -= 1
                    
                    if (r14_2[1].d == 1)
                        (**r14_2)(r14_2)
                        int32_t temp4_1 = *(r14_2 + 0xc)
                        *(r14_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*r14_2 + 8))(r14_2, 1)
                
                int32_t var_f0_1 = 1
                sub_1405a4f90(&var_f8)
                void**** r14_3 = var_f8.q
                *r14_3 = r13_2
                r14_3[1] = rdi_2
                
                if (rdi_2 != 0)
                    int32_t rax_24 = rdi_2[1].d
                    rdi_2[1].d = rax_24
                    
                    if (rax_24 == 0)
                        (**rdi_2)(rdi_2)
                        int32_t temp5_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
                
                int32_t var_40_2 = 0
                
                if (var_48_1 != 0)
                    sub_140a74f90(var_48_1)
                
                sub_1405e1b50(&var_88, 0)
                int64_t var_68
                
                if (var_68 != 0)
                    sub_140a74f90(var_68)
                
                int64_t rcx_25 = var_88
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                int64_t rcx_26 = var_98
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                int64_t* rdi_3 = var_e8:8.q
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        (**rdi_3)(rdi_3)
                        int32_t temp7_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rdi_3 + 8))(rdi_3, 1)
                
                int32_t rcx_29 = var_f0_1
                var_f8.q = 0
                var_f0_1.q = 0
                
                if (rax_16 != 0)
                    rax_16[1].d += 1
                
                var_c8 = &rax_16[2]
                
                if (rax_16 != 0)
                    rax_16[1].d += 1
                
                void**** var_b8 = r14_3
                var_e8.q = 0
                int32_t var_b0_1 = rcx_29
                int32_t var_ac_1 = var_ec_1
                var_e8:8.q = 0
                
                if (rax_16 != 0)
                    rax_16[1].d -= 1
                    
                    if (rax_16[1].d == 1)
                        (**rax_16)(rax_16)
                        int32_t temp10_1 = *(rax_16 + 0xc)
                        *(rax_16 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rax_16 + 8))(rax_16, 1)
                
                sub_140596d80(&var_e8)
                sub_140ee7660(arg1[9], &var_c8)
                sub_140596d80(&var_b8)
                
                if (rax_16 != 0)
                    rax_16[1].d -= 1
                    
                    if (rax_16[1].d == 1)
                        (**rax_16)(rax_16)
                        int32_t temp12_1 = *(rax_16 + 0xc)
                        *(rax_16 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*rax_16 + 8))(rax_16, 1)
                
                zmm0_1 = sub_140596d80(&var_f8)
                
                if (rax_16 != 0)
                    rax_16[1].d -= 1
                    
                    if (rax_16[1].d == 1)
                        (**rax_16)(rax_16)
                        int32_t temp13_1 = *(rax_16 + 0xc)
                        *(rax_16 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*rax_16 + 8))(rax_16, 1)
                
                r13_1 = &arg1[0xf2]
        else
            var_f8 = r15_1
            uint32_t var_f4_3 = r12_2
            zmm0_1 = sub_140f143a0(r14_1, &var_f8, rcx_3 - r12_2)
        
        if (&var_f8 != &arg1[0xf0] && arg1[0xf1].b != 0)
            arg1[0xf1].b = 0
        
        void* r10_1 = arg1[9]
        bool r9_2 = false
        var_f8 = r15_1
        uint32_t var_f4_6 = r12_2
        int64_t rax_37 = var_f8.q
        var_f8.q = rax_37
        
        if (r12_2 s> 0)
            int32_t rcx_42 = *(*(sx.q(r15_1) * 0x70 + *(r10_1 + 0x18)) + 8)
            int32_t rdx_26 = rcx_42 - 1
            
            if (rcx_42 == 0)
                rdx_26 = 0
            
            if (rdx_26 == r12_2)
                uint32_t rax_38 = (rax_37 u>> 0x20).d
                r9_2 = true
                var_f8 = r15_1
                
                if (rax_38 - 1 s>= 0)
                    rbx_1 = rax_38 - 1
                
                int32_t var_f4_7 = rbx_1
                var_f8.q = var_f8.q
        
        char rdx_28
        uint32_t r8_15
        rdx_28, r8_15 = sub_140f8af60(r13_1, r10_1, &var_f8, r9_2, zmm0_1, var_f8)
        result = sub_140f8fc70(arg1, rdx_28, r8_15)

__security_check_cookie(rax_1 ^ &var_118)
return result
