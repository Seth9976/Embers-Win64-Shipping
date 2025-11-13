// 函数: sub_141302aa0
// 地址: 0x141302aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t rbx = 0
int64_t var_8c
__builtin_memset(&var_8c, 0, 0x43)
int128_t var_e8
__builtin_memset(&var_e8, 0, 0x30)
int128_t var_a0 = zx.o(0)
int16_t var_48 = 0
sub_140fdc870(arg2, &var_e8)
void* rcx_1 = *arg1
int64_t var_b8 = data_14395da00
int64_t var_b0 = data_14395da18
int64_t var_a8 = data_14395d9e8
int64_t result
void* var_148
void* var_140
void* var_120
uint128_t var_108
int128_t var_c8

if (arg1[4].b == 0)
    sub_1419a2ec0(*(rcx_1 + 0x5150), &var_148, &data_143ed5e80, 0)
    var_e8.q = data_1439c9210
    void* rax_17 = var_148
    int32_t var_90_1 = 0
    
    if (rax_17 != 0)
        int64_t rdx_10 = sx.q(*(rax_17 + 0x10c))
        int64_t* rdi_3 = *(var_140 + 0x10)
        int64_t rbx_2 = rdi_3[3]
        
        if (*(rbx_2 + (rdx_10 << 3)) == 0)
            sub_1419ccf30(rdi_3, rdx_10.d)
            rbx_2 = rdi_3[3]
        
        rbx = *(rbx_2 + (rdx_10 << 3))
    
    var_e8:8.q = rbx
    var_c8.q = sub_140790e00(&arg1[1])
    sub_1419870b0(arg2, &var_e8, 2)
    void* r9_3
    int512_t zmm2_1
    int512_t zmm3_1
    r9_3, zmm2_1, zmm3_1 = sub_1412faa80(arg2, &arg1[1], sub_140790e00(&arg1[1]), arg1[3])
    int32_t rax_21 = data_1439b6748
    int32_t var_150_1 = 1
    zmm2_1.o = zx.o(0)
    int32_t rcx_20 = rax_21 * rax_21
    int32_t var_158_1 = 1
    var_120:4.d = rax_21
    var_148:4.d = rax_21
    var_108 = var_148.o
    int128_t* var_160_1 = &var_108
    var_120.d = rcx_20
    void* rax_22 = var_120
    zmm3_1.o = zx.o(rcx_20)
    uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(rax_21))
    var_148.d = rcx_20
    void* rax_23 = var_148
    zmm3_1.o = _mm_cvtepi32_ps(zmm3_1.o)
    result = sub_1413993b0(arg2, zx.o(0), zmm2_1, r9_3, zmm3_1, zmm0_2.d, 0, 0, zmm3_1.d, zmm0_2.d, 
        rax_23, rax_22, var_160_1, var_158_1, var_150_1)
else
    int32_t rax_5 = data_1439b6748
    int32_t var_124_1 = rax_5
    int64_t var_138 = 0
    int32_t var_130_1 = 0
    sub_1419a2ec0(*(rcx_1 + 0x5150), &var_120, &data_143f5e630, 0)
    int128_t* rax_7 = sub_1419a2ec0(*(*arg1 + 0x5150), &var_108, &data_143f5e530, 0)
    void* r13_1 = var_120
    void* rcx_4 = *(rax_7 + 8)
    void* r15_1 = *rax_7
    var_e8.q = data_143a2fe60
    int64_t rax_9 = 0
    var_148 = rcx_4
    int32_t var_90 = 1
    
    if (r13_1 != 0)
        int64_t rdx_3 = sx.q(*(r13_1 + 0x10c))
        void* var_118
        int64_t* rdi_1 = *(var_118 + 0x10)
        int64_t rax_11 = rdi_1[3]
        
        if (*(rax_11 + (rdx_3 << 3)) == 0)
            sub_1419ccf30(rdi_1, rdx_3.d)
            rax_11 = rdi_1[3]
            rcx_4 = var_148
        
        rax_9 = *(rax_11 + (rdx_3 << 3))
    
    var_e8:8.q = rax_9
    
    if (r15_1 != 0)
        int64_t rdx_4 = sx.q(*(r15_1 + 0x10c))
        int64_t* rdi_2 = *(rcx_4 + 0x10)
        int64_t rbx_1 = rdi_2[3]
        
        if (*(rbx_1 + (rdx_4 << 3)) == 0)
            sub_1419ccf30(rdi_2, rdx_4.d)
            rbx_1 = rdi_2[3]
        
        rbx = *(rbx_1 + (rdx_4 << 3))
    
    var_c8:8.q = rbx
    var_c8.q = sub_140790e00(&arg1[1])
    sub_1419870b0(arg2, &var_e8, 2)
    int32_t rax_14 = rax_5 - var_138.d
    var_148.d = rax_14
    var_148:4.d = rax_14
    var_148 = var_148
    var_140.d = rax_14
    sub_1412f1e20(r13_1, arg2, &var_138, &var_148)
    sub_1412faa80(arg2, &arg1[1], sub_140790e00(&arg1[1]), arg1[3])
    var_108 = var_138.o
    int64_t var_f8_1 = rax_5.q
    result = sub_14243f510(arg2, &var_108)
__security_check_cookie(rax_1 ^ &var_1b8)
return result
