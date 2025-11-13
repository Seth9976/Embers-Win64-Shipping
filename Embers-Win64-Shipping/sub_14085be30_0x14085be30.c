// 函数: sub_14085be30
// 地址: 0x14085be30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13_1 = *(arg6 + 0x1a0)
char rax

if (1f f!= *(arg1 + 0x1f8) || 1f f!= *(arg1 + 0x1fc))
    rax = 1
else
    rax = 0

if (*(arg1 + 0x220) != 0)
    if (rax == 0)
        *(arg2 + 0x160) = arg1 + 0x210
    else
        void* rdx = *(arg1 + 0x228)
        *(arg2 + 0x170) = *(arg1 + 0x240)
        sub_1405d16e0(arg2 + 0x178, rdx)

void* rax_3 = sub_14082fe30(arg3)
int64_t* rcx_2 = *(arg3 + 0x20)
uint64_t rdx_1 = zx.q(*(arg1 + 0xac))
int64_t arg_18 = 0
int64_t r9 = *rcx_2
int64_t* rax_4 = (*(r9 + 0x40))(rcx_2, rdx_1, &arg_18, r9)
int64_t rdx_2 = *rax_4
int32_t rax_5 = (*(rdx_2 + 0x1d8))(rax_4, rdx_2)
int64_t var_178 = 0
sub_1405d16e0(arg2 + 0x198, nullptr)
*(arg2 + 0x1a0) = 0xffffffff
int128_t zmm6 = sub_1405ec8a0(&var_178)
char rdx_3 = *(arg1 + 0x1f4)
uint32_t r12 = *(rax_3 + 0xb0)
char r8_1 = 0
int32_t r11 = data_14396fef8
int32_t rax_6 = -1
bool cond:1 = rax_5 u> 1
uint32_t var_228 = 0
uint32_t r10 = 0
int64_t var_218 = 0
int32_t var_210 = 0
int64_t var_208 = 0
void* const var_1e0 = nullptr
int32_t var_1c8 = 0
char var_224 = 0
int32_t var_200 = 0xffffffff
int32_t var_1d8 = -1
int32_t var_1d0 = 0xffffffff
int32_t var_220 = 0xffffffff
int32_t arg_8 = 0xffffffff
uint128_t var_198

if (rdx_3 != 0 && (cond:1 != 0 || (*(arg1 + 0x200) & 4) == 0))
    r8_1 = rdx_3
    char var_224_1 = rdx_3
    r10 = r12
    float zmm13[0x4]
    float var_c8_1[0x4] = zmm13
    int32_t rax_7
    rax_7.b = data_143ce83a0 != 0
    var_228 = r12
    int32_t var_1c8_1 = ((zx.d(cond:1) << 5) + 0x10) | (rax_7 + 0x85)
    int32_t r9_1
    
    if (rdx_3 - 3 u<= 1)
        r9_1 = 0xf
        int32_t var_1e8_3 = 0x3f800000
        arg_8 = 0xf
        int32_t var_1fc_2
        __builtin_memset(&var_1fc_2, 0, 0x14)
    else
        r9_1 = 0
        bool cond:3_1 = (*(arg1 + 0xa0) & 1) == 0
        arg_8 = 0
        zmm13 = *(arg5 + 0x348)
        int32_t var_1fc
        var_1fc.q = *(arg5 + 0x60c)
        int64_t var_1f8
        var_1f8:0xc.d = (*(arg5 + 0x358)).d
        var_1f8:8.d = zmm13[0]
        float var_1e8_1 = (*(arg5 + 0x368))[0]
        var_1f8:4.d = *(arg5 + 0x614)
        
        if (not(cond:3_1))
            void* rax_10 = arg6
            int32_t zmm5_1 = *(rax_10 + 0xa8)
            int128_t var_58_1 = zmm6
            zmm6 = *(rax_10 + 0xb8)
            float zmm7[0x4] = *(rax_10 + 0x88)
            int128_t zmm8 = *(rax_10 + 0x94)
            int128_t zmm9 = *(rax_10 + 0xa4)
            int128_t zmm10 = *(rax_10 + 0xb4)
            float zmm11[0x4] = *(rax_10 + 0x84)
            int32_t var_1ac_1 = 0x3f800000
            float var_1b8[0x4]
            var_1b8[0] = var_1fc[0]
            int32_t var_19c_1 = 0
            float var_1a8[0x4]
            var_1a8[0] = zmm13[0]
            float temp0_1[0x4] = _mm_shuffle_ps(var_1b8, var_1b8, 0xe1)
            zmm13 = *(arg5 + 0x358)
            temp0_1[0] = var_1f8.d[0]
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = var_1f8:4.d[0]
            float temp0_3[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0xe1)
            float zmm3[0x4] = *(rax_10 + 0x8c)
            temp0_3[0] = zmm13[0]
            zmm13 = *(arg5 + 0x368)
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            float temp0_7[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), *(rax_10 + 0x1e0))
            uint128_t zmm0_1 =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xaa), *(rax_10 + 0x1d0))
            float temp0_11[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0x55), *(rax_10 + 0x1c0))
            float temp0_12[0x4] = _mm_add_ps(temp0_7, zmm0_1)
            float var_1b8_1[0x4] = temp0_4
            float temp0_14[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0), *(rax_10 + 0x1b0))
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
            temp0_15[0] = zmm13[0]
            int128_t zmm14 = *(rax_10 + 0x90)
            float temp0_16[0x4] = _mm_add_ps(temp0_11, temp0_14)
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
            float zmm4_1[0x4] = *(rax_10 + 0x98)
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xff)
            int128_t zmm15 = *(rax_10 + 0xa0)
            float temp0_19[0x4] = _mm_add_ps(temp0_12, temp0_16)
            float var_1a8_1[0x4] = temp0_17
            float zmm1_1[0x4] = *(rax_10 + 0xac)
            float var_1fc_1 = temp0_19[0]
            var_1f8.d = _mm_shuffle_ps(temp0_19, temp0_19, 0x55).d
            zmm0_1 = *(rax_10 + 0x80)
            float var_168_1[0x4] = temp0_19
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)
            var_198 = zmm0_1
            temp0_5[0] = (*(rax_10 + 0x9c)).d
            var_1f8:4.d = temp0_21[0]
            float zmm2[0x4] = *(rax_10 + 0xbc)
            float temp0_22[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
            temp0_22[0] = zmm1_1[0]
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x27)
            temp0_23[0] = zmm2[0]
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x39)
            float var_118_1[0x4] = temp0_24
            float temp0_25[0x4] = _mm_mul_ps(temp0_18, temp0_24)
            zmm2 = var_198
            float temp0_26[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
            zmm0_1 = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
            temp0_26[0] = zmm4_1[0]
            float temp0_28[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
            temp0_28[0] = zmm8.d
            float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
            temp0_29[0] = zmm14.d
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc6)
            float temp0_31[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc6)
            temp0_30[0] = zmm5_1
            temp0_31[0] = zmm9.d
            float temp0_32[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc6)
            temp0_33[0] = zmm15.d
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x27)
            temp0_34[0] = zmm6.d
            float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x39)
            zmm0_1 = _mm_mul_ps(zmm0_1, temp0_35)
            float temp0_37[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x27)
            temp0_37[0] = zmm10.d
            float temp0_38[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x27)
            float temp0_39[0x4] = _mm_add_ps(temp0_25, zmm0_1)
            float temp0_40[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x39)
            temp0_38[0] = (*(rax_10 + 0xb0)).d
            float temp0_41[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0)
            float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x39)
            float temp0_43[0x4] = _mm_mul_ps(temp0_41, temp0_42)
            float var_128_1[0x4] = temp0_35
            float var_138_1[0x4] = temp0_40
            float var_148_1[0x4] = temp0_42
            float temp0_46[0x4] =
                _mm_add_ps(temp0_39, _mm_add_ps(_mm_mul_ps(temp0_32, temp0_40), temp0_43))
            var_1f8:8.d = temp0_46[0]
            zmm0_1 = _mm_shuffle_ps(temp0_46, temp0_46, 0x55)
            float var_158_1[0x4] = temp0_46
            float var_1e8_2 = _mm_shuffle_ps(temp0_46, temp0_46, 0xaa)[0]
            var_1f8:0xc.d = zmm0_1.d
    
    void* rax_11 = *(arg1 + 0x1b0)
    void* rcx_12 = arg1 + 0xb0
    
    if (rax_11 != 0)
        rcx_12 = rax_11
    
    uint64_t rax_13 = zx.q(r9_1) * 2
    
    if (r11 == 0)
        rax_6 = *(rcx_12 + (rax_13 << 3))
    else
        rax_6 = *(rcx_12 + (rax_13 << 3) + 4)
    
    int32_t var_220_1 = rax_6

if (*(arg1 + 0xa4) != 0)
    if (r8_1 != 0 && rax_6 != 0xffffffff)
        void* rdx_11 = *(rax_3 + 0x60)
        var_228 = r12
        sub_1405d16e0(&var_218, rdx_11)
        uint32_t var_210_2 = *(rax_3 + 0xb8) u>> 2
        sub_1405d16e0(&var_208, *(r13_1 + 0x50))
        int32_t var_200_1 = *(rax_3 + 0x48)
        
        if (sub_140820100(r13_1, &var_228) != 0)
            sub_1405d16e0(arg2 + 0x198, var_1e0)
            *(arg2 + 0x1a0) = var_1d8
    
    void* rdx_15 = *(rax_3 + 0x60)
    
    if (rdx_15 == 0)
        void* rax_22 = sub_14082c510()
        void* arg_10 = rax_22
        
        if (rax_22 != 0)
            *(rax_22 + 8) += 1
            rax_22 = arg_10
        
        sub_1405d16e0(arg2 + 0x188, rax_22)
        *(arg2 + 0x190) = 0
        sub_1405ec8a0(&arg_10)
    else
        int32_t rbx_4 = *(rax_3 + 0xb8)
        sub_1405d16e0(arg2 + 0x188, rdx_15)
        *(arg2 + 0x190) = rbx_4 u>> 2
else
    uint32_t r15
    
    if (r11 == 0)
        r15 = *(rax_3 + 0xb8) u>> 2
    else
        r15 = r12
    
    void** r12_1
    
    if (r8_1 == 0 || rax_6 == 0xffffffff)
        r12_1 = arg4
    else
        int32_t rax_14 = data_14397f958
        char rax_15
        
        if (rax_14 s>= 0 && r10 s>= rax_14)
            rax_15 = sub_14074a1e0(*(r13_1 + 0x14))
        
        if (rax_14 s< 0 || r10 s< rax_14 || rax_15 == 0)
            r12_1 = arg4
            var_198 = zx.o(0)
            void var_108
            uint128_t* rax_17 = sub_1419971e0(*r12_1, &var_108, r12)
            int32_t r8_3 = arg_8
            var_198 = *rax_17
            void* zmm1_2 = rax_17[1].q
            sub_14083e110(arg1, &var_228, r8_3, rax_3, &var_198)
            void* rdx_9 = zmm1_2
            arg6 = rdx_9
            
            if (rdx_9 != 0)
                *(rdx_9 + 8) += 1
                rdx_9 = arg6
            
            sub_1405d16e0(arg2 + 0x198, rdx_9)
            *(arg2 + 0x1a0) = 0
            sub_1405ec8a0(&arg6)
        else
            var_228 = r12
            r12_1 = arg4
            sub_1405d16e0(&var_218, r12_1[3])
            uint32_t var_210_1 = r15
            
            if (sub_140820100(r13_1, &var_228) != 0)
                sub_1405d16e0(arg2 + 0x198, var_1e0)
                *(arg2 + 0x1a0) = var_1d8
    
    void* rdx_10 = r12_1[3]
    arg_8.q = rdx_10
    
    if (rdx_10 != 0)
        *(rdx_10 + 8) += 1
        rdx_10 = arg_8.q
    
    sub_1405d16e0(arg2 + 0x188, rdx_10)
    *(arg2 + 0x190) = r15
    sub_1405ec8a0(&arg_8)

sub_1405ec8a0(&var_1e0)
sub_1405ec8a0(&var_208)
return sub_1405ec8a0(&var_218)
