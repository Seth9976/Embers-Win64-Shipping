// 函数: sub_1423185e0
// 地址: 0x1423185e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
uint32_t zmm1[0x4] = *(arg3 + 8)
uint32_t temp0[0x4] = _mm_and_ps(*arg3, 0x7fffffff)
uint32_t temp0_1[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
int32_t rsi = 0
int32_t r12 = 0
void* r14 = arg7
float temp0_3[0x4] = _mm_min_ss(_mm_and_ps(*(arg3 + 4), 0x7fffffff)[0], temp0[0])
int64_t var_1d8 = arg6
int128_t zmm9 = zx.o(0)
float zmm7[0x4] = _mm_min_ss(temp0_3[0], temp0_1[0])
void* var_1c8 = r14
int32_t var_188 = 0

if (not(zmm7[0] != 0f))
    zmm7 = 0x38d1b717

int64_t rdi = sx.q(*(arg2 + 0x48))
int64_t rbx = sx.q(arg4[1].d)
int32_t var_1d0 = rdi.d
int64_t var_148
__builtin_memset(&var_148, 0, 0x2c)
int32_t rax_6 = (rbx + rdi).d
int32_t var_11c = 0x80
int32_t var_118 = 0xffffffff
int32_t var_114 = 0
void* var_108 = nullptr
int32_t var_100 = 0
arg4[1].d = rax_6

if (rax_6 s> *(arg4 + 0xc))
    sub_1405a4d70(arg4)

memset(*arg4 + (rbx << 3), 0, rdi << 3)
int16_t var_1b8
int64_t var_1b0
void* var_1a0
int32_t var_198
int128_t zmm6
int128_t zmm8

if (rdi s> 0)
    int64_t r12_1 = var_1d8
    int64_t i = 0
    int32_t rcx_2 = rdi.d
    
    do
        void* rdi_1 = *(*(arg2 + 0x40) + (i << 3))
        
        if (rdi_1 != 0)
            int32_t* rax_10 = j_sub_140a82f30(0x130)
            int32_t* rcx_4
            
            if (rax_10 == 0)
                rcx_4 = nullptr
            else
                rcx_4 = sub_14220ad50(rax_10)
            
            *(*arg4 + (i << 3)) = rcx_4
            var_1d8 = *(*arg4 + (i << 3))
            int32_t rax_14 = sub_141f5e0e0(arg1, *(rdi_1 + 0x80))
            
            if (rax_14 == 0xffffffff)
                r14 = var_1c8
            else
                j_sub_14220baf0(var_1d8, rdi_1 + 0x120)
                int64_t rcx_8 = var_1d8
                *(rcx_8 + 0xc) &= 0xef
                *var_1d8 = rsi
                *(var_1d8 + 4) = rax_14.w
                int64_t rcx_10
                
                if (arg9 s< 0)
                    rcx_10.b = 1
                else
                    rcx_10 = zx.q(*(arg1 + 0x2b5))
                
                int64_t rax_15 = var_1d8
                rcx_10.b ^= *(rax_15 + 0xd)
                rcx_10.b &= 1
                *(rax_15 + 0xd) ^= rcx_10.b
                int64_t rax_16 = var_1d8
                
                if (rsi != arg9)
                    *(rax_16 + 0xb) = 6
                    
                    if (var_1c8 == 0 || *data_143f57938 != 0)
                        goto label_142318904
                    
                    r14 = var_1c8
                else
                    *(rax_16 + 0xb) = *(arg1 + 0x2b3)
                    int64_t rcx_12 = var_1d8
                    *(rcx_12 + 0x70) = *(arg1 + 0x318)
                    *(rcx_12 + 0x78) = *(arg1 + 0x320)
                    int64_t rcx_13 = var_1d8
                    *(rcx_13 + 0xd) ^= (*(arg1 + 0x2b5) ^ *(rcx_13 + 0xd)) & 0x20
                    int64_t rcx_14 = var_1d8
                    *(rcx_14 + 0xd) ^= (*(arg1 + 0x2b5) ^ *(rcx_14 + 0xd)) & 0x40
                    int64_t rcx_15 = var_1d8
                    *(rcx_15 + 0xd) = ((*(arg1 + 0x2b5) ^ *(rcx_15 + 0xd)) & 0x7f) ^ *(arg1 + 0x2b5)
                    int64_t rcx_16 = var_1d8
                    *(rcx_16 + 0xe) ^= (*(rcx_16 + 0xe) ^ *(arg1 + 0x2b6)) & 1
                    int64_t rcx_17 = var_1d8
                    *(rcx_17 + 0xe) ^= (*(rcx_17 + 0xe) ^ *(arg1 + 0x2b6)) & 2
                    int64_t rcx_18 = var_1d8
                    *(rcx_18 + 0xe) ^= (*(rcx_18 + 0xe) ^ *(arg1 + 0x2b6)) & 4
                    int64_t rcx_19 = var_1d8
                    *(rcx_19 + 0xd) ^= (*(arg1 + 0x2b5) ^ *(rcx_19 + 0xd)) & 8
                    int64_t rcx_20 = var_1d8
                    *(rcx_20 + 0xd) ^= (*(arg1 + 0x2b5) ^ *(rcx_20 + 0xd)) & 0x10
                    int64_t rcx_21 = var_1d8
                    *(rcx_21 + 0x7c) = *(arg1 + 0x324)
                    *(rcx_21 + 0x84) = *(arg1 + 0x32c)
                label_142318904:
                    int64_t rdx_4 = *(r12_1 + 8)
                    int32_t var_190 = rax_14
                    void var_c8
                    uint128_t* rax_28 = (*r12_1)(&var_c8, rdx_4, &var_190)
                    uint128_t var_f8 = *rax_28
                    int128_t var_e8_1 = rax_28[1]
                    uint128_t var_d8_1 = rax_28[2]
                    sub_14220af60(&var_1b8, arg8)
                    
                    if (arg8 == 0)
                        var_1b8 = 0x100
                    
                    r14 = var_1c8
                    var_1b0 = *arg10
                    zmm6, zmm7, zmm8, zmm9 =
                        sub_142219250(var_1d8, rdi_1, &var_f8, arg8, r14, &var_1b8)
                    var_1a0 = rdi_1 + 0x80
                    var_198 = &var_1d8
                    void var_160
                    sub_140a5c490(&var_148, &var_160, &var_1a0, nullptr)
            
            rcx_2 = var_1d0
        
        rsi += 1
        i += 1
    while (i s< sx.q(rcx_2))
    
    r12 = var_188

if (r14 != 0 && __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1 + 0x820) != 0)
    sub_14225d5d0(r14, arg1 + 0x820)

int64_t* r13_1 = arg5
int64_t rbx_1 = sx.q(r13_1[1].d)
int64_t rdi_2 = sx.q(*(arg2 + 0x58))
int32_t rax_35 = (rbx_1 + rdi_2).d
r13_1[1].d = rax_35

if (rax_35 s> *(r13_1 + 0xc))
    sub_1405a4d70(r13_1)

int64_t rax_36 = *r13_1
var_1d8 = rdi_2
memset(rax_36 + (rbx_1 << 3), 0, rdi_2 << 3)
int32_t var_1d0_1 = 0
int32_t r14_2 = 0
int64_t var_140

if (rdi_2 s> 0)
    void* rdi_3 = var_1a0
    int64_t rsi_1 = 0
    void* var_178
    void* r15_1 = var_178
    int128_t var_58_1 = zmm6
    int128_t var_78_1 = zmm8
    int64_t var_1c8_1 = 0
    
    do
        void* rbx_2 = *(*(arg2 + 0x50) + (rsi_1 << 3))
        int32_t* rax_39 = j_sub_140a82f30(0x1b8)
        int32_t* rcx_32
        
        if (rax_39 == 0)
            rcx_32 = nullptr
        else
            rcx_32 = sub_142229f60(rax_39)
        
        *(*r13_1 + (rsi_1 << 3)) = rcx_32
        char* rsi_2 = *(*r13_1 + (rsi_1 << 3))
        sub_14222cb60(rsi_2, rbx_2 + 0x28)
        int64_t rbx_3 = *(rsi_2 + 0x20)
        *rsi_2 = r14_2
        void var_110
        void* r13_2
        
        if (var_140.d == var_114)
        labelid_5b:
            r13_2 = nullptr
        else
            int64_t rdx_12 = sx.q(var_100 - 1) & sx.q(sub_140b5ead0(rbx_3.d) + rbx_3:4.d)
            void* rax_47 = &var_110
            
            if (var_108 != 0)
                rax_47 = var_108
            
            int32_t rax_48 = *(rax_47 + (rdx_12 << 2))
            
            if (rax_48 == 0xffffffff)
            label_142318b2b:
                r13_2 = nullptr
            else
                int64_t r8_5 = var_148
                int64_t rcx_38
                
                while (true)
                    rcx_38 = sx.q(rax_48)
                    int64_t rdx_13 = rcx_38 * 3
                    
                    if (*(r8_5 + (rdx_13 << 3)) == rbx_3)
                        break
                    
                    rax_48 = *(r8_5 + (rdx_13 << 3) + 0x10)
                    
                    if (rax_48 == 0xffffffff)
                        goto label_142318b2b_2
                
                if (rax_48 == 0xffffffff)
                label_142318b2b_1:
                    r13_2 = nullptr
                else
                    void* r13_3 = r8_5 + rcx_38 * 0x18
                    
                    if (r13_3 == 0)
                    label_142318b2b_2:
                        r13_2 = nullptr
                    else
                        r13_2 = *(r13_3 + 8)
        
        int64_t rbx_4 = *(rsi_2 + 0x28)
        void* r14_3
        
        if (var_140.d == var_114)
        labelid_49:
            r14_3 = nullptr
        else
            int64_t rdx_15 = sx.q(var_100 - 1) & sx.q(sub_140b5ead0(rbx_4.d) + rbx_4:4.d)
            void* rax_53 = &var_110
            
            if (var_108 != 0)
                rax_53 = var_108
            
            int32_t rax_54 = *(rax_53 + (rdx_15 << 2))
            
            if (rax_54 == 0xffffffff)
            label_142318b8d:
                r14_3 = nullptr
            else
                int64_t r8_6 = var_148
                int64_t rcx_43
                
                while (true)
                    rcx_43 = sx.q(rax_54)
                    int64_t rdx_16 = rcx_43 * 3
                    
                    if (*(r8_6 + (rdx_16 << 3)) == rbx_4)
                        break
                    
                    rax_54 = *(r8_6 + (rdx_16 << 3) + 0x10)
                    
                    if (rax_54 == 0xffffffff)
                        goto label_142318b8d_2
                
                if (rax_54 == 0xffffffff)
                label_142318b8d_1:
                    r14_3 = nullptr
                else
                    void* r14_4 = r8_6 + rcx_43 * 0x18
                    
                    if (r14_4 == 0)
                    label_142318b8d_2:
                        r14_3 = nullptr
                    else
                        r14_3 = *(r14_4 + 8)
        
        if (r13_2 != 0 && r14_3 != 0)
            rbx_4.b = sub_14221b2f0(r13_2) != 0
            
            if (rbx_4.b != 0 && sub_14221b2f0(r14_3) != 0)
                void* rax_57 = sub_140d3c6e0(r13_2 + 0x100)
                float zmm0_2 = zmm7[0] f* *(rax_57 + 0x130)
                float zmm1_2 = zmm7[0] f* *(rax_57 + 0x134)
                float zmm5_1 = zmm7[0] f* *(rax_57 + 0x138)
                float zmm4_1
                
                if (zmm0_2 f== zmm9.d)
                    zmm4_1 = 3.39999995e+38f
                else
                    zmm4_1 = 1f / zmm0_2
                
                float zmm3
                
                if (zmm1_2 f== zmm9.d)
                    zmm3 = 3.39999995e+38f
                else
                    zmm3 = 1f / zmm1_2
                
                float zmm2
                
                if (zmm5_1 f== zmm9.d)
                    zmm2 = 3.39999995e+38f
                else
                    zmm2 = 1f / zmm5_1
                
                zmm4_1 = zmm4_1 f* *(r13_2 + 0x10) f* *(rsi_2 + 0x30)
                zmm2 = zmm2 * *(r13_2 + 0x18)
                *(rsi_2 + 0x34) = zmm3 * *(r13_2 + 0x14) f* *(rsi_2 + 0x34)
                *(rsi_2 + 0x30) = zmm4_1
                *(rsi_2 + 0x38) = zmm2 f* *(rsi_2 + 0x38)
                void* rax_60 = sub_140d3c6e0(r14_3 + 0x100)
                zmm2 = zmm7[0] f* *(rax_60 + 0x130)
                zmm0_2 = zmm7[0] f* *(rax_60 + 0x134)
                zmm1_2 = zmm7[0] f* *(rax_60 + 0x138)
                
                if (zmm2 f== zmm9.d)
                    zmm3 = 3.39999995e+38f
                else
                    zmm3 = 1f / zmm2
                
                if (zmm0_2 f== zmm9.d)
                    zmm2 = 3.39999995e+38f
                else
                    zmm2 = 1f / zmm0_2
                
                if (zmm1_2 f== zmm9.d)
                    zmm4_1 = 3.39999995e+38f
                else
                    zmm4_1 = 1f / zmm1_2
                
                zmm2 = zmm2 * *(r14_3 + 0x14) f* *(rsi_2 + 0x58)
                zmm1_2 = *(r14_3 + 0x18) * zmm4_1 f* *(rsi_2 + 0x5c)
                *(rsi_2 + 0x54) = zmm3 f* *(r14_3 + 0x10) f* *(rsi_2 + 0x54)
                *(rsi_2 + 0x58) = zmm2
                *(rsi_2 + 0x5c) = zmm1_2
                int32_t var_170
                void** rax_63
                int32_t rbx_6
                
                if (arg8 == 0)
                    r12 |= 2
                    rax_63 = &var_178
                    r15_1 = nullptr
                    var_178 = nullptr
                    rbx_6 = 0
                    var_170 = 0
                else
                    int32_t var_150_1 = 0
                    int64_t (* var_158_1)(void* arg1, int32_t arg2) = sub_142319720
                    r12 |= 1
                    void* rax_61 = sub_140a84c80(0, 0x30, 0)
                    var_1a0 = rax_61
                    rdi_3 = rax_61
                    var_198 = 3
                    
                    if (rax_61 != 0)
                        *rdi_3 = &data_143271de8
                        sub_140d3a3a0(rdi_3 + 8, arg8)
                        *(rdi_3 + 0x10) = var_158_1.o
                        *(rdi_3 + 0x28) = sub_140a387b0()
                        *rdi_3 = &data_143271e40
                    
                    rbx_6 = var_170
                    rax_63 = &var_1a0
                
                var_1b0.d = 0
                var_1b8.q = 0
                
                if (rax_63[1].d != 0)
                    void* rcx_49 = *rax_63
                    
                    if (rcx_49 != 0)
                        (*(*rcx_49 + 0x40))(rcx_49, &var_1b8)
                
                int16_t* var_1e0_2 = &var_1b8
                sub_142233a30(rsi_2, r13_2, r14_3, zmm7[0], arg8)
                
                if ((r12.b & 2) != 0)
                    r12 &= 0xfffffffd
                    
                    if (rbx_6 == 0)
                        goto label_142318e64
                    
                    if (r15_1 != 0)
                        (*(*r15_1 + 0x38))(r15_1, 0)
                        void* rax_67 = sub_140a84c80(r15_1, 0, 0)
                        r15_1 = rax_67
                        var_178 = rax_67
                        var_170 = 0
                    label_142318e64:
                        
                        if (r15_1 != 0)
                            sub_140a74f90(r15_1)
                
                if ((r12.b & 1) != 0)
                    r12 &= 0xfffffffe
                    
                    if (var_198 == 0)
                        goto label_142318eaf
                    
                    if (rdi_3 != 0)
                        (*(*rdi_3 + 0x38))(rdi_3, 0)
                        void* rax_69 = sub_140a84c80(rdi_3, 0, 0)
                        rdi_3 = rax_69
                        var_1a0 = rax_69
                        var_198 = 0
                    label_142318eaf:
                        
                        if (rdi_3 != 0)
                            sub_140a74f90(rdi_3)
        
        r14_2 = var_1d0_1 + 1
        r13_1 = arg5
        rsi_1 = var_1c8_1 + 1
        var_1d0_1 = r14_2
        var_1c8_1 = rsi_1
    while (rsi_1 s< var_1d8)

int32_t var_100_1 = 0

if (var_108 != 0)
    sub_140a74f90(var_108)

bool cond:0 = var_140:4.d == 0
var_140.d = 0

if (not(cond:0))
    sub_1405a5130(&var_148, 0)

int32_t var_118_1 = 0xffffffff
int32_t var_114_1 = 0
int64_t var_138
void* result = sub_14059a8e0(&var_138, 0)
int64_t var_128

if (var_128 != 0)
    result = sub_140a74f90(var_128)

int64_t rcx_61 = var_148

if (rcx_61 != 0)
    result = sub_140a74f90(rcx_61)

__security_check_cookie(rax_1 ^ &var_208)
return result
