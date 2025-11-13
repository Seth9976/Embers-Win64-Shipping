// 函数: sub_1417aa790
// 地址: 0x1417aa790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* result = *(arg5 + 0x18)
int64_t* result_2 = result
int64_t* r15 = arg1
int64_t* result_1 = result
int16_t var_208
int64_t** var_1d8
float zmm6[0x4]

if (result == 0)
    void* rcx = *arg1
    int16_t* var_218_1 = &var_208
    var_208 = result.w
    char var_206_1 = result.b
    int64_t* rax_3
    rax_3, zmm6 = sub_1417ab2e0(rcx, &var_1d8, (result + 1).d, 0, var_218_1)
    result = **rax_3
    int64_t** rcx_2 = var_1d8
    result_2 = result
    result_1 = result
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

sub_1417ab680(*r15, result)
sub_1417adc20(*r15, result, arg3)
*(*(*result_2 + 0x338) + (sx.q(result_2[1].d) << 2)) = 0x7fffffff
sub_140946410(&r15[2], &var_208, &result_1, nullptr)
void* rax_6 = *result_2
int64_t rcx_7 = sx.q(result_2[1].d)
result_1 = arg3
*(rcx_7 + *(rax_6 + 0x470)) = 1
int32_t var_1e0 = arg2[1].d
*(*(*result_2 + 0x428) + sx.q(result_2[1].d) * 0x10) = result_1.o
int64_t* rsi_1 = *arg2
int64_t r14 = 0
uint64_t r13_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rsi_1 u> &rsi_1[arg2[1]])
    r13_1 = 0

if (r13_1 != 0)
    do
        void* rbx = *r15
        
        if (*(rbx + 0x980) != 0)
            void* rcx_9 = rbx + 0x9a0
            var_208.q = *rsi_1
            void* rax_13 = *(rbx + 0x990)
            result_1 = result
            
            if (rax_13 != 0)
                rcx_9 = rax_13
            
            (*(rbx + 0x980))((*(*rcx_9 + 8))(rcx_9), &var_208, &result_1)
        
        rsi_1 = &rsi_1[1]
        r14 += 1
    while (r14 != r13_1)

int32_t* rdx_9 = &var_208
int64_t* rbx_2

if (*sub_1405ba560(&r15[0x2e], &var_208, result) == 0xffffffff)
    result_1 = result
    var_1d8 = &result_1
    int64_t* var_1d0_1 = arg2
    sub_14178d9d0(&r15[0x2e], rdx_9, &var_1d8, nullptr)
    rbx_2 = nullptr
else
    sub_1405ba560(&r15[0x2e], rdx_9, result)
    int64_t rax_17 = sx.q(var_208.d)
    void* const rcx_15
    
    if (rax_17.d == 0xffffffff)
        rcx_15 = nullptr
    else
        rcx_15 = (rax_17 << 5) + r15[0x2e]
    
    if (rcx_15 + 8 == arg2)
        rbx_2 = nullptr
    else
        int64_t rcx_16 = *(rcx_15 + 8)
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        *(rcx_15 + 8) = *arg2
        *arg2 = 0
        *(rcx_15 + 0x10) = arg2[1].d
        *(rcx_15 + 0x14) = *(arg2 + 0xc)
        rbx_2 = nullptr
        arg2[1] = 0

sub_1405ba560(&r15[0x2e], &var_208, result)
int64_t rax_21 = sx.q(var_208.d)
void* const r13_4

if (rax_21.d == 0xffffffff)
    r13_4 = nullptr
else
    r13_4 = (rax_21 << 5) + r15[0x2e]

bool cond:1 = data_143ef7eb8 == 0
result_1 = r13_4 + 8
int32_t i_2
int64_t var_198
int64_t var_190
int64_t var_188
int64_t var_178
uint32_t var_170
int32_t var_168
int32_t var_164
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]

if (not(cond:1))
    int32_t i_1 = *(r13_4 + 0x10)
    var_208.q = 0
    int64_t* rbx_3 = *(r13_4 + 8)
    i_2 = i_1
    
    if (i_1 != 0)
        sub_1405c4a00(&var_208, i_1, 0)
        int64_t* rcx_20 = var_208.q - rbx_3
        int32_t i
        
        do
            *(rcx_20 + rbx_3) = *rbx_3
            rbx_3 = &rbx_3[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_2 = nullptr
    else
        rbx_2 = nullptr
        int32_t var_1fc_1 = 0
    
    __builtin_memset(&var_198, 0, 0x1c)
    var_178 = 0
    var_170 = 0
    int32_t var_16c_1 = 0x80
    int32_t var_168_1 = 0xffffffff
    int32_t var_164_1 = 0
    int64_t var_158_1 = 0
    int32_t var_150_1 = 0
    sub_14178bf50(&var_198, &var_208)
    int64_t rcx_22 = var_208.q
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    zmm6, zmm7, zmm8, zmm9 = sub_1417ac030(*r15, &var_198)
    int32_t var_150_2 = 0
    
    if (var_158_1 != 0)
        sub_140a74f90(var_158_1)
    
    bool cond:3_1 = var_190:4.d == 0
    var_190.d = 0
    
    if (not(cond:3_1))
        sub_1405a5410(&var_198, 0)
    
    var_168 = 0xffffffff
    var_164 = 0
    sub_14059a8e0(&var_188, 0)
    
    if (var_178 != 0)
        sub_140a74f90(var_178)
    
    int64_t rcx_28 = var_198
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)

int64_t r12_1 = 0
int64_t* r14_2 = *(r13_4 + 8)
uint64_t r13_6 = sx.q(*(r13_4 + 0x10)) << 3 u>> 3

if (r14_2 u> &r14_2[sx.q(*(r13_4 + 0x10))])
    r13_6 = 0

if (r13_6 != 0)
    float zmm15[0x4] = data_143ef7f10
    float var_58_1[0x4] = zmm6
    float var_68_1[0x4] = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm12[0x4]
    float var_b8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_c8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_d8_1[0x4] = zmm14
    
    do
        int64_t* rsi_2 = *r14_2
        
        if (*(rsi_2 + 0xc) u>= 3)
            rbx_2 = rsi_2
        
        if (rbx_2 != 0)
            int64_t rdx_14 = sx.q(rbx_2[1].d)
            void* r8_8 = *rbx_2
            zmm12 = arg4[2]
            float (* rcx_31)[0x4] = rdx_14 * 0x30 + *(r8_8 + 0x440)
            zmm14 = rcx_31[2]
            float zmm0[0x4]
            float zmm1_1[0x4]
            float zmm2[0x4]
            float zmm3[0x4]
            float zmm4_1[0x4]
            float zmm5_1[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm12), data_143ef8240, 1)) == 0)
                zmm4_1 = *arg4
                zmm2 = *rcx_31
                zmm3 = rcx_31[1]
                zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
                zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                zmm3 = _mm_mul_ps(zmm3, zmm12)
                zmm5_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, zmm15), _mm_mul_ps(zmm5_1, zmm2))
                zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), 
                    _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143ef7f00)
                zmm2 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                zmm0 = __mulps_xmmps_memps(zmm0, data_143ef7ef0)
                zmm7 = _mm_add_ps(zmm7, zmm1_1)
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm4_1)
                zmm7 = _mm_add_ps(zmm7, zmm0)
                zmm1_1 = _mm_sub_ps(zmm1_1, _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm2))
                zmm1_1 = _mm_add_ps(zmm1_1, zmm1_1)
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm1_1)
                zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0xd2), zmm4_1)
                zmm0 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                zmm5_1 = _mm_add_ps(zmm5_1, zmm3)
                zmm6 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm0, zmm2)), zmm5_1), arg4[1])
            else
                zmm1_1 = *arg4
                zmm10 = data_143ef7f20
                zmm8 = arg4[1]
                zmm3 = _mm_add_ps(zmm1_1, zmm1_1)
                zmm5_1 = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                zmm0 = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                zmm4_1 = _mm_mul_ps(zmm3, zmm1_1)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1_1)
                zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                zmm11 = _mm_add_ps(zmm3, zmm2)
                zmm2 = _mm_sub_ps(zmm2, zmm3)
                zmm3 = *rcx_31
                zmm1_1 = _mm_sub_ps(zmm10, zmm0)
                zmm11 = _mm_mul_ps(zmm11, zmm12)
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm12)
                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
                zmm1_1 = __andps_xmmxud_memxud(zmm1_1, data_143ef7f30)
                zmm0 = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32)
                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1_1, 0), zmm0, 0x82)
                zmm0 = _mm_shuffle_ps(zmm11, zmm1_1, 0x31)
                zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_1, 0x10), zmm0, 0x88)
                zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm5_1, 0x12), zmm1_1, 0xe8)
                zmm1_1 = _mm_add_ps(zmm3, zmm3)
                zmm10[0].q = zmm8 u>> 0x40
                zmm8 = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                zmm5_1 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                zmm0 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29)
                zmm4_1 = _mm_mul_ps(zmm1_1, zmm3)
                zmm2 = _mm_mul_ps(zmm2, zmm0)
                zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm1_1)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                    _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                zmm6 = _mm_add_ps(zmm3, zmm2)
                zmm2 = _mm_sub_ps(zmm2, zmm3)
                zmm1_1 = _mm_sub_ps(zmm10, zmm0)
                zmm6 = _mm_mul_ps(zmm6, zmm14)
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, zmm14), data_143ef7f30)
                zmm0 = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32)
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1_1, 0), zmm0, 0x82)
                zmm4_1 = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x10)
                zmm0 = _mm_shuffle_ps(zmm6, zmm1_1, 0x31)
                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm0, 0x88)
                zmm2 = _mm_mul_ps(zmm2, zmm7)
                zmm6 = _mm_shuffle_ps(zmm6, zmm5_1, 0x12)
                zmm5_1 = rcx_31[1]
                zmm6 = _mm_shuffle_ps(zmm6, zmm1_1, 0xe8)
                zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm11)
                zmm10[0].q = zmm5_1 u>> 0x40
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm10, 0xc4)
                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm8)
                zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm9))
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm9)
                zmm2 = _mm_add_ps(zmm2, zmm1_1)
                zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm11)
                zmm2 = _mm_add_ps(zmm2, zmm3)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm7)
                zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                var_198.o = zmm2
                zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm3 = _mm_add_ps(zmm3, zmm0)
                zmm2 = _mm_mul_ps(zmm2, zmm7)
                zmm4_1 = _mm_mul_ps(zmm4_1, zmm8)
                zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
                zmm3 = _mm_add_ps(zmm3, zmm1_1)
                zmm0 = _mm_mul_ps(zmm0, zmm9)
                zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm11)
                zmm3 = _mm_add_ps(zmm3, zmm4_1)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                zmm2 = _mm_add_ps(zmm2, zmm0)
                zmm6 = _mm_mul_ps(zmm6, zmm8)
                zmm0 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                var_188.o = zmm3
                zmm3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                zmm2 = _mm_add_ps(zmm2, zmm1_1)
                zmm3 = _mm_mul_ps(zmm3, zmm7)
                zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm11)
                zmm0 = _mm_mul_ps(zmm0, zmm9)
                zmm2 = _mm_add_ps(zmm2, zmm6)
                zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm8)
                var_178.o = zmm2
                var_168.o = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3, zmm0), zmm1_1), zmm5_1)
                zmm10, zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_198, 0x322bcc77)
                float zmm2_1[0x4] = var_198.d
                float zmm1_2 = var_198:4.d
                zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, _mm_mul_ps(zmm14, zmm12), 2), 
                    data_143ef8230 ^ zmm10) ^ data_143ef8230
                zmm2_1[0] = zmm2_1[0] * zmm13[0]
                zmm1_2 = zmm1_2 * zmm13[0]
                uint32_t zmm0_1[0x4] = var_190.d
                float zmm3_1 = var_188.d
                zmm0_1[0] = zmm0_1[0] f* zmm13[0]
                var_198.d = zmm2_1[0]
                zmm2_1 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                var_190.d = zmm0_1[0]
                uint32_t var_180
                zmm0_1 = var_180
                zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
                var_198:4.d = zmm1_2
                zmm1_2 = var_188:4.d * zmm2_1[0]
                zmm3_1 = zmm3_1 * zmm2_1[0]
                zmm2_1 = var_178.d
                var_180 = zmm0_1[0]
                zmm0_1 = var_170
                var_188:4.d = zmm1_2
                zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                zmm0_1[0] = zmm0_1[0] f* zmm13[0]
                zmm2_1[0] = zmm2_1[0] * zmm13[0]
                zmm1_2 = var_178:4.d * zmm13[0]
                var_170 = zmm0_1[0]
                var_188.d = zmm3_1
                var_178.d = zmm2_1[0]
                var_178:4.d = zmm1_2
                sub_14077e4a0(&var_1d8, &var_198)
                zmm5_1 = var_1d8.o
                zmm7 = data_143ef7ee0
                rdx_14 = zx.q(rbx_2[1].d)
                r8_8 = *rbx_2
                zmm1_1 = _mm_mul_ps(zmm5_1, zmm5_1)
                var_208.d = 0x322bcc77
                zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                zmm4_1 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                zmm1_1 = _mm_rsqrt_ps(zmm4_1)
                zmm3 = _mm_mul_ps(zmm4_1, zmm7)
                zmm2 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3)), 
                        zmm1_1), 
                    zmm1_1)
                zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
                zmm0 = var_208.d
                zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4_1, 2)
                zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, zmm2), zmm2)
                zmm2 = _mm_unpacklo_ps(var_164, 0)
                zmm7 = _mm_and_ps(_mm_mul_ps(zmm7, zmm5_1) ^ data_143ef7ed0, zmm0) ^ data_143ef7ed0
                int32_t var_160
                zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_168, var_160[0].q), zmm2[0].q)
                var_1d8.o = zmm7
            int64_t rcx_34 = *(r8_8 + 0x28)
            float var_1c0_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
            int64_t rdx_16 = sx.q(rdx_14.d) * 3
            *(rcx_34 + (rdx_16 << 2)) =
                (_mm_unpacklo_ps(zmm6, _mm_shuffle_ps(zmm6, zmm6, 0x55)[0].q)).q
            *(rcx_34 + (rdx_16 << 2) + 8) = var_1c0_1
            *(*(*rbx_2 + 0x68) + sx.q(rbx_2[1].d) * 0x10) = zmm7
            *(*(*rbx_2 + 0x428) + sx.q(rbx_2[1].d) * 0x10) = result
            *(*(*rbx_2 + 0x458) + (sx.q(rbx_2[1].d) << 2)) = 0
            
            if (data_143ef7eb8 != 0)
                sub_1409740e0(&r15[2], rbx_2)
            
            int64_t r8_9 = sx.q(rbx_2[1].d)
            void* r11_1 = *result
            int64_t rdx_23 = *(*rbx_2 + 0x4d0)
            *(rdx_23 + (r8_9 << 2)) = __maxss_xmmss_memss(
                (*(*(r11_1 + 0x4d0) + (sx.q(result[1].d) << 2)))[0], *(rdx_23 + (r8_9 << 2)))[0]
            int64_t rcx_40 = sx.q(result[1].d)
            int64_t r10_1 = sx.q(rsi_2[1].d)
            int64_t r9 = *(*rsi_2 + 0x338)
            int64_t rax_34 = *(r11_1 + 0x338)
            int32_t r8_10 = *(r9 + (r10_1 << 2))
            
            if (*(rax_34 + (rcx_40 << 2)) s<= r8_10)
                r8_10 = *(rax_34 + (rcx_40 << 2))
            
            *(r9 + (r10_1 << 2)) = r8_10
        
        r14_2 = &r14_2[1]
        r12_1 += 1
        rbx_2 = nullptr
    while (r12_1 != r13_6)
    
    r15 = arg1

bool cond:2 = data_1439b8e8c != 0
int64_t* result_3 = result_1
int64_t var_148
__builtin_memset(&var_148, 0, 0x2c)
var_208.o = *arg5
i_2.b = 0
i_2:1.b = cond:2
float var_1f8[0x4] = arg5[1]
int32_t var_11c = 0x80
int32_t var_118 = 0xffffffff
int32_t var_114 = 0
int64_t var_108 = 0
int32_t var_100 = 0
sub_14178c060(&var_148, result_3)
sub_14179cf70(result, &var_148, nullptr)
sub_1417ba180(r15, result)
var_1d8.o = zx.o(0)
sub_1417b8260(r15, result, &var_148, &var_1d8, &var_208)
int32_t var_100_1 = 0

if (var_108 != 0)
    sub_140a74f90(var_108)

sub_14100e680(&var_148)
__security_check_cookie(rax_1 ^ &var_238)
return result
