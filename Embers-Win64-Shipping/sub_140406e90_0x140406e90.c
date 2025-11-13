// 函数: sub_140406e90
// 地址: 0x140406e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
int32_t i = 0
int64_t* rax_1 = *(arg1 + 0x20)
int32_t rcx
rcx.b = rax == 0
int64_t r14 = sx.q(arg4)

if (r14.d == 1)
    arg5.q = arg9
    return sub_140406d70(arg1, arg2, arg3, zx.q(arg5)) __tailcall

int32_t rax_4 = arg11
int32_t var_b0 = 1
int32_t var_78
sub_140404990(arg1, &var_78, arg2, arg3, r14.d, &arg5, arg6.b, arg6, arg8, 1, &arg11)
int32_t var_74
uint128_t zmm7_1
zmm7_1.d = _mm_cvtepi32_ps(zx.o(var_74)).d f* 3.05175781e-05f
int32_t var_70
uint128_t zmm6_1
zmm6_1.d = _mm_cvtepi32_ps(zx.o(var_70)).d f* 3.05175781e-05f
float var_c0
int32_t* var_a8
int32_t var_68
int32_t var_64
int32_t rax_16
int32_t rsi_1
uint128_t zmm7_2

if (r14.d != 2)
    int32_t rsi_2 = arg5
    int32_t var_6c
    int32_t temp0_4
    int32_t temp1_1
    temp0_4:temp1_1 = sx.q(rsi_2 - var_6c)
    int32_t rax_21 = (temp1_1 - temp0_4) s>> 1
    int32_t rbp_1 = rax_21
    
    if (rsi_2 s< rax_21)
        rax_21 = rsi_2
    
    if (rax_21 s< 0)
        rbp_1 = 0
    else if (rsi_2 s< rbp_1)
        rbp_1 = rsi_2
    
    int32_t rsi_3 = rsi_2 - rbp_1
    int32_t r8_3 = r14.d
    arg1[0xa] -= var_64
    int32_t rax_23 = arg1[0xa]
    int32_t rax_24 = arg11
    int64_t* var_d0_3
    int32_t var_c8_3
    int32_t var_b8_1
    int32_t arg_20
    float* rdx_7
    float* r9_5
    
    if (rbp_1 s< rsi_3)
        var_a8.d = rax_24 s>> arg6.b
        var_b0.q = 0
        var_c0.q = 0
        int32_t rax_35 = sub_140406830(arg1, arg3, r8_3, zx.q(rsi_3), arg6, nullptr, arg8, 0, 
            zmm6_1.d, nullptr, var_a8.d)
        int32_t rsi_6 = rsi_3 - rax_23 + arg1[0xa]
        arg_20 = rax_35
        
        if (rsi_6 s> 0x18 && var_68 != 0x4000)
            rbp_1 = rbp_1 - 0x18 + rsi_6
        
        r9_5 = zx.q(rbp_1)
        var_a8.d = arg11
        rdx_7 = arg2
        var_b0.q = arg10
        var_b8_1 = 0x3f800000
        var_c0.q = arg9
        var_c8_3 = arg8
        var_d0_3 = arg7
    else
        var_a8.d = rax_24
        var_b0.q = arg10
        var_c0.q = arg9
        int32_t rax_29
        int32_t zmm6_3
        rax_29, zmm6_3 = sub_140406830(arg1, arg2, r8_3, zx.q(rbp_1), arg6, arg7, arg8, var_c0, 
            0x3f800000, 1, var_a8.d)
        arg_20 = rax_29
        int32_t rbp_3 = rbp_1 - rax_23 + arg1[0xa]
        
        if (rbp_3 s> 0x18 && var_68 != 0)
            rsi_3 = rsi_3 - 0x18 + rbp_3
        
        r9_5 = zx.q(rsi_3)
        rdx_7 = arg3
        var_a8.d = arg11 s>> arg6.b
        var_b8_1 = zmm6_3
        var_c8_3 = arg8
        var_d0_3 = nullptr
    
    int32_t rax_41
    rax_41, zmm7_2 = sub_140406830(arg1, rdx_7, r14.d, r9_5, arg6, var_d0_3, var_c8_3, 0, var_b8_1, 
        nullptr, var_a8.d)
    rsi_1 = arg_20 | rax_41
    rax_16 = rcx
    goto label_140407365

int32_t r8_2 = 0
float* rax_6 = arg2
int32_t rsi = 0

if ((var_68 & 0xffffbfff) != 0)
    r8_2 = 8

int32_t rcx_5 = arg5 - r8_2
int32_t rdx_2
rdx_2.b = var_68 s> 0x2000
arg1[0xa] -= var_64 + r8_2
float* rcx_8 = arg3

if (rdx_2 != 0)
    rax_6 = arg3

if (rdx_2 != 0)
    rcx_8 = arg2

if (r8_2 != 0)
    if (rax == 0)
        rsi = sub_1403f7340(rax_1, 1)
    else
        rsi.b = 0f > rcx_8[1] * *rax_6 - rax_6[1] * *rcx_8
        sub_1403fe100(rax_1, rsi, 1)

var_a8.d = rax_4
var_b0.q = arg10
var_c0.q = arg9
int32_t rax_14
uint128_t zmm6_2
rax_14, zmm6_2, zmm7_2 =
    sub_140406830(arg1, rax_6, 2, zx.q(rcx_5), arg6, arg7, arg8, var_c0, 0x3f800000, 1, var_a8.d)
rsi_1 = rax_14
uint128_t zmm0_3
zmm0_3.d = _mm_cvtepi32_ps(zx.o(neg.d(1 - rsi * 2))).d f* rax_6[1]
*rcx_8 = zmm0_3.d
zmm0_3.d = _mm_cvtepi32_ps(zx.o(1 - rsi * 2)).d f* *rax_6
rcx_8[1] = zmm0_3.d
rax_16 = rcx

if (rax_16 != 0)
    zmm0_3.d = zmm7_2.d f* *arg2
    uint128_t zmm1_2
    zmm1_2.d = zmm7_2.d f* arg2[1]
    *arg2 = zmm0_3.d
    arg2[1] = zmm1_2.d
    uint128_t zmm2_1
    zmm2_1.d = zmm6_2.d f* *arg3
    zmm6_2.d = zmm6_2.d f* arg3[1]
    *arg3 = zmm2_1.d
    arg3[1] = zmm6_2.d
    zmm1_2 = *arg2
    zmm0_3.d = zmm1_2.d f- zmm2_1.d
    *arg2 = zmm0_3.d
    zmm1_2.d = zmm1_2.d f+ *arg3
    *arg3 = zmm1_2.d
    zmm2_1 = arg2[1]
    zmm0_3.d = zmm2_1.d f- arg3[1]
    arg2[1] = zmm0_3.d
    zmm2_1.d = zmm2_1.d f+ arg3[1]
    arg3[1] = zmm2_1.d
label_140407365:
    
    if (rax_16 != 0)
        if (r14.d != 2)
            sub_140408050(arg2, arg3, zmm7_2, r14.d)
        
        if (var_78 != 0)
            if (r14.d s> 0 && r14.d u>= 8)
                int32_t rax_43 = r14.d & 0x80000007
                
                if (rax_43 s< 0)
                    rax_43 = ((rax_43 - 1) | 0xfffffff8) + 1
                
                zmm1_2 = data_142d3f780
                
                do
                    int64_t i_2 = sx.q(i)
                    *(arg3 + (i_2 << 2)) ^= zmm1_2
                    int32_t rax_46 = i + 4
                    i += 8
                    int64_t rcx_20 = sx.q(rax_46)
                    *(arg3 + (rcx_20 << 2)) ^= zmm1_2
                while (i s< r14.d - rax_43)
            
            int64_t i_3 = sx.q(i)
            
            if (i_3 s< r14)
                if (r14 - i_3 s>= 4)
                    void* rax_50 = &arg3[2 + i_3]
                    int64_t i_4 = ((r14 - i_3 - 4) u>> 2) + 1
                    i_3 += i_4 << 2
                    int64_t i_1
                    
                    do
                        zmm0_3 = *(rax_50 - 8)
                        zmm1_2 = *(rax_50 - 4)
                        rax_50 += 0x10
                        *(rax_50 - 0x18) = (zmm0_3 ^ 0x80000000).d
                        zmm0_3 = *(rax_50 - 0x10)
                        *(rax_50 - 0x14) = (zmm1_2 ^ 0x80000000).d
                        zmm1_2 = *(rax_50 - 0xc) ^ 0x80000000
                        *(rax_50 - 0x10) = (zmm0_3 ^ 0x80000000).d
                        *(rax_50 - 0xc) = zmm1_2.d
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
                
                while (i_3 s< r14)
                    zmm0_3 = arg3[i_3]
                    i_3 += 1
                    arg3[i_3 - 1] = (zmm0_3 ^ 0x80000000).d

return zx.q(rsi_1)
