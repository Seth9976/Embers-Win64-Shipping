// 函数: sub_141729130
// 地址: 0x141729130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = arg3
float zmm5 = *(arg4 + 4) f- *(arg3 + 4)
int128_t zmm2
zmm2.d = (*(arg5 + 8)).d f- arg3[1].d
int128_t zmm4
zmm4.d = (*arg5).d f- *arg3
uint128_t zmm3
zmm3.d = (*(arg4 + 8)).d f- arg3[1].d
int128_t zmm6
zmm6.d = (*arg4).d f- *arg3
int128_t zmm7
zmm7.d = (*(arg5 + 4)).d f- *(arg3 + 4)
int128_t zmm8 = zmm2
zmm2.d = zmm2.d f* zmm6.d
zmm8.d = zmm8.d f* zmm5
int64_t zmm0
zmm0.d = zmm7.q.d f* zmm3.d
int128_t zmm9
zmm9.d = zmm4.d f* zmm3.d
zmm8.d = zmm8.d f- zmm0.d
zmm7.d = zmm7.d f* zmm6.d
zmm9.d = zmm9.d f- zmm2.d
zmm4.d = zmm4.d f* zmm5
zmm7.d = zmm7.d f- zmm4.d
zmm0.d = zmm8.q.d f* zmm8.d
zmm2.d = zmm9.d f* zmm9.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm7.d f* zmm7.d
int32_t var_e8
float var_e0_1
float temp0_1

if (not(zmm2.d f< 9.99999975e-05f))
    temp0_1 = _mm_sqrt_ss(0, zmm2.d)
    zmm0.d = 1f / temp0_1
    zmm8.d = zmm8.d f* zmm0.d
    zmm9.d = zmm9.d f* zmm0.d
    zmm7.d = zmm7.d f* zmm0.d
    var_e8 = zmm8.d
    int32_t var_e4_1 = zmm9.d
    var_e0_1 = zmm7.d

void* const* result

if (zmm2.d f< 9.99999975e-05f || temp0_1 <= 9.99999994e-09f)
    result.b = 1
else
    int32_t* rdi_1 = *arg1
    uint128_t zmm10 = zx.o(var_e8.q)
    void** const var_b0_1 = &data_142fc47b8
    float rax = arg3[1].d
    int64_t var_a0 = *arg3
    zmm3 = *arg1[1]
    int32_t var_d8 = 0x7f7fffff
    int32_t var_128_1 = rdi_1[0x10].d
    int32_t var_a8_1 = 0x1000202
    char var_a4_1 = 0
    uint64_t var_94_1 = zmm10.q
    uint64_t var_f8 = 0
    int32_t var_f0_1 = 0
    var_e8.q = 0
    int32_t var_e0_2 = 0
    void var_88
    char rax_2
    uint64_t zmm7_1
    rax_2, zmm7_1 = sub_14174b4e0(&var_a0, &rdi_1[0xa], &rdi_1[0xd], zmm3, var_128_1, &var_d8, 
        &var_f8, &var_e8, &var_88)
    int32_t zmm9_1 = var_d8
    
    if (rax_2 == 0)
        goto label_1417294ef
    
    float var_d0
    uint64_t zmm0_1
    
    if (zmm9_1 f!= zmm7_1.d)
        var_128_1.q = arg5
        float zmm6_3
        zmm6_3, zmm9_1 = sub_1415c64e0(&var_d0, &var_f8, r14, arg4, var_128_1, &var_f8)
        float var_cc
        float zmm2_2 = var_f8:4.d - var_cc
        float zmm1_2 = var_f8.d - var_d0
        int32_t var_c8
        zmm0_1.d = var_f0_1.d f- var_c8
        zmm0_1.d = zmm0_1.d f* zmm0_1.d
        *arg1[3] = zmm2_2 * zmm2_2 + zmm1_2 * zmm1_2 f+ zmm0_1.d <= zmm6_3
    label_1417294ef:
        
        if (*arg1[3] != 0)
            int32_t* r8_3 = *arg1
            
            if (not(zmm9_1 f>= *r8_3))
                int32_t temp0_2
                int32_t temp1_1
                temp0_2:temp1_1 = sx.q(arg2)
                int32_t rax_11 = (temp1_1 - temp0_2) s>> 1
                char* rcx_5 = sx.q(rax_11)
                void* rax_12
                
                if (rax_11 s>= 0)
                    rax_12 = *(r8_3 + 0x20)
                
                if (rax_11 s< 0 || rcx_5.d s>= *(rax_12 + 0x18)
                        || *(rcx_5 + *(rax_12 + 0x10)) != 0xff)
                    *(r8_3 + 4) = var_f8
                    zmm0_1 = var_e8.q
                    r8_3[3] = var_f0_1
                    int32_t* rcx_6 = *arg1
                    *(rcx_6 + 0x10) = zmm0_1
                    rcx_6[6] = var_e0_2
                    **arg1 = zmm9_1
                    (*arg1)[7] = arg2
                    *arg1[1] = zmm9_1
        
        result.b = 1
    else
        uint64_t zmm6_1 = rdi_1[0xa]
        uint64_t zmm8_1 = rdi_1[0xb]
        zmm7_1 = rdi_1[0xc]
        var_128_1.q = arg5
        zmm0_1.d = zmm6_1.d f- var_a0.d
        zmm0_1.d = zmm0_1.d f* var_94_1.d
        float zmm5_1 =
            (zmm8_1.d f- var_a0:4.d) f* var_94_1:4.d f+ zmm0_1.d + (zmm7_1.d - rax) * var_e0_1
        zmm0_1.d = zmm6_1.d f- zmm5_1 f* var_94_1.d
        var_d0 = zmm0_1.d
        zmm0_1.d = zmm8_1.d f- zmm5_1 f* var_94_1:4.d
        int32_t var_cc_1 = zmm0_1.d
        zmm0_1.d = zmm7_1.d f- zmm5_1 * var_e0_1
        int32_t var_c8_1 = zmm0_1.d
        float var_c0
        float zmm6_2
        float zmm7_2
        float zmm8_2
        int64_t zmm10_1
        zmm6_2, zmm7_2, zmm8_2, zmm9_1, zmm10_1 =
            sub_1415c64e0(&var_c0, &var_d0, r14, arg4, var_128_1, &rdi_1[0xa])
        float var_bc
        zmm8_2 = zmm8_2 - var_bc
        zmm6_2 = zmm6_2 - var_c0
        float var_b8
        zmm7_2 = zmm7_2 - var_b8
        
        if (zmm8_2 * zmm8_2 + zmm6_2 * zmm6_2 + zmm7_2 * zmm7_2 f> *arg1[2])
            goto label_1417294ef
        
        zmm0_1 = var_c0.q
        *rdi_1 = 0
        int32_t* rcx_2 = *arg1
        *(rcx_2 + 4) = zmm0_1
        rcx_2[3] = var_b8
        int32_t* rax_6 = *arg1
        *(rax_6 + 0x10) = zmm10_1
        rax_6[6] = var_e0_1
        *(*arg1 + 0x1c) = arg2
        result.b = 0

return result
