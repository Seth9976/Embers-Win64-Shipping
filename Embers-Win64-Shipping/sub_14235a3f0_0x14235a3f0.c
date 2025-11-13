// 函数: sub_14235a3f0
// 地址: 0x14235a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
*(arg1 + 0x94) |= 0x20
*(arg1 + 0x3d) |= 2
void* r15 = &arg1[0xa]
char var_b0 = 0
char var_1a8 = 1
void** var_1a0
int32_t result_2
int64_t* var_178
void** const var_168
char var_118
uint64_t var_108

if (*r15 != 0)
    var_178 = arg1
    var_1a8 = 0
    var_1a0 = nullptr
    result_2 = 1
    sub_1405c4a00(&var_1a0, 1, 0)
    *var_1a0 = var_178
    sub_1409aa2b0(&var_168, &var_1a0, 1, 1)
    void** rcx_2 = var_1a0
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    if (var_b0 != 0)
        sub_1409ab990(&var_108)
    
    __builtin_memset(&var_108, 0, 0x2c)
    int32_t var_dc_1 = 0x80
    int32_t var_d8_1 = 0xffffffff
    int32_t var_d4_1 = 0
    int64_t var_c8_1 = 0
    int32_t var_c0_1 = 0
    sub_14098dd50(&var_108, &var_168)
    char var_b8_1 = var_118
    char var_117
    char var_b7_1 = var_117
    var_b0 = 1
    sub_1409ab990(&var_168)
    (*(*arg1 + 0x300))(arg1)
    sub_1419ba820(&arg1[0x13], 0)

int64_t* rax_6 = j_sub_140a82f30(0x68)
int64_t* rbx = rax_6

if (rax_6 == 0)
    rbx = nullptr
else
    __builtin_memset(rax_6, 0, 0x40)
    *(rax_6 + 0x24) = 0
    *(rax_6 + 0x2c) = 0
    *(rax_6 + 0x34) = 0
    *(rax_6 + 0x3c) = 0
    *(rax_6 + 0x5c) = 0
    rax_6[0xc].b = 0
    var_178.d = 0

if (r15 != &var_178)
    int64_t* rdx_2 = *r15
    *r15 = rbx
    rbx = nullptr
    sub_1423557c0(r15, rdx_2)

sub_1423557c0(&var_178, rbx)
int32_t i = arg2[1].d
uint64_t* rdi_1 = *r15

if (i s> *(rdi_1 + 0xc))
    sub_140638c50(rdi_1, i)

if (i s> *(rdi_1 + 0x1c))
    sub_142374270(&rdi_1[2], i)

if (rdi_1[1].d s< i)
    do
        void*** rax_7 = j_sub_140a82f30(0x2e0)
        void*** rsi_1
        
        if (rax_7 == 0)
            rsi_1 = nullptr
        else
            rsi_1 = sub_142350000(rax_7, 1)
        
        int64_t rbx_1 = sx.q(rdi_1[1].d)
        int32_t rax_9 = (rbx_1 + 1).d
        rdi_1[1].d = rax_9
        
        if (rax_9 s> *(rdi_1 + 0xc))
            sub_140638870(rdi_1)
        
        *(*rdi_1 + (rbx_1 << 3)) = rsi_1
        int64_t rbx_2 = sx.q(rdi_1[3].d)
        int32_t rax_10 = (rbx_2 + 1).d
        rdi_1[3].d = rax_10
        
        if (rax_10 s> *(rdi_1 + 0x1c))
            sub_1423740a0(&rdi_1[2])
        
        int64_t rsi_2 = rbx_2 * 0x430
        void*** rsi_3 = rsi_2 + rdi_1[2]
        
        if (rsi_2 != neg.q(rdi_1[2]))
            char rbx_3 = (data_1439c7a08).b
            sub_1423299d0(rsi_3, rbx_3)
            sub_1423299d0(&rsi_3[0x42], rbx_3)
            rsi_3[0x84] = 0
            rsi_3[0x85] = 0
    while (rdi_1[1].d s< i)
    
    r15 = &arg1[0xa]

int64_t** rdi_2 = *arg2
uint64_t rsi_5 = sx.q(arg2[1].d) << 3 u>> 3

if (rdi_2 u> &rdi_2[arg2[1]])
    rsi_5 = 0

if (rsi_5 != 0)
    int64_t rbx_4 = 0
    
    do
        sub_1423592c0(arg1, *rdi_2, *(**r15 + (rbx_4 << 3)))
        rbx_4 += 1
        rdi_2 = &rdi_2[1]
    while (rbx_4 != rsi_5)

(*(*arg1 + 0x2f8))(arg1)
void* rbx_5 = *r15
int32_t* rax_15
float zmm6
uint128_t zmm7
uint128_t result_6
uint128_t result_3
rax_15, zmm6, zmm7, result_6, result_3 = sub_141cdcec0(**arg2, &var_1a0)
uint128_t zmm10 = zx.o(0)
float zmm2 = zmm6
float zmm5 = zmm6
*(rbx_5 + 0x40) = *rax_15
*(rbx_5 + 0x50) = *(rax_15 + 0x10)
*(rbx_5 + 0x58) = rax_15[6]
void* rax_17 = *r15
float var_190 = zmm6
float var_18c = zmm6
int32_t var_188 = 0
var_1a0.o = zx.o(0)
int32_t rcx_23
uint128_t result_5

if (rax_17 == 0)
    rcx_23 = var_188
else
    result_5 = zx.o(*(rax_17 + 0x50))
    zmm10 = *(rax_17 + 0x40)
    rcx_23 = *(rax_17 + 0x58)
    var_190.q = result_5.q
    zmm2 = var_190
    zmm5 = _mm_shuffle_ps(result_5, result_5, 0x55).d
    var_1a0.o = zmm10

int32_t zmm11 = *(arg1 + 0xe4)

if (zmm11 f!= zmm6 || zmm6 f!= arg1[0x1d].d || zmm6 f!= *(arg1 + 0xec))
    rax_17.b = 0
else
    rax_17.b = 1

uint128_t zmm0_2

if (rax_17.b == 0)
label_14235a80f:
    uint128_t var_58_1 = zmm7
    zmm7 = var_1a0:4.d
    uint128_t result_7 = result_6
    float zmm3 = zmm7.d
    result_6 = var_1a0.d
    zmm7.d = zmm7.d f+ zmm2
    result_5 = result_6
    uint128_t result_4 = result_3
    int32_t var_194
    result_6.d = result_6.d f+ var_194
    result_5.d = result_5.d f- var_194
    result_3 = result_2
    float zmm4_1 = result_3.d
    zmm7.d = zmm7.d f+ *(arg1 + 0xdc)
    result_6.d = result_6.d f+ arg1[0x1b].d
    result_3.d = result_3.d f+ zmm5
    zmm3 = zmm3 - zmm2 f- arg1[0x1d].d
    result_5.d = result_5.d f- zmm11
    result_3.d = result_3.d f+ arg1[0x1c].d
    zmm4_1 = zmm4_1 - zmm5 f- *(arg1 + 0xec)
    zmm5 = zmm3 f+ zmm7.d
    zmm0_2.d = result_5.d f+ result_6.d
    result_6.d = result_6.d f- result_5.d
    zmm7.d = zmm7.d f- zmm3
    zmm6 = zmm4_1 f+ result_3.d
    result_3.d = result_3.d f- zmm4_1
    zmm3 = result_6.d
    zmm10.d = zmm0_2.d f* 0.5f
    result_6.d = result_6.d f* result_6.d
    _mm_shuffle_ps(zmm10, zmm10, 0xe1)
    result_5 = result_3
    zmm10.d = zmm5 * 0.5f
    zmm0_2.d = zmm7.d f* 0.5f
    zmm7.d = zmm7.d f* zmm7.d
    result_3.d = result_3.d f* result_3.d
    result_6.d = result_6.d f+ zmm7.d
    _mm_shuffle_ps(zmm10, zmm10, 0xc6)
    var_190 = zmm0_2.d
    result_6.d = result_6.d f+ result_3.d
    zmm10.d = zmm6 * 0.5f
    _mm_shuffle_ps(zmm10, zmm10, 0x27)
    result_5.d = result_5.d f* 0.5f
    zmm10.d = zmm3 * 0.5f
    result_6.d = result_6.d f* 0.25f
    zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0x39)
    int32_t var_18c_1 = result_5.d
    var_188 = _mm_sqrt_ss(0, result_6.d).d
    rcx_23 = var_188
    var_1a0.o = zmm10
else
    if (zmm6 f!= arg1[0x1b].d || zmm6 f!= *(arg1 + 0xdc) || zmm6 f!= arg1[0x1c].d)
        rax_17.b = 0
    else
        rax_17.b = 1
    
    if (rax_17.b == 0)
        goto label_14235a80f

int32_t i_1 = 0
*(arg1 + 0xf0) = zmm10
arg1[0x20] = var_190.q
arg1[0x21].d = rcx_23

if (arg2[1].d s> 0)
    int64_t rdi_3 = 0x20
    
    do
        zmm0_2 = powf(0x3f400000.d, _mm_cvtepi32_ps(zx.o(i_1)).d)
        rdi_3 += 4
        i_1 += 1
        *(*r15 + rdi_3 - 4) = zmm0_2.d
    while (i_1 s< arg2[1].d)

sub_14235dec0(arg1)
int64_t* rcx_25 = arg1[0x11]
(*(*rcx_25 + 0x278))(rcx_25)
int512_t zmm6_1
zmm6_1.o = arg4

if (arg3 != 0)
    char var_150
    char var_150_1 = var_150 | 1
    void* rcx_26 = *r15
    void* rbx_6 = arg1[0x11]
    int64_t var_138_1 = data_143dbb1f8.q
    int64_t* var_140_1 = &var_168
    int32_t var_130_1 = data_143dbb200
    int32_t rax_21 = data_143dbb210
    int64_t var_12c_1 = data_143dbb208
    int32_t var_120_1 = 0x3f800000
    int32_t var_11c_1 = 0x3f800000
    var_118.d = 0x3f800000
    int64_t var_160_1 = 0
    int32_t var_158_1 = 0
    int32_t var_154_1 = 1
    int32_t var_148_1 = 6
    var_168 = &data_142e3e618
    int64_t var_138_2 = *(rcx_26 + 0x40)
    int32_t rax_22 = *(rcx_26 + 0x48)
    int64_t zmm0_3 = *(rcx_26 + 0x4c)
    zmm0_3.d = zmm0_3.d f+ zmm0_3.d
    int32_t var_120_2 = zmm0_3.d
    float zmm1 = *(rcx_26 + 0x50)
    zmm0_3 = *(rcx_26 + 0x54)
    zmm0_3.d = zmm0_3.d f+ zmm0_3.d
    var_118.d = zmm0_3.d
    int64_t rdi_4 = sx.q(*(rbx_6 + 0x40))
    int32_t rax_23 = (rdi_4 + 1).d
    *(rbx_6 + 0x40) = rax_23
    
    if (rax_23 s> *(rbx_6 + 0x44))
        sub_1407755b0(rbx_6 + 0x38)
    
    void*** r8_3 = rdi_4 * 0x58 + *(rbx_6 + 0x38)
    *r8_3 = &data_142e3e610
    r8_3[1].d = var_160_1.d.d
    *(r8_3 + 0xc) = var_160_1
    *(r8_3 + 0x14) = var_154_1
    r8_3[3].b ^= (var_150_1 ^ r8_3[3].b) & 1
    r8_3[4].d = 6
    r8_3[5] = r8_3
    *r8_3 = &data_142e3e618
    r8_3[6] = var_138_2
    r8_3[7].d = rax_22
    *(r8_3 + 0x3c) = var_12c_1
    *(r8_3 + 0x44) = rax_21
    r8_3[9].d = var_120_2.d
    *(r8_3 + 0x4c) = zmm1 + zmm1
    r8_3[0xa].d = var_118.d.d
    int64_t* rcx_28 = arg1[0x11]
    (*(*rcx_28 + 0x260))(rcx_28)

int32_t result

if (var_1a8 == 0)
    sub_1409aa070(&var_1a0, sub_1425b0750(), 0, 0, 0)
    int64_t** rsi_6 = var_190.q
    
    if (rsi_6 != 0)
        void** r14_1 = var_1a0
        void* r15_1 = var_188.q
        int32_t result_1 = result_2
        
        while (true)
            int64_t* rdi_5
            
            if (rsi_6 == 0)
                rdi_5 = nullptr
            else
                rdi_5 = *rsi_6
                
                if (rdi_5 == 0)
                    rdi_5 = nullptr
                else
                    void* rax_31 = sub_1425b0750()
                    void* rdx_15 = rdi_5[2]
                    int64_t rax_32 = sx.q(*(rax_31 + 0x38))
                    
                    if (rax_32.d s> *(rdx_15 + 0x38)
                            || *(*(rdx_15 + 0x30) + (rax_32 << 3)) != rax_31 + 0x30)
                        rdi_5 = nullptr
            
            if (rdi_5[0x88] == arg1 && (rdi_5[0x11].b & 4) != 0)
                sub_141ef1240(rdi_5)
            
            while (true)
                int32_t r8_5 = *(r14_1 + 0x24)
                result = result_1 + 1
                result_1 = result
                
                if (result s>= r8_5)
                    goto label_14235ac68
                
                void* rdi_6
                
                while (true)
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(result_1)
                    uint32_t rdx_17 = zx.d(temp2_1)
                    int32_t rax_36 = temp3_1 + rdx_17
                    int64_t rdx_18 = *(r14_1[2] + (sx.q(rax_36 s>> 0x10) << 3))
                    int64_t rcx_35 = sx.q(zx.d(rax_36.w) - rdx_17) * 3
                    rdi_6 = *(rdx_18 + (rcx_35 << 3))
                    rsi_6 = rdx_18 + (rcx_35 << 3)
                    
                    if (rdi_6 != 0)
                        break
                    
                    result = result_1 + 1
                    result_1 = result
                    
                    if (result s>= r8_5)
                        goto label_14235ac68
                
                int32_t var_180
                
                if ((var_180 & *(rdi_6 + 8)) == 0)
                    if (r15_1 != sub_140d41340())
                        void* rax_42 = *(rdi_6 + 0x10)
                        int64_t rcx_39 = sx.q(*(r15_1 + 0x38))
                        
                        if (rcx_39.d s> *(rax_42 + 0x38))
                            continue
                        else if (*(*(rax_42 + 0x30) + (rcx_39 << 3)) != r15_1 + 0x30)
                            continue
                    
                    int32_t rax_44 = *(rdi_6 + 0xc)
                    void* const rax_48
                    
                    if (rax_44 s>= data_143e1d9b4)
                        rax_48 = nullptr
                    else
                        uint32_t rdx_20 = zx.d(rax_44.w)
                        
                        if (rax_44 s< 0)
                            rax_44 += 0xffff
                            rdx_20 -= 0x10000
                        
                        rax_48 =
                            *(data_143e1d9a0 + (sx.q(rax_44 s>> 0x10) << 3)) + sx.q(rdx_20) * 0x18
                    
                    int32_t var_17c
                    
                    if ((*(rax_48 + 8) & var_17c) == 0)
                        break

label_14235ac68:

if (var_b0 != 0)
    char var_b0_1 = 0
    sub_1409ab990(&var_108)

result.b = 1
__security_check_cookie(rax_1 ^ &var_1d8)
return result
