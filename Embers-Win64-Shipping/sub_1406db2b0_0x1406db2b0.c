// 函数: sub_1406db2b0
// 地址: 0x1406db2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
char r12 = arg2
int64_t var_140 = 0
int64_t var_138 = 0
int16_t* var_190 = nullptr
int32_t var_188 = 0
sub_1405947f0(&var_190, 5)
int32_t rax_2 = var_188 + 5

if (rax_2 s> 0)
    sub_140594770(&var_190)

int16_t* r14 = var_190
sub_1405a7220(r14, 5, "    ", 5, 0x3f)
int32_t var_108
sub_140ae16d0(arg4, &var_108, 1)
int32_t rsi = 1
int32_t* var_1c8
int32_t* var_1a0

if (r12 != 0)
    var_1c8 = nullptr
    int32_t var_1c0_1 = 0
    sub_1405947f0(&var_1c8, 3)
    int32_t rbx_1 = var_1c0_1 + 3
    
    if (rbx_1 s> 0)
        sub_140594770(&var_1c8)
    
    int32_t* rdi_1 = var_1c8
    sub_1405a7220(rdi_1, 3, &data_14370204c, 3, 0x3f)
    int64_t* r8_1 = *arg1
    int16_t* const r8_2
    
    if (r8_1[1].d == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = *r8_1
    
    sub_140a2e390(&var_1a0, u"Search string: %s", r8_2)
    int64_t var_198
    int32_t rcx_8 = var_198.d
    int32_t* rsi_1
    
    if (rcx_8 s> 1)
        int32_t rbx_2
        
        if (rbx_1 == 0)
            rbx_2 = 0
        else
            rbx_2 = rbx_1 - 1
        
        int32_t rdx_3
        
        if (rcx_8 == 0)
            rdx_3 = 1
        
        if (rcx_8 != 0 || rbx_2 == 0)
            rdx_3 = 0
        
        var_1c8 = var_1a0
        int32_t rdx_5 = rdx_3 + rcx_8 + rbx_2
        int32_t rax_4 = var_198:4.d
        var_1a0 = nullptr
        var_1c0_1 = rcx_8
        var_198 = 0
        
        if (rdx_5 s> rax_4)
            sub_1405947f0(&var_1c8, rdx_5)
        
        sub_140a20ba0(&var_1c8, rdi_1, rbx_2)
        rsi_1 = var_1c8
        rbx_1 = rax_4
        var_1c8 = nullptr
        int64_t var_1c0_2 = 0
    else
        rsi_1 = rdi_1
        rdi_1 = nullptr
    
    int32_t r8_4 = rbx_1 - 1
    
    if (rbx_1 == 0)
        r8_4 = 0
    
    sub_140a20ba0(&var_140, rsi_1, r8_4)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int32_t* rcx_13 = var_1a0
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    var_1c8 = nullptr
    int32_t var_1c0_3 = 0
    sub_1405947f0(&var_1c8, 3)
    int32_t rbx_3 = var_1c0_3 + 3
    
    if (rbx_3 s> 0)
        sub_140594770(&var_1c8)
    
    int32_t* rdi_2 = var_1c8
    sub_1405a7220(rdi_2, 3, &data_14370204c, 3, 0x3f)
    void* rax_5 = *arg1
    int16_t* const r8_5
    
    if (*(rax_5 + 0x18) == 0)
        r8_5 = &data_142d40450
    else
        r8_5 = *(rax_5 + 0x10)
    
    sub_140a2e390(&var_1a0, u"Pattern: %s", r8_5)
    int32_t rcx_19 = var_198.d
    int32_t* rsi_2
    
    if (rcx_19 s> 1)
        int32_t rbx_4
        
        if (rbx_3 == 0)
            rbx_4 = 0
        else
            rbx_4 = rbx_3 - 1
        
        int32_t rdx_9
        
        if (rcx_19 == 0)
            rdx_9 = rcx_19 + 1
        
        if (rcx_19 != 0 || rbx_4 == 0)
            rdx_9 = 0
        
        var_1c8 = var_1a0
        int32_t rdx_11 = rdx_9 + rcx_19 + rbx_4
        int32_t rax_7 = var_198:4.d
        var_1a0 = nullptr
        var_1c0_3 = rcx_19
        int64_t var_198_1 = 0
        
        if (rdx_11 s> rax_7)
            sub_1405947f0(&var_1c8, rdx_11)
        
        sub_140a20ba0(&var_1c8, rdi_2, rbx_4)
        rsi_2 = var_1c8
        rbx_3 = rax_7
        var_1c8 = nullptr
        int64_t var_1c0_4 = 0
    else
        rsi_2 = rdi_2
        rdi_2 = nullptr
    
    int32_t r8_7 = rbx_3 - 1
    
    if (rbx_3 == 0)
        r8_7 = 0
    
    sub_140a20ba0(&var_140, rsi_2, r8_7)
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    int32_t* rcx_24 = var_1a0
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
    
    rsi = 1

int64_t* rbx_5 = arg1
int32_t var_170 = 0
void* r15_1 = *arg1
int32_t r13 = 0
void* var_e0 = r15_1
void* rax_10 = sx.q(rbx_5[1].d) * 0x70 + r15_1
int16_t var_1e8

if (r15_1 != rax_10)
    while (true)
        int64_t var_b8
        sub_140596d10(&var_b8, r15_1)
        int64_t var_a8
        sub_140596d10(&var_a8, r15_1 + 0x10)
        int32_t* var_98 = nullptr
        int32_t var_90_1 = 0
        int128_t var_88
        __builtin_memset(&var_88, 0, 0x1c)
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        void* var_58_1 = nullptr
        int32_t var_50_1 = 0
        sub_1406da2c0(&var_98, r15_1 + 0x20)
        var_1a0 = nullptr
        int32_t var_198_2 = 0
        sub_1406d9d60(&var_98, &var_1a0)
        int64_t r14_1 = sx.q(var_198_2)
        int32_t* var_1b0
        int32_t* var_180
        int32_t var_178
        int32_t var_174
        int64_t var_78
        
        if (r14_1.d != 0)
            if (r12 != 0)
                int64_t var_160 = 0
                int32_t var_158_1 = 0
                sub_1405947f0(&var_160, 2)
                int32_t rbx_6 = var_158_1 + 2
                
                if (rbx_6 s> 0)
                    sub_140594770(&var_160)
                
                int64_t rdi_3 = var_160
                sub_1405a7220(rdi_3, 2, &data_14370209c, 2, 0x3f)
                int64_t var_100
                sub_140a2e390(&var_100, u"Group %d", zx.q(r13))
                int32_t var_f8
                int64_t rsi_3
                
                if (var_f8 s> 1)
                    int32_t rbx_7
                    
                    if (rbx_6 == 0)
                        rbx_7 = 0
                    else
                        rbx_7 = rbx_6 - 1
                    
                    int32_t rdx_19
                    
                    if (var_f8 == 0)
                        rdx_19 = 1
                    
                    if (var_f8 != 0 || rbx_7 == 0)
                        rdx_19 = 0
                    
                    int64_t var_128 = var_100
                    int32_t rdx_21 = rdx_19 + rbx_7 + var_f8
                    var_100 = 0
                    int32_t var_120_1 = var_f8
                    int32_t var_f4
                    int32_t var_11c_1 = var_f4
                    var_f8.q = 0
                    
                    if (rdx_21 s> var_f4)
                        sub_1405947f0(&var_128, rdx_21)
                    
                    sub_140a20ba0(&var_128, rdi_3, rbx_7)
                    rsi_3 = var_128
                    rbx_6 = var_120_1
                    var_128 = 0
                    var_120_1.q = 0
                else
                    rsi_3 = rdi_3
                    rdi_3 = 0
                    int64_t var_158_2 = 0
                
                int32_t r8_10 = rbx_6 - 1
                
                if (rbx_6 == 0)
                    r8_10 = 0
                
                sub_140a20ba0(&var_140, rsi_3, r8_10)
                
                if (rsi_3 != 0)
                    sub_140a74f90(rsi_3)
                
                int64_t rcx_46 = var_100
                
                if (rcx_46 != 0)
                    sub_140a74f90(rcx_46)
                
                if (rdi_3 != 0)
                    sub_140a74f90(rdi_3)
            
            int32_t* rcx_75 = var_1a0
            int32_t* r13_1 = rcx_75
            void* r14_2 = &rcx_75[r14_1]
            void* var_130_1 = r14_2
            
            if (rcx_75 != r14_2)
                do
                    int64_t rdi_4 = sx.q(*r13_1)
                    int32_t rax_17
                    
                    if (var_90_1 != var_64_1)
                        void var_60
                        void* rax_16 = &var_60
                        
                        if (var_58_1 != 0)
                            rax_16 = var_58_1
                        
                        rax_17 = *(rax_16 + ((sx.q(var_50_1 - 1) & rdi_4) << 2))
                    
                    void* rdx_25
                    
                    if (var_90_1 == var_64_1 || rax_17 == 0xffffffff)
                    label_1406db90b:
                        rdx_25 = nullptr
                    else
                        while (true)
                            int32_t* rax_18 = var_98
                            
                            if (rax_18[sx.q(rax_17) * 8] == rdi_4.d)
                                rdx_25 = &var_98[sx.q(rax_17) * 8]
                                break
                            
                            rax_17 = rax_18[sx.q(rax_17) * 8 + 6]
                            
                            if (rax_17 == 0xffffffff)
                                goto label_1406db90b
                    
                    uint64_t var_d8 = 0
                    void* rax_19 = rdx_25 + 8
                    int16_t* r12_1 = nullptr
                    
                    if (rdx_25 == 0)
                        rax_19 = nullptr
                    
                    int32_t rsi_4 = *(rax_19 + 8)
                    int64_t rbx_8 = *rax_19
                    int16_t* r15_2
                    
                    if (rsi_4 != 0)
                        sub_1405a4c70(&var_d8, rsi_4, 0)
                        r12_1 = var_d8
                        memcpy(r12_1, rbx_8, rsi_4 * 2)
                        r15_2 = r12_1
                    else
                        int32_t var_cc_1 = 0
                        r15_2 = nullptr
                    
                    if (rsi_4 s> 1 && arg2 != 0)
                        int32_t* rcx_72
                        int32_t* r14_3
                        
                        if (rdi_4.d != 0)
                            var_1c8 = nullptr
                            int32_t var_1c0_5 = 0
                            sub_1405947f0(&var_1c8, 2)
                            int32_t rbx_11 = var_1c0_5 + 2
                            
                            if (rbx_11 s> 0)
                                sub_140594770(&var_1c8)
                            
                            r14_3 = var_1c8
                            sub_1405a7220(r14_3, 2, &data_14370209c, 2, 0x3f)
                            int16_t* const rax_22 = &data_142d40450
                            int16_t* r8_16 = &data_142d40450
                            
                            if (rsi_4 != 0)
                                rax_22 = r15_2
                            
                            var_1e8.q = rax_22
                            
                            if (rax_2 != 0)
                                r8_16 = var_190
                            
                            sub_140a2e390(&var_180, u"%s[%d] %s", r8_16)
                            int32_t* rdi_6
                            
                            if (var_178 s> 1)
                                int32_t rbx_12
                                
                                if (rbx_11 == 0)
                                    rbx_12 = 0
                                else
                                    rbx_12 = rbx_11 - 1
                                
                                int32_t rcx_67
                                
                                if (var_178 == 0)
                                    rcx_67 = var_178 + 1
                                
                                if (var_178 != 0 || rbx_12 == 0)
                                    rcx_67 = 0
                                
                                int32_t var_1a8 = var_178
                                int32_t rdx_38 = var_178 + rcx_67 + rbx_12
                                var_1b0 = var_180
                                var_180 = nullptr
                                var_178.q = 0
                                
                                if (rdx_38 s> var_174)
                                    sub_1405947f0(&var_1b0, rdx_38)
                                
                                sub_140a20ba0(&var_1b0, r14_3, rbx_12)
                                rdi_6 = var_1b0
                                rbx_11 = var_174
                                var_1b0 = nullptr
                                var_1a8 = 0
                            else
                                rdi_6 = r14_3
                                r14_3 = nullptr
                                int64_t var_1c0_6 = 0
                            
                            int32_t r8_18 = rbx_11 - 1
                            
                            if (rbx_11 == 0)
                                r8_18 = 0
                            
                            sub_140a20ba0(&var_140, rdi_6, r8_18)
                            
                            if (rdi_6 != 0)
                                sub_140a74f90(rdi_6)
                            
                            rcx_72 = var_180
                        else
                            int32_t* var_150 = nullptr
                            int32_t var_148_1 = 0
                            sub_1405947f0(&var_150, 2)
                            int32_t rbx_9 = var_148_1 + 2
                            
                            if (rbx_9 s> 0)
                                sub_140594770(&var_150)
                            
                            r14_3 = var_150
                            sub_1405a7220(r14_3, 2, &data_14370209c, 2, 0x3f)
                            int16_t* const r8_13 = &data_142d40450
                            
                            if (rax_2 != 0)
                                r8_13 = var_190
                            
                            int32_t* var_f0
                            sub_140a2e390(&var_f0, u"%s[Full Match] %s", r8_13)
                            int32_t var_e8
                            int32_t* rdi_5
                            
                            if (var_e8 s> 1)
                                int32_t rbx_10
                                
                                if (rbx_9 == 0)
                                    rbx_10 = 0
                                else
                                    rbx_10 = rbx_9 - 1
                                
                                int32_t rcx_58
                                
                                if (var_e8 == 0)
                                    rcx_58 = var_e8 + 1
                                
                                if (var_e8 != 0 || rbx_10 == 0)
                                    rcx_58 = 0
                                
                                int32_t var_110_1 = var_e8
                                int32_t rdx_32 = var_e8 + rcx_58 + rbx_10
                                int32_t* var_118 = var_f0
                                var_f0 = nullptr
                                int32_t var_e4
                                int32_t var_10c_1 = var_e4
                                var_e8.q = 0
                                
                                if (rdx_32 s> var_e4)
                                    sub_1405947f0(&var_118, rdx_32)
                                
                                sub_140a20ba0(&var_118, r14_3, rbx_10)
                                rdi_5 = var_118
                                rbx_9 = var_110_1
                                var_118 = nullptr
                                var_110_1.q = 0
                            else
                                rdi_5 = r14_3
                                r14_3 = nullptr
                                int64_t var_148_2 = 0
                            
                            int32_t r8_15 = rbx_9 - 1
                            
                            if (rbx_9 == 0)
                                r8_15 = 0
                            
                            sub_140a20ba0(&var_140, rdi_5, r8_15)
                            
                            if (rdi_5 != 0)
                                sub_140a74f90(rdi_5)
                            
                            rcx_72 = var_f0
                        
                        if (rcx_72 != 0)
                            sub_140a74f90(rcx_72)
                        
                        if (r14_3 != 0)
                            sub_140a74f90(r14_3)
                        
                        r14_2 = var_130_1
                    
                    if (r12_1 != 0)
                        sub_140a74f90(r12_1)
                    
                    r13_1 = &r13_1[1]
                while (r13_1 != r14_2)
                
                rcx_75 = var_1a0
                r15_1 = var_e0
                r12 = arg2
            
            r13 = var_170 + 1
            var_170 = r13
            
            if (rcx_75 != 0)
                sub_140a74f90(rcx_75)
            
            int32_t var_50_3 = 0
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
            
            sub_14062ca00(&var_98, 0)
            
            if (var_78 != 0)
                sub_140a74f90(var_78)
            
            int32_t* rcx_79 = var_98
            
            if (rcx_79 != 0)
                sub_140a74f90(rcx_79)
            
            int64_t rcx_80 = var_a8
            
            if (rcx_80 != 0)
                sub_140a74f90(rcx_80)
            
            int64_t rcx_81 = var_b8
            
            if (rcx_81 != 0)
                sub_140a74f90(rcx_81)
            
            rbx_5 = arg1
        else
            if (rbx_5[1].d == 1)
                if (r12 != 0)
                    var_1b0 = nullptr
                    int32_t var_1a8_1 = 0
                    sub_1405947f0(&var_1b0, 2)
                    int32_t rbx_13 = var_1a8_1 + 2
                    
                    if (rbx_13 s> 0)
                        sub_140594770(&var_1b0)
                    
                    int32_t* rdi_7 = var_1b0
                    sub_140a2e390(&var_180, No results.", 
                        sub_1405a7220(rdi_7, 2, &data_14370209c, 2, 0x3f))
                    int32_t* rsi_5
                    
                    if (var_178 s> 1)
                        int32_t rbx_14
                        
                        if (rbx_13 == 0)
                            rbx_14 = 0
                        else
                            rbx_14 = rbx_13 - 1
                        
                        if (var_178 != 0 || rbx_14 == 0)
                            rsi = 0
                        
                        var_1b0 = var_180
                        int32_t rdx_44 = rbx_14 + var_178 + rsi
                        var_180 = nullptr
                        var_1a8_1 = var_178
                        var_178.q = 0
                        
                        if (rdx_44 s> var_174)
                            sub_1405947f0(&var_1b0, rdx_44)
                        
                        sub_140a20ba0(&var_1b0, rdi_7, rbx_14)
                        rsi_5 = var_1b0
                        rbx_13 = var_174
                        var_1b0 = nullptr
                        int64_t var_1a8_2 = 0
                    else
                        rsi_5 = rdi_7
                        rdi_7 = nullptr
                    
                    int32_t r8_21 = rbx_13 - 1
                    
                    if (rbx_13 == 0)
                        r8_21 = 0
                    
                    sub_140a20ba0(&var_140, rsi_5, r8_21)
                    
                    if (rsi_5 != 0)
                        sub_140a74f90(rsi_5)
                    
                    int32_t* rcx_91 = var_180
                    
                    if (rcx_91 != 0)
                        sub_140a74f90(rcx_91)
                    
                    if (rdi_7 != 0)
                        sub_140a74f90(rdi_7)
                    
                    rbx_5 = arg1
                
                int32_t* rcx_93 = var_1a0
                
                if (rcx_93 != 0)
                    sub_140a74f90(rcx_93)
                
                int32_t var_50_4 = 0
                
                if (var_58_1 != 0)
                    sub_140a74f90(var_58_1)
                
                sub_14062ca00(&var_98, 0)
                
                if (var_78 != 0)
                    sub_140a74f90(var_78)
                
                int32_t* rcx_97 = var_98
                
                if (rcx_97 != 0)
                    sub_140a74f90(rcx_97)
                
                int64_t rcx_98 = var_a8
                
                if (rcx_98 != 0)
                    sub_140a74f90(rcx_98)
                
                int64_t rcx_99 = var_b8
                
                if (rcx_99 != 0)
                    sub_140a74f90(rcx_99)
                
                break
            
            int32_t* rcx_30 = var_1a0
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            int32_t var_50_2 = 0
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
            
            sub_14062ca00(&var_98, 0)
            
            if (var_78 != 0)
                sub_140a74f90(var_78)
            
            int32_t* rcx_34 = var_98
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            int64_t rcx_35 = var_a8
            
            if (rcx_35 != 0)
                sub_140a74f90(rcx_35)
            
            int64_t rcx_36 = var_b8
            
            if (rcx_36 != 0)
                sub_140a74f90(rcx_36)
        r15_1 += 0x70
        var_e0 = r15_1
        
        if (r15_1 == rax_10)
            break
        
        rsi = 1
    
    r14 = var_190

if (r12 != 0)
    int512_t zmm2
    zmm2.o = arg5
    data_143f5b298
    int32_t* var_1d8_1 = &data_14399f658
    char var_1e0_1 = 1
    var_1e8.q = &var_140

if (r14 != 0)
    sub_140a74f90(r14)

int64_t rcx_102 = var_140

if (rcx_102 != 0)
    sub_140a74f90(rcx_102)

int64_t result = sub_1406da1e0(rbx_5)
__security_check_cookie(rax_1 ^ &var_208)
return result
