// 函数: sub_14122b5e0
// 地址: 0x14122b5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x168) == 0)
    return 

uint64_t rax
rax.b = *(arg3 + 0x13c) - 1

if (rax.b u> 1 || *(arg1 + 0x190) == 0)
    return 

int64_t var_120_1 = 0
void var_178
(*(*arg3 + 0x68))(arg3, &var_178)
float zmm2[0x4] = arg3[0x19].d
int64_t rax_2 = *arg3
zmm2[0] = zmm2[0] f* arg3[6].d
zmm2[0] = zmm2[0] f* *(arg3 + 0x34)
float zmm1 = zmm2[0] f* arg3[7].d
zmm2[0] = zmm2[0] f* *(arg3 + 0x3c)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
temp0_1[0] = zmm2[0]
float zmm0[0x4] = *(arg3 + 0x20)
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm1
float var_1c8_1[0x4] = zmm0
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_3[0] = zmm2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
float var_228[0x4] = temp0_4
float var_1b8_1[0x4] = temp0_4
(*(rax_2 + 0x18))(arg3)
int64_t rax_3 = *arg3
float var_1d8 = zmm0[0]
int32_t var_15c
float var_1a8_1 = var_15c[0]
var_228[3] = 0x3f800000
float zmm4_1[0x4] = var_228
float var_158
zmm4_1[0] = var_158
int32_t var_138
float var_188_1 = var_138[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
int32_t var_154
temp0_5[0] = var_154[0]
float var_134
float var_184_1 = var_134
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
int32_t var_150
temp0_6[0] = var_150[0]
int32_t var_12c
float var_1a4_1 = var_12c[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
var_228 = temp0_7
float var_198_1[0x4] = temp0_7

if ((*(rax_3 + 0x30))(arg3).b == 0)
    int32_t var_180_2 = 0
else
    int32_t var_180_1 = 0x3f800000

uint32_t rcx_3 = zx.d(*(arg3 + 0x13c))
void* rbx_1

if (rcx_3 == 1)
    int64_t* rcx_6 = *(arg4 + 0x5150)
    
    if ((arg3[0x27].b & 0x30) != 0)
        void* var_1e8
        sub_1419a2ec0(rcx_6, &var_1e8, &data_143e870e0, 0)
        uint64_t var_1e0
        rax = var_1e0
        rbx_1 = var_1e8
    else
        void* var_1f8
        sub_1419a2ec0(rcx_6, &var_1f8, &data_143e86f80, 0)
        uint64_t var_1f0
        rax = var_1f0
        rbx_1 = var_1f8
    
label_14122b7dc:
    
    if (rbx_1 != 0)
        int64_t rdx_5 = sx.q(*(rbx_1 + 0x10c))
        int64_t* r14_1 = *(rax + 0x10)
        int64_t rax_4 = r14_1[3]
        
        if (*(rax_4 + (rdx_5 << 3)) == 0)
            sub_1419ccf30(r14_1, rdx_5.d)
            rax_4 = r14_1[3]
        
        void* r15_2 = *(rax_4 + (rdx_5 << 3))
        *(arg2 + 0x1b0) = r15_2
        sub_14198aa60(r15_2)
        void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_5 = &rcx_11[3]
        
        if (rax_5 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rcx_11[3]
        
        *(arg2 + 0x30) = rax_5
        void**** rax_6 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_6 = rcx_11
        *(arg2 + 8) = &rcx_11[1]
        rcx_11[1] = 0
        *rcx_11 = &data_142dd5b40
        rcx_11[2] = r15_2
        int64_t* rcx_15 = data_143f0f180
        void* arg_8
        (*(*rcx_15 + 0xf8))(rcx_15, &arg_8, &var_1d8, &data_143e82440, 1, 1)
        void* rax_9 = arg_8
        var_228[0].q = rax_9
        
        if (rax_9 != 0)
            *(rax_9 + 8) += 1
        
        sub_1405d1550(&arg_8)
        *(arg1 + 0x16c) = 1 - *(arg1 + 0x16c)
        int64_t var_118 = 0
        sub_141227d40(arg1, &var_118)
        sub_1412392c0(arg1 + 0x198, *(arg1 + 0xa8))
        sub_14123aa00(rbx_1, arg2, &var_118, &var_228)
        sub_1419cd1c0(arg2, rbx_1, 8, 8, 8)
        sub_141245b70(rbx_1, arg2, &var_118)
        sub_1405d1550(&var_118)
        sub_1405d1550(&var_228)
else if (rcx_3 == 2)
    int64_t* rcx_5 = *(arg4 + 0x5150)
    
    if ((arg3[0x27].b & 0x30) != 0)
        void* var_208
        sub_1419a2ec0(rcx_5, &var_208, &data_143e873a0, 0)
        uint64_t var_200
        rax = var_200
        rbx_1 = var_208
    else
        void* var_218
        sub_1419a2ec0(rcx_5, &var_218, &data_143e87240, 0)
        uint64_t var_210
        rax = var_210
        rbx_1 = var_218
    
    goto label_14122b7dc
