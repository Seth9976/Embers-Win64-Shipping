// 函数: sub_1417774d0
// 地址: 0x1417774d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
uint128_t zmm8 = arg2
int32_t r8 = *(arg1 + 0x30)
int32_t rax = *(arg1 + 0x28)
int32_t rcx = *(arg1 + 0x2c)
int64_t var_128 = 0
int32_t var_120 = 0
int32_t var_138 = rax
int32_t var_154 = rcx
int32_t rdi_2 = r8 * rcx * rax
int32_t var_158 = r8

if (rdi_2 s> 0)
    var_120 = rdi_2
    sub_140679a80(&var_128)
    memset(var_128, 0, sx.q(rdi_2))
    var_158 = r8
    var_154 = rcx
else if (rdi_2 s< 0)
    int32_t rbx_2 = neg.d(rdi_2)
    
    if (rbx_2 != 0)
        int32_t rbx_3 = neg.d(rbx_2)
        
        if (rbx_3 != rdi_2)
            memmove(sx.q(rdi_2), nullptr, rbx_3 - rdi_2)
        
        var_120 = rbx_3
        sub_1405dac10(&var_128)
        var_158 = r8
        var_154 = rcx

int32_t r10 = *(arg1 + 0x30)
int64_t result_4 = 0
int32_t r9 = *(arg1 + 0x2c)
int32_t rax_5 = *(arg1 + 0x28)
int32_t rdx_2 = 0
int64_t result_1 = 0
int32_t var_d4 = 0
int32_t var_f0 = rax_5
int32_t var_150 = r9
int32_t rdi_5 = r10 * r9 * rax_5
int32_t var_14c = r10

if (rdi_5 s> 0)
    sub_140679a80(&result_1)
    result_4 = result_1
    memset(result_4, 0, sx.q(rdi_5))
    var_150 = r9
    rdx_2 = rdi_5
    var_14c = r10
else if (rdi_5 s< 0)
    int32_t rbx_5 = neg.d(rdi_5)
    
    if (rbx_5 != 0)
        int32_t rbx_6 = neg.d(rbx_5)
        
        if (rbx_6 != rdi_5)
            memmove(sx.q(rdi_5), nullptr, rbx_6 - rdi_5)
        
        sub_1405dac10(&result_1)
        result_4 = result_1
        var_150 = r9
        rdx_2 = rbx_6
        var_14c = r10

int64_t r8_6 = var_128
int64_t rax_10 = sx.q(var_120) + r8_6
int64_t count = rax_10 - r8_6

if (r8_6 u> rax_10)
    count = 0

if (count != 0)
    __builtin_memset(r8_6, 0, count)

int64_t rax_12 = sx.q(rdx_2) + result_4
int64_t count_1 = rax_12 - result_4

if (result_4 u> rax_12)
    count_1 = 0

if (count_1 != 0)
    __builtin_memset(result_4, 0, count_1)

int64_t rax_13 = sx.q(arg3[1].d)
int32_t r9_1 = 0
int32_t* i = *arg3
int64_t* r14 = nullptr
int64_t* var_148 = nullptr
int32_t var_13c = 0
int64_t var_90

while (i != &i[rax_13 * 3])
    *(sx.q((*i * var_154 + i[1]) * var_158 + i[2]) + r8_6) = 1
    int32_t rdi_9 = i[1]
    int32_t rdx_3 = *i
    int32_t r8_7 = i[2]
    int32_t var_84_1 = rdi_9
    int32_t var_88_1 = rdx_3
    int64_t i_4 = sx.q(i_1)
    i_1 = (i_4 + 1).d
    var_90 = *(arg1 + 0x50) + (sx.q((*(arg1 + 0x44) * rdx_3 + rdi_9) * *(arg1 + 0x48) + r8_7) << 2)
    
    if (i_1 s> r9_1)
        sub_1405a4df0(&var_148)
        r9_1 = var_13c
        r10 = var_14c
        r14 = var_148
    
    int64_t rcx_16 = i_4 * 3
    r8_6 = var_128
    *(r14 + (rcx_16 << 3)) = var_90.o
    r14[rcx_16 + 2] = r8_7.q
    int32_t rax_30 = (*i * var_150 + i[1]) * r10 + i[2]
    i = &i[3]
    *(sx.q(rax_30) + result_4) = 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(i_1 - 2)
uint64_t rax_35 = zx.q((temp5 - temp4) s>> 1)
int32_t r12 = rax_35.d
int128_t zmm3

if (rax_35.d s>= 0)
    int32_t r13_1 = ((rax_35 << 1) + 1).d
    int32_t temp6_1
    
    do
        int32_t rbx_7 = r12
        
        if (r13_1 s< i_1)
            uint64_t rdi_10
            
            do
                int32_t rsi_2 = rbx_7 * 2
                rdi_10 = zx.q(rsi_2 + 1)
                int32_t rax_36 = (rdi_10 + 1).d
                
                if (rax_36 s< i_1)
                    if (sub_14175da50(&r14[sx.q(rdi_10.d) * 3], &r14[sx.q(rax_36) * 3]) != 0)
                        rdi_10 = zx.q(rsi_2)
                    
                    rdi_10 = zx.q(rdi_10.d + 1)
                
                int128_t* rsi_3 = &r14[sx.q(rbx_7) * 3]
                int128_t* rbx_8 = &r14[sx.q(rdi_10.d) * 3]
                
                if (sub_14175da50(rbx_8, rsi_3) == 0)
                    break
                
                if (rsi_3 != rbx_8)
                    zmm3 = *rsi_3
                    int64_t zmm2_1 = rsi_3[1].q
                    *rsi_3 = *rbx_8
                    rsi_3[1].q = rbx_8[1].q
                    *rbx_8 = zmm3
                    rbx_8[1].q = zmm2_1
                
                rbx_7 = rdi_10.d
            while (((rdi_10 << 1) + 1).d s< i_1)
        
        r13_1 -= 2
        temp6_1 = r12
        r12 -= 1
    while (temp6_1 - 1 s>= 0)

if (i_1 != 0)
    uint32_t zmm6[0x4] = 0x7fffffff
    int128_t zmm7 = zx.o(0)
    
    do
        int32_t rcx_23 = r14[2].d
        int32_t rsi_4 = r14[1].d
        int32_t rax_44 = *(r14 + 0xc)
        int128_t* r12_1 = *r14
        int32_t rcx_24 = i_1 - 1
        
        if (i_1 - 1 s>= 1)
            rcx_24 = 1
        
        int32_t var_118_1 = rsi_4
        
        if (rcx_24 != 0)
            memcpy(r14, &r14[sx.q(i_1 - rcx_24) * 3], rcx_24 * 0x18)
        
        sub_1405fde90(&var_148)
        i_1 -= 1
        int32_t rbx_9 = 0
        r14 = var_148
        
        if (i_1 s> 1)
            uint64_t rdi_12
            
            do
                int32_t rsi_5 = rbx_9 * 2
                rdi_12 = zx.q(rsi_5 + 1)
                int32_t rax_47 = (rdi_12 + 1).d
                
                if (rax_47 s< i_1)
                    if (sub_14175da50(&r14[sx.q(rdi_12.d) * 3], &r14[sx.q(rax_47) * 3]) != 0)
                        rdi_12 = zx.q(rsi_5)
                    
                    rdi_12 = zx.q(rdi_12.d + 1)
                
                int128_t* rsi_6 = &r14[sx.q(rbx_9) * 3]
                void* rbx_10 = &r14[sx.q(rdi_12.d) * 3]
                
                if (sub_14175da50(rbx_10, rsi_6) == 0)
                    break
                
                if (rsi_6 != rbx_10)
                    zmm3 = *rsi_6
                    int64_t zmm2_2 = rsi_6[1].q
                    *rsi_6 = *rbx_10
                    rsi_6[1].q = *(rbx_10 + 0x10)
                    *rbx_10 = zmm3
                    *(rbx_10 + 0x10) = zmm2_2
                
                rbx_9 = rdi_12.d
            while (((rdi_12 << 1) + 1).d s< i_1)
            rsi_4 = var_118_1
        
        if (not(zmm8.d f== zmm7.d) && _mm_and_ps(*r12_1, zmm6)[0] f> zmm8.d)
            break
        
        int32_t rdx_12 = rax_44
        int32_t r8_10 = rcx_23
        int32_t r11_1 = var_154
        int64_t result_3 = result_1
        int64_t r10_1 = var_128
        void* r9_2 = arg1
        *(sx.q((rsi_4 * r11_1 + rdx_12) * var_158 + r8_10) + r10_1) = 1
        *(sx.q((rsi_4 * var_150 + rdx_12) * var_14c + r8_10) + result_3) = 0
        int64_t var_100
        int64_t rax_68 = r9_2 - &var_100
        
        for (int64_t j = 0; j s< 0xc; )
            int32_t var_f8_1 = 0
            int32_t var_c8_1 = 0
            var_100 = 0
            *(&var_100 + j) = 1
            int32_t rcx_34 = var_100:4.d + rdx_12
            int32_t r13_3 = var_100.d + rsi_4
            int64_t var_d0 = 0
            *(&var_d0 + j) = 1
            int32_t rbx_12 = rsi_4 - var_d0.d
            int32_t rsi_8 = rdx_12 - var_d0:4.d
            int32_t r12_3 = r8_10 - var_c8_1
            int32_t rdx_13 = var_158
            int32_t rcx_36 = var_f8_1 + r8_10
            var_90.d = rbx_12
            var_90:4.d = rsi_8
            int32_t var_88_2 = r12_3
            bool cond:3_1 = *(&var_90 + j) s< 0
            int32_t var_c0 = r13_3
            
            if (not(cond:3_1) && *(sx.q((rbx_12 * r11_1 + rsi_8) * rdx_13 + r12_3) + r10_1) == 0)
                int128_t zmm0_3
                zmm0_3, zmm6, zmm7, zmm8 = sub_141775610(r9_2, &var_138, &var_90)
                r9_2 = arg1
                *(*(r9_2 + 0x50)
                    + (sx.q((*(r9_2 + 0x44) * rbx_12 + rsi_8) * *(r9_2 + 0x48) + r12_3) << 2)) =
                    zmm0_3.d
                int64_t rax_86 = sx.q((rbx_12 * var_150 + rsi_8) * var_14c + r12_3)
                
                if (*(rax_86 + result_1) == 0)
                    int32_t var_a0_1 = rbx_12
                    int64_t i_2 = sx.q(i_1)
                    int32_t var_9c_1 = rsi_8
                    i_1 = (i_2 + 1).d
                    int64_t rcx_41 = *(r9_2 + 0x50)
                        + (sx.q((rbx_12 * *(r9_2 + 0x44) + rsi_8) * *(r9_2 + 0x48) + r12_3) << 2)
                    
                    if (i_1 s> var_13c)
                        sub_1405a4df0(&var_148)
                        r9_2 = arg1
                        r14 = var_148
                    
                    int64_t rcx_43 = i_2 * 3
                    *(r14 + (rcx_43 << 3)) = rcx_41.o
                    r14[rcx_43 + 2] = r12_3.q
                    *(rax_86 + result_1) = 1
                
                rdx_13 = var_158
                r11_1 = var_154
                r10_1 = var_128
            
            if (*(&var_c0 + j) s< *(rax_68 + &var_100 + j + 0x28)
                    && *(sx.q((r13_3 * r11_1 + rcx_34) * rdx_13 + rcx_36) + r10_1) == 0)
                int128_t zmm0_4
                zmm0_4, zmm6, zmm7, zmm8 = sub_141775610(r9_2, &var_138, &var_c0)
                *(*(arg1 + 0x50)
                    + (sx.q((*(arg1 + 0x44) * r13_3 + rcx_34) * *(arg1 + 0x48) + rcx_36) << 2)) =
                    zmm0_4.d
                int64_t r12_4 = sx.q((r13_3 * var_150 + rcx_34) * var_14c + rcx_36)
                
                if (*(r12_4 + result_1) == 0)
                    int32_t var_9c_2 = rcx_34
                    int32_t var_a0_2 = r13_3
                    int64_t i_3 = sx.q(i_1)
                    i_1 = (i_3 + 1).d
                    int64_t rcx_49 = *(arg1 + 0x50)
                        + (sx.q((r13_3 * *(arg1 + 0x44) + rcx_34) * *(arg1 + 0x48) + rcx_36) << 2)
                    
                    if (i_1 s> var_13c)
                        sub_1405a4df0(&var_148)
                        r14 = var_148
                    
                    int64_t result_2 = result_1
                    int64_t rcx_51 = i_3 * 3
                    *(r14 + (rcx_51 << 3)) = rcx_49.o
                    r14[rcx_51 + 2] = rcx_36.q
                    *(r12_4 + result_2) = 1
            
            r9_2 = arg1
            rsi_4 = var_118_1
            j += 4
            rdx_12 = rax_44
            r8_10 = rcx_23
            r10_1 = var_128
            r11_1 = var_154
        
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(i_1 - 2)
        uint64_t rax_123 = zx.q((temp8_1 - temp7_1) s>> 1)
        int32_t r12_5 = rax_123.d
        
        if (rax_123.d s>= 0)
            int32_t r13_4 = ((rax_123 << 1) + 1).d
            int32_t temp9_1
            
            do
                int32_t rbx_14 = r12_5
                
                if (r13_4 s< i_1)
                    uint64_t rdi_13
                    
                    do
                        int32_t rsi_10 = rbx_14 * 2
                        rdi_13 = zx.q(rsi_10 + 1)
                        int32_t rax_124 = (rdi_13 + 1).d
                        
                        if (rax_124 s< i_1)
                            if (sub_14175da50(&r14[sx.q(rdi_13.d) * 3], &r14[sx.q(rax_124) * 3])
                                    != 0)
                                rdi_13 = zx.q(rsi_10)
                            
                            rdi_13 = zx.q(rdi_13.d + 1)
                        
                        int128_t* rsi_11 = &r14[sx.q(rbx_14) * 3]
                        int64_t* rbx_15 = &r14[sx.q(rdi_13.d) * 3]
                        
                        if (sub_14175da50(rbx_15, rsi_11) == 0)
                            break
                        
                        if (rsi_11 != rbx_15)
                            zmm3 = *rsi_11
                            int64_t zmm2_3 = rsi_11[1].q
                            *rsi_11 = *rbx_15
                            rsi_11[1].q = rbx_15[2]
                            *rbx_15 = zmm3
                            rbx_15[2] = zmm2_3
                        
                        rbx_14 = rdi_13.d
                    while (((rdi_13 << 1) + 1).d s< i_1)
                
                r13_4 -= 2
                temp9_1 = r12_5
                r12_5 -= 1
            while (temp9_1 - 1 s>= 0)
    while (i_1 != 0)

if (r14 != 0)
    sub_140a74f90(r14)

int64_t result = result_1

if (result != 0)
    result = sub_140a74f90(result)

int64_t rcx_60 = var_128

if (rcx_60 == 0)
    return result

return sub_140a74f90(rcx_60)
