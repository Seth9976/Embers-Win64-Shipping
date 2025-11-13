// 函数: sub_141e92fc0
// 地址: 0x141e92fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg6
int64_t* rdi = arg1
bool cond:0 = zmm6[0] != 0f
float var_38[0x4] = *arg4
var_38[3] = 0x3f800000
int32_t result

if (cond:0)
    int64_t rbx_3 = sx.q(arg1[9].d)
    int32_t rax_5 = (rbx_3 + 1).d
    arg1[9].d = rax_5
    
    if (rax_5 s> *(arg1 + 0x4c))
        sub_1407c3b60(&arg1[8])
    
    int64_t rcx_8 = rbx_3 * 0x38
    uint64_t* rcx_9 = rcx_8 + rdi[8]
    
    if (rcx_8 == neg.q(rdi[8]))
        rcx_9 = nullptr
    else
        *(rcx_9 + 0x2c) = 0xffffffff
    
    *rcx_9 = *arg2
    rcx_9[1].d = *(arg2 + 8)
    *(rcx_9 + 0xc) = *arg3
    *(rcx_9 + 0x14) = *(arg3 + 8)
    *(rcx_9 + 0x1c) = var_38
    *(rcx_9 + 0x2c) = arg5
    result = zx.d(arg8)
    rcx_9[6].d = arg7.d
    rcx_9[3].d = zmm6[0]
    *(rcx_9 + 0x34) = result
else
    zmm6 = arg7
    int32_t rbx_1
    uint128_t zmm0
    int32_t zmm1
    int32_t zmm2
    float zmm3[0x4]
    float (* rdx_3)[0x4]
    
    if (zmm6[0] != 0f)
        int64_t r14_1 = sx.q(arg1[5].d)
        int32_t rax_1 = (r14_1 + 1).d
        arg1[5].d = rax_1
        
        if (rax_1 s> *(arg1 + 0x2c))
            sub_1405a4cf0(&arg1[4])
        
        int64_t rax_2 = rdi[4]
        rdi = &rdi[6]
        *(rax_2 + (r14_1 << 2)) = zmm6[0]
        int64_t rbx_2 = sx.q(rdi[1].d)
        int32_t rax_3 = (rbx_2 + 1).d
        rdi[1].d = rax_3
        
        if (rax_3 s> *(rdi + 0xc))
            sub_1405c4f50(rdi)
        
        zmm6 = var_38
        rbx_1 = arg5
        int64_t rdx_7 = rbx_2 * 0x30
        float (* rdx_8)[0x4] = rdx_7 + *rdi
        
        if (rdx_7 != neg.q(*rdi))
            zmm0 = *arg2
            zmm1 = *(arg2 + 4)
            zmm2 = *(arg2 + 8)
            var_38[3] = 0x3f800000
            var_38[0] = zmm0.d
            arg6 = rbx_1
            zmm3 = _mm_shuffle_ps(var_38, var_38, 0xe1)
            zmm3[0] = zmm1
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = zmm2
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            *rdx_8 = zmm3
            rdx_8[1][0].q = data_143dbb1f0
            *(rdx_8 + 0x18) = zmm6
            var_38 = zmm3
            sub_14208ca90(&arg6, &(*rdx_8)[0xa])
        
        int64_t r14_2 = sx.q(rdi[1].d)
        int32_t rax_4 = (r14_2 + 1).d
        rdi[1].d = rax_4
        
        if (rax_4 s> *(rdi + 0xc))
            sub_1405c4f50(rdi)
        
        int64_t rdx_12 = r14_2 * 0x30
        rdx_3 = rdx_12 + *rdi
        
        if (rdx_12 != neg.q(*rdi))
            zmm0 = *arg3
            zmm1 = *(arg3 + 4)
            zmm2 = *(arg3 + 8)
            goto label_141e9313f
    else
        int64_t rbx = sx.q(arg1[1].d)
        int32_t rax = (rbx + 1).d
        arg1[1].d = rax
        
        if (rax s> *(arg1 + 0xc))
            sub_1405c4f50(arg1)
        
        zmm6 = var_38
        rbx_1 = arg5
        int64_t rdx_2 = rbx * 0x30
        rdx_3 = rdx_2 + *rdi
        
        if (rdx_2 != neg.q(*rdi))
            zmm0 = *arg2
            zmm1 = *(arg2 + 4)
            zmm2 = *(arg2 + 8)
        label_141e9313f:
            var_38[3] = 0x3f800000
            var_38[0] = zmm0.d
            arg6 = rbx_1
            zmm3 = _mm_shuffle_ps(var_38, var_38, 0xe1)
            zmm3[0] = zmm1
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = zmm2
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            *rdx_3 = zmm3
            rdx_3[1][0].q = data_143dbb1f0
            *(rdx_3 + 0x18) = zmm6
            var_38 = zmm3
            sub_14208ca90(&arg6, &(*rdx_3)[0xa])
    int64_t r14_3 = sx.q(rdi[1].d)
    result = (r14_3 + 1).d
    rdi[1].d = result
    
    if (result s> *(rdi + 0xc))
        result = sub_1405c4f50(rdi)
    
    int64_t rdx_16 = r14_3 * 0x30
    int128_t* rdx_17 = rdx_16 + *rdi
    
    if (rdx_16 != neg.q(*rdi))
        zmm0 = *arg3
        zmm1 = *(arg3 + 4)
        zmm2 = *(arg3 + 8)
        var_38[3] = 0x3f800000
        var_38[0] = zmm0.d
        arg6 = rbx_1
        zmm3 = _mm_shuffle_ps(var_38, var_38, 0xe1)
        zmm3[0] = zmm1
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3[0] = zmm2
        *rdx_17 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        rdx_17[1].q = data_143dbb1f0
        *(rdx_17 + 0x18) = zmm6
        return sub_14208ca90(&arg6, rdx_17 + 0x28)

return result
