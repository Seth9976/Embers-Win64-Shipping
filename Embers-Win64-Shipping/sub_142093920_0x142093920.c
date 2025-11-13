// 函数: sub_142093920
// 地址: 0x142093920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x98)
int64_t r13 = sx.q(arg3)
int64_t rcx_1 = r13 * 3
int64_t arg_8 = rcx_1
int32_t* r15 = rax + (rcx_1 << 2)
int32_t rcx_2
rcx_2.b = sub_140b5b8a0(*(rax + (rcx_1 << 2)), 0) == 0
int32_t* result

if ((r15[1] != 0 | rcx_2.b) == 0 || arg2 == 0)
label_142093c7b:
    int64_t rdx_8 = r13 * 5
    *arg4 = *(*(arg1 + 0x70) + (rdx_8 << 2))
    result = *(arg1 + 0x70)
    *arg5 = result[rdx_8 + 1]
    
    if (arg6 != 0)
        result = *(arg1 + 0x70)
        *arg6 = result[rdx_8 + 2]
    
    if (arg7 != 0)
        result = *(arg1 + 0x70)
        *arg7 = result[rdx_8 + 3]
else
    int64_t* rbx_1 = *(arg2 + 0x20)
    int64_t r14_1
    
    if (rbx_1 == 0)
        r14_1 = 0
    else
        int64_t rax_3 = (*(*rbx_1 + 0x260))(rbx_1)
        rbx_1 = *(arg2 + 0x20)
        r14_1 = rax_3
    
    int64_t var_58
    int64_t* rax_5 = sub_14208af70(rbx_1[4], sub_140b63b70(r15, &var_58))
    int64_t rcx_6 = var_58
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (r14_1 == 0 || rax_5 == 0)
        goto label_142093c7b
    
    if ((*(*rax_5 + 0x260))(rax_5) == 0)
        goto label_142093c7b
    
    void* rax_9 = (*(*rax_5 + 0x260))(rax_5)
    void* rbx_4 = rax_9
    
    if (rax_9 != 0)
        void* rax_10 = sub_14256a090()
        void* rcx_9 = *(rbx_4 + 0x10)
        int64_t rdx_2 = sx.q(*(rax_10 + 0x38))
        
        if (rdx_2.d s<= *(rcx_9 + 0x38) && *(*(rcx_9 + 0x30) + (rdx_2 << 3)) == rax_10 + 0x30)
            void* rax_12 = *(rbx_4 + 0x250)
            
            if (rax_12 != 0)
                rbx_4 = rax_12
    
    char rsi_1 = *(arg1 + 0x90)
    float zmm0_1[0x4]
    float zmm1_1[0x4]
    float var_80
    int64_t var_74
    int64_t var_68
    
    if (rsi_1 u< 3)
        void* rax_19 = *(rbx_4 + 0x130)
        int64_t* rax_20
        
        if (rax_19 == 0)
            int32_t var_6c_2 = data_143dbb200
            rax_20 = &var_74
            var_74 = data_143dbb1f8.q
        else
            zmm1_1 = *(rax_19 + 0x1d0)
            rax_20 = &var_80
            var_80 = zmm1_1[0]
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            float var_78_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            float var_7c_1 = temp0_3[0]
        
        int32_t var_60_1 = rax_20[1].d
        var_68 = *rax_20
        zmm0_1 = *(&var_68 + (zx.q(rsi_1) << 2))
    else
        void* rbx_5 = *(rbx_4 + 0x130)
        int32_t rax_16
        
        if (rbx_5 == 0)
            zmm0_1 = zx.o(data_143dbb208)
            rax_16 = data_143dbb210
        else
            zmm1_1 = *(rbx_5 + 0x1c0)
            uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_5 + 0x180), zmm1_1, 4))
            float var_48[0x4] = zmm1_1
            
            if (temp0_2 != 0)
                *(rbx_5 + 0x180) = zmm1_1
                int32_t* rax_14 = sub_140adf5d0(&var_48, &var_68)
                *(rbx_5 + 0x190) = *rax_14
                *(rbx_5 + 0x198) = rax_14[2]
            
            zmm0_1 = zx.o(*(rbx_5 + 0x190))
            rax_16 = *(rbx_5 + 0x198)
        
        var_80.q = zmm0_1.q
        var_74 = var_80.q
        int32_t var_6c_1 = rax_16
        zmm0_1 = sub_140ad3dc0(&var_74, &var_58)[zx.q(rsi_1) - 3]
    *arg5 = zmm0_1[0]
    result = arg4
    *result = *(*(arg1 + 0x98) + (arg_8 << 2) + 8)
    
    if (arg7 != 0 || arg6 != 0)
        if (r13.d != 0)
            result = zx.q(*(arg1 + 0xa0) - 1)
        
        if (r13.d == 0 || r13.d == result.d)
            if (arg6 != 0)
                result = nullptr
                *arg6 = 0f
            
            if (arg7 != 0)
                result = nullptr
                *arg7 = 0f
        else
            float var_84
            float arg_18
            sub_142093920(arg1, arg2, zx.q((r13 - 1).d), &var_84, &arg_18, 0, 0)
            float var_88
            result = sub_142093920(arg1, arg2, zx.q((r13 + 1).d), &var_88, &arg_8, 0, 0)
            zmm1_1 = *arg5
            float zmm2_1 = zmm1_1[0]
            float zmm0_2 = arg_8.d - zmm1_1[0]
            zmm1_1 = 0x3f800000
            zmm2_1 = zmm2_1 - arg_18
            zmm1_1[0] = 1f f- *(arg1 + 0x88)
            zmm2_1 =
                (zmm2_1 + zmm0_2) * zmm1_1[0] / __maxss_xmmss_memss(var_88 - var_84, 0x38d1b717)
            
            if (arg6 != 0)
                *arg6 = zmm2_1
            
            if (arg7 != 0)
                *arg7 = zmm2_1

return result
