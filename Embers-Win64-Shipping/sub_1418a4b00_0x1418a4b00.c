// 函数: sub_1418a4b00
// 地址: 0x1418a4b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
uint64_t var_50 = __security_cookie ^ &var_238
int64_t* r13 = *(arg1 + 0x1d0)
int128_t* r12 = arg2
void* rbx_2 = &r13[sx.q(*(arg1 + 0x1d8)) * 4]
uint64_t result

if (r13 == rbx_2)
label_1418a4b71:
    result.b = 0
else
    while (true)
        int64_t* rcx = r13[2]
        void var_130
        
        if ((*(*rcx + 0x1d8))(rcx, r12, &var_130).b != 0)
            break
        
        r13 = &r13[4]
        
        if (r13 == rbx_2)
            goto label_1418a4b71_1
    
    int64_t* r14_1 = r13[2]
    
    if (r14_1 == 0)
    label_1418a4b71_1:
        result.b = 0
    else
        int64_t var_180
        sub_140a98020(&var_180)
        int64_t* rcx_4 = *(arg1 + 0x88)
        uint64_t rdi_1 = 0
        int64_t var_170_1 = 0
        (*(*rcx_4 + 0x10))(rcx_4, r12)
        int64_t var_1a8 = 0
        int64_t var_78
        __builtin_memset(&var_78, 0, 0x14)
        int64_t* rbx_3 = nullptr
        int64_t rax_3 = *r14_1
        int64_t* var_1c0 = nullptr
        uint64_t var_1f8 = 0
        int64_t var_1f0_1 = 0
        int64_t var_1b8_1 = 0
        char r15_1 = 0
        
        if ((*(rax_3 + 0x1e0))(r14_1, r12, &var_78) != 0)
            r15_1 = 2
        
        char var_1cc_1 = r15_1
        
        if ((*(*r14_1 + 0x1d8))(r14_1, r12, &var_1a8) != 0)
            r15_1 |= 1
            var_1cc_1 = r15_1
        
        var_180 = _Query_perf_frequency()
        bool var_218 = r15_1 == 0
        
        if (r15_1 != 0)
            int16_t** var_1a0
            (*(*r14_1 + 0x228))(r14_1, &var_1a0, r12)
            void* rax_10 = (*(*r14_1 + 0x1e8))(r14_1, r12)
            int32_t i_2
            int32_t i_1 = i_2
            
            if (rax_10 == 0 || i_1 s<= 0)
                var_218 = true
            else
                var_218 = false
                void var_190
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_190)
                int32_t rcx_10 = 0
                char* var_208 = nullptr
                char* r15_2 = nullptr
                int32_t var_214_1 = 0
                int64_t var_200_1 = 0
                int32_t var_1d0_1 = 0
                
                if (i_2 s> 0)
                    int64_t r14_2 = 0
                    int128_t zmm6 = 0x3f000000
                    int64_t var_1c8_1 = 0
                    
                    while (true)
                        if (rbx_3.b == 0)
                            bool z_1
                            
                            if (0 == *(arg1 + 0x94))
                                *(arg1 + 0x94) = 0
                                z_1 = true
                            else
                                *(arg1 + 0x94)
                                z_1 = false
                            
                            if (not(z_1))
                                break
                            
                            int16_t** r12_1 = var_1a0
                            int64_t rbx_4 = sx.q(var_200_1.d)
                            int32_t rax_13 = *(r12_1 + r14_2 + 0x2c) + *(r12_1 + r14_2 + 0x28)
                            int32_t r14_3 = 0x100000
                            
                            if (rcx_10 u>= rax_13)
                                rax_13 = rcx_10
                            
                            var_214_1 = rax_13
                            
                            if (rax_13 u>= 0x100000)
                                r14_3 = rax_13
                            
                            if (r14_3 s> rbx_4.d)
                                int32_t r14_4 = r14_3 - rbx_4.d
                                int32_t rax_14 = rbx_4.d + r14_4
                                var_200_1.d = rax_14
                                
                                if (rax_14 s> var_200_1:4.d)
                                    sub_1405daba0(&var_208)
                                
                                memset(&var_208[rbx_4], 0, sx.q(r14_4))
                            else if (r14_3 s< rbx_4.d)
                                int32_t r15_3 = rbx_4.d
                                int32_t r15_4 = r15_3 - r14_3
                                
                                if (r15_3 != r14_3)
                                    int32_t rax_16 = rbx_4.d - r15_4
                                    
                                    if (rax_16 != r14_3)
                                        memmove(&var_208[sx.q(r14_3)], 
                                            &var_208[sx.q(r15_4 + r14_3)], rax_16 - r14_3)
                                        rbx_4 = zx.q(var_200_1.d)
                                    
                                    var_200_1.d = rbx_4.d - r15_4
                                    sub_1405dac10(&var_208)
                            
                            char* rax_19 = var_208
                            int32_t r14_5 = r13[1].d
                            int32_t rax_21 = *(r12_1 + var_1c8_1 + 8)
                            int32_t rbx_6 = rax_21 - 1
                            
                            if (rax_21 == 0)
                                rbx_6 = 0
                            
                            int32_t rax_23
                            
                            if (r14_5 == 0)
                                rax_23 = r14_5 + 2
                            
                            if (r14_5 != 0 || rbx_6 == 0xffffffff)
                                rax_23 = 1
                            
                            int64_t r15_5 = *r13
                            int32_t rcx_17 = rax_23 + rbx_6
                            int16_t* var_1e0 = nullptr
                            
                            if (r14_5 != 0 || rcx_17 != 0)
                                sub_1405a4c70(&var_1e0, r14_5 + rcx_17, 0)
                                memcpy(var_1e0, r15_5, r14_5 * 2)
                            else
                                int32_t var_1d4_1 = 0
                            
                            int64_t r14_6 = var_1c8_1
                            sub_140a2cf70(&var_1e0, *(r12_1 + r14_6), rbx_6)
                            rbx_3 = var_1c0
                            int64_t rax_33
                            int32_t r14_7
                            
                            if (rbx_3 == 0)
                                r14_7 = var_1f0_1:4.d
                            label_1418a4eb9:
                                int64_t* rcx_25 = *(arg1 + 0x68)
                                int16_t* const r8_10 = &data_142d40450
                                
                                if (r14_5 != 0)
                                    r8_10 = var_1e0
                                
                                int64_t* var_158
                                int64_t** rax_28 = (*(*rcx_25 + 0x48))(rcx_25, &var_158, r8_10, 0)
                                
                                if (&var_1c0 != rax_28)
                                    int64_t* rcx_26 = rbx_3
                                    rbx_3 = *rax_28
                                    var_1c0 = rbx_3
                                    *rax_28 = nullptr
                                    
                                    if (rcx_26 != 0)
                                        (**rcx_26)(rcx_26, 1)
                                
                                int64_t* rcx_27 = var_158
                                
                                if (rcx_27 != 0)
                                    (**rcx_27)(rcx_27, 1)
                                
                                bool rax_31 = false
                                
                                if (rbx_3 == 0)
                                    rax_31 = true
                                
                                var_218 = rax_31
                                
                                if (rbx_3 == 0)
                                    r14_6 = var_1c8_1
                                    rax_33 = var_1b8_1
                                else
                                    int16_t* r12_2 = var_1e0
                                    var_1f0_1.d = r14_5
                                    
                                    if (r14_5 != 0 || r14_7 != 0)
                                        sub_1405a4c70(&var_1f8, r14_5, r14_7)
                                        memcpy(var_1f8, r12_2, r14_5 * 2)
                                    else
                                        var_1f0_1:4.d = 0
                                    
                                    rax_33 = (*(*rbx_3 + 0x28))(rbx_3)
                                    r14_6 = var_1c8_1
                                    var_1b8_1 = rax_33
                            else
                                int16_t* const rdx_12 = &data_142d40450
                                int16_t* const rcx_21 = &data_142d40450
                                
                                if (r14_5 != 0)
                                    rdx_12 = var_1e0
                                
                                if (var_1f0_1.d != 0)
                                    rcx_21 = var_1f8
                                
                                if (sub_140a54510(rcx_21, rdx_12) != 0)
                                    (*(*rbx_3 + 0x1b8))(rbx_3)
                                    int64_t* rcx_23 = rbx_3
                                    rbx_3 = nullptr
                                    var_1c0 = nullptr
                                    
                                    if (rcx_23 != 0)
                                        (**rcx_23)(rcx_23, 1)
                                    
                                    r14_7 = var_1f0_1:4.d
                                    var_1f0_1.d = 0
                                    
                                    if (r14_7 != 0)
                                        sub_1405947f0(&var_1f8, 0)
                                        r14_7 = var_1f0_1:4.d
                                    
                                    var_1b8_1 = 0
                                    goto label_1418a4eb9
                                
                                rax_33 = var_1b8_1
                            
                            if (var_218 != 0)
                                r15_2 = rax_19
                            else
                                bool rcx_31 = false
                                int64_t r8_15 =
                                    zx.q(*(r12_1 + r14_6 + 0x2c)) + *(r12_1 + r14_6 + 0x10)
                                
                                if (rax_33 s< r8_15)
                                    rcx_31 = true
                                
                                var_218 = rcx_31
                                
                                if (rax_33 s< r8_15)
                                    r15_2 = rax_19
                                else
                                    (*(*rbx_3 + 0x178))(rbx_3, *(r12_1 + r14_6 + 0x10), r8_15)
                                    r15_2 = rax_19
                                    (*(*rbx_3 + 0x150))(rbx_3, 
                                        &r15_2[zx.q(*(r12_1 + r14_6 + 0x28))], 
                                        zx.q(*(r12_1 + r14_6 + 0x2c)))
                                    sub_1418286b0(&var_190, zx.q(*(r12_1 + r14_6 + 0x28)), 
                                        zx.q(*(r12_1 + r14_6 + 0x2c)), 0)
                                    var_170_1 += zx.q(*(r12_1 + r14_6 + 0x2c))
                            
                            if (sub_14183e350(&var_190) == 0)
                                rbx_3.b = 0
                            else if (sub_14183e350(&var_190) != sub_1405948a0(&var_190))
                                rbx_3.b = 0
                            else if (sub_1405948a0(sub_14183e350(&var_190))
                                    != zx.q(*(rax_10 + 0x30)))
                                rbx_3.b = 0
                            else
                                rbx_3.b = 1
                            
                            bool z_2
                            
                            if (0 == *(arg1 + 0x90))
                                *(arg1 + 0x90) = 0
                                z_2 = true
                            else
                                *(arg1 + 0x90)
                                z_2 = false
                            
                            if (not(z_2))
                                bool z_4
                                
                                do
                                    bool z_3
                                    
                                    if (0 == *(arg1 + 0x94))
                                        *(arg1 + 0x94) = 0
                                        z_3 = true
                                    else
                                        *(arg1 + 0x94)
                                        z_3 = false
                                    
                                    if (not(z_3))
                                        break
                                    
                                    zmm6 = sub_140b73230(zmm6)
                                    
                                    if (0 == *(arg1 + 0x90))
                                        *(arg1 + 0x90) = 0
                                        z_4 = true
                                    else
                                        *(arg1 + 0x90)
                                        z_4 = false
                                while (not(z_4))
                            
                            int16_t* rcx_42 = var_1e0
                            
                            if (rcx_42 != 0)
                                sub_140a74f90(rcx_42)
                            
                            r14_2 = r14_6 + 0x30
                            rcx_10 = var_214_1
                            int32_t rax_46 = var_1d0_1 + 1
                            var_1d0_1 = rax_46
                            var_1c8_1 = r14_2
                            
                            if (rax_46 s< i_2)
                                continue
                            else if (rbx_3.b == 0)
                                break
                        
                        var_218 = false
                        break
                
                bool z_5
                
                if (0 == *(arg1 + 0x94))
                    *(arg1 + 0x94) = 0
                    z_5 = true
                else
                    *(arg1 + 0x94)
                    z_5 = false
                
                if (not(z_5))
                    var_218 = true
                    r12 = arg2
                else if (var_218 != 0)
                    r12 = arg2
                else
                    int32_t var_68
                    int32_t r12_3
                    bool cond:6_1
                    
                    if (var_1cc_1 u< 2)
                        r12_3 = var_214_1
                        cond:6_1 = sub_14183e320(r15_2, r12_3) == var_1a8
                    else
                        r12_3 = var_214_1
                        int64_t var_64
                        __builtin_memset(&var_64, 0, 0x14)
                        sub_140b3f690(r15_2, zx.q(r12_3), &var_64)
                        int64_t rcx_48 = var_64
                        uint64_t rcx_49 = rcx_48 - var_78
                        
                        if (rcx_48 == var_78)
                            int64_t var_70
                            int64_t var_5c
                            rcx_49 = var_5c - var_70
                            int32_t var_54
                            
                            if (var_5c == var_70)
                                rcx_49 = zx.q(var_54) - zx.q(var_68)
                        
                        cond:6_1 = rcx_49 == 0
                    
                    uint64_t rax_50
                    rax_50.b = cond:6_1
                    
                    if (rax_50.b == 0)
                        var_218 = true
                        r12 = arg2
                    else if (var_218 != 0)
                        r12 = arg2
                    else
                        void*** rax_51 = sub_141830ce0(r12_3)
                        void** r9_1 = *rax_51
                        void* var_210
                        int64_t var_140
                        r9_1[1](rax_51, &var_140, &var_210, r9_1)
                        void** var_128
                        memset(&var_128, 0, 0x90)
                        sub_140b4c2a0(&var_128)
                        int64_t var_98_1 = 0
                        var_128 = &data_142d6b230
                        int64_t* var_90_1 = &var_208
                        int64_t var_88_1 = 0x7fffffffffffffff
                        sub_140b55290(&var_128, 1)
                        var_128[0x1b](&var_128, 0)
                        int64_t r15_7 = var_140
                        uint64_t rbx_7 = zx.q(r12_3)
                        char var_ff
                        
                        if (r12_3 != 0 && (var_ff & 1) == 0)
                            if (var_98_1 + rbx_7 s> var_128[5](&var_128))
                                char var_ff_1 = var_ff | 1
                            else
                                memcpy(r15_7, sx.q(var_98_1.d) + *var_90_1, rbx_7.d)
                                int64_t var_98_2 = var_98_1 + rbx_7
                        
                        *(var_210 + 8) = *arg2
                        *(var_210 + 0x20) = 0
                        *(var_210 + 0x18) = r12_3
                        *(var_210 + 0x1c) = r12_3
                        *(var_210 + 0x21) = var_1cc_1
                        *(var_210 + 0x28) = var_1a8
                        void* rcx_62 = var_210
                        *(rcx_62 + 0x30) = var_78.o
                        *(rcx_62 + 0x40) = var_68
                        (*rax_51)[3](rax_51)
                        r12 = arg2
                        void var_168
                        sub_140acafe0(arg1 + 0x1e0, &var_168, r12, nullptr)
                        int64_t* rcx_65 = *(arg1 + 0x70)
                        void*** var_138 = rax_51
                        (*(*rcx_65 + 8))(rcx_65, r12, &var_138)
                        sub_140b4cb40(&var_128)
                
                rbx_3 = var_1c0
                
                if (rbx_3 != 0)
                    (*(*rbx_3 + 0x1b8))(rbx_3)
                    int64_t* rcx_44 = rbx_3
                    rbx_3 = nullptr
                    
                    if (rcx_44 != 0)
                        (**rcx_44)(rcx_44, 1)
                
                char* rcx_45 = var_208
                
                if (rcx_45 != 0)
                    sub_140a74f90(rcx_45)
                
                sub_1418221b0(&var_190)
                rdi_1 = var_1f8
                i_1 = i_2
            
            int16_t** r14_9 = var_1a0
            
            if (i_1 != 0)
                int32_t i
                
                do
                    int16_t* rcx_67 = *r14_9
                    
                    if (rcx_67 != 0)
                        sub_140a74f90(rcx_67)
                    
                    r14_9 = &r14_9[6]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                r14_9 = var_1a0
            
            if (r14_9 != 0)
                sub_140a74f90(r14_9)
        
        int64_t rax_65 = _Query_perf_frequency()
        int64_t* rcx_69 = *(arg1 + 0x88)
        int64_t var_178_1 = rax_65
        (*(*rcx_69 + 0x18))(rcx_69, r12, &var_218, &var_180)
        void* rsi
        
        if (var_218 != 0)
            void var_164
            sub_140acafe0(arg1 + 0xe0, &var_164, r12, nullptr)
            void var_160
            sub_140acafe0(arg1 + 0x130, &var_160, r12, nullptr)
            rsi.b = 0
        else
            rsi.b = 1
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        if (rbx_3 != 0)
            int64_t r8_28 = *rbx_3
            (*r8_28)(rbx_3, 1, r8_28)
        
        result = zx.q(rsi.b)

__security_check_cookie(var_50 ^ &var_238)
return result
