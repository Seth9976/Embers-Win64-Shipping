// 函数: sub_142063b30
// 地址: 0x142063b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* r15 = arg8
void* r12 = arg9
int32_t rdx = *(arg6 + 0x38)
int32_t rax_3 = *(arg6 + 0x10)
void* var_168 = r15
void* var_160 = r12
int32_t rax_5 = (*(*arg7 + 0x60))(arg5, rdx)
int64_t rax_6 = *(*arg7[8] + (sx.q(rax_5) << 3))
int32_t rcx_2 = data_143f43548

if (arg1[0x12].d s< rcx_2)
    int32_t i = 0
    arg1[0x12].d = rcx_2
    
    if (arg1[0xf].d s> 0)
        int64_t rdx_2 = 0
        
        do
            rdx_2 += 8
            i += 1
            *(*(rdx_2 + arg1[0xe] - 8) + 0x70) = 0xffffffff
        while (i s< arg1[0xf].d)
    
    void* rcx_9 = &arg1[0x13]
    int32_t i_1 = 0
    
    if (arg1[0x14].d s> 0)
        int64_t r15_1 = 0
        
        do
            int64_t* rbx_2 = arg1[0x13] + r15_1
            void* rcx_4 = *rbx_2
            
            if (rcx_4 != 0)
                int32_t rax_8 = 0
                
                if (0 == *(rcx_4 + 8))
                    *(rcx_4 + 8) = 0
                else
                    rax_8 = *(rcx_4 + 8)
                
                if (rax_8 == 1)
                    void* rdi_1 = *rbx_2
                    
                    if (*(rdi_1 + 0x11) != 0)
                        if (data_143f0f1c7 != 0)
                            int64_t* rcx_5 = data_143f0f180
                            (*(*rcx_5 + 0x630))(rcx_5, rdi_1)
                        
                        *(rdi_1 + 0x11) = 0
            
            rbx_2[3].d = 0
            sub_1405d16e0(rbx_2, nullptr)
            sub_1405d16e0(&rbx_2[1], nullptr)
            sub_1405d16e0(&rbx_2[2], nullptr)
            i_1 += 1
            r15_1 += 0x20
        while (i_1 s< arg1[0x14].d)
        
        rcx_9 = &arg1[0x13]
        r15 = var_168
    
    sub_1420682a0(rcx_9, 0, 0)
    r12 = var_160

int64_t* rbx_3 = *arg15

if (rbx_3 == 0)
    goto label_142063d8e

int64_t* rcx_10 = rbx_3[6]
uint64_t result
int32_t var_1d8
int32_t var_1d0
void* var_1c8
int64_t var_1c0
int32_t var_1b8
int64_t r15_3

if (rcx_10 != arg7)
label_142063e3d:
    
    if (rbx_3 != 0)
        sub_142065460(rbx_3)
    
    *arg15 = nullptr
label_142063d8e:
    int32_t rcx_13 = data_143a2e214
    
    if (data_143f40a3c s> 0)
        rcx_13 = 1
    
    r12.b = rcx_13 s> 0
    float zmm1 = data_143a2e260 * 1024f * 1024f
    uint64_t r15_2 = zx.q(*(arg3 + 0x198))
    int64_t rax_18 = 0
    
    if (not(zmm1 < 9.22337204e+18f))
        zmm1 = zmm1 - 9.22337204e+18f
        
        if (not(zmm1 >= 9.22337204e+18f))
            rax_18 = -0x8000000000000000
    
    uint32_t result_1 = (r15_2 << 3).d
    uint64_t result_2 = zx.q(result_1)
    result = 0
    
    if (rcx_13 s<= 0)
        result_2 = 0
    
    if (rcx_13 s> 0 && data_143f40a44 s> 0)
        result = zx.q(result_1)
    
    uint64_t rbx_5 = result + result_2 + zx.q((r15_2 * 3).d << 3)
    
    if (*(arg1 + 0x94) == 0 || arg1[0x10] + rbx_5 u< int.q(zmm1) + rax_18)
        void* rax_19 = j_sub_140a82f30(0x88)
        void* r12_1
        
        if (rax_19 == 0)
            r12_1 = nullptr
        else
            r12_1 = sub_142048ba0(rax_19, r15_2.d, r12.b)
        
        int32_t rcx_19 = arg1[0xd].d
        var_1b8 = rcx_19
        arg1[0xd].d = rcx_19 + 1
        
        if (rcx_19 + 1 s> *(arg1 + 0x6c))
            sub_1405a4d70(&arg1[0xc])
            rcx_19 = var_1b8
        
        result = arg1[0xc]
        *(result + (sx.q(rcx_19) << 3)) = r12_1
        arg1[0x10] += rbx_5
        
        if (r12_1 != 0)
            int64_t* rax_22 = j_sub_140a82f30(0x78)
            
            if (rax_22 != 0)
                rax_22 = sub_1420483b0(rax_22, arg1, arg7, r12_1)
            
            *arg15 = rax_22
            rax_22[6] = arg7
            r15_3 = sx.q(arg14)
            var_1c0 = arg4
            var_1c8 = arg3
            var_1d0 = rax_3
            var_1d8 = rdx
            sub_14206a0d0(*arg15, arg14, r12_1, r15_3 * 0xe8 + *rax_6, var_168, var_160.d, var_1d8, 
                var_1d0, var_1c8)
            int64_t r12_2 = sx.q(arg1[0xf].d)
            int32_t rax_30 = (r12_2 + 1).d
            arg1[0xf].d = rax_30
            
            if (rax_30 s> *(arg1 + 0x7c))
                sub_1405a4d70(&arg1[0xe])
            
            *(arg1[0xe] + (r12_2 << 3)) = *arg15
            goto label_142063f64
    else
        arg1[0x11] += rbx_5
else
    bool cond:1_1 = (*(*rcx_10 + 0x60))(rcx_10) != rbx_3[0xe].d
    rbx_3 = *arg15
    
    if (cond:1_1)
        goto label_142063e3d
    
    int64_t rcx_11 = rbx_3[4]
    int64_t rdx_4 = sx.q(arg14)
    int64_t rax_12 = rdx_4 * 0x150
    
    if (*(rax_12 + rcx_11 + 0x40) != arg14 || *(rax_12 + rcx_11 + 0x20) != arg3)
        var_1c0 = arg4
        var_1c8 = arg3
        var_1d0 = rax_3
        var_1d8 = rdx
        sub_14206a0d0(rbx_3, arg14, *rbx_3, rdx_4 * 0xe8 + *rax_6, r15, r12.d, var_1d8, var_1d0, 
            var_1c8)
        rbx_3 = *arg15
    
    if (rbx_3 == 0)
        goto label_142063d8e
    
    r15_3 = sx.q(arg14)
label_142063f64:
    int32_t* rcx_25
    void* rdx_13
    
    if (var_168 != 0)
        rcx_25 = *(var_168 + 0x20)
        rdx_13 = &rcx_25[sx.q(*(var_168 + 0x28))]
    
    int32_t rdx_14
    
    if (var_168 == 0 || rcx_25 == rdx_13)
    label_142063f8b:
        rdx_14 = 0
    else
        while (*rcx_25 != arg14)
            rcx_25 = &rcx_25[1]
            
            if (rcx_25 == rdx_13)
                goto label_142063f8b
        
        (*arg15)[0xb] = *(var_168 + 0x30)
        int64_t rbx_8 = sx.q(arg14) * 0x150
        *((*arg15)[4] + rbx_8 + 0x84) = *(arg6 + 0x10)
        void* rax_39 = sub_142337dc0(arg7, rax_5)
        int32_t r9_7
        r9_7.b = *(rax_39 + 0x28) != 0
        int32_t r9_9 = (r9_7 + 2) * *(rax_39 + 0x24)
        *((*arg15)[4] + rbx_8 + 0x80) = (*(arg6 + 0x10) * r9_9) u>> 2
        *(*arg15 + 0x44) = r9_9
        sub_1405d16e0(&(*arg15)[9], *(rax_39 + 0x18))
        rdx_14 = 1
    
    void* var_1a0 = nullptr
    void** const var_1b0_1 = &data_1432aa600
    void** const var_1a8 = &data_1432aa638
    int64_t var_198_1 = 0
    char var_190_1 = 1
    int128_t var_120 = zx.o(0)
    void* var_1e8
    
    if (var_160 != 0)
        void* rax_33 = *(var_160 + 0x18)
        void* var_130 = rax_33
        
        if (rax_33 != 0)
            *(rax_33 + 8) += 1
        
        sub_1405d1600(&(*arg15)[0xc], &var_130)
        sub_1405ec8a0(&var_130)
        int64_t rbx_7 = sx.q(arg10[1].d)
        int32_t rax_34 = var_198_1.d
        
        if (rax_34 u< rbx_7.d)
            int32_t rcx_29 = var_198_1:4.d
            
            if (rbx_7.d s> rcx_29)
                sub_141a14860(&var_1a0, rbx_7.d)
                rcx_29 = var_198_1:4.d
                rax_34 = var_198_1.d
            
            var_198_1.d = rbx_7.d
            
            if (rbx_7.d s> rcx_29)
                sub_1419d6f80(&var_1a0, rax_34)
        else if (rax_34 u> rbx_7.d)
            int32_t r15_5 = rax_34 - rbx_7.d
            
            if (rax_34 != rbx_7.d)
                int32_t rcx_39 = rax_34 - r15_5
                
                if (rcx_39 != rbx_7.d)
                    char rdx_21 = var_1a0.b
                    void* r9_10 = var_1a0
                    void* r10_2
                    
                    if ((rdx_21 & 1) == 0)
                        r10_2 = r9_10
                    else
                        r10_2 = &var_1a0 + (r9_10 s>> 1)
                    
                    if ((rdx_21 & 1) != 0)
                        r9_10 = &var_208 + (r9_10 s>> 1) + 0x68
                    
                    memmove(r9_10 + rbx_7 * 0x18, r10_2 + sx.q(r15_5 + rbx_7.d) * 0x18, 
                        (rcx_39 - rbx_7.d) * 0x18)
                    rax_34 = var_198_1.d
                
                var_198_1.d = rax_34 - r15_5
                sub_1419d70d0(&var_1a0)
        
        void* r9_12
        
        if ((var_1a0.b & 1) == 0)
            r9_12 = var_1a0
        else
            r9_12 = &var_1a0 + (var_1a0 s>> 1)
        
        r15_3 = sx.q(arg14)
        
        if (*(var_160 + 0x28) s> arg14)
            *((*arg15)[4] + r15_3 * 0x150 + 0x88) = *(*(var_160 + 0x20) + (r15_3 << 3))
        
        uint64_t r8_12 = 0
        uint128_t zmm0
        
        if (arg10[1].d s> 0)
            int64_t rdx_24 = 0
            
            do
                int64_t rax_51 = *arg10
                rdx_24 += 0xc
                int32_t var_f0_1 = *(rdx_24 + rax_51 - 4)
                int64_t rax_53 = arg10[2]
                int32_t var_e4_1 = *(rdx_24 + rax_53 - 4)
                int32_t rax_55 = (r8_12 * 3).d
                uint64_t var_ec_1 = *(rdx_24 + rax_53 - 0xc)
                r8_12 = zx.q(r8_12.d + 1)
                int128_t* rax_56 = zx.q(rax_55 << 3)
                zmm0.q = *(rdx_24 + rax_51 - 0xc)
                *(rax_56 + r9_12) = zmm0
                *(rax_56 + r9_12 + 0x10) = var_ec_1
            while (r8_12.d s< arg10[1].d)
        
        zmm0 = data_143dbb1e0
        int32_t var_88_1 = 1
        int32_t rax_58 = (1 << (data_1439c7a34).b) - 1
        int64_t var_98 = 0
        int32_t var_74_1 = rax_58
        void** const* var_90_1 = &var_1a8
        uint128_t var_84_1 = zmm0
        char var_70_1 = 0
        int64_t var_68_1 = 0
        int32_t var_60_1 = 0
        int32_t rax_60 = var_1a8[3](&var_1a8)
        int64_t* rcx_48 = data_143f0f180
        var_1e8.d = 0x201
        int64_t var_158
        (*(*rcx_48 + 0x498))(rcx_48, &var_158, &data_143f02b98, zx.q(rax_60), var_1e8, &var_98, 
            var_1d8, var_1d0, var_1c8, var_1c0, var_1b8, var_1b0_1)
        int64_t rbx_9 = var_158
        var_120.q = rbx_9
        var_158 = 0
        sub_1405d1550(&var_158)
        int64_t* rcx_50 = data_143f0f180
        int64_t* var_1e0_3
        var_1e0_3.b = 0x11
        var_1e8.d = 8
        void* const var_150
        (*(*rcx_50 + 0x4b8))(rcx_50, &var_150, &data_143f02b98, rbx_9, var_1e8, var_1e0_3)
        void* const rbx_10 = var_150
        var_120:8.q = rbx_10
        var_150 = nullptr
        sub_1405ec8a0(&var_150)
        sub_1405d16e0(&(*arg15)[0xd], rbx_10)
        int64_t rdi_2 = r15_3 * 0x150
        *((*arg15)[4] + rdi_2 + 0x8c) = arg12.d
        int64_t rcx_55 = (*arg15)[4]
        *(rcx_55 + rdi_2 + 0x90) = *arg11
        *(rcx_55 + rdi_2 + 0xa0) = arg11[1]
        *(rcx_55 + rdi_2 + 0xb0) = arg11[2]
        *(rcx_55 + rdi_2 + 0xc0) = arg11[3]
        int64_t rbx_11 = (*arg15)[4]
        uint32_t var_d8[0x4][0x4]
        uint32_t (* rax_65)[0x4] = sub_140631b10(arg11, &var_d8)
        rdx_14 = 2
        *(rdi_2 + rbx_11 + 0xd0) = *rax_65
        *(rdi_2 + rbx_11 + 0xe0) = rax_65[1]
        *(rdi_2 + rbx_11 + 0xf0) = rax_65[2]
        *(rdi_2 + rbx_11 + 0x100) = rax_65[3]
    
    int64_t rbx_12 = r15_3 * 0x150
    var_1e8.d = arg13
    *((*arg15)[4] + rbx_12 + 0x44) = rdx_14
    int64_t* r15_6 = *arg15
    sub_142055a00(arg1, arg2, r15_6, arg14)
    int64_t rdi_3 = r15_6[4]
    int64_t* rcx_59 = *(rbx_12 + rdi_3 + 0x20)
    int64_t r12_5 = *(rbx_12 + rdi_3 + 0x118)
    void var_108
    int64_t rax_70 = *(*(*rcx_59 + 0x90))(rcx_59, &var_108)
    sub_1405ec8a0(&var_108)
    int64_t* rcx_61 = *(rbx_12 + rdi_3 + 0x28)
    
    if (rcx_61[0x48].d == 0xffffffff)
        int64_t var_1e8_1 = r12_5
        sub_1420609f0(rcx_61, *(rbx_12 + rdi_3 + 0x20), *(rbx_12 + rdi_3 + 0x128), rax_70)
    
    if (*(rbx_12 + r15_6[4] + 0x30) != 0)
        sub_142055130(arg1, arg2, r15_6, arg14)
    
    int64_t rdi_4 = (*arg15)[4]
    int64_t* rcx_63 = *(rbx_12 + rdi_4 + 0x20)
    int64_t rsi_1 = *(rbx_12 + rdi_4 + 0x118)
    void var_100
    int64_t r14_1 = *(*(*rcx_63 + 0x90))(rcx_63, &var_100)
    sub_1405ec8a0(&var_100)
    int64_t* rcx_65 = *(rbx_12 + rdi_4 + 0x28)
    
    if (rcx_65[0x48].d == 0xffffffff)
        int64_t var_1e8_2 = rsi_1
        sub_1420609f0(rcx_65, *(rbx_12 + rdi_4 + 0x20), *(rbx_12 + rdi_4 + 0x128), r14_1)
    
    sub_140a1d5c0(&var_1a0)
    var_1a8 = &data_142da7708
    void** const var_1b0_2 = &data_142e2dc48
    sub_1405ec8a0(&var_120:8)
    result = sub_1405d1550(&var_120)
__security_check_cookie(rax_1 ^ &var_208)
return result
