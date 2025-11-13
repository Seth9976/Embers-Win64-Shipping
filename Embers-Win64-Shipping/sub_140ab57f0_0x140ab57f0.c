// 函数: sub_140ab57f0
// 地址: 0x140ab57f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int32_t var_298 = arg3
int32_t result = arg3 + 1
int32_t var_2c0 = 0

if (result u> 1)
    int64_t* rcx_1 = *(arg1 + 0x150) + 8
    var_2c0 = arg3
    result = sub_1408d92c0(rcx_1, &var_2c0)
    
    if (*arg1 != 0)
        int64_t* var_240
        sub_140a77ef0(&var_240)
        char* rax_2 = sub_140a752e0()
        int64_t* rdi_1 = *(rax_2 + 0x30)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t* rax_3 = sub_140903440(*(rax_2 + 0x28))
        int64_t* var_280
        int64_t* r9_1 = sub_140a7c300(sub_140a752e0(), &var_280, rax_3)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                r9_1 = (**rdi_1)(rdi_1)
                int32_t rax_7 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_7 == 1)
                    r9_1 = (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* r14_1 = var_240
        int64_t* r13_1 = nullptr
        int32_t i_6 = 0
        int32_t i_10
        void* rax_11 = &r14_1[sx.q(i_10) * 2]
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x2c)
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        int64_t var_e8 = 0
        int32_t var_e0_1 = 0
        int32_t var_bc_1 = 0x80
        int64_t var_d8
        __builtin_memset(&var_d8, 0, 0x1c)
        int32_t var_b8_1 = 0xffffffff
        int32_t var_b4_1 = 0
        int64_t var_a8_1 = 0
        int32_t var_a0_1 = 0
        int64_t* var_290 = nullptr
        int64_t var_288_1 = 0
        void* var_1f8 = rax_11
        
        if (r14_1 != rax_11)
            do
                int16_t* const r8_1
                
                if (r14_1[1].d == 0)
                    r8_1 = &data_142d40450
                else
                    r8_1 = *r14_1
                
                int16_t* var_270
                sub_140a2e390(&var_270, u"%s_locchunk%d", r8_1)
                int16_t* r12_1 = var_270
                int32_t var_268
                int32_t r15_1 = var_268
                int16_t* rcx_8 = nullptr
                var_270 = nullptr
                var_268.q = 0
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                int64_t var_198
                int64_t* rax_12 = sub_140b25050(&var_198)
                bool cond:0_1 = rax_12[1].d == 0
                int64_t var_2d8 = 0
                var_2d8 = *rax_12
                *rax_12 = 0
                int32_t rcx_12 = rax_12[1].d
                int32_t rcx_13 = *(rax_12 + 0xc)
                int32_t rcx_14
                rcx_14.b = cond:0_1
                rax_12[1] = 0
                int32_t rdx_5 = rcx_12 + 0xd + rcx_14
                
                if (rdx_5 s> rcx_13)
                    sub_1405947f0(&var_2d8, rdx_5)
                
                sub_140a2cf70(&var_2d8, u"Localization", 0xc)
                int32_t rbx_3 = r15_1 - 1
                
                if (r15_1 == 0)
                    rbx_3 = 0
                
                int32_t rcx_17
                
                if (rcx_12 == 0)
                    rcx_17 = 2
                
                if (rcx_12 != 0 || rbx_3 == 0xffffffff)
                    rcx_17 = 1
                
                int64_t var_2b8 = var_2d8
                int32_t rdx_7 = rbx_3 + rcx_17 + rcx_12
                var_2d8 = 0
                int32_t var_2d0_1
                var_2d0_1.q = 0
                
                if (rdx_7 s> rcx_13)
                    sub_1405947f0(&var_2b8, rdx_7)
                
                r9_1 = sub_140a2cf70(&var_2b8, r12_1, rbx_3)
                int64_t i_12 = sx.q(i_6)
                i_6 = (i_12 + 1).d
                var_288_1.d = i_6
                
                if (i_6 s> var_288_1:4.d)
                    r9_1 = sub_1405a4f90(&var_290)
                    i_6 = var_288_1.d
                    r13_1 = var_290
                
                int64_t* rcx_23 = &r13_1[i_12 * 2]
                *rcx_23 = 0
                *rcx_23 = var_2b8
                var_2b8 = 0
                rcx_23[1].d = rcx_12
                *(rcx_23 + 0xc) = rcx_13
                int64_t rcx_24 = var_2b8
                int32_t var_2b0_1
                var_2b0_1.q = 0
                
                if (rcx_24 != 0)
                    r9_1 = sub_140a74f90(rcx_24)
                
                int64_t rcx_25 = var_2d8
                
                if (rcx_25 != 0)
                    r9_1 = sub_140a74f90(rcx_25)
                
                int64_t rcx_26 = var_198
                
                if (rcx_26 != 0)
                    r9_1 = sub_140a74f90(rcx_26)
                
                if (r12_1 != 0)
                    r9_1 = sub_140a74f90(r12_1)
                
                r14_1 = &r14_1[2]
            while (r14_1 != var_1f8)
        
        int32_t i_9
        int32_t i_13 = i_9
        int64_t* rcx_29 = *(arg1 + 0x150)
        int64_t* var_2e0_1 = &var_e8
        var_1f8.o = var_280.o
        int64_t* var_2e8_1 = &var_98
        void** var_2f0_1 = &var_1f8
        int32_t var_1d0_1 = 0
        int128_t var_178_1 = 0.o
        int32_t i_11 = i_6
        int128_t var_168 = r13_1.o
        int32_t var_1b0_1 = 0
        int128_t var_158 = 0.o
        sub_140a82600(rcx_29, &var_158, &var_168, r9_1, 4, var_2f0_1)
        int64_t* rbx_4 = r13_1
        
        if (i_6 != 0)
            int32_t i
            
            do
                int64_t rcx_30 = *rbx_4
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                rbx_4 = &rbx_4[2]
                i = i_6
                i_6 -= 1
            while (i != 1)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        r13_1.b = 0
        int128_t* r15_2 = nullptr
        int128_t* var_2a8 = nullptr
        int32_t r14_2 = 0
        int64_t var_2a0_1 = 0
        
        if (var_e0_1 != var_b4_1)
            sub_1405a51b0(&var_2a8, var_e0_1 - var_b4_1)
            r14_2 = var_2a0_1.d
            r15_2 = var_2a8
        
        int64_t* var_258_1 = &var_d8
        int32_t rcx_33 = 0
        int32_t var_260_1 = 0
        int32_t r8_5 = 0
        int32_t var_25c_1 = 1
        int32_t var_250_1 = 0xffffffff
        int64_t var_24c_1 = 0
        int64_t* var_c8
        int32_t var_c0
        
        if (var_c0 != 0)
            int64_t* r9_3 = &var_d8
            
            if (var_c8 != 0)
                r9_3 = var_c8
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_c0 - 1)
            int32_t rdx_15 = *r9_3
            
            if (rdx_15 != 0)
            label_140ab5d38:
                int32_t rax_28 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_1
                int32_t temp0_3
                temp0_3, rflags_1 = _bit_scan_reverse(rax_28)
                int32_t var_25c_2 = rax_28
                int32_t var_208_1 = temp0_3
                int32_t rax_29
                
                if (rax_28 == 0)
                    rax_29 = 0x20
                else
                    rax_29 = 0x1f - temp0_3
                
                int32_t rax_30 = r8_5 - rax_29 + 0x1f
                
                if (rax_30 s> var_c0)
                    rax_30 = var_c0
                
                var_24c_1.d = rax_30
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx_33)
                    r8_5 += 0x20
                    rcx_33 += 1
                    var_24c_1:4.d = r8_5
                    var_260_1 = rcx_33
                    
                    if (rdx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        var_24c_1.d = var_c0
                        break
                    
                    rdx_15 = *(r9_3 + (rdx_16 << 2) + 4)
                    int32_t var_250_2 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_140ab5d38
        
        int128_t var_130_1 = var_260_1.o
        int128_t var_120_1 = 0xffffffff
        int128_t var_230 = (&var_e8).o
        int64_t var_210_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        void* var_220_1 = var_130_1.q
        
        if (0 s< var_c0)
            int32_t i_5
            int32_t i_1 = i_5
            
            do
                int64_t rbx_5 = sx.q(r14_2)
                r14_2 = (rbx_5 + 1).d
                var_2a0_1.d = r14_2
                
                if (r14_2 s> var_2a0_1:4.d)
                    sub_1405c4e40(&var_2a8)
                    r14_2 = var_2a0_1.d
                    r15_2 = var_2a8
                
                int128_t* r8_8 = &r15_2[rbx_5 * 2]
                
                if (rbx_5 << 5 != neg.q(r15_2))
                    int64_t rdx_19 = sx.q(i_1) * 0xa
                    int64_t rcx_36 = *var_230.q
                    *r8_8 = *(rcx_36 + (rdx_19 << 3))
                    r8_8[1] = *(rcx_36 + (rdx_19 << 3) + 0x10)
                
                int32_t var_218 = var_218 & not.d(var_230:0xc.d)
                sub_14059bdd0(&var_230:8)
                i_1 = i_5
            while (i_1 s< *(var_220_1 + 0x18))
        
        char* rbx_6 = arg1
        int64_t* i_2 = *(rbx_6 + 0x140)
        
        for (void* r12_4 = &i_2[sx.q(*(rbx_6 + 0x148)) * 2]; i_2 != r12_4; i_2 = &i_2[2])
            int64_t* rcx_38 = *(rbx_6 + 0x150)
            int64_t* rdi_2 = *i_2
            int32_t rax_37 = (*(*rcx_38 + 8))(rcx_38)
            int64_t rdx_20 = *rdi_2
            int32_t rax_38
            rax_38, r8_5 = (*(rdx_20 + 8))(rdi_2, rdx_20)
            
            if (rax_38 s> rax_37)
                int128_t* rbx_8 = r15_2
                void* rdi_5 = &r15_2[sx.q(r14_2) * 2]
                
                if (r15_2 != rdi_5)
                    while (true)
                        int64_t* rax_39 = var_280
                        int128_t zmm1_1 = rbx_8[1]
                        int64_t* var_2f0_2 = &var_e8
                        int32_t i_14 = i_9
                        int64_t rax_41 = **i_2
                        int128_t var_108 = *rbx_8
                        int128_t zmm0_2 = rax_39.o
                        char var_2f8_1
                        var_2f8_1.q = &var_98
                        int64_t* rdx_21
                        rdx_21.b = 4
                        int128_t var_f8_1 = zmm1_1
                        int128_t var_148 = zmm0_2
                        char rax_42
                        rax_42, r8_5 = (*(rax_41 + 0x28))(zmm0_2, rdx_21, &var_148, &var_108, 
                            var_2f8_1, var_2f0_2, var_2e8_1, var_2e0_1)
                        
                        if (rax_42 == 2)
                            rbx_6 = arg1
                            r13_1.b = 1
                            break
                        
                        rbx_8 = &rbx_8[2]
                        
                        if (rbx_8 == rdi_5)
                            goto label_140ab5efd
                    
                    break
            
        label_140ab5efd:
            rbx_6 = arg1
        
        if (r15_2 != 0)
            sub_140a74f90(r15_2)
        
        if (r13_1.b == 0)
            r8_5.b = 1
            sub_140ac71b0(rbx_6, &var_e8, r8_5.b)
        else
            char* rax_43 = sub_140a752e0()
            int64_t* rbx_9 = *(rax_43 + 0x30)
            
            if (rbx_9 != 0)
                rbx_9[1].d += 1
            
            sub_140ab51b0(arg1, sub_140903440(*(rax_43 + 0x28)), 0x1d)
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    (**rbx_9)(rbx_9)
                    int32_t rdi_6 = *(rbx_9 + 0xc)
                    *(rbx_9 + 0xc) -= 1
                    
                    if (rdi_6 == 1)
                        (*(*rbx_9 + 8))(rbx_9, zx.q(rdi_6))
        
        int32_t var_a0_2 = 0
        
        if (var_a8_1 != 0)
            sub_140a74f90(var_a8_1)
        
        sub_140aa93f0(&var_e8, 0)
        
        if (var_c8 != 0)
            sub_140a74f90(var_c8)
        
        int64_t rcx_50 = var_e8
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
        
        int32_t var_50_2 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        result = sub_140aa93f0(&var_98, 0)
        int64_t var_78
        
        if (var_78 != 0)
            result = sub_140a74f90(var_78)
        
        int64_t rcx_54 = var_98
        
        if (rcx_54 != 0)
            result = sub_140a74f90(rcx_54)
        
        int32_t i_7 = i_9
        int64_t* rbx_10 = var_280
        
        if (i_7 != 0)
            int32_t i_3
            
            do
                int64_t rcx_55 = *rbx_10
                
                if (rcx_55 != 0)
                    result = sub_140a74f90(rcx_55)
                
                rbx_10 = &rbx_10[2]
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
            rbx_10 = var_280
        
        if (rbx_10 != 0)
            result = sub_140a74f90(rbx_10)
        
        int32_t i_8 = i_10
        int64_t* rbx_11 = var_240
        
        if (i_8 != 0)
            int32_t i_4
            
            do
                int64_t rcx_57 = *rbx_11
                
                if (rcx_57 != 0)
                    result = sub_140a74f90(rcx_57)
                
                rbx_11 = &rbx_11[2]
                i_4 = i_8
                i_8 -= 1
            while (i_4 != 1)
            rbx_11 = var_240
        
        if (rbx_11 != 0)
            result = sub_140a74f90(rbx_11)

__security_check_cookie(rax_1 ^ &var_318)
return result
