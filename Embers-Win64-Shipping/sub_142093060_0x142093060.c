// 函数: sub_142093060
// 地址: 0x142093060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
int64_t rcx = r15 * 3
int64_t rax_1 = *(*(arg1 + 0xa0) + (rcx << 2))
int64_t arg_8 = rcx
int64_t var_88 = rax_1
int32_t rcx_1
rcx_1.b = sub_140b5b8a0(rax_1.d, 0) == 0
int32_t* result

if ((var_88:4.d != 0 | rcx_1.b) == 0 || arg2 == 0)
label_14209338d:
    int32_t* rdx_5 = r15 * 0x2c
    *arg4 = *(rdx_5 + *(arg1 + 0x70))
    int64_t rax_21 = *(arg1 + 0x70)
    *arg5 = *(rdx_5 + rax_21 + 4)
    result = zx.q(*(rdx_5 + rax_21 + 0xc))
    arg5[1].d = result.d
    
    if (arg6 != 0)
        int64_t rax_22 = *(arg1 + 0x70)
        *arg6 = *(rdx_5 + rax_22 + 0x10)
        result = zx.q(*(rdx_5 + rax_22 + 0x18))
        arg6[1].d = result.d
    
    if (arg7 != 0)
        int64_t rax_23 = *(arg1 + 0x70)
        *arg7 = *(rdx_5 + rax_23 + 0x1c)
        result = zx.q(*(rdx_5 + rax_23 + 0x24))
        arg7[1].d = result.d
else
    int64_t* rbx_1 = *(arg2 + 0x20)
    int64_t r12_1
    
    if (rbx_1 == 0)
        r12_1 = 0
    else
        int64_t rax_4 = (*(*rbx_1 + 0x260))(rbx_1)
        rbx_1 = *(arg2 + 0x20)
        r12_1 = rax_4
    
    uint64_t var_68
    int64_t* rax_6
    int128_t zmm6_1
    rax_6, zmm6_1 = sub_14208af70(rbx_1[4], sub_140b63b70(&var_88, &var_68))
    uint64_t rcx_5 = var_68
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    if (r12_1 == 0 || rax_6 == 0)
        goto label_14209338d
    
    if ((*(*rax_6 + 0x260))(rax_6) == 0)
        goto label_14209338d
    
    void* rax_10 = (*(*rax_6 + 0x260))(rax_6)
    void* rbx_4 = rax_10
    
    if (rax_10 != 0)
        void* rax_11 = sub_14256a090()
        void* rcx_8 = *(rbx_4 + 0x10)
        int64_t rdx_2 = sx.q(*(rax_11 + 0x38))
        
        if (rdx_2.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rdx_2 << 3)) == rax_11 + 0x30)
            void* rax_13 = *(rbx_4 + 0x250)
            
            if (rax_13 != 0)
                rbx_4 = rax_13
    
    void* rax_14 = *(rbx_4 + 0x130)
    float var_78
    int32_t var_74
    float var_70
    int32_t var_60
    int32_t* rax_15
    float zmm1_1[0x4]
    
    if (rax_14 == 0)
        var_60 = data_143dbb200
        rax_15 = &var_68
        var_68 = data_143dbb1f8.q
    else
        zmm1_1 = *(rax_14 + 0x1d0)
        rax_15 = &var_78
        var_78 = zmm1_1[0]
        uint128_t zmm0 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        var_70 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        var_74 = zmm0.d
    
    int32_t rax_17 = rax_15[2]
    int64_t rcx_10 = arg_8
    *arg5 = *rax_15
    arg5[1].d = rax_17
    result = arg4
    *result = *(*(arg1 + 0xa0) + (rcx_10 << 2) + 8)
    
    if (arg7 != 0 || arg6 != 0)
        if (r15.d != 0)
            result = zx.q(*(arg1 + 0xa8) - 1)
        
        if (r15.d == 0 || r15.d == result.d)
            if (arg6 != 0)
                result = nullptr
                *arg6 = 0
                arg6[1].d = 0
            
            if (arg7 != 0)
                result = nullptr
                *arg7 = 0
                arg7[1].d = 0
        else
            int128_t var_48_1 = zmm6_1
            sub_142093060(arg1, arg2, zx.q((r15 - 1).d), &arg_8, &var_68, 0, 0)
            int32_t arg_18
            sub_142093060(arg1, arg2, zx.q((r15 + 1).d), &arg_18, &var_78, 0, 0)
            float zmm5_1[0x4] = 0x3f800000
            float zmm0_1[0x4] = arg5[1].d
            int64_t zmm2_1 = *arg5
            zmm6_1.d = var_70.d f- zmm0_1[0]
            zmm1_1 = *(arg5 + 4)
            float zmm3 = var_78 f- zmm2_1.d
            int128_t zmm7
            zmm7.d = var_74.d f- zmm1_1[0]
            zmm0_1[0] = zmm0_1[0] f- var_60
            zmm1_1[0] = zmm1_1[0] f- var_68:4.d
            zmm2_1.d = zmm2_1.d f- var_68.d
            int64_t zmm4_1
            zmm4_1.d = 1f f- *(arg1 + 0xb8)
            zmm6_1.d = zmm6_1.d f+ zmm0_1[0]
            zmm0_1 = arg_18
            zmm7.d = zmm7.d f+ zmm1_1[0]
            zmm0_1[0] = zmm0_1[0] f- arg_8.d
            zmm2_1.d = zmm4_1.d f* (zmm3 f+ zmm2_1.d)
            zmm3 = zmm4_1.d f* zmm7.d
            zmm4_1.d = zmm4_1.d f* zmm6_1.d
            zmm5_1[0] = 1f / __maxss_xmmss_memss(zmm0_1[0], 0x38d1b717)[0]
            zmm0_1 = zx.o(var_88)
            zmm5_1[0] = zmm5_1[0] f* zmm2_1.d
            zmm2_1.d = zmm5_1[0].q.d f* zmm3
            zmm5_1[0] = zmm5_1[0] f* zmm4_1.d
            zmm0_1[0] = zmm5_1[0]
            float temp0_4[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
            float result_1 = zmm5_1[0]
            temp0_4[0] = zmm2_1.d
            result = zx.q(result_1)
            float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
            zmm2_1 = temp0_5[0].q
            
            if (arg6 != 0)
                *arg6 = temp0_5.q
                arg6[1].d = result.d
            
            if (arg7 != 0)
                *arg7 = zmm2_1
                arg7[1].d = result.d

return result
