// 函数: sub_142707990
// 地址: 0x142707990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rdx = arg1[0x28].d
int64_t* r14 = arg1

if (rdx != 0)
    int64_t rsi_1 = 0
    int32_t r12_1 = arg1[0x2f].d
    int32_t arg_18 = r12_1
    int64_t* var_168 = nullptr
    int64_t var_160_1 = 0
    
    if (rdx s> 0)
        sub_140638c50(&var_168, rdx)
        rdx = r14[0x28].d
    
    int64_t* var_158_1 = nullptr
    int64_t* var_178 = nullptr
    int32_t result_1 = 0
    int64_t var_170_1 = 0
    
    if (rdx s> 0)
        sub_140638c50(&var_178, rdx)
        result_1 = var_170_1.d
        var_158_1 = var_178
    
    void* r8_5 = &r14[0x27]
    int64_t* rdi_1 = *r8_5
    int64_t* var_150_1 = rdi_1
    void* rax_3 = &rdi_1[sx.q(*(r8_5 + 8)) * 9]
    
    if (rdi_1 != rax_3)
        void* r15_1 = &r14[0x1d]
        uint128_t zmm6
        uint128_t var_58_1 = zmm6
        uint128_t zmm7
        uint128_t var_68_1 = zmm7
        int128_t zmm8
        int128_t var_78_1 = zmm8
        int128_t zmm9
        int128_t var_88_1 = zmm9
        int128_t zmm10
        int128_t var_98_1 = zmm10
        
        do
            void* r10_1 = *rdi_1
            int32_t rax_4 = *(r15_1 + 8)
            void* var_148 = r10_1
            int64_t* rcx_7
            
            if (rax_4 == *(r15_1 + 0x34))
            label_142707b0e:
                rcx_7 = nullptr
            else
                void* r8_1 = *(r15_1 + 0x40)
                void* r9_1 = r15_1 + 0x38
                
                if (r8_1 != 0)
                    r9_1 = r8_1
                
                int32_t rax_9 = *(r9_1 + ((sx.q((r10_1 u>> 0x20).d * 0x17 + r10_1.d)
                    & (sx.q(*(r15_1 + 0x48)) - 1)) << 2))
                
                if (rax_9 == 0xffffffff)
                label_142707b0e_1:
                    rcx_7 = nullptr
                else
                    while (true)
                        rcx_7 = sx.q(rax_9) * 0x38 + *r15_1
                        
                        if (*rcx_7 == r10_1)
                            break
                        
                        rax_9 = rcx_7[6].d
                        
                        if (rax_9 == 0xffffffff)
                            goto label_142707b0e_2
                    
                    if (rax_9 == 0xffffffff)
                    label_142707b0e_2:
                        rcx_7 = nullptr
            
            void* rbx_1 = &rcx_7[1]
            
            if (rcx_7 == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
            label_142707be6:
                uint32_t rax_19 = zx.d(*(rdi_1 + 0x34))
                int32_t rcx_16 = *(rbx_1 + 0x10)
                
                if (rcx_16 s<= rax_19)
                    sub_1426f5580(rbx_1 + 8, rax_19 - rcx_16 + 1)
                    rax_19 = zx.d(*(rdi_1 + 0x34))
                
                int32_t rdx_8 = rdi_1[8].d
                int128_t* r13_2 = zx.q(rax_19.b) * 0x3c + *(rbx_1 + 8)
                
                if ((rdx_8.b & 1) == 0 || (((*(r13_2 + 0x38) u>> 1).b ^ (rdx_8 u>> 1).b) & 1) != 0)
                    r15_1.b = 1
                else
                    r15_1.b = 0
                
                if (((rdx_8 u>> 1).b & 1) == 0)
                    int32_t rcx_21 = *(r13_2 + 0x38)
                    
                    if (((rcx_21 u>> 2).b & 1) != 0)
                        (*(*r14 + 0x400))(r14, r13_2)
                        
                        if ((r14[0x2b].b & 1) != 0 && sub_1427029c0(rbx_1) == 0)
                            int64_t rax_28 = sub_140d3c6e0(rbx_1)
                            
                            if (rax_28 != 0)
                                int64_t result_3 = sx.q(result_1)
                                int32_t result_2 = (result_3 + 1).d
                                result_1 = result_2
                                var_170_1.d = result_2
                                
                                if (result_2 s> var_170_1:4.d)
                                    sub_1405a4d70(&var_178)
                                    result_1 = var_170_1.d
                                    var_158_1 = var_178
                                
                                var_158_1[result_3] = rax_28
                            
                            r12_1 = arg_18
                        
                        goto label_142707cf6
                    
                    if (r15_1.b != 0)
                        *r13_2 = 0
                        *(r13_2 + 0x38) = rcx_21 & 0xfffffffd
                        goto label_142707cf6
                else
                    (*(*r14 + 0x3f8))(r14, r13_2, &rdi_1[1])
                label_142707cf6:
                    
                    if (r15_1.b != 0)
                        int64_t* rcx_28 = var_168
                        void* rdx_13 = &rcx_28[sx.q(var_160_1.d)]
                        
                        if (rcx_28 == rdx_13)
                        label_142707d33:
                            int64_t rbx_3 = sx.q(var_160_1.d)
                            int32_t rax_33 = (rbx_3 + 1).d
                            var_160_1.d = rax_33
                            
                            if (rax_33 s> var_160_1:4.d)
                                sub_1405a4d70(&var_168)
                            
                            var_168[rbx_3] = *rdi_1
                        else
                            while (*rcx_28 != *rdi_1)
                                rcx_28 = &rcx_28[1]
                                
                                if (rcx_28 == rdx_13)
                                    goto label_142707d33
                            
                            if (((rcx_28 - var_168) s>> 3).d == 0xffffffff)
                                goto label_142707d33
                        
                        if (r12_1 s> 0)
                            zmm8 = *r13_2
                            zmm9 = *(r13_2 + 4)
                            zmm10 = *(r13_2 + 8)
                            int64_t r12_3 = *(r13_2 + 0x24)
                            char r14_1 = *(r13_2 + 0x2c)
                            int64_t r15_2 = r13_2[3].q
                            int64_t rbx_4 = *rdi_1
                            zmm7 = zx.o(*(r13_2 + 0xc))
                            int32_t rsi_2 = *(r13_2 + 0x14)
                            *(r13_2 + 0x18)
                            int32_t rdi_2 = r13_2[2].d
                            int32_t r13_3 = *(r13_2 + 0x38)
                            int32_t var_120
                            int64_t zmm6_1 = sub_1426f1f40(&var_120)
                            char var_f4_1 = r14_1
                            r14 = arg1
                            var_120 = zmm8.d
                            int32_t var_11c_1 = zmm9.d
                            int32_t var_e8 = var_e8 ^ ((var_e8 ^ r13_3) & 7)
                            int32_t var_118_1 = zmm10.d
                            int64_t var_128 = rbx_4
                            uint64_t var_114_1 = zmm7.q
                            int32_t var_10c_1 = rsi_2
                            int64_t var_108_1 = zmm6_1
                            int32_t var_100_1 = rdi_2
                            int64_t var_fc_1 = r12_3
                            int64_t var_f0_1 = r15_2
                            sub_1405a9f90(&r14[0x2e], &var_128)
                            rdi_1 = var_150_1
                            rsi_1 = 0
                
                r15_1 = &r14[0x1d]
            else if (((rdi_1[8].d u>> 1).b & 1) != 0)
                void var_d8
                sub_140d3a3a0(&var_d8, r10_1)
                int64_t var_d0 = 0
                void* var_c8_1 = rbx_1
                void var_c0
                sub_142704050(&var_c0)
                sub_1426f5580(&var_d0, zx.d(data_143f72518))
                int64_t* var_b0 = &var_148
                void* var_a8_1 = &var_d8
                int32_t arg_20
                sub_1426f0960(r15_1, &arg_20, &var_b0, nullptr)
                rbx_1 = *r15_1 + sx.q(arg_20) * 0x38 + 8
                int64_t rcx_14 = var_d0
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                *(rbx_1 + 0x18) = r14[0x19].b
                *(rbx_1 + 0x1c) = *(r14 + 0xcc)
                void* rcx_15 = r14[0x1b]
                int32_t rax_16
                bool cond:2_1
                
                if (rcx_15 != 0)
                    cond:2_1 = sub_1426b09a0(rcx_15, *rdi_1) == 2
                    rax_16 = 1
                
                if (rcx_15 == 0 || not(cond:2_1))
                    rax_16 = 0
                
                *(rbx_1 + 0x24) &= 0xfffffffe
                *(rbx_1 + 0x24) |= rax_16
                goto label_142707be6
            
            r12_1 = arg_18
            rdi_1 = &rdi_1[9]
            var_150_1 = rdi_1
        while (rdi_1 != rax_3)
        
        r8_5 = &r14[0x27]
    
    *(r8_5 + 8) = 0
    
    if (*(r8_5 + 0xc) s<= 0xffffffff)
        sub_140775c70(r8_5, 0)
    
    if (var_160_1.d s> 0)
        int64_t* rcx_38 = r14[0x1b]
        
        if (rcx_38 != 0)
            (*(*rcx_38 + 0x7c8))(rcx_38, &var_168)
        
        int64_t rbx_5 = sx.q(var_160_1.d)
        int64_t* rdi_3 = var_168
        var_178 = nullptr
        var_170_1:4.d = 0
        var_170_1.d = rbx_5.d
        
        if (rbx_5.d != 0)
            sub_1405c4a00(&var_178, rbx_5.d, 0)
            memcpy(var_178, rdi_3, (rbx_5 << 3).d)
        
        sub_1405a9f90(&r14[0x2c], &var_178)
        int64_t* rcx_42 = var_178
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
    
    result = sx.q(result_1)
    int64_t* rbx_6 = var_158_1
    void* rcx_43 = &var_158_1[result]
    uint64_t rdi_7 = (rcx_43 - var_158_1 + 7) u>> 3
    
    if (var_158_1 u> rcx_43)
        rdi_7 = 0
    
    if (rdi_7 != 0)
        do
            result = sub_1426fa6e0(r14, *rbx_6)
            rsi_1 += 1
            rbx_6 = &rbx_6[1]
        while (rsi_1 != rdi_7)
    
    if (var_158_1 != 0)
        result = sub_140a74f90(var_158_1)
    
    int64_t* rcx_46 = var_168
    
    if (rcx_46 != 0)
        return sub_140a74f90(rcx_46)

return result
