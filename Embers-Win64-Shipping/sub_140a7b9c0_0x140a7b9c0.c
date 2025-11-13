// 函数: sub_140a7b9c0
// 地址: 0x140a7b9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
int64_t* var_68 = arg1
int64_t var_50
sub_140a765b0(&var_50, arg3)
sub_140a6d000(arg1)
int32_t var_128
sub_14062d6e0(&arg1[0x1c], &var_128, arg3)
int64_t rax = sx.q(var_128)
int64_t r13 = 0
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = arg1[0x1c] + rax * 0x28

int64_t* rdx_3 = rcx_3 + 0x10

if (rcx_3 == 0)
    rdx_3 = nullptr

if (rdx_3 != 0)
    sub_140597df0(&var_50, rdx_3)

*result = 0
result[1] = 0
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x2c)
int16_t* var_98 = nullptr
int32_t var_90 = 0

if (sub_140a66280(&var_68, &var_50, &var_c8) != 0)
    int16_t* const r12 = &data_142d40450
    int32_t rbx_1 = 0
    int64_t* var_148 = nullptr
    int32_t var_13c_1 = 0
    int64_t* r14_1 = nullptr
    uint64_t rsi_1 = 0
    int32_t var_140_1 = 0
    int32_t var_a0
    
    if (var_a0 s> 1 || var_90 s<= 1)
        goto label_140a7bc2c
    
    int32_t var_124
    int64_t var_b8
    sub_140926e00(&arg1[0x11], &var_124, &var_b8)
    int64_t rax_3 = sx.q(var_124)
    void* const rcx_7
    
    if (rax_3.d == 0xffffffff)
        rcx_7 = nullptr
    else
        rcx_7 = arg1[0x11] + rax_3 * 0x28
    
    int64_t* rax_5 = rcx_7 + 0x10
    
    if (rcx_7 == 0)
        rax_5 = nullptr
    
    if (rax_5 == 0)
        goto label_140a7bc2c
    
    int32_t* r15_1 = *rax_5
    uint64_t rdi_2 = sx.q(rax_5[1].d) << 2 u>> 2
    
    if (r15_1 u> &r15_1[rax_5[1]])
        rdi_2 = 0
    
    uint64_t arg_20 = rdi_2
    
    if (rdi_2 == 0)
        goto label_140a7bc2c
    
    int64_t* rcx_8 = arg1
    uint64_t rax_8 = rdi_2
    
    do
        int64_t* rdi_5 = (sx.q(*r15_1) << 6) + rcx_8[5]
        
        if (rdi_5[5].d s> 1)
            int16_t* rdx_7
            
            if (rdi_5[7].d == 0)
                rdx_7 = &data_142d40450
            else
                rdx_7 = rdi_5[6]
            
            int16_t* const rcx_9 = &data_142d40450
            
            if (var_90 != 0)
                rcx_9 = var_98
            
            if (sub_140a54510(rcx_9, rdx_7) == 0)
                int64_t rbx_2 = sx.q(rsi_1.d)
                rsi_1 = zx.q((rbx_2 + 1).d)
                int32_t var_140_2 = rsi_1.d
                
                if (rsi_1.d s> var_13c_1)
                    sub_140a88e70(&var_148)
                    rsi_1 = zx.q(var_140_2)
                    r14_1 = var_148
                
                int64_t* rbx_4 = &r14_1[rbx_2 * 8]
                sub_140596d10(rbx_4, rdi_5)
                sub_140596d10(&rbx_4[2], &rdi_5[2])
                sub_140596d10(&rbx_4[4], &rdi_5[4])
                sub_140596d10(&rbx_4[6], &rdi_5[6])
            
            rcx_8 = arg1
            rax_8 = arg_20
        
        r15_1 = &r15_1[1]
        r13 += 1
    while (r13 != rax_8)
    
    r12 = &data_142d40450
    
    if (rsi_1.d == 0)
        rbx_1 = var_13c_1
    label_140a7bc2c:
        rsi_1 = 1
        int32_t var_140_3 = 1
        
        if (rbx_1 s< 1)
            sub_140a88e70(&var_148)
            rsi_1 = zx.q(var_140_3)
            r14_1 = var_148
        
        sub_140596d10(r14_1, &var_c8)
        sub_140596d10(&r14_1[2], &var_b8)
        int64_t var_a8
        sub_140596d10(&r14_1[4], &var_a8)
        sub_140596d10(&r14_1[6], &var_98)
    
    uint32_t rdx_18 = (rsi_1 * 3).d
    int64_t* var_158 = nullptr
    int64_t var_150_1 = 0
    
    if (rdx_18 s> 0)
        sub_140a89b30(&var_158, rdx_18)
    
    void* i = &r14_1[sx.q(rsi_1.d) * 8]
    void* i_1 = i
    
    if (r14_1 != i)
        void* r14_2 = &r14_1[4]
        void* var_88_1 = r14_2
        
        do
            int64_t* var_80
            sub_140a7c350(&var_80, r14_2 - 0x10, r14_2, r14_2 + 0x10)
            int64_t* r15_2 = var_80
            int32_t var_78
            int64_t rsi_2 = sx.q(var_78)
            void* rax_12 = &r15_2[rsi_2 * 2]
            
            if (r15_2 != rax_12)
                int64_t* rdi_6 = arg1
                int64_t* r13_3 = &rdi_6[7]
                
                do
                    int16_t* var_108 = nullptr
                    int32_t var_100_1 = 0
                    uint64_t var_f8
                    __builtin_memset(&var_f8, 0, 0x30)
                    int32_t var_120
                    sub_14062d5f0(r13_3, &var_120, r15_2)
                    int64_t rax_13 = sx.q(var_120)
                    void* const rcx_25
                    
                    if (rax_13.d == 0xffffffff)
                        rcx_25 = nullptr
                    else
                        rcx_25 = (rax_13 << 5) + *r13_3
                    
                    int32_t* rax_14 = rcx_25 + 0x10
                    
                    if (rcx_25 == 0)
                        rax_14 = nullptr
                    
                    uint64_t var_e8
                    uint64_t var_d8
                    
                    if (rax_14 == 0)
                        void* var_118
                        sub_140a73ec0(rdi_6, &var_118, r15_2, 0)
                        void* rbx_8 = var_118
                        int64_t* var_110
                        
                        if (rbx_8 != 0)
                            sub_140597df0(&var_108, rbx_8 + 0x28)
                            sub_140597df0(&var_f8, rbx_8 + 0x68)
                            sub_140597df0(&var_e8, rbx_8 + 0xa8)
                            sub_140597df0(&var_d8, rbx_8 + 0x88)
                            
                            if (var_110 != 0)
                                var_110[1].d -= 1
                                
                                if (var_110[1].d == 1)
                                    (**var_110)(var_110)
                                    int32_t rax_17 = *(var_110 + 0xc)
                                    *(var_110 + 0xc) -= 1
                                    
                                    if (rax_17 == 1)
                                        (*(*var_110 + 8))(var_110, 1)
                            
                            goto label_140a7be51
                        
                        if (var_110 != 0)
                            var_110[1].d -= 1
                            
                            if (var_110[1].d == 1)
                                (**var_110)(var_110)
                                int32_t rax_31 = *(var_110 + 0xc)
                                *(var_110 + 0xc) -= 1
                                
                                if (rax_31 == 1)
                                    (*(*var_110 + 8))(var_110, 1)
                    else
                        int64_t* rbx_7 = (sx.q(*rax_14) << 6) + rdi_6[5]
                        sub_140597df0(&var_108, rbx_7)
                        sub_140597df0(&var_f8, &rbx_7[2])
                        sub_140597df0(&var_e8, &rbx_7[4])
                        sub_140597df0(&var_d8, &rbx_7[6])
                    label_140a7be51:
                        int64_t* rbx_10 = var_158
                        void* rdi_9 = &rbx_10[sx.q(var_150_1.d) * 8]
                        int16_t* rsi_3
                        
                        if (rbx_10 == rdi_9)
                        label_140a7beba:
                            int64_t rbx_13 = sx.q(var_150_1.d)
                            int32_t rax_20 = (rbx_13 + 1).d
                            var_150_1.d = rax_20
                            
                            if (rax_20 s> var_150_1:4.d)
                                sub_140a88e70(&var_158)
                            
                            int64_t* rbx_15 = &var_158[rbx_13 * 8]
                            sub_140596d10(rbx_15, &var_108)
                            sub_140596d10(&rbx_15[2], &var_f8)
                            sub_140596d10(&rbx_15[4], &var_e8)
                            sub_140596d10(&rbx_15[6], &var_d8)
                            rsi_3 = var_108
                        else
                            rsi_3 = var_108
                            
                            while (true)
                                int16_t* const rdx_30 = &data_142d40450
                                
                                if (var_100_1 != 0)
                                    rdx_30 = rsi_3
                                
                                int16_t* const rcx_38
                                
                                if (rbx_10[1].d == 0)
                                    rcx_38 = &data_142d40450
                                else
                                    rcx_38 = *rbx_10
                                
                                if (sub_140a54510(rcx_38, rdx_30) == 0)
                                    break
                                
                                rbx_10 = &rbx_10[8]
                                
                                if (rbx_10 == rdi_9)
                                    goto label_140a7beba
                            
                            if (((rbx_10 - var_158) s>> 6).d == 0xffffffff)
                                goto label_140a7beba
                        
                        uint64_t rbx_16 = var_d8
                        
                        if (rbx_16 != 0)
                            int64_t* rcx_44 = data_143ddb3f0
                            
                            if (rcx_44 == 0)
                                sub_140a750a0()
                                rcx_44 = data_143ddb3f0
                            
                            (*(*rcx_44 + 0x30))(rcx_44, rbx_16)
                        
                        uint64_t rbx_17 = var_e8
                        
                        if (rbx_17 != 0)
                            int64_t* rcx_45 = data_143ddb3f0
                            
                            if (rcx_45 == 0)
                                sub_140a750a0()
                                rcx_45 = data_143ddb3f0
                            
                            (*(*rcx_45 + 0x30))(rcx_45, rbx_17)
                        
                        uint64_t rbx_18 = var_f8
                        
                        if (rbx_18 != 0)
                            int64_t* rcx_46 = data_143ddb3f0
                            
                            if (rcx_46 == 0)
                                sub_140a750a0()
                                rcx_46 = data_143ddb3f0
                            
                            (*(*rcx_46 + 0x30))(rcx_46, rbx_18)
                        
                        if (rsi_3 != 0)
                            int64_t* rcx_47 = data_143ddb3f0
                            
                            if (rcx_47 == 0)
                                sub_140a750a0()
                                rcx_47 = data_143ddb3f0
                            
                            (*(*rcx_47 + 0x30))(rcx_47, rsi_3)
                        
                        rdi_6 = arg1
                    r15_2 = &r15_2[2]
                while (r15_2 != rax_12)
                
                rsi_2 = zx.q(var_78)
                r15_2 = var_80
                r14_2 = var_88_1
                i = i_1
            
            int64_t* rdi_10 = r15_2
            
            if (rsi_2.d != 0)
                int32_t j
                
                do
                    int64_t rbx_19 = *rdi_10
                    
                    if (rbx_19 != 0)
                        int64_t* rcx_48 = data_143ddb3f0
                        
                        if (rcx_48 == 0)
                            sub_140a750a0()
                            rcx_48 = data_143ddb3f0
                        
                        (*(*rcx_48 + 0x30))(rcx_48, rbx_19)
                    
                    rdi_10 = &rdi_10[2]
                    j = rsi_2.d
                    rsi_2 = zx.q(rsi_2.d - 1)
                while (j != 1)
            
            if (r15_2 != 0)
                int64_t* rcx_49 = data_143ddb3f0
                
                if (rcx_49 == 0)
                    sub_140a750a0()
                    rcx_49 = data_143ddb3f0
                
                (*(*rcx_49 + 0x30))(rcx_49, r15_2)
            
            r14_2 += 0x40
            var_88_1 = r14_2
        while (r14_2 - 0x20 != i)
    
    int16_t* rdi_11 = var_98
    int16_t* rcx_50 = &data_142d40450
    
    if (var_90 != 0)
        rcx_50 = rdi_11
    
    int32_t rax_28
    
    if (sub_140a54510(rcx_50, &data_142e62e14) == 0)
        rax_28.b = 1
    else
        if (var_90 != 0)
            r12 = rdi_11
        
        if (sub_140a54510(r12, &data_142e62e1c) == 0)
            rax_28.b = 1
        else
            rax_28.b = 0
    
    int32_t rbx_22 = var_150_1.d
    arg_20.b = rax_28.b
    sub_140a5e9b0(var_158, rbx_22, arg1.b, &arg_20)
    result = arg2
    
    if (rbx_22 s> *(result + 0xc))
        sub_14061cd70(result, rbx_22)
    
    int64_t* rbx_23 = var_158
    void* rsi_6 = &rbx_23[sx.q(var_150_1.d) * 8]
    
    if (rbx_23 != rsi_6)
        int64_t* rdi_12 = arg1
        
        do
            sub_140a6ce70(rdi_12)
            int32_t* rax_34
            void var_70
            
            if (rdi_12[0x28].d != *(rdi_12 + 0x16c))
                rax_34 = sub_140960120(&rdi_12[0x27], &var_70, rbx_23)
            void var_6c
            
            if ((rdi_12[0x28].d == *(rdi_12 + 0x16c) || *rax_34 != 0xffffffff)
                    && *sub_140960120(&rdi_12[0x31], &var_6c, rbx_23) == 0xffffffff)
                int64_t rdi_13 = sx.q(result[1].d)
                int32_t rax_36 = (rdi_13 + 1).d
                result[1].d = rax_36
                
                if (rax_36 s> *(result + 0xc))
                    sub_1405a4f90(result)
                
                sub_140596d10((rdi_13 << 4) + *result, rbx_23)
                rdi_12 = arg1
            
            rbx_23 = &rbx_23[8]
        while (rbx_23 != rsi_6)
    
    sub_140a61c10(&var_158)
    sub_140a61c10(&var_148)

if (result[1].d == 0)
    int64_t var_138 = 0
    int64_t var_130_1 = 0
    sub_1405947f0(&var_138, 3)
    int32_t rdi_14 = var_130_1:4.d
    int32_t rbx_24 = var_130_1.d + 3
    var_130_1.d = rbx_24
    
    if (rbx_24 s> rdi_14)
        sub_140594770(&var_138)
        rdi_14 = var_130_1:4.d
        rbx_24 = var_130_1.d
    
    int64_t r14_4 = var_138
    UnDecorator::getReferenceType(r14_4, &data_142e5c258, 6)
    int64_t rsi_7 = sx.q(result[1].d)
    int32_t rax_37 = (rsi_7 + 1).d
    result[1].d = rax_37
    
    if (rax_37 s> *(result + 0xc))
        sub_1405a4f90(result)
    
    int64_t* rax_40 = (rsi_7 << 4) + *result
    *rax_40 = r14_4
    rax_40[1].d = rbx_24
    *(rax_40 + 0xc) = rdi_14

sub_140a630d0(&var_c8)
int64_t rbx_25 = var_50

if (rbx_25 != 0)
    int64_t* rcx_71 = data_143ddb3f0
    
    if (rcx_71 == 0)
        sub_140a750a0()
        rcx_71 = data_143ddb3f0
    
    (*(*rcx_71 + 0x30))(rcx_71, rbx_25)

return result
