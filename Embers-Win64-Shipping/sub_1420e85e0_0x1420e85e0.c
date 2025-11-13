// 函数: sub_1420e85e0
// 地址: 0x1420e85e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* rdi = arg2
void* rsi = arg1
int32_t rax_2
int128_t zmm6
rax_2, zmm6 = sub_14243ac50(arg1)
uint64_t result = sub_142437e30(rsi, 0, 1)
int64_t r15 = 0
int32_t rcx_1
rcx_1.b = rax_2 == 3

if ((zx.d(*(result + 0x22d)) u>> 6 & 1) == rcx_1)
    result = zx.q(*(rsi + 0x4dc))
    
    if (result.d s> 0)
        result = zx.q(result.d - 1)
        *(rsi + 0x4dc) = result.d
    else if (result.d != 0xffffffff)
        int64_t* result_1
        sub_1424373a0(rsi, &result_1)
        int32_t result_2
        result = zx.q(result_2)
        
        while (result.d s>= 0)
            int64_t* result_3 = result_1
            
            if (result.d s>= result_3[1].d)
                break
            
            void* rax_4 = sub_140d3c6e0(*result_3 + (sx.q(result.d) << 3))
            
            if (rax_4 != 0 && (*(rax_4 + 0x3d0) & 8) != 0)
                int64_t* result_4 = nullptr
                int32_t i_8 = 0
                int32_t r13_1 = 0
                int64_t* r14_1 = *(rsi + 0x98)
                int64_t r12_1 = sx.q(*(rsi + 0xa0)) << 3
                result_1 = nullptr
                int32_t i_7 = 0
                int32_t var_1dc_1 = 0
                int64_t var_a8 = 0
                uint64_t r12_2 = r12_1 u>> 3
                int64_t var_a0_1 = 0
                int64_t var_88_1 = 0
                
                if (r14_1 u> &r14_1[sx.q(*(rsi + 0xa0))])
                    r12_2 = 0
                
                int32_t var_80_1 = 0
                int32_t var_7c_1 = 0x80
                int64_t var_98 = 0
                int64_t var_90_1 = 0
                int32_t var_78_1 = 0xffffffff
                int32_t var_74_1 = 0
                int64_t var_68_1 = 0
                int32_t var_60_1 = 0
                int32_t var_1fc
                void* i_3
                
                if (r12_2 != 0)
                    do
                        void* i_6 = *r14_1
                        i_3 = i_6
                        
                        if (i_6 != 0)
                            for (int64_t* i = *(i_6 + 0xd0); i != &i[sx.q(*(i_6 + 0xd8))]; 
                                    i = &i[1])
                                void* rbx_1 = *i
                                
                                if (rbx_1 != 0 && (*(rbx_1 + 0x268) & 3) == 0)
                                    int64_t i_9 = sx.q(i_8)
                                    i_8 = (i_9 + 1).d
                                    i_7 = i_8
                                    
                                    if (i_8 s> r13_1)
                                        sub_1405a4d70(&result_1)
                                        r13_1 = var_1dc_1
                                        i_7 = i_8
                                    
                                    result_1[i_9] = i_6
                                    
                                    if (*(rbx_1 + 0x26c) != 3)
                                        sub_141e6db90(&var_a8, &var_1fc, &i_3, nullptr)
                                        i_8 = i_7
                                    
                                    break
                        
                        r14_1 = &r14_1[1]
                        r15 += 1
                    while (r15 != r12_2)
                    
                    rdi = arg2
                    rsi = arg1
                    result_4 = result_1
                
                int64_t* r12_3 = nullptr
                int32_t var_11c_1 = 0x80
                int64_t var_148
                __builtin_memset(&var_148, 0, 0x2c)
                int32_t var_114_1 = 0
                int64_t var_108_1 = 0
                int32_t var_100_1 = 0
                int32_t var_118_1 = 0xffffffff
                int64_t* var_1b8
                sub_1424373a0(rsi, &var_1b8)
                int32_t var_1b0
                int32_t i_1 = var_1b0
                char var_208
                char rsi_1 = var_208
                char r14_2 = var_208
                char r15_1 = var_208
                int32_t var_1f8
                int64_t* var_168
                
                while (i_1 s>= 0)
                    int64_t* rdx_8 = var_1b8
                    
                    if (i_1 s>= rdx_8[1].d)
                        break
                    
                    int64_t* rax_10 = sub_140d3c6e0(*rdx_8 + (sx.q(i_1) << 3))
                    
                    if (rax_10 != 0 && (rax_10[0x7a].b & 8) != 0)
                        int64_t var_1d0 = 0
                        int32_t var_1c8_1 = 0
                        
                        if (rdi == 0)
                            int64_t rax_12 = *rax_10
                            int64_t var_198 = 0
                            int32_t var_190_1 = 0
                            (*(rax_12 + 0x6f8))(rax_10, &var_1d0, &var_198)
                        else
                            int32_t rax_11 = rdi[1].d
                            var_1d0 = *rdi
                            var_1c8_1 = rax_11
                        
                        void* i_5 = zx.q(i_7)
                        int64_t rcx_12 = 0
                        int64_t var_f8
                        __builtin_memset(&var_f8, 0, 0x2c)
                        int32_t var_cc_1 = 0x80
                        int32_t var_c8_1 = 0xffffffff
                        int32_t var_c4_1 = 0
                        int64_t var_b8_1 = 0
                        int32_t var_b0_1 = 0
                        
                        if (i_5.d s> 0)
                            void* result_7 = result_4
                            int64_t* result_6 = result_4
                            void* j_2 = zx.q(i_5.d)
                            i_3 = i_5
                            void* j
                            
                            do
                                void* rdi_1 = *result_7
                                void* var_1c0 = rdi_1
                                int16_t var_204 = 0
                                char var_202_1 = 0
                                sub_140865c40(&var_148, &var_1f8, rdi_1)
                                int64_t rax_13 = sx.q(var_1f8)
                                void* const r8_4
                                
                                if (rax_13.d == 0xffffffff)
                                    r8_4 = nullptr
                                else
                                    r8_4 = var_148 + rax_13 * 0x18
                                
                                char* rcx_14 = r8_4 + 8
                                
                                if (r8_4 == 0)
                                    rcx_14 = nullptr
                                
                                if (rcx_14 == 0)
                                    goto label_1420e89f6
                                
                                if (*rcx_14 == 0 || rcx_14[1] == 0)
                                    var_204 = *rcx_14
                                    var_202_1 = rcx_14[2]
                                label_1420e89f6:
                                    int32_t k = 0
                                    
                                    if (*(rdi_1 + 0xd8) s> 0)
                                        do
                                            void* rbx_2 = *(r12_3 + *(rdi_1 + 0xd0))
                                            
                                            if (rbx_2 != 0 && (*(rbx_2 + 0x268) & 3) == 0)
                                                sub_140865c40(&var_f8, &var_1fc, rbx_2)
                                                int64_t rax_18 = sx.q(var_1fc)
                                                void* const rcx_16
                                                
                                                if (rax_18.d == 0xffffffff)
                                                    rcx_16 = nullptr
                                                else
                                                    rcx_16 = var_f8 + rax_18 * 0x18
                                                
                                                char* rax_20 = rcx_16 + 8
                                                
                                                if (rcx_16 == 0)
                                                    rax_20 = nullptr
                                                
                                                char rcx_17
                                                
                                                if (rax_20 == 0)
                                                    int64_t var_178 = var_1d0
                                                    int32_t var_170_1 = var_1c8_1
                                                    char rax_22
                                                    rax_22, zmm6 = sub_142432b00(rbx_2, &var_178, 
                                                        zx.o(0), nullptr)
                                                    var_208 = rax_22
                                                    void* var_180 = rbx_2
                                                    void** var_158 = &var_180
                                                    char* var_150_1 = &var_208
                                                    void var_188
                                                    sub_1420d73a0(&var_f8, &var_188, &var_158, 
                                                        nullptr)
                                                    rcx_17 = var_208
                                                    rdi_1 = var_1c0
                                                else
                                                    rcx_17 = *rax_20
                                                    var_208 = rcx_17
                                                
                                                if (rcx_17 != 0)
                                                    uint64_t r9_1 = zx.q(*(rbx_2 + 0x26c))
                                                    int32_t rcx_20 = r9_1.d
                                                    
                                                    if (r9_1.d == 0)
                                                        r14_2 = 0
                                                        r15_1 = 0
                                                        rsi_1 = 0
                                                    else if (rcx_20 == 1)
                                                        r15_1 = 1
                                                        r14_2 = 0
                                                        rsi_1 = 1
                                                    else if (rcx_20 == 2)
                                                        r15_1 = 1
                                                        r14_2 = 1
                                                        rsi_1 = 1
                                                    else if (rcx_20 == 3)
                                                        r14_2 = 1
                                                        r15_1 = 0
                                                        rsi_1 = 0
                                                    else if (rcx_20 == 4)
                                                        r15_1 = 0
                                                        rsi_1 = 1
                                                        r14_2 = 0
                                                    else
                                                        sub_140af98a0("Unknown", 0x201, 
                                                            Unsupported usage %i", r9_1)
                                                        sub_140afbb40()
                                                    
                                                    var_204.b |= r15_1
                                                    var_204:1.b |= r14_2
                                                    var_202_1 |= rsi_1
                                                    var_168 = &var_1c0
                                                    int16_t* var_160_1 = &var_204
                                                    void var_184
                                                    sub_1420d7520(&var_148, &var_184, &var_168, 
                                                        nullptr)
                                                    
                                                    if (var_204.b != 0 && var_204:1.b != 0)
                                                        break
                                                    
                                                    rdi_1 = var_1c0
                                            
                                            k += 1
                                            r12_3 = &r12_3[1]
                                        while (k s< *(rdi_1 + 0xd8))
                                        
                                        j_2 = i_3
                                        r12_3 = nullptr
                                
                                result_7 = &result_6[1]
                                j = j_2
                                j_2 -= 1
                                result_6 = result_7
                                i_3 = j_2
                            while (j != 1)
                            rcx_12 = var_b8_1
                            rdi = arg2
                        
                        int32_t var_b0_2 = 0
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                        
                        int64_t var_f0_1
                        bool cond:5_1 = var_f0_1:4.d == 0
                        var_f0_1.d = 0
                        
                        if (not(cond:5_1))
                            sub_1405a5130(&var_f8, 0)
                        
                        int32_t var_c8_2 = 0xffffffff
                        int32_t var_c4_2 = 0
                        int64_t var_e8
                        sub_14059a8e0(&var_e8, 0)
                        int64_t var_d8
                        
                        if (var_d8 != 0)
                            sub_140a74f90(var_d8)
                        
                        int64_t rcx_28 = var_f8
                        
                        if (rcx_28 != 0)
                            sub_140a74f90(rcx_28)
                    
                    result_4 = result_1
                    i_1 = var_1b0 + 1
                    var_1b0 = i_1
                
                void* i_4 = zx.q(i_7)
                
                if (i_4.d s> 0)
                    int128_t var_48_1 = zmm6
                    void* result_8 = result_4
                    zmm6 = 0x3dcccccd
                    int64_t* result_5 = result_4
                    i_3 = i_4
                    void* i_2
                    
                    do
                        int64_t* rbx_3 = *result_8
                        sub_140865c40(&var_148, &var_1fc, rbx_3)
                        int64_t rax_25 = sx.q(var_1fc)
                        void* const rcx_30
                        
                        if (rax_25.d == 0xffffffff)
                            rcx_30 = nullptr
                        else
                            rcx_30 = var_148 + rax_25 * 0x18
                        
                        char* rsi_2 = rcx_30 + 8
                        
                        if (rcx_30 == 0)
                            rsi_2 = nullptr
                        
                        sub_1408296b0(&var_a8, &var_1f8, rbx_3)
                        int64_t rax_27 = sx.q(var_1f8)
                        int64_t rdi_4
                        
                        if (rax_27.d == 0xffffffff)
                            rdi_4 = 0
                        else
                            rdi_4 = (rax_27 << 4) + var_a8
                        
                        char rax_29 = (*(*rbx_3 + 0x268))(rbx_3)
                        int64_t rdx_20 = *rbx_3
                        char rax_30
                        int64_t rdx_21
                        rax_30, rdx_21 = (*(rdx_20 + 0x270))(rbx_3, rdx_20)
                        int32_t r12_4 = rbx_3[0x16].d
                        uint8_t r14_3 = *(rbx_3 + 0xba) u>> 7
                        
                        if (rsi_2 != 0 || rdi_4 != 0)
                            int64_t r8_10 = *rbx_3
                            
                            if (rsi_2 == 0)
                                if ((*(r8_10 + 0x268))(rbx_3) != 0)
                                    int32_t zmm1_1 = *(rbx_3 + 0xe4)
                                    int64_t zmm0_1
                                    zmm0_1.d = (*(arg1 + 0x520)).d f- zmm1_1
                                    
                                    if (zmm0_1.d f> rbx_3[0x1c].d || not(zmm1_1 f>= zmm6.d))
                                        int64_t* rax_35 = sub_1424373a0(arg1, &var_168)
                                        int32_t rcx_40 = rax_35[1].d
                                        
                                        if (rcx_40 s>= 0 && rcx_40 s< *(*rax_35 + 8))
                                            *(rbx_3 + 0xe4) = *(arg1 + 0x520)
                                            (*(*rbx_3 + 0x260))(rbx_3, 0)
                                            char rax_39 = *(rbx_3 + 0xba)
                                            
                                            if ((rax_39 & 8) != 0)
                                                *(rbx_3 + 0xba) = rax_39 & 0xf7
                                                
                                                if (sub_140d23dc0(rbx_3, 0x30) == 0)
                                                    void* rcx_43 = rbx_3[4]
                                                    
                                                    if (rcx_43 != 0)
                                                        zmm6 = sub_14244a940(rcx_43, rbx_3)
                            else
                                rdx_21.b = 1
                                (*(r8_10 + 0x260))(rbx_3, rdx_21, r8_10)
                                char rcx_35
                                
                                if (rsi_2[2] == 0)
                                    rcx_35 = rax_30
                                else
                                    rcx_35 = *rsi_2
                                
                                uint8_t rdx_22 = *(rbx_3 + 0xba)
                                
                                if (rcx_35 != (rdx_22 u>> 3 & 1))
                                    *(rbx_3 + 0xba) = ((rcx_35 << 3 ^ rdx_22) & 8) ^ rdx_22
                                    
                                    if (sub_140d23dc0(rbx_3, 0x30) == 0)
                                        void* rcx_37 = rbx_3[4]
                                        
                                        if (rcx_37 != 0)
                                            zmm6 = sub_14244a940(rcx_37, rbx_3)
                                
                                *(rbx_3 + 0xba) = rsi_2[1] << 7 | (*(rbx_3 + 0xba) & 0x7f)
                            
                            char rax_42 = (*(*rbx_3 + 0x268))(rbx_3)
                            int64_t rdx_26 = *rbx_3
                            char rax_43 = (*(rdx_26 + 0x270))(rbx_3, rdx_26)
                            
                            if (rax_29 != rax_42 || rax_30 != rax_43
                                    || r14_3 != *(rbx_3 + 0xba) u>> 7 || r12_4 != rbx_3[0x16].d)
                                sub_1424373a0(arg1, &var_1b8)
                                int32_t j_1 = var_1b0
                                
                                while (j_1 s>= 0)
                                    int64_t* rdx_28 = var_1b8
                                    
                                    if (j_1 s>= rdx_28[1].d)
                                        break
                                    
                                    int64_t* rax_45 = sub_140d3c6e0(*rdx_28 + (sx.q(j_1) << 3))
                                    
                                    if (rax_45 != 0)
                                        zmm6 = sub_142271ca0(rax_45, rbx_3, rax_42, rax_43, 
                                            *(rbx_3 + 0xba) u>> 7, rbx_3[0x16].d)
                                    
                                    j_1 = var_1b0 + 1
                                    var_1b0 = j_1
                        
                        result_8 = &result_5[1]
                        i_2 = i_3
                        i_3 -= 1
                        result_5 = result_8
                    while (i_2 != 1)
                
                int32_t var_100_2 = 0
                
                if (var_108_1 != 0)
                    sub_140a74f90(var_108_1)
                
                int64_t var_140
                bool cond:1_1 = var_140:4.d == 0
                var_140.d = 0
                
                if (not(cond:1_1))
                    sub_1405a5130(&var_148, 0)
                
                int32_t var_118_2 = 0xffffffff
                int32_t var_114_2 = 0
                int64_t var_138
                sub_14059a8e0(&var_138, 0)
                int64_t var_128
                
                if (var_128 != 0)
                    sub_140a74f90(var_128)
                
                int64_t rcx_56 = var_148
                
                if (rcx_56 != 0)
                    sub_140a74f90(rcx_56)
                
                int32_t var_60_2 = 0
                
                if (var_68_1 != 0)
                    sub_140a74f90(var_68_1)
                
                bool cond:4_1 = var_a0_1:4.d == 0
                var_a0_1.d = 0
                
                if (not(cond:4_1))
                    sub_1405a5410(&var_a8, 0)
                
                int32_t var_78_2 = 0xffffffff
                int32_t var_74_2 = 0
                sub_14059a8e0(&var_98, 0)
                
                if (var_88_1 != 0)
                    sub_140a74f90(var_88_1)
                
                int64_t rcx_61 = var_a8
                
                if (rcx_61 != 0)
                    sub_140a74f90(rcx_61)
                
                result = result_1
                
                if (result != 0)
                    result = sub_140a74f90(result)
                
                break
            
            result = zx.q(result_2 + 1)
            result_2 = result.d

__security_check_cookie(rax_1 ^ &var_238)
return result
