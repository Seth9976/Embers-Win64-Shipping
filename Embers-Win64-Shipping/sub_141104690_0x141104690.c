// 函数: sub_141104690
// 地址: 0x141104690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* r13 = *arg1
float zmm3 = arg2[8]
float zmm4 = arg2[9]
float zmm5 = *arg2
float zmm1 = *(r13 + 0x60c) f- arg2[0xc]
float zmm2 = *(r13 + 0x610) f- arg2[0xd]
float zmm0 = *(r13 + 0x614) f- arg2[0xe]
int128_t zmm6 = arg2[2]
int128_t zmm7 = arg2[1]
float zmm8[0x4] = arg2[5]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7.d = zmm7.d f* zmm7.d
zmm2 = zmm2 * zmm2 + zmm1 * zmm1
zmm1 = arg2[6]
zmm6.d = zmm6.d f* zmm6.d
zmm2 = zmm2 + zmm0 * zmm0
zmm0 = arg2[4]
zmm8[0] = zmm8[0] + zmm0 * zmm0
float temp0[0x4] = _mm_sqrt_ss(0, zmm2)
zmm2 = arg2[0xa]
zmm8[0] = zmm8[0] + zmm1 * zmm1
zmm7.d = zmm7.d f+ zmm5 * zmm5
zmm7.d = zmm7.d f+ zmm6.d
float temp0_3 = _mm_sqrt_ss(0, 
    _mm_max_ss(_mm_max_ss(zmm8[0], zmm4 * zmm4 + zmm3 * zmm3 + zmm2 * zmm2)[0], zmm7.d)[0])
void** const result

if (temp0[0] <= temp0_3 || temp0_3 / temp0[0] f>= *(data_143e51050 + 4))
    void* rcx = arg1[8]
    int64_t var_cc
    __builtin_memset(&var_cc, 0, 0x43)
    int16_t var_88_1 = 0
    int128_t var_128
    __builtin_memset(&var_128, 0, 0x30)
    int128_t var_e0_1 = zx.o(0)
    sub_140fdc870(rcx, &var_128)
    void* r15_1 = arg1[8]
    int64_t var_f0_1 = data_14395da18
    int64_t var_f8_1 = data_1439b57e8
    int64_t var_e8_1 = data_1439b5800
    void* var_138
    sub_1419a2ec0(*(r13 + 0x5150), &var_138, &data_143e51d00, 0)
    void* r14_1 = var_138
    int64_t rax_5 = 0
    var_128.q = data_1439c9410
    
    if (r14_1 != 0)
        int64_t rdx_2 = sx.q(*(r14_1 + 0x10c))
        void* var_130
        int64_t* rbx_1 = *(var_130 + 0x10)
        int64_t rax_7 = rbx_1[3]
        
        if (*(rax_7 + (rdx_2 << 3)) == 0)
            sub_1419ccf30(rbx_1, rdx_2.d)
            rax_7 = rbx_1[3]
        
        rax_5 = *(rax_7 + (rdx_2 << 3))
    
    var_128:8.q = rax_5
    int32_t var_d0_1 = 0
    sub_1419870b0(r15_1, &var_128, 2)
    int64_t r9_2 = sub_141106f60(r14_1, r15_1, *(r13 + 0x10), arg3)
    void* rdi_2 = arg1[8]
    void*** rcx_8 = (*(rdi_2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_8[3]
    
    if (rax_8 u> *(rdi_2 + 0x38))
        r9_2 = sub_140b0e3d0(rdi_2 + 0x30, 0x20)
        rcx_8 = (*(rdi_2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_8[3]
    
    *(rdi_2 + 0x30) = rax_8
    int64_t* rax_9 = *(rdi_2 + 8)
    *(rdi_2 + 0x14) += 1
    *rax_9 = rcx_8
    *(rdi_2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142f18bb8
    rcx_8[2].d = 0
    void* rdi_3 = arg1[8]
    int64_t r14_2 = data_1439c9458
    void*** rcx_14 = (*(rdi_3 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_14[5]
    
    if (rax_11 u> *(rdi_3 + 0x38))
        r9_2 = sub_140b0e3d0(rdi_3 + 0x30, 0x30)
        rcx_14 = (*(rdi_3 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_14[5]
    
    *(rdi_3 + 0x30) = rax_11
    int64_t* rax_12 = *(rdi_3 + 8)
    *(rdi_3 + 0x14) += 1
    *rax_12 = rcx_14
    *(rdi_3 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142d56618
    rcx_14[2].d = 0
    rcx_14[3] = r14_2
    rcx_14[4].d = 0
    void* rdi_4 = arg1[8]
    int64_t r14_3 = data_1439c9470
    
    if (r14_3 == 0)
        sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
            r9_2)
        sub_140afbb40()
    
    void*** rcx_20 = (*(rdi_4 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_20[6]
    
    if (rax_14 u> *(rdi_4 + 0x38))
        sub_140b0e3d0(rdi_4 + 0x30, 0x38)
        rcx_20 = (*(rdi_4 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_20[6]
    
    *(rdi_4 + 0x30) = rax_14
    int64_t* rax_15 = *(rdi_4 + 8)
    *(rdi_4 + 0x14) += 1
    *rax_15 = rcx_20
    *(rdi_4 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    *rcx_20 = &data_142f11598
    result.b = 1
    rcx_20[2] = r14_3
    rcx_20[3] = 0
    rcx_20[4] = 8
    rcx_20[5].d = 0xc
    *(rcx_20 + 0x2c) = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_158)
return result
