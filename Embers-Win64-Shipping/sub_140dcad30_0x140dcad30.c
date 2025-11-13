// 函数: sub_140dcad30
// 地址: 0x140dcad30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg2
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x20)
int128_t* rax_1 =
    sub_140e0db30(arg1, arg2[6].d, &var_d8, 0, 2, 0, *(arg2 + 0x4d), *(arg2 + 0x4f), arg2)
int64_t rdi = sx.q(*(r13 + 0x10))
int64_t r12 = 0
uint128_t zmm10 = data_143dbb1f0.d
uint128_t zmm11 = data_143dbb1f0:4.d
int128_t* i_2 = nullptr
arg2[5].d
*(arg2 + 0x2c)
int32_t* r15 = *(r13 + 8)
int128_t* i_1 = nullptr
int32_t var_120 = rdi.d
int32_t var_11c
int32_t r13_1

if (rdi.d != 0)
    sub_140808f70(&i_1, rdi.d, 0)
    i_2 = i_1
    memcpy(i_2, r15, (rdi * 0x18).d)
    r15 = *(r13 + 8)
    r13_1 = var_11c
    rdi = zx.q(var_120)
else
    r13_1 = 0
    var_11c = 0

uint128_t zmm0 = zx.o(0)
bool cond:0 = *(r13 + 0x18) != 1
int64_t result = sx.q(*(r13 + 0x10)) * 3
int64_t result_1 = result
int64_t var_118
uint128_t var_110
int32_t arg_10

if (cond:0)
    if (not(zmm0.d f>= r15[1]))
        zmm0 = *(r15 + 8)
        int32_t rax_5 = rdi.d
        var_118 = 0
        rdi = zx.q(rdi.d + 1)
        arg_10 = rax_5
        int32_t var_120_2 = rdi.d
        
        if (rdi.d s> r13_1)
            sub_1405a4df0(&i_1)
            rax_5 = arg_10
            r13_1 = var_11c
            rdi = zx.q(var_120_2)
            i_2 = i_1
        
        memmove(i_2 + 0x18, i_2, rax_5 * 0x18)
        result = result_1
        *i_2 = var_118.o
        i_2[1].q = zmm0:8.q
    
    uint128_t zmm1_1 = *(arg2 + 0x2c)
    
    if (not(zmm1_1.d f<= r15[result * 2 - 5]))
        var_118.d = arg2[5].d.d
        var_118:4.d = zmm1_1.d
        var_110 = *(r15 + (result << 3) - 0x10)
    label_140dcafaa:
        int64_t r15_1 = sx.q(rdi.d)
        rdi = zx.q((r15_1 + 1).d)
        int32_t var_120_3 = rdi.d
        
        if (rdi.d s> r13_1)
            result = sub_1405a4df0(&i_1)
            rdi = zx.q(var_120_3)
            i_2 = i_1
        
        int64_t rcx_8 = r15_1 * 3
        *(i_2 + (rcx_8 << 3)) = var_118.o
        *(i_2 + (rcx_8 << 3) + 0x10) = var_110:8.q
else
    if (not(zmm0.d f>= *r15))
        zmm0 = *(r15 + 8)
        int32_t rax_3 = rdi.d
        var_118 = 0
        rdi = zx.q(rdi.d + 1)
        arg_10 = rax_3
        int32_t var_120_1 = rdi.d
        
        if (rdi.d s> r13_1)
            sub_1405a4df0(&i_1)
            rax_3 = arg_10
            r13_1 = var_11c
            rdi = zx.q(var_120_1)
            i_2 = i_1
        
        memmove(i_2 + 0x18, i_2, rax_3 * 0x18)
        result = result_1
        *i_2 = var_118.o
        i_2[1].q = zmm0:8.q
    
    zmm0 = arg2[5].d
    
    if (not(zmm0.d f<= r15[result * 2 - 6]))
        var_118.d = zmm0.d
        var_110 = *(r15 + (result << 3) - 0x10)
        var_118:4.d = (*(arg2 + 0x2c)).d
        goto label_140dcafaa

if (rdi.d s> 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    i_1 = zx.q(rdi.d)
    int128_t* i
    
    do
        int64_t rax_8 = r12 * 3
        int32_t r15_2 = *(rax_1 + 0x64)
        
        if (*(r13 + 0x18) != 1)
            zmm7.d = (*(i_2 + (rax_8 << 3) + 4)).d f+ zmm11.d
        else
            zmm6.d = (*(i_2 + (rax_8 << 3))).d f+ zmm10.d
        
        int128_t* r13_3 = i_2 + ((rax_8 + 1) << 3)
        
        if (r12 != 0)
            void arg_20
            char* rax_16
            uint128_t zmm6_2
            uint128_t zmm7_2
            rax_16, zmm6_2, zmm7_2 = sub_140ae16d0(r13_3, &arg_20, 0)
            uint128_t zmm1_4 = data_143dbb1f0.d
            uint128_t zmm0_3 = data_143dbb1f0:4.d
            int64_t* rcx_15 = rax_1[4].q
            int32_t rax_17 = *rax_16
            var_118.d = zmm1_4.d
            var_110.d = zmm1_4.d
            zmm1_4.d = zmm7_2.d f* arg2[2].d
            int64_t rdi_3 = sx.q(rcx_15[1].d)
            zmm7_2.d = zmm7_2.d f* *(arg2 + 0x14)
            var_118:4.d = zmm0_3.d
            var_110:4.d = zmm0_3.d
            int32_t rax_18 = (rdi_3 + 1).d
            zmm0_3 = zmm6_2
            zmm6_2.d = zmm6_2.d f* *(arg2 + 0xc)
            zmm0_3.d = zmm0_3.d f* arg2[1].d
            zmm6_2.d = zmm6_2.d f+ zmm7_2.d
            zmm1_4.d = zmm1_4.d f+ zmm0_3.d
            zmm6_2.d = zmm6_2.d f+ *(arg2 + 0x1c)
            zmm1_4.d = zmm1_4.d f+ arg2[3].d
            rcx_15[1].d = rax_18
            int32_t var_fc_3 = zmm6_2.d
            int32_t var_100_3 = zmm1_4.d
            
            if (rax_18 s> *(rcx_15 + 0xc))
                sub_1405c4ec0(rcx_15)
            
            int64_t rdx_16 = rdi_3 * 5
            int64_t rcx_16 = *rax_1[4].q
            *(rcx_16 + (rdx_16 << 3)) = var_118.o
            *(rcx_16 + (rdx_16 << 3) + 0x10) = var_110
            *(rcx_16 + (rdx_16 << 3) + 0x20) = rax_17.q
            *(rax_1 + 0x64) += 1
            void var_e8
            char* rax_20
            rax_20, zmm8, zmm9 = sub_140ae16d0(r13_3, &var_e8, 0)
            uint128_t zmm1_5 = data_143dbb1f0.d
            uint128_t zmm0_4 = data_143dbb1f0:4.d
            int64_t* rcx_18 = rax_1[4].q
            int32_t rax_21 = *rax_20
            var_118.d = zmm1_5.d
            var_110.d = zmm1_5.d
            zmm1_5.d = zmm9.d f* arg2[2].d
            int64_t rdi_4 = sx.q(rcx_18[1].d)
            zmm9.d = zmm9.d f* *(arg2 + 0x14)
            var_118:4.d = zmm0_4.d
            var_110:4.d = zmm0_4.d
            int32_t rax_22 = (rdi_4 + 1).d
            zmm0_4 = zmm8
            zmm8.d = zmm8.d f* *(arg2 + 0xc)
            zmm0_4.d = zmm0_4.d f* arg2[1].d
            zmm8.d = zmm8.d f+ zmm9.d
            zmm1_5.d = zmm1_5.d f+ zmm0_4.d
            zmm8.d = zmm8.d f+ *(arg2 + 0x1c)
            zmm1_5.d = zmm1_5.d f+ arg2[3].d
            rcx_18[1].d = rax_22
            int32_t var_fc_4 = zmm8.d
            int32_t var_100_4 = zmm1_5.d
            
            if (rax_22 s> *(rcx_18 + 0xc))
                sub_1405c4ec0(rcx_18)
            
            int64_t rdx_19 = rdi_4 * 5
            int64_t rcx_19 = *rax_1[4].q
            *(rcx_19 + (rdx_19 << 3)) = var_118.o
            *(rcx_19 + (rdx_19 << 3) + 0x10) = var_110
            *(rcx_19 + (rdx_19 << 3) + 0x20) = rax_21.q
            int64_t* rdi_5 = *(rax_1 + 0x48)
            *(rax_1 + 0x64) += 1
            int64_t r13_4 = sx.q(rdi_5[1].d)
            int32_t rax_24 = (r13_4 + 1).d
            rdi_5[1].d = rax_24
            
            if (rax_24 s> *(rdi_5 + 0xc))
                sub_1405a4cf0(rdi_5)
            
            *(*rdi_5 + (r13_4 << 2)) = r15_2 - 2
            int64_t* rdi_6 = *(rax_1 + 0x48)
            *(rax_1 + 0x68) += 1
            int64_t r13_5 = sx.q(rdi_6[1].d)
            int32_t rax_26 = (r13_5 + 1).d
            rdi_6[1].d = rax_26
            
            if (rax_26 s> *(rdi_6 + 0xc))
                sub_1405a4cf0(rdi_6)
            
            *(*rdi_6 + (r13_5 << 2)) = r15_2 - 1
            int64_t* rdi_7 = *(rax_1 + 0x48)
            *(rax_1 + 0x68) += 1
            int64_t r13_6 = sx.q(rdi_7[1].d)
            int32_t rax_28 = (r13_6 + 1).d
            rdi_7[1].d = rax_28
            
            if (rax_28 s> *(rdi_7 + 0xc))
                sub_1405a4cf0(rdi_7)
            
            *(*rdi_7 + (r13_6 << 2)) = r15_2
            int64_t* rdi_8 = *(rax_1 + 0x48)
            *(rax_1 + 0x68) += 1
            int64_t r13_7 = sx.q(rdi_8[1].d)
            int32_t rax_30 = (r13_7 + 1).d
            rdi_8[1].d = rax_30
            
            if (rax_30 s> *(rdi_8 + 0xc))
                sub_1405a4cf0(rdi_8)
            
            *(*rdi_8 + (r13_7 << 2)) = r15_2
            int64_t* rdi_9 = *(rax_1 + 0x48)
            *(rax_1 + 0x68) += 1
            int64_t r13_8 = sx.q(rdi_9[1].d)
            int32_t rax_32 = (r13_8 + 1).d
            rdi_9[1].d = rax_32
            
            if (rax_32 s> *(rdi_9 + 0xc))
                sub_1405a4cf0(rdi_9)
            
            *(*rdi_9 + (r13_8 << 2)) = r15_2 - 1
            int64_t* rdi_10 = *(rax_1 + 0x48)
            *(rax_1 + 0x68) += 1
            int64_t r15_3 = sx.q(rdi_10[1].d)
            int32_t rax_34 = (r15_3 + 1).d
            rdi_10[1].d = rax_34
            
            if (rax_34 s> *(rdi_10 + 0xc))
                sub_1405a4cf0(rdi_10)
            
            result = *rdi_10
            *(result + (r15_3 << 2)) = r15_2 + 1
            *(rax_1 + 0x68) += 1
        else
            char* rax_9
            uint128_t zmm6_1
            uint128_t zmm7_1
            rax_9, zmm6_1, zmm7_1 = sub_140ae16d0(r13_3, &arg_10, 0)
            uint128_t zmm1_2 = data_143dbb1f0.d
            uint128_t zmm0_1 = data_143dbb1f0:4.d
            int64_t* rcx_11 = rax_1[4].q
            int32_t rax_10 = *rax_9
            var_118.d = zmm1_2.d
            var_110.d = zmm1_2.d
            zmm1_2.d = zmm7_1.d f* arg2[2].d
            int64_t rdi_1 = sx.q(rcx_11[1].d)
            zmm7_1.d = zmm7_1.d f* *(arg2 + 0x14)
            var_118:4.d = zmm0_1.d
            var_110:4.d = zmm0_1.d
            int32_t rax_11 = (rdi_1 + 1).d
            zmm0_1 = zmm6_1
            zmm6_1.d = zmm6_1.d f* *(arg2 + 0xc)
            zmm0_1.d = zmm0_1.d f* arg2[1].d
            zmm6_1.d = zmm6_1.d f+ zmm7_1.d
            zmm1_2.d = zmm1_2.d f+ zmm0_1.d
            zmm6_1.d = zmm6_1.d f+ *(arg2 + 0x1c)
            zmm1_2.d = zmm1_2.d f+ arg2[3].d
            rcx_11[1].d = rax_11
            int32_t var_fc_1 = zmm6_1.d
            int32_t var_100_1 = zmm1_2.d
            
            if (rax_11 s> *(rcx_11 + 0xc))
                sub_1405c4ec0(rcx_11)
            
            int64_t r8_8 = rdi_1 * 5
            int64_t rdx_10 = *rax_1[4].q
            *(rdx_10 + (r8_8 << 3)) = var_118.o
            *(rdx_10 + (r8_8 << 3) + 0x10) = var_110
            *(rdx_10 + (r8_8 << 3) + 0x20) = rax_10.q
            *(rax_1 + 0x64) += 1
            char* rax_13
            rax_13, zmm8, zmm9 = sub_140ae16d0(r13_3, &result_1, 0)
            uint128_t zmm1_3 = data_143dbb1f0.d
            uint128_t zmm0_2 = data_143dbb1f0:4.d
            int64_t* rcx_13 = rax_1[4].q
            int32_t rax_14 = *rax_13
            var_118.d = zmm1_3.d
            var_110.d = zmm1_3.d
            zmm1_3.d = zmm9.d f* arg2[2].d
            int64_t rdi_2 = sx.q(rcx_13[1].d)
            zmm9.d = zmm9.d f* *(arg2 + 0x14)
            var_118:4.d = zmm0_2.d
            var_110:4.d = zmm0_2.d
            int32_t rax_15 = (rdi_2 + 1).d
            zmm0_2 = zmm8
            zmm8.d = zmm8.d f* *(arg2 + 0xc)
            zmm0_2.d = zmm0_2.d f* arg2[1].d
            zmm8.d = zmm8.d f+ zmm9.d
            zmm1_3.d = zmm1_3.d f+ zmm0_2.d
            zmm8.d = zmm8.d f+ *(arg2 + 0x1c)
            zmm1_3.d = zmm1_3.d f+ arg2[3].d
            rcx_13[1].d = rax_15
            int32_t var_fc_2 = zmm8.d
            int32_t var_100_2 = zmm1_3.d
            
            if (rax_15 s> *(rcx_13 + 0xc))
                sub_1405c4ec0(rcx_13)
            
            result = rax_1[4].q
            int64_t rdx_13 = rdi_2 * 5
            int64_t rcx_14 = *result
            *(rcx_14 + (rdx_13 << 3)) = var_118.o
            *(rcx_14 + (rdx_13 << 3) + 0x10) = var_110
            *(rcx_14 + (rdx_13 << 3) + 0x20) = rax_14.q
            *(rax_1 + 0x64) += 1
        
        r12 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

if (i_2 == 0)
    return result

return sub_140a74f90(i_2)
