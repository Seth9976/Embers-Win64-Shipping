// 函数: sub_141d3e0e0
// 地址: 0x141d3e0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
uint64_t result_2 = *(arg1 + 0x5c8)
void* r12 = arg2
uint64_t result = zx.q(*(arg1 + 0x1d8))
uint64_t result_1
uint64_t result_13
int32_t* var_190
int64_t var_168
int64_t var_160
uint64_t result_3
uint64_t result_10
int32_t* var_138
uint64_t result_4
uint64_t result_11
int32_t* var_108
uint64_t result_5
uint64_t result_12
int32_t* var_d8
int128_t* var_a8
void var_98
int64_t* var_48

if (result.d != 0)
    int32_t rcx = (*(arg1 + 8)).d
    int32_t i = (result - 1).d
    int64_t* var_1b8 = nullptr
    int64_t* r15_1 = nullptr
    int32_t var_1b0_1 = 0
    result_1 = 0
    int32_t var_1d0_1 = 0
    result_13 = 0
    int32_t var_1c0_1 = 0
    int32_t i_1 = i
    
    if (i s>= 0)
        void* rdx = arg1 + 0x1d0
        int64_t rcx_2 = sx.q(i) * 0x60
        int64_t var_198_1 = rcx_2
        
        do
            char rbx_1 = 0
            int64_t* r14_2 = *rdx + rcx_2
            
            if (r14_2[3].d != *(r14_2 + 0x44))
                void* rax_5 = r14_2[0xa]
                void* rdx_1 = &r14_2[9]
                
                if (rax_5 != 0)
                    rdx_1 = rax_5
                
                int32_t j_1 = *(rdx_1 + ((zx.q(r14_2[0xb].d - 1) & 1) << 2))
                int32_t j = j_1
                
                if (j_1 != 0xffffffff)
                    int64_t r9_1 = r14_2[2]
                    
                    do
                        int64_t r8_1 = sx.q(j) * 3
                        
                        if (*(r9_1 + (r8_1 << 3)) == 1)
                            if (j != 0xffffffff)
                                void* const rcx_7
                                
                                if (j_1 == 0xffffffff)
                                label_141d3e221:
                                    rcx_7 = nullptr
                                else
                                    while (true)
                                        int64_t rdx_3 = sx.q(j_1) * 3
                                        rcx_7 = r9_1 + (rdx_3 << 3)
                                        
                                        if (*(r9_1 + (rdx_3 << 3)) == 1)
                                            break
                                        
                                        j_1 = *(rcx_7 + 0x10)
                                        
                                        if (j_1 == 0xffffffff)
                                            goto label_141d3e221_1
                                    
                                    if (j_1 == 0xffffffff)
                                    label_141d3e221_1:
                                        rcx_7 = nullptr
                                
                                rbx_1 = (*(*(rcx_7 + 8) + 8)).b
                            
                            break
                        
                        j = *(r9_1 + (r8_1 << 3) + 0x10)
                    while (j != 0xffffffff)
            
            sub_140b58170(&var_168, "DynamicState", 1)
            
            if (*r14_2 != var_168)
                sub_140b58170(&var_160, "InitialLinearVelocity", 1)
                int32_t** r8_10
                
                if (*r14_2 != var_160)
                    void var_b8
                    int64_t rax_38 = *sub_141d3ba20(&var_b8, 3)
                    
                    if (*r14_2 == rax_38)
                        if (*(arg1 + 0xbc) != 0)
                            sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
                        else
                            int64_t* rcx_32 = r14_2[1]
                            
                            if ((*(*rcx_32 + 8))(rcx_32) != 4)
                                sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
                            else
                                int32_t rax_40
                                rax_40.b = *(r12 + 0x18) != 0
                                char var_1e8_3 = rax_40.b
                                sub_141d3c150(arg1, &var_1b8, &result_1, &result_13, rcx, rbx_1)
                                
                                if (var_1b0_1 != 0)
                                    result_5 = result_1
                                    int32_t var_f0_1 = var_1d0_1
                                    result_12 = result_13
                                    int32_t var_e0_1 = var_1c0_1
                                    sub_141d2d270(&var_a8, &result_12, &result_5, &r14_2[2])
                                    uint64_t result_6 = result_2
                                    int32_t* rbx_6 = *(result_6 + 0x1c0)
                                    int32_t rax_47 =
                                        (*(*(result_6 + 0x1b8) + 0x48))(result_6 + 0x1b8)
                                    var_d8 = rbx_6
                                    r8_10 = &var_d8
                                    int32_t var_d0_1 = rax_47
                                    goto label_141d3e654
                                
                                r15_1 = var_1b8
                                sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
                else if (*(arg1 + 0xbc) != 0)
                    sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
                else
                    int64_t* rcx_27 = r14_2[1]
                    
                    if ((*(*rcx_27 + 8))(rcx_27) != 4)
                        sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
                    else
                        int32_t rax_29
                        rax_29.b = *(r12 + 0x18) != 0
                        char var_1e8_2 = rax_29.b
                        sub_141d3c150(arg1, &var_1b8, &result_1, &result_13, rcx, rbx_1)
                        
                        if (var_1b0_1 == 0)
                            r15_1 = var_1b8
                            sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
                        else
                            result_4 = result_1
                            int32_t var_120_1 = var_1d0_1
                            result_11 = result_13
                            int32_t var_110_1 = var_1c0_1
                            sub_141d2d270(&var_a8, &result_11, &result_4, &r14_2[2])
                            uint64_t result_7 = result_2
                            int32_t* rbx_5 = *(result_7 + 0x1d8)
                            int32_t rax_36 = (*(*(result_7 + 0x1d0) + 0x48))(result_7 + 0x1d0)
                            var_108 = rbx_5
                            r8_10 = &var_108
                            int32_t var_100_1 = rax_36
                        label_141d3e654:
                            int64_t* rcx_36 = r14_2[1]
                            (*(*rcx_36 + 0x30))(rcx_36, &var_a8, r8_10)
                            
                            if (var_48 != 0)
                                (**var_48)(var_48, 1)
                            
                            sub_1405ae080(&var_98)
                            r15_1 = var_1b8
                            sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
            else
                int64_t* rcx_9 = r14_2[1]
                
                if ((*(*rcx_9 + 8))(rcx_9) != 2)
                    sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
                else
                    int32_t rax_9
                    rax_9.b = *(r12 + 0x18) != 0
                    char var_1e8_1 = rax_9.b
                    sub_141d3c150(arg1, &var_1b8, &result_1, &result_13, rcx, rbx_1)
                    int64_t rbx_2 = sx.q(var_1b0_1)
                    
                    if (rbx_2.d == 0)
                        r15_1 = var_1b8
                        sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
                    else
                        result_3 = result_1
                        int32_t var_150_1 = var_1d0_1
                        result_10 = result_13
                        int32_t var_140_1 = var_1c0_1
                        sub_141d2d270(&var_a8, &result_10, &result_3, &r14_2[2])
                        int32_t* rdi_1 = nullptr
                        int32_t var_188 = rbx_2.d
                        var_190 = nullptr
                        int32_t rsi_1 = rbx_2.d
                        var_188 = 0
                        
                        if (rbx_2.d s> 0)
                            sub_1405a4cf0(&var_190)
                            rsi_1 = var_188
                            rdi_1 = var_190
                        
                        r15_1 = var_1b8
                        int32_t r11_1 = 0
                        int64_t r10_1 = 0
                        int64_t* r8_4 = r15_1
                        void* rbx_3 = &r15_1[rbx_2]
                        
                        if (r15_1 != rbx_3)
                            do
                                int64_t* rax_15 = *r8_4
                                int64_t* rcx_13 = nullptr
                                int64_t r9_5 = r10_1
                                
                                if (*(rax_15 + 0xc) u>= 1)
                                    rcx_13 = rax_15
                                
                                if (rcx_13 == 0)
                                    rax_15.b = 3
                                else
                                    rax_15 = nullptr
                                    
                                    if (*(rcx_13 + 0xc) u>= 2)
                                        rax_15 = rcx_13
                                    
                                    if (rax_15 == 0)
                                        rax_15.b = 2
                                    else
                                        rax_15 = zx.q(*(sx.q(rax_15[1].d) + *(*rax_15 + 0x398)))
                                
                                r11_1 += 1
                                int32_t rcx_15 = sx.d(rax_15.b)
                                r10_1 += 1
                                
                                if (rcx_15 == 1)
                                    rdi_1[r9_5] = 1
                                else if (rcx_15 == 2)
                                    rdi_1[r9_5] = 2
                                else if (rcx_15 == 3)
                                    rdi_1[r9_5] = 3
                                else
                                    rdi_1[r9_5] = 4
                                
                                r8_4 = &r8_4[1]
                            while (r8_4 != rbx_3)
                        
                        int64_t* rcx_18 = r14_2[1]
                        int32_t* var_c8 = rdi_1
                        int32_t var_c0_1 = rsi_1
                        (*(*rcx_18 + 0x30))(rcx_18, &var_a8, &var_c8)
                        int32_t rax_20
                        int32_t* rbx_4
                        
                        if (var_48[1].b != 0)
                            rbx_4 = var_48[2]
                            rax_20 = var_48[3].d
                        else
                            var_138.o = *var_a8
                            int32_t var_130
                            rax_20 = var_130
                            rbx_4 = var_138
                        
                        void* r14_3 = &rbx_4[sx.q(rax_20) * 2]
                        
                        if (rbx_4 != r14_3)
                            uint64_t result_8 = result_2
                            
                            do
                                void* r8_6 = nullptr
                                void* rcx_19 = r15_1[sx.q(*rbx_4)]
                                
                                if (*(rcx_19 + 0xc) u>= 2)
                                    r8_6 = rcx_19
                                
                                int32_t var_178
                                sub_140865c40(arg1 + 0x218, &var_178, r8_6)
                                int64_t rax_23 = sx.q(var_178)
                                void* const rcx_21
                                
                                if (rax_23.d == 0xffffffff)
                                    rcx_21 = nullptr
                                else
                                    rcx_21 = *(arg1 + 0x218) + rax_23 * 0x18
                                
                                int64_t rdx_11 = sx.q(rbx_4[1])
                                rbx_4 = &rbx_4[2]
                                *(*(result_8 + 0x190) + (sx.q(*(rcx_21 + 8)) << 2)) = var_c8[rdx_11]
                            while (rbx_4 != r14_3)
                            
                            r12 = arg2
                        
                        sub_141d3ecd0(arg1)
                        
                        if (rdi_1 != 0)
                            sub_140a74f90(rdi_1)
                        
                        if (var_48 != 0)
                            (**var_48)(var_48, 1)
                        
                        sub_1405ae080(&var_98)
                        i = i_1
                        sub_141d40ab0(arg1 + 0x1d0, i, 1, 1)
            
            rdx = arg1 + 0x1d0
            rcx_2 = var_198_1 - 0x60
            i -= 1
            i_1 = i
            var_198_1 = rcx_2
        while (i s>= 0)
        
        uint64_t result_15 = result_13
        
        if (result_15 != 0)
            sub_140a74f90(result_15)
        
        result = result_1
        
        if (result != 0)
            result = sub_140a74f90(result)
        
        if (r15_1 != 0)
            result = sub_140a74f90(r15_1)

if (*(arg1 + 0x1d8) != 0)
    int32_t rax_50 = (*(arg1 + 8)).d
    char var_1e8_4 = 1
    char var_1f0_4 = 2
    result_13 = 0
    int64_t var_1c0_2 = 0
    var_190 = nullptr
    int32_t var_188_1 = 0
    result_1 = 0
    int32_t var_1d0_2 = 0
    result = sub_141d3c150(arg1, &result_13, &var_190, &result_1, rax_50, var_1f0_4)
    int32_t rdi_2 = *(arg1 + 0x1d8)
    int32_t rdi_3 = rdi_2 - 1
    int32_t* r14_4 = var_190
    uint64_t result_9 = result_1
    
    if (rdi_2 - 1 s>= 0)
        void* rcx_45 = arg1 + 0x1d0
        void* var_198_2 = rcx_45
        int64_t rsi_3 = sx.q(rdi_3) * 0x60
        int32_t temp1_1
        
        do
            void* rbx_8 = *rcx_45 + rsi_3
            sub_140b58170(&var_160, "LinearVelocity", 1)
            uint64_t* r8_15
            
            if (*rbx_8 != var_160)
                sub_140b58170(&var_168, "AngularVelocity", 1)
                
                if (*rbx_8 != var_168)
                    sub_140b58170(&result_2, "CollisionGroup", 1)
                    result = result_2
                    
                    if (*rbx_8 == result)
                        int64_t* rcx_55 = *(rbx_8 + 8)
                        
                        if ((*(*rcx_55 + 8))(rcx_55) == 2)
                            var_138 = r14_4
                            int32_t var_130_1 = var_188_1
                            result_10 = result_9
                            int32_t var_140_2 = var_1d0_2
                            sub_141d2d270(&var_a8, &result_10, &var_138, rbx_8 + 0x10)
                            r8_15 = &result_3
                            result_3 = *(arg2 + 0x338)
                            int32_t var_150_2 = *(arg2 + 0x18)
                            goto label_141d3e8ff
                        
                        result = sub_141d40ab0(var_198_2, rdi_3, 1, 1)
                else
                    int64_t* rcx_51 = *(rbx_8 + 8)
                    
                    if ((*(*rcx_51 + 8))(rcx_51) == 4)
                        var_108 = r14_4
                        int32_t var_100_2 = var_188_1
                        result_11 = result_9
                        int32_t var_110_2 = var_1d0_2
                        sub_141d2d270(&var_a8, &result_11, &var_108, rbx_8 + 0x10)
                        r8_15 = &result_4
                        result_4 = *(arg2 + 0x1d0)
                        int32_t var_120_2 = *(arg2 + 0x18)
                        goto label_141d3e8ff
                    
                    result = sub_141d40ab0(var_198_2, rdi_3, 1, 1)
            else
                int64_t* rcx_47 = *(rbx_8 + 8)
                
                if ((*(*rcx_47 + 8))(rcx_47) != 4)
                    result = sub_141d40ab0(var_198_2, rdi_3, 1, 1)
                else
                    var_d8 = r14_4
                    int32_t var_d0_2 = var_188_1
                    result_12 = result_9
                    int32_t var_e0_2 = var_1d0_2
                    sub_141d2d270(&var_a8, &result_12, &var_d8, rbx_8 + 0x10)
                    r8_15 = &result_5
                    result_5 = *(arg2 + 0x1b8)
                    int32_t var_f0_2 = *(arg2 + 0x18)
                label_141d3e8ff:
                    int64_t* rcx_58 = *(rbx_8 + 8)
                    (*(*rcx_58 + 0x30))(rcx_58, &var_a8, r8_15)
                    
                    if (var_48 != 0)
                        (**var_48)(var_48, 1)
                    
                    sub_1405ae080(&var_98)
                    result = sub_141d40ab0(var_198_2, rdi_3, 1, 1)
            rcx_45 = var_198_2
            rsi_3 -= 0x60
            temp1_1 = rdi_3
            rdi_3 -= 1
        while (temp1_1 - 1 s>= 0)
    
    if (result_9 != 0)
        result = sub_140a74f90(result_9)
    
    if (r14_4 != 0)
        result = sub_140a74f90(r14_4)
    
    uint64_t result_14 = result_13
    
    if (result_14 != 0)
        result = sub_140a74f90(result_14)

__security_check_cookie(rax_1 ^ &var_218)
return result
