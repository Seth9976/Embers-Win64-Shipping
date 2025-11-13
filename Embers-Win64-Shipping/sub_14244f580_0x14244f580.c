// 函数: sub_14244f580
// 地址: 0x14244f580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t rdi = *(arg1 + 0x38)
int32_t i_6 = *(arg1 + 0x40)
void* result_1 = nullptr
int32_t i_7 = i_6
int32_t i_8 = i_6

if (i_6 != 0)
    sub_140a05d20(&result_1, i_6, 0)
    void* result_2 = result_1
    int64_t* rdi_1 = rdi - result_2
    void* rbx_1 = result_2 + 8
    int32_t i
    
    do
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = 0
        int64_t rsi_1 = sx.q(*(rdi_1 + rbx_1 + 8))
        int64_t r14_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 8) = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1405c4a00(rbx_1, rsi_1.d, 0)
            memcpy(*rbx_1, r14_1, (rsi_1 << 3).d)
        else
            *(rbx_1 + 0xc) = 0
        
        sub_14244bef0(rbx_1 + 0x10, &rdi_1[2] + rbx_1)
        *(rbx_1 + 0xa0) = *(rdi_1 + rbx_1 + 0xa0)
        rbx_1 += 0xb0
        i = i_6
        i_6 -= 1
    while (i != 1)
    i_7 = i_8

bool cond:0 = *(arg1 + 0x34) == 0
*(arg1 + 0x30) = 0

if (not(cond:0))
    sub_1405947f0(arg1 + 0x28, 0)

sub_14244d9a0(arg1 + 0x38, 0)
bool cond:1 = *(arg1 + 0x54) == 0
*(arg1 + 0x50) = 0

if (not(cond:1))
    sub_1405c5570(arg1 + 0x48, 0)

void* const rsi_2 = *(arg1 + 0x20)
void* rax_5
int64_t rax_6
void* rdx_6

if (rsi_2 != 0)
    rax_5 = sub_1425be5e0()
    rdx_6 = *(rsi_2 + 0x10)
    rax_6 = sx.q(*(rax_5 + 0x38))

if (rsi_2 == 0 || rax_6.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
    rsi_2 = nullptr

void* var_2f8 = *(sub_140d21d80(arg1) + 0x18)
uint64_t var_2b8
sub_140b63b70(&var_2f8, &var_2b8)
int64_t var_288
uint64_t* rax_9 = sub_142446be0(&var_288, &var_2b8, rsi_2 + 0xd0)

if (&var_2b8 != rax_9)
    uint64_t rcx_12 = var_2b8
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    var_2b8 = *rax_9
    *rax_9 = 0
    int32_t var_2b0_1 = rax_9[1].d
    int32_t var_2ac_1 = *(rax_9 + 0xc)
    rax_9[1] = 0

int64_t rcx_14 = var_288

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

if (sub_140ba1330(&var_2b8, 0, nullptr, 1) != 0)
    int64_t* rax_13 = sub_140b1a780(&var_288, &var_2b8)
    int64_t rcx_17 = *rax_13
    int32_t rdx_10 = rax_13[1].d
    int32_t rdx_11 = neg.d(rdx_10)
    *rax_13 = 0
    int32_t r8_5 = rax_13[1].d
    int64_t var_2e8 = rcx_17
    int32_t rcx_18 = *(rax_13 + 0xc)
    int32_t rdx_14 = sbb.d(rdx_11, rdx_11, rdx_10 != 0) + 2 + r8_5
    rax_13[1] = 0
    
    if (rdx_14 s> rcx_18)
        sub_1405947f0(&var_2e8, rdx_14)
    
    sub_140a20ba0(&var_2e8, &data_142d5a024, 1)
    int64_t rdi_3 = var_2e8
    var_2e8 = 0
    int32_t var_2e0_1
    var_2e0_1.q = 0
    int64_t var_e8
    
    if (arg1 + 0x28 != &var_e8)
        int64_t rcx_21 = *(arg1 + 0x28)
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        *(arg1 + 0x28) = rdi_3
        *(arg1 + 0x30) = r8_5
        *(arg1 + 0x34) = rcx_18
    else if (rdi_3 != 0)
        sub_140a74f90(rdi_3)
    
    int64_t rcx_23 = var_288
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    int32_t var_74_1 = 0x80
    int64_t var_c0
    __builtin_memset(&var_c0, 0, 0x1c)
    void** var_c8 = &data_14334da18
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x2c)
    int32_t var_6c_1 = 0
    int64_t var_60_1 = 0
    int32_t var_58_1 = 0
    uint64_t i_4 = 0
    int64_t var_2d0_1 = 0
    int32_t var_70_1 = 0xffffffff
    int64_t var_f8
    sub_140baee70(&var_f8, arg1 + 0x28, &i_4)
    uint64_t i_9 = i_4
    
    if (i_9 != 0)
        sub_140a74f90(i_9)
    
    sub_14244d150(&var_c8, &var_f8)
    var_2f8 = *(sub_140d21d80(rsi_2) + 0x18)
    int64_t var_298
    int128_t zmm6_1 = sub_140b63b70(&var_2f8, &var_298)
    int16_t* var_1b8
    sub_142446be0(&var_1b8, &var_298, rsi_2 + 0xd0)
    int64_t rcx_30 = var_298
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    int64_t* var_b0
    int64_t* r13_1 = var_b0
    int32_t var_a8
    void* r15_3 = &r13_1[sx.q(var_a8) * 2]
    var_2f8 = r15_3
    
    if (r13_1 != r15_3)
        int128_t var_38_1 = zmm6_1
        
        do
            int16_t* const rdx_19 = &data_142d40450
            int32_t var_1b0
            
            if (var_1b0 != 0)
                rdx_19 = var_1b8
            
            int16_t* const rcx_31
            
            if (r13_1[1].d == 0)
                rcx_31 = &data_142d40450
            else
                rcx_31 = *r13_1
            
            if (sub_140a54510(rcx_31, rdx_19) != 0)
                int32_t rax_16 = data_143dbb200
                int128_t var_258
                __builtin_memset(&var_258, 0, 0x18)
                uint128_t zmm0_1 = zx.o(data_143dbb1f8.q)
                uint64_t var_234_1 = zmm0_1.q
                uint64_t var_240_1 = zmm0_1.q
                int32_t var_22c_1 = rax_16
                int32_t var_238_1 = rax_16
                char var_228_1 = 0
                int64_t var_220 = 0
                int32_t var_218_1 = 0
                sub_1405947f0(&var_220, 0xe)
                int32_t rax_17 = var_218_1 + 0xe
                var_218_1 = rax_17
                
                if (rax_17 s> 0)
                    sub_140594770(&var_220)
                
                UnDecorator::getReferenceType(var_220, u"Uncategorized", 0x1c)
                int64_t var_210_1 = 0
                int32_t var_208_1 = 0
                int32_t var_204_1 = 0xc350
                char var_200_1 = 1
                char var_1f8_1 = 0
                int64_t var_1f0
                __builtin_memset(&var_1f0, 0, 0x24)
                sub_140baee70(&var_298, r13_1, &data_143e1a420)
                char rax_18
                rax_18, zmm6_1 = sub_140bb3da0(&var_298, &var_258)
                int64_t var_1e0
                
                if (rax_18 != 0)
                    int64_t var_1a8_1
                    __builtin_memset(&var_1a8_1, 0, 0x18)
                    void var_190
                    sub_14244c000(&var_190)
                    int64_t var_100_1 = zmm6_1.q
                    int16_t* rdx_23
                    
                    if (r13_1[1].d == 0)
                        rdx_23 = &data_142d40450
                    else
                        rdx_23 = *r13_1
                    
                    void var_d8
                    int64_t rcx_43 = *sub_140b58260(&var_d8, rdx_23, 1)
                    sub_14244c280(&var_190, &var_258)
                    sub_140baaa80(&var_288, r13_1)
                    i_4 = 0
                    int32_t var_2d0_2 = 0
                    sub_14244b380(&var_a0, &var_288, &i_4, 0)
                    int64_t r12_1 = sx.q(var_2d0_2)
                    int64_t* var_1a0
                    int64_t rsi_3
                    int64_t* r14_3
                    int64_t var_198_1
                    
                    if (r12_1.d == 0)
                        rsi_3 = zx.q(var_198_1.d)
                        r14_3 = var_1a0
                    else
                        rsi_3 = sx.q(var_198_1.d)
                        
                        if (rsi_3.d s>= 4)
                            if (rsi_3.d s> 4)
                                int32_t rax_20 = (rsi_3 - 4).d
                                
                                if (rax_20 != 0)
                                    int32_t rsi_4 = rsi_3.d - rax_20
                                    
                                    if (rsi_4 != 4)
                                        int64_t* rax_22 = var_1a0
                                        memmove(&rax_22[4], &rax_22[sx.q(rax_20 + 4)], 
                                            (rsi_4 - 4) << 3)
                                    
                                    var_198_1.d = rsi_4
                                    sub_1405c53d0(&var_1a0)
                                    rsi_3 = zx.q(var_198_1.d)
                            
                            r14_3 = var_1a0
                        else
                            int64_t rdi_4 = rsi_3
                            int32_t rbx_3 = 4 - rsi_3.d
                            rsi_3 = zx.q(rsi_3.d + rbx_3)
                            var_198_1.d = rsi_3.d
                            
                            if (rsi_3.d s> 0)
                                sub_1405a4d70(&var_1a0)
                                rsi_3 = zx.q(var_198_1.d)
                            
                            r14_3 = var_1a0
                            memset(&r14_3[rdi_4], 0, sx.q(rbx_3) << 3)
                        
                        int64_t* rax_23 = sub_140baa480(&var_e8, r13_1)
                        int64_t rcx_54 = *rax_23
                        int32_t rdx_30 = rax_23[1].d
                        int32_t rdx_31 = neg.d(rdx_30)
                        *rax_23 = 0
                        int32_t r8_13 = rax_23[1].d
                        int64_t var_2c8 = rcx_54
                        int32_t rcx_55 = *(rax_23 + 0xc)
                        int32_t rdx_34 = sbb.d(rdx_31, rdx_31, rdx_30 != 0) + 2 + r8_13
                        rax_23[1] = 0
                        
                        if (rdx_34 s> rcx_55)
                            sub_1405947f0(&var_2c8, rdx_34)
                        
                        sub_140a20ba0(&var_2c8, &data_142d5a024, 1)
                        int64_t rcx_58 = var_e8
                        int64_t var_268 = var_2c8
                        int32_t var_260_1 = r8_13
                        int32_t var_25c_1 = rcx_55
                        int32_t var_2c0_1
                        var_2c0_1.q = 0
                        var_2c8 = 0
                        
                        if (rcx_58 != 0)
                            sub_140a74f90(rcx_58)
                        
                        uint64_t i_1 = i_4
                        
                        for (int64_t r15_4 = i_1 + r12_1 * 0x18; i_1 != r15_4; i_1 += 0x18)
                            if (sub_140a32a50(i_1, &var_268, 1) != 0)
                                int16_t* const r8_14
                                
                                if (*(i_1 + 8) == 0)
                                    r8_14 = &data_142d40450
                                else
                                    r8_14 = *i_1
                                
                                *(i_1 + 0x10)
                                int16_t* var_1c8
                                sub_140a2e390(&var_1c8, u"%s_LOD%d", r8_14)
                                int16_t* const rdx_36 = &data_142d40450
                                int32_t var_1c0
                                
                                if (var_1c0 != 0)
                                    rdx_36 = var_1c8
                                
                                r14_3[sx.q(*(i_1 + 0x10)) - 1] = *sub_140b58260(&var_2e8, rdx_36, 1)
                                int16_t* rcx_64 = var_1c8
                                
                                if (rcx_64 != 0)
                                    sub_140a74f90(rcx_64)
                        
                        int64_t* rbx_5 = r14_3
                        void* rcx_65 = &r14_3[sx.q(rsi_3.d)]
                        
                        if (r14_3 != rcx_65)
                            do
                                if (*rbx_5 == 0)
                                    int32_t rbx_7 = ((rbx_5 - r14_3) s>> 3).d
                                    
                                    if (rbx_7 != 0xffffffff)
                                        if (rbx_7 s> rsi_3.d)
                                            int32_t rbx_8 = rbx_7 - rsi_3.d
                                            int64_t rdi_5 = sx.q(rsi_3.d)
                                            rsi_3 = zx.q(rdi_5.d + rbx_8)
                                            var_198_1.d = rsi_3.d
                                            
                                            if (rsi_3.d s> var_198_1:4.d)
                                                sub_1405a4d70(&var_1a0)
                                                rsi_3 = zx.q(var_198_1.d)
                                                r14_3 = var_1a0
                                            
                                            memset(&r14_3[rdi_5], 0, sx.q(rbx_8) << 3)
                                        else if (rbx_7 s< rsi_3.d)
                                            int32_t rax_30 = rsi_3.d
                                            int32_t rax_31 = rax_30 - rbx_7
                                            
                                            if (rax_30 != rbx_7)
                                                int32_t rsi_5 = rsi_3.d - rax_31
                                                
                                                if (rsi_5 != rbx_7)
                                                    memmove(&r14_3[sx.q(rbx_7)], 
                                                        &r14_3[sx.q(rax_31 + rbx_7)], 
                                                        (rsi_5 - rbx_7) << 3)
                                                
                                                var_198_1.d = rsi_5
                                                sub_1405c53d0(&var_1a0)
                                                rsi_3 = zx.q(var_198_1.d)
                                                r14_3 = var_1a0
                                    
                                    break
                                
                                rbx_5 = &rbx_5[1]
                            while (rbx_5 != rcx_65)
                        
                        int64_t rcx_73 = var_268
                        
                        if (rcx_73 != 0)
                            sub_140a74f90(rcx_73)
                        
                        r15_3 = var_2f8
                    int64_t rbx_9 = sx.q(*(arg1 + 0x40))
                    int32_t rax_34 = (rbx_9 + 1).d
                    *(arg1 + 0x40) = rax_34
                    
                    if (rax_34 s> *(arg1 + 0x44))
                        sub_140a05e50(arg1 + 0x38)
                    
                    int64_t* rbx_11 = rbx_9 * 0xb0 + *(arg1 + 0x38)
                    *rbx_11 = rcx_43
                    rbx_11[1] = 0
                    rbx_11[2].d = rsi_3.d
                    
                    if (rsi_3.d != 0)
                        sub_1405c4a00(&rbx_11[1], rsi_3.d, 0)
                        memcpy(rbx_11[1], r14_3, rsi_3.d << 3)
                    else
                        *(rbx_11 + 0x14) = 0
                    
                    sub_14244bef0(&rbx_11[3], &var_190)
                    uint64_t i_10 = i_4
                    rbx_11[0x15] = var_100_1
                    uint64_t i_11 = i_10
                    
                    if (r12_1.d != 0)
                        int32_t i_2
                        
                        do
                            int64_t rcx_78 = *i_11
                            
                            if (rcx_78 != 0)
                                sub_140a74f90(rcx_78)
                            
                            i_11 += 0x18
                            i_2 = r12_1.d
                            r12_1 = zx.q(r12_1.d - 1)
                        while (i_2 != 1)
                    
                    if (i_10 != 0)
                        sub_140a74f90(i_10)
                    
                    int64_t rcx_80 = var_288
                    
                    if (rcx_80 != 0)
                        sub_140a74f90(rcx_80)
                    
                    int64_t var_118
                    
                    if (var_118 != 0)
                        sub_140a74f90(var_118)
                    
                    int64_t var_128
                    
                    if (var_128 != 0)
                        sub_140a74f90(var_128)
                    
                    int64_t var_158
                    
                    if (var_158 != 0)
                        sub_140a74f90(var_158)
                    
                    int64_t* rcx_84 = var_1a0
                    
                    if (rcx_84 != 0)
                        sub_140a74f90(rcx_84)
                    
                    int64_t rcx_85 = var_298
                    
                    if (rcx_85 != 0)
                        sub_140a74f90(rcx_85)
                    
                    if (var_1e0 != 0)
                        sub_140a74f90(var_1e0)
                    
                    int64_t rcx_87 = var_1f0
                    
                    if (rcx_87 != 0)
                        sub_140a74f90(rcx_87)
                    
                    int64_t rcx_88 = var_220
                    
                    if (rcx_88 != 0)
                        sub_140a74f90(rcx_88)
                else
                    int64_t rcx_37 = var_298
                    
                    if (rcx_37 != 0)
                        sub_140a74f90(rcx_37)
                    
                    if (var_1e0 != 0)
                        sub_140a74f90(var_1e0)
                    
                    int64_t rcx_39 = var_1f0
                    
                    if (rcx_39 != 0)
                        sub_140a74f90(rcx_39)
                    
                    int64_t rcx_40 = var_220
                    
                    if (rcx_40 != 0)
                        sub_140a74f90(rcx_40)
            
            r13_1 = &r13_1[2]
        while (r13_1 != r15_3)
    
    sub_14244ecf0(arg1)
    sub_14244d4f0(arg1)
    int16_t* rcx_91 = var_1b8
    
    if (rcx_91 != 0)
        sub_140a74f90(rcx_91)
    
    int64_t rcx_92 = var_f8
    
    if (rcx_92 != 0)
        sub_140a74f90(rcx_92)
    
    sub_14244c1c0(&var_c8)

uint64_t rcx_94 = var_2b8

if (rcx_94 != 0)
    sub_140a74f90(rcx_94)

int32_t i_5 = i_7

if (i_5 != 0)
    void* rbx_13 = result_1 + 0x80
    int32_t i_3
    
    do
        int64_t rcx_95 = *(rbx_13 + 0x10)
        
        if (rcx_95 != 0)
            sub_140a74f90(rcx_95)
        
        int64_t rcx_96 = *rbx_13
        
        if (rcx_96 != 0)
            sub_140a74f90(rcx_96)
        
        int64_t rcx_97 = *(rbx_13 - 0x30)
        
        if (rcx_97 != 0)
            sub_140a74f90(rcx_97)
        
        int64_t rcx_98 = *(rbx_13 - 0x78)
        
        if (rcx_98 != 0)
            sub_140a74f90(rcx_98)
        
        rbx_13 += 0xb0
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

void* result = result_1

if (result != 0)
    result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_318)
return result
