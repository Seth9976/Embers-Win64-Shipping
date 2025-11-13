// 函数: sub_141113480
// 地址: 0x141113480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
void* var_1c8
sub_1419a2ec0(*(arg3 + 0x5150), &var_1c8, &data_143ed5e80, 0)
void* rbx = var_1c8
void* var_1b8
sub_1419a2ec0(*(arg3 + 0x5150), &var_1b8, &data_143e5e720, 0)
void* rdi = var_1b8
void var_178
sub_141385550(&var_178, arg1, arg3)
int512_t zmm3
zmm3.o = 0x3f800000
int128_t var_188 = *(arg3 + 0x1598)
sub_1410b7780(&var_178, &var_188, zx.o(0), zmm3.o)
int64_t var_ac
__builtin_memset(&var_ac, 0, 0x43)
int128_t var_108
__builtin_memset(&var_108, 0, 0x30)
int128_t var_c0 = zx.o(0)
int16_t var_68 = 0
sub_140fdc870(arg1, &var_108)
int64_t var_d8 = data_14395da00
int64_t var_d0 = data_14395da18
int64_t var_c8 = data_1439b5f60
var_108.q = data_1439c9210
int64_t rax_6 = 0
void* var_1c0

if (rbx != 0)
    int64_t rdx_5 = sx.q(*(rbx + 0x10c))
    int64_t* rbx_1 = *(var_1c0 + 0x10)
    int64_t rax_7 = rbx_1[3]
    
    if (*(rax_7 + (rdx_5 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_5.d)
        rax_7 = rbx_1[3]
    
    rax_6 = *(rax_7 + (rdx_5 << 3))

var_108:8.q = rax_6
int64_t rax_8 = 0

if (rdi != 0)
    int64_t rdx_6 = sx.q(*(rdi + 0x10c))
    void* var_1b0
    int64_t* rbx_2 = *(var_1b0 + 0x10)
    int64_t rax_10 = rbx_2[3]
    
    if (*(rax_10 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_6.d)
        rax_10 = rbx_2[3]
    
    rax_8 = *(rax_10 + (rdx_6 << 3))

int128_t var_e8
var_e8.q = rax_8
int32_t var_b0 = 0
sub_1419870b0(arg1, &var_108, 2)
void*** rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_10[3]

if (rax_11 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_10[3]

*(arg1 + 0x30) = rax_11
int64_t* rax_12 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_12 = rcx_10
*(arg1 + 8) = &rcx_10[1]
rcx_10[1] = 0
*rcx_10 = &data_142f18bb8
rcx_10[2].d = 1
void* var_138
int64_t r13 = *(var_138 + 0x1a0)
void* r9_1 = sub_141080ac0(rdi, var_138, r13, *(arg3 + 0x10))
int64_t* r12 = data_14395fa10

if (*(rdi + 0x11a) u> 0)
    var_1c8.d = zx.d(*(rdi + 0x118))
    void*** rcx_18 = (*(var_138 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_18[5]
    
    if (rax_15 u> *(var_138 + 0x38))
        r9_1 = sub_140b0e3d0(var_138 + 0x30, 0x30)
        rcx_18 = (*(var_138 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_18[5]
    
    *(var_138 + 0x30) = rax_15
    int64_t* rax_16 = *(var_138 + 8)
    *(var_138 + 0x14) += 1
    *rax_16 = rcx_18
    *(var_138 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142d5a070
    rcx_18[3].d = var_1c8.d
    rcx_18[4] = arg4
    rcx_18[2] = r13

if (*(rdi + 0x11e) u> 0)
    uint32_t rsi_3 = zx.d(*(rdi + 0x11c))
    char rax_21
    rax_21, r9_1 = (*(*r12 + 8))(r12)
    
    if (rax_21 == 0)
        void*** rcx_25 = (*(var_138 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_22 = &rcx_25[5]
        
        if (rax_22 u> *(var_138 + 0x38))
            r9_1 = sub_140b0e3d0(var_138 + 0x30, 0x30)
            rcx_25 = (*(var_138 + 0x30) + 7) & 0xfffffffffffffff8
            rax_22 = &rcx_25[5]
        
        *(var_138 + 0x30) = rax_22
        void**** rax_23 = *(var_138 + 8)
        *(var_138 + 0x14) += 1
        *rax_23 = rcx_25
        *(var_138 + 8) = &rcx_25[1]
        rcx_25[1] = 0
        *rcx_25 = &data_142d5a080
        rcx_25[2] = r13
        rcx_25[3].d = rsi_3
        rcx_25[4] = r12

int32_t rcx_30 = *(arg3 + 0x15a4) - *(arg3 + 0x159c)
int32_t r8_2 = *(arg3 + 0x1598)
uint128_t zmm0_1 = zx.o(*(arg3 + 0x159c))
int32_t rdx_10 = *(arg3 + 0x15a0) - r8_2
int32_t var_1d0 = 1
int32_t var_1d8 = 1
var_1b8 = rbx
void* var_1b0_1 = var_1c0
var_1c8:4.d = rcx_30
void** var_1e0 = &var_1b8
int64_t rax_28 = *(arg2 + 0x37c)
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rcx_30))
var_1c8.d = rdx_10
void* rax_29 = var_1c8
zmm3.o = zx.o(rdx_10)
int32_t var_1f8 = zmm4.d
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
int512_t zmm2_1
zmm2_1.o = zx.o(r8_2)
int32_t var_200 = zmm3.d
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
int32_t var_210 = zmm2_1.d
zmm2_1.o = zx.o(0)
sub_1413993b0(arg1, zx.o(0), zmm2_1, r9_1, zmm3, zmm4.d, var_210, _mm_cvtepi32_ps(zmm0_1).d, 
    var_200, var_1f8, rax_29, rax_28, var_1e0, var_1d8, var_1d0)
int64_t result = sub_141386800(&var_178)
__security_check_cookie(rax_1 ^ &var_238)
return result
