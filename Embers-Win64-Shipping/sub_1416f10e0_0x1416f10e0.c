// 函数: sub_1416f10e0
// 地址: 0x1416f10e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int128_t* rbx = arg6
int128_t zmm1 = rbx[1]
uint128_t var_1a8 = *rbx
int128_t* var_220 = rbx
int128_t var_198 = zmm1
float var_224 = 0f
int32_t var_228 = 0xffffffff
uint128_t var_188 = rbx[2]
int128_t var_178 = rbx[3]
uint128_t var_168 = rbx[4]
int128_t var_158 = rbx[5]
uint128_t var_148 = rbx[6]
uint128_t var_138 = rbx[7]
int128_t var_128 = rbx[8]
zmm1 = rbx[0xa]
uint128_t var_118 = rbx[9]
int128_t var_108 = zmm1
uint128_t var_f8 = rbx[0xb]
int128_t var_e8 = rbx[0xc]
uint128_t var_d8 = rbx[0xd]
var_148.q = rbx[6].q
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
var_148:8.q = *(rbx + 0x68)
int32_t rax_5 = data_143dbb200
var_118:8.d = rax_5
var_128:0xc.d = rax_5
var_118:0xc.d = arg5.d
var_118.q = zmm0.q
var_128:4.q = zmm0.q
float var_c8[0x3][0x4]
float (* rax_6)[0x4]
float zmm0_1[0x8]
float zmm1_1[0x8]
uint32_t zmm2[0x8]
float zmm3[0x8]
float zmm6_1[0x4]
rax_6, zmm0_1, zmm1_1, zmm2, zmm3, zmm6_1 = sub_140ad7d70(arg4, &var_c8, arg2)
uint32_t r14 = *(arg3 + 0x18)
bool cond:0 = r14 s<= data_1439b8d70
zmm0_1[0].o = *rax_6
float var_1d8[0x4] = zmm0_1[0].o
zmm1_1[0].o = rax_6[1]
float var_1c8[0x4] = zmm1_1[0].o
zmm0_1[0].o = rax_6[2]
int128_t var_1b8 = zmm0_1[0].o
void* var_210
uint32_t var_208
int32_t* result
int32_t var_240

if (cond:0 || *(arg1 + 0xc) == 0)
    result = zx.q(arg1[1].b)
    void* var_268
    
    if (result.b != 6)
        if (result.b == 2)
            if (r14 s<= 0)
                goto label_1416f1732
            
            int128_t* r9_5 = *(arg3 + 0x28)
            int32_t* r8_11 = &var_1d8
            
            if (data_1439b8d6c == 0)
                result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e96f0(arg1 + 0x1c, &arg1[2], r8_11, 
                    r9_5, zmm1_1, zmm3, &var_228, &var_118:0xc, r14)
            else
                var_268.d = zmm6_1[0]
                result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e9800(arg1 + 0x1c, &arg1[2], r8_11, 
                    r9_5, zmm0_1, zmm3, var_268.d, &var_224, &var_118, r14)
        else if (result.b != 0)
            if (result.b != 1 || r14 s<= 0)
                goto label_1416f1732
            
            int128_t* r9_7 = *(arg3 + 0x28)
            float (* r8_13)[0x4] = &var_1d8
            
            if (data_1439b8d6c == 0)
                result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e8c20(&arg1[2], arg1 + 0x1c, r8_13, 
                    r9_7, zmm1_1, zmm3, &var_228, &var_118:0xc, r14)
            else
                var_268.d = zmm6_1[0]
                result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e8ea0(&arg1[2], arg1 + 0x1c, r8_13, 
                    r9_7, var_268.d, &var_224, &var_118, r14)
        else
            if (r14 s<= 0)
                goto label_1416f1732
            
            zmm0_1[0].o = *(arg1 + 0x1c)
            int32_t* r8_12 = &var_1d8
            int128_t* r9_6 = *(arg3 + 0x28)
            int128_t** rcx_16 = &var_220
            var_220.d = zmm0_1[0]
            
            if (data_1439b8d6c == 0)
                result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e9950(rcx_16, &arg1[2], r8_12, r9_6, 
                    zmm1_1, zmm2, &var_228, &var_118:0xc, r14)
            else
                var_268.d = zmm6_1[0]
                result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e9a60(rcx_16, &arg1[2], r8_12, r9_6, 
                    zmm0_1, zmm3, var_268.d, &var_224, &var_118, r14)
    else if (r14 s<= 0)
    label_1416f1732:
        int32_t rbx_3 = 0
        
        if (r14 s> 0)
            int64_t r12_3 = 0
            
            do
                int128_t* r9_9 = *(arg3 + 0x28) + r12_3
                int128_t* r8_14 = &var_1d8
                
                if (data_1439b8d6c == 0)
                    int128_t* var_260_15 = &var_1a8
                    var_268.d = zmm6_1[0]
                    result, zmm0_1, zmm1_1, zmm2, zmm3, zmm6_1 =
                        sub_1416f1b90(arg1, arg2, r8_14, r9_9, var_268)
                    int32_t rcx_19 = var_228
                    
                    if (result.b != 0)
                        rcx_19 = rbx_3
                    
                    var_228 = rcx_19
                else
                    var_268.d = zmm6_1[0]
                    result, zmm0_1, zmm1_1, zmm2, zmm3, zmm6_1 =
                        sub_1416f1c80(arg1, arg2, r8_14, r9_9, var_268.d, &var_224, &var_1a8)
                
                rbx_3 += 1
                r12_3 += 0xc
            while (rbx_3 s< r14)
        
        rbx = var_220
    else
        int128_t* r10_2 = *(arg3 + 0x28)
        
        if (data_1439b8d6c == 0)
            result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e91a0(&arg1[2], arg1 + 0x1c, arg1 + 0x34, 
                &arg1[5], zmm3, &arg1[8], &var_1d8, r10_2, &var_228, &var_118:0xc, r14)
        else
            var_240.q = &var_118
            result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e9520(&arg1[2], arg1 + 0x1c, arg1 + 0x34, 
                &arg1[5], &arg1[8], &var_1d8, r10_2, zmm6_1[0], &var_224, var_240, r14)
else
    float var_98[0x3][0x4]
    float (* rax_7)[0x4] = sub_140ad7d70(arg2, &var_98, arg4)
    int64_t r8_2 = *arg1
    int32_t* rax_8 = (*(r8_2 + 0x28))(arg1, &var_c8, r8_2)
    void* var_200
    int64_t* r9 = &var_200
    zmm3, zmm6_1 = sub_14003bce0(rax_7, rax_8, &rax_8[3], r9, &var_210)
    void* rcx_4 = *(arg3 + 0x40)
    int64_t rbx_2 = 0
    void* var_1f0 = var_200
    void* r13_1 = nullptr
    void* zmm0_2
    zmm0_2.d = var_200.d.d f- zmm6_1[0]
    var_1f0:4.d = var_1f0:4.d - zmm6_1[0]
    var_1f0.d = zmm0_2.d
    int32_t var_1f8
    zmm0_2.d = var_1f8.d f- zmm6_1[0]
    int32_t var_204_1 = 0
    void* var_1e4_1
    var_1e4_1:4.d = var_210:4.d + zmm6_1[0]
    int32_t var_1e8_2 = zmm0_2.d
    zmm0_2.d = var_210.d.d f+ zmm6_1[0]
    var_210 = nullptr
    var_1e4_1.d = zmm0_2.d
    zmm0_2.d = var_208.d f+ zmm6_1[0]
    int32_t var_1dc_2 = zmm0_2.d
    zmm0_1, zmm1_1, zmm2 = sub_1415c6210(rcx_4, &var_200, &var_1f0, r9.b)
    uint32_t r12_1 = var_1f8
    void* rax_11 = var_200
    var_208 = r12_1
    void* r14_1
    
    if (r12_1 != 0)
        sub_140638750(&var_210, r12_1, 0)
        r13_1 = var_210
        zmm0_1 = memcpy(r13_1, var_200, r12_1 << 2)
        rax_11 = var_200
        r14_1 = r13_1
        r12_1 = var_208
    else
        r14_1 = nullptr
    
    if (rax_11 != 0)
        zmm0_1, zmm1_1 = sub_140a74f90(rax_11)
    
    char rax_12 = arg1[1].b
    
    if (rax_12 == 6)
        if (r12_1 s<= 0)
            goto label_1416f1493
        
        int64_t r10_1 = *(arg3 + 0x28)
        
        if (data_1439b8d6c == 0)
            var_240.q = &var_118:0xc
            result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e8ff0(&arg1[2], arg1 + 0x1c, arg1 + 0x34, 
                &arg1[5], zmm2, &arg1[8], &var_1d8, r10_1, r13_1, &var_228, var_240, r12_1)
        else
            int32_t var_238
            var_238.q = &var_118
            var_240.q = &var_224
            result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e9340(&arg1[2], arg1 + 0x1c, arg1 + 0x34, 
                &arg1[5], &arg1[8], &var_1d8, r10_1, r13_1, zmm6_1[0], var_240, var_238, r12_1)
    else if (rax_12 != 1 || r12_1 s<= 0)
    label_1416f1493:
        int64_t r13_2 = sx.q(r12_1) << 2
        result = r14_1 + r13_2
        uint64_t r13_3 = r13_2 u>> 2
        
        if (r14_1 u> result)
            r13_3 = 0
        
        if (r13_3 != 0)
            do
                int128_t* r8_9 = &var_1d8
                int64_t r12_2 = sx.q(*r14_1)
                int128_t* r9_3 = *(arg3 + 0x28) + r12_2 * 0xc
                int64_t* var_268_1
                
                if (data_1439b8d6c == 0)
                    int128_t* var_260_5 = &var_1a8
                    var_268_1.d = zmm6_1[0]
                    result, zmm0_1, zmm1_1, zmm2, zmm3, zmm6_1 =
                        sub_1416f1b90(arg1, arg2, r8_9, r9_3, var_268_1)
                    int32_t rcx_12 = var_228
                    
                    if (result.b != 0)
                        rcx_12 = r12_2.d
                    
                    var_228 = rcx_12
                else
                    var_268_1.d = zmm6_1[0]
                    result, zmm0_1, zmm1_1, zmm2, zmm3, zmm6_1 =
                        sub_1416f1c80(arg1, arg2, r8_9, r9_3, var_268_1.d, &var_224, &var_1a8)
                r14_1 += 4
                rbx_2 += 1
            while (rbx_2 != r13_3)
        
        r13_1 = var_210
    else
        int64_t r9_2 = *(arg3 + 0x28)
        int32_t* r8_8 = &var_1d8
        
        if (data_1439b8d6c == 0)
            result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e8ae0(&arg1[2], arg1 + 0x1c, r8_8, r9_2, 
                zmm1_1, zmm3, r13_1, &var_228, &var_118:0xc, r12_1)
        else
            result, zmm0_1, zmm1_1, zmm2, zmm3 = sub_1400e8d30(&arg1[2], arg1 + 0x1c, r8_8, r9_2, 
                zmm3, r13_1, zmm6_1[0], &var_224, &var_118, r12_1)
    
    if (r13_1 != 0)
        result, zmm0_1, zmm1_1 = sub_140a74f90(r13_1)
    
    rbx = var_220
float result_1

if (data_1439b8d6c == 0)
    zmm0_1[0].o = var_118:0xc.d
    
    if (not(zmm0_1[0] f>= *(rbx + 0x9c)))
        float zmm5_1[0x4] = var_1d8
        zmm1_1[0].o = zx.o(0)
        int64_t rcx_21 = sx.q(var_228) * 3
        int64_t rax_20 = *(arg3 + 0x28)
        zmm0_1[0].o = *(rax_20 + (rcx_21 << 2) + 8)
        zmm2[0].o = *(rax_20 + (rcx_21 << 2) + 4)
        float temp0_47[0x4] = _mm_unpacklo_ps(*(rax_20 + (rcx_21 << 2)), zmm0_1[0].q)
        zmm2[0].o = _mm_unpacklo_ps(zmm2[0].o, zmm1_1[0].q)
        zmm1_1[0].o = zmm5_1
        float temp0_49[0x4] = _mm_unpacklo_ps(temp0_47, zmm2[0].q)
        zmm2[0].o = zmm5_1
        zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, zmm5_1, 0xc9)
        zmm3[0].o = temp0_49
        zmm2[0].o = _mm_shuffle_ps(zmm2[0].o, zmm5_1, 0xd2)
        zmm0_1[0].o = temp0_49
        zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, temp0_49, 0xc9)
        zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm2[0].o)
        zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, temp0_49, 0xd2)
        zmm3[0].o = _mm_mul_ps(zmm3[0].o, zmm1_1[0].o)
        float temp0_56[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        zmm3[0].o = _mm_sub_ps(zmm3[0].o, zmm0_1[0].o)
        zmm3[0].o = _mm_add_ps(zmm3[0].o, zmm3[0].o)
        float zmm4_1[0x4] = zmm3[0].o
        float temp0_59[0x4] = _mm_mul_ps(temp0_56, zmm3[0].o)
        float temp0_60[0x4] = _mm_shuffle_ps(zmm4_1, zmm3[0].o, 0xd2)
        zmm0_1[0].o = zmm3[0].o
        zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, zmm3[0].o, 0xc9)
        float temp0_62[0x4] = _mm_mul_ps(temp0_60, zmm1_1[0].o)
        zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm2[0].o)
        float temp0_64[0x4] = _mm_add_ps(temp0_59, temp0_49)
        float temp0_67[0x4] =
            __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_62, zmm0_1[0].o), temp0_64), var_1c8)
        zmm0_1[0].o = temp0_67
        zmm1_1[0].o = temp0_67
        zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, temp0_67, 0xaa)
        float var_208_1 = zmm0_1[0]
        zmm0_1[0].o = temp0_67
        int64_t rax_22 = *arg1
        zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, temp0_67, 0x55)
        zmm0_1[0].o = _mm_unpacklo_ps(zmm0_1[0].o, zmm1_1[0].q)
        var_220 = (zmm0_1[0].o).q
        (*(rax_22 + 0x20))(arg1, &var_220, &var_210)
        zmm1_1[0].o = var_208_1
        zmm2[0].o = zx.o(0)
        zmm6_1 = var_220.d
        *(rbx + 0x9c) = zmm0_1[0]
        float zmm5_3[0x4] = *arg2
        zmm0_1[0].o = var_220:4.d
        zmm0_1[0].o = _mm_unpacklo_ps(zmm0_1[0].o, 0)
        float temp0_72[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
        float temp0_73[0x4] = _mm_unpacklo_ps(zmm6_1, zmm1_1[0].q)
        zmm1_1[0].o = zmm5_3
        float temp0_74[0x4] = _mm_unpacklo_ps(temp0_73, zmm0_1[0].q)
        zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, zmm5_3, 0xd2)
        zmm0_1[0].o = temp0_74
        zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, temp0_74, 0xc9)
        zmm2[0].o = temp0_74
        zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm1_1[0].o)
        zmm2[0].o = _mm_shuffle_ps(zmm2[0].o, temp0_74, 0xd2)
        zmm2[0].o = _mm_mul_ps(zmm2[0].o, temp0_72)
        float temp0_80[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xff)
        zmm2[0].o = _mm_sub_ps(zmm2[0].o, zmm0_1[0].o)
        zmm2[0].o = _mm_add_ps(zmm2[0].o, zmm2[0].o)
        zmm0_1[0].o = zmm2[0].o
        float temp0_83[0x4] = _mm_mul_ps(temp0_80, zmm2[0].o)
        zmm3[0].o = zmm2[0].o
        zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, zmm2[0].o, 0xc9)
        zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm2[0].o, 0xd2)
        zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm1_1[0].o)
        zmm3[0].o = _mm_mul_ps(zmm3[0].o, temp0_72)
        float temp0_88[0x4] = _mm_add_ps(temp0_83, temp0_74)
        zmm3[0].o = _mm_sub_ps(zmm3[0].o, zmm0_1[0].o)
        zmm2[0].o = var_210:4.d
        zmm3[0].o = _mm_add_ps(zmm3[0].o, temp0_88)
        zmm6_1 = var_210.d
        zmm3[0].o = __addps_xmmps_memps(zmm3[0].o, arg2[1])
        zmm0_1[0].o = zmm3[0].o
        zmm1_1[0].o = zmm3[0].o
        zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, zmm3[0].o, 0xaa)
        float var_1f8_2 = zmm0_1[0]
        zmm0_1[0].o = zmm3[0].o
        zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, zmm3[0].o, 0x55)
        zmm0_1[0].o = _mm_unpacklo_ps(zmm0_1[0].o, zmm1_1[0].q)
        zmm1_1[0].o = zx.o(0)
        rbx[9].q = (zmm0_1[0].o).q
        zmm0_1[0].o = var_208_1
        float temp0_95[0x4] = _mm_unpacklo_ps(zmm6_1, zmm0_1[0].q)
        zmm2[0].o = _mm_unpacklo_ps(zmm2[0].o, 0)
        float temp0_97[0x4] = _mm_unpacklo_ps(temp0_95, zmm2[0].q)
        *(rbx + 0x98) = var_1f8_2
        zmm0_1[0].o = temp0_97
        zmm5_3 = *arg2
        zmm2[0].o = temp0_97
        zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, temp0_97, 0xc9)
        zmm1_1[0].o = zmm5_3
        zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, zmm5_3, 0xd2)
        zmm3[0].o = zmm5_3
        zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm1_1[0].o)
        zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm5_3, 0xc9)
        zmm2[0].o = _mm_shuffle_ps(zmm2[0].o, temp0_97, 0xd2)
        zmm2[0].o = _mm_mul_ps(zmm2[0].o, zmm3[0].o)
        float temp0_104[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xff)
        zmm2[0].o = _mm_sub_ps(zmm2[0].o, zmm0_1[0].o)
        zmm2[0].o = _mm_add_ps(zmm2[0].o, zmm2[0].o)
        zmm0_1[0].o = zmm2[0].o
        float temp0_107[0x4] = _mm_mul_ps(temp0_104, zmm2[0].o)
        zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, zmm2[0].o, 0xc9)
        float zmm4_3[0x4] = zmm2[0].o
        zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm1_1[0].o)
        float temp0_110[0x4] = _mm_shuffle_ps(zmm4_3, zmm2[0].o, 0xd2)
        float temp0_111[0x4] = _mm_add_ps(temp0_107, temp0_97)
        float temp0_114[0x4] =
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_110, zmm3[0].o), zmm0_1[0].o), temp0_111)
        zmm0_1[0].o = temp0_114
        zmm1_1[0].o = temp0_114
        zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, temp0_114, 0xaa)
        result_1 = zmm0_1[0]
        zmm0_1[0].o = temp0_114
        zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, temp0_114, 0x55)
    label_1416f1b4a:
        result = zx.q(result_1)
        zmm0_1[0].o = _mm_unpacklo_ps(zmm0_1[0].o, zmm1_1[0].q)
        *(rbx + 0x84) = (zmm0_1[0].o).q
        *(rbx + 0x8c) = result.d
else
    zmm0_1[0].o = var_224
    
    if (not(zmm0_1[0] >= -9.99999975e-05f))
        zmm2[0].o = 0x3f800000
        int64_t rax_17 = *arg1
        zmm2[0] = 1f / zmm0_1[0]
        zmm0_1[0].o = zmm2[0].o
        zmm1_1[0].o = zmm2[0].o
        zmm0_1[0] = zmm0_1[0] f* var_118.d
        zmm1_1[0] = zmm1_1[0] f* var_118:4.d
        zmm2[0] = zmm2[0] f* var_118:8.d
        var_220.d = zmm0_1[0]
        var_220:4.d = zmm1_1[0]
        uint32_t var_218_1 = zmm2[0]
        result = (*(rax_17 + 0x20))(arg1, &var_220, &var_210)
        
        if (not(zmm0_1[0] f>= *(rbx + 0x9c)))
            zmm2[0].o = var_220:4.d
            zmm1_1[0].o = zx.o(0)
            zmm6_1 = var_220.d
            *(rbx + 0x9c) = zmm0_1[0]
            float zmm5_2[0x4] = *arg2
            zmm0_1[0].o = var_218_1
            float temp0_1[0x4] = _mm_unpacklo_ps(zmm6_1, zmm0_1[0].q)
            zmm2[0].o = _mm_unpacklo_ps(zmm2[0].o, 0)
            zmm1_1[0].o = zmm5_2
            float temp0_3[0x4] = _mm_unpacklo_ps(temp0_1, zmm2[0].q)
            zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, zmm5_2, 0xd2)
            zmm0_1[0].o = temp0_3
            zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, temp0_3, 0xc9)
            zmm2[0].o = temp0_3
            zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm1_1[0].o)
            zmm2[0].o = _mm_shuffle_ps(zmm2[0].o, temp0_3, 0xd2)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm2[0].o = _mm_mul_ps(zmm2[0].o, temp0_8)
            float temp0_10[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
            zmm2[0].o = _mm_sub_ps(zmm2[0].o, zmm0_1[0].o)
            zmm2[0].o = _mm_add_ps(zmm2[0].o, zmm2[0].o)
            float temp0_13[0x4] = _mm_mul_ps(temp0_10, zmm2[0].o)
            zmm0_1[0].o = zmm2[0].o
            zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, zmm2[0].o, 0xc9)
            zmm3[0].o = zmm2[0].o
            zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm1_1[0].o)
            zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm2[0].o, 0xd2)
            float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_3)
            zmm2[0].o = var_210:4.d
            zmm6_1 = var_210.d
            zmm3[0].o = _mm_mul_ps(zmm3[0].o, temp0_8)
            zmm3[0].o = _mm_sub_ps(zmm3[0].o, zmm0_1[0].o)
            zmm3[0].o = _mm_add_ps(zmm3[0].o, temp0_17)
            zmm3[0].o = __addps_xmmps_memps(zmm3[0].o, arg2[1])
            zmm0_1[0].o = zmm3[0].o
            zmm1_1[0].o = zmm3[0].o
            zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, zmm3[0].o, 0xaa)
            float var_1f8_1 = zmm0_1[0]
            zmm0_1[0].o = zmm3[0].o
            zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, zmm3[0].o, 0x55)
            zmm0_1[0].o = _mm_unpacklo_ps(zmm0_1[0].o, zmm1_1[0].q)
            zmm1_1[0].o = zx.o(0)
            rbx[9].q = (zmm0_1[0].o).q
            zmm0_1[0].o = var_208
            float temp0_25[0x4] = _mm_unpacklo_ps(zmm6_1, zmm0_1[0].q)
            zmm2[0].o = _mm_unpacklo_ps(zmm2[0].o, 0)
            float temp0_27[0x4] = _mm_unpacklo_ps(temp0_25, zmm2[0].q)
            *(rbx + 0x98) = var_1f8_1
            zmm0_1[0].o = temp0_27
            zmm5_2 = *arg2
            zmm2[0].o = temp0_27
            zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, temp0_27, 0xc9)
            float temp0_29[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
            zmm1_1[0].o = zmm5_2
            zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, zmm5_2, 0xd2)
            zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm1_1[0].o)
            zmm2[0].o = _mm_shuffle_ps(zmm2[0].o, temp0_27, 0xd2)
            zmm2[0].o = _mm_mul_ps(zmm2[0].o, temp0_29)
            float temp0_34[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
            zmm2[0].o = _mm_sub_ps(zmm2[0].o, zmm0_1[0].o)
            zmm2[0].o = _mm_add_ps(zmm2[0].o, zmm2[0].o)
            zmm0_1[0].o = zmm2[0].o
            float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm2[0].o)
            zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, zmm2[0].o, 0xc9)
            zmm3[0].o = zmm2[0].o
            zmm0_1[0].o = _mm_mul_ps(zmm0_1[0].o, zmm1_1[0].o)
            zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm2[0].o, 0xd2)
            float temp0_41[0x4] = _mm_add_ps(temp0_37, temp0_27)
            zmm3[0].o = _mm_mul_ps(zmm3[0].o, temp0_29)
            zmm3[0].o = _mm_sub_ps(zmm3[0].o, zmm0_1[0].o)
            zmm3[0].o = _mm_add_ps(zmm3[0].o, temp0_41)
            zmm0_1[0].o = zmm3[0].o
            zmm1_1[0].o = zmm3[0].o
            zmm0_1[0].o = _mm_shuffle_ps(zmm0_1[0].o, zmm3[0].o, 0xaa)
            result_1 = zmm0_1[0]
            zmm0_1[0].o = zmm3[0].o
            zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, zmm3[0].o, 0x55)
            goto label_1416f1b4a
__security_check_cookie(rax_1 ^ &var_288)
return result
