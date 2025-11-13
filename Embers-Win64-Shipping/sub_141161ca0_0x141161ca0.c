// 函数: sub_141161ca0
// 地址: 0x141161ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rax_3 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg3 + 0x1548))])
int64_t var_c4
__builtin_memset(&var_c4, 0, 0x43)
int128_t var_120
__builtin_memset(&var_120, 0, 0x30)
int128_t var_d8 = zx.o(0)
int16_t var_80 = 0
sub_140fdc870(arg1, &var_120)
int64_t var_f0 = data_14395da00
int64_t var_e8 = data_14395da18
int64_t var_e0 = data_14395d9e8
void* var_130
sub_1419a2ec0(rax_3, &var_130, &data_143e6dcc0, 0)
void* r13 = var_130
void* var_148
sub_1419a2ec0(rax_3, &var_148, &data_143e6d740, 0)
var_120.q = data_1439c9210
int64_t rax_8 = 0
void* var_128

if (r13 != 0)
    int64_t rdx_3 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_1 = *(var_128 + 0x10)
    int64_t rax_9 = rbx_1[3]
    
    if (*(rax_9 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_3.d)
        rax_9 = rbx_1[3]
    
    rax_8 = *(rax_9 + (rdx_3 << 3))

void* rbx_2 = var_148
var_120:8.q = rax_8
int64_t rax_10 = 0

if (rbx_2 != 0)
    int64_t rdx_4 = sx.q(*(rbx_2 + 0x10c))
    void* var_140
    int64_t* rdi_2 = *(var_140 + 0x10)
    int64_t rax_12 = rdi_2[3]
    
    if (*(rax_12 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(rdi_2, rdx_4.d)
        rax_12 = rdi_2[3]
    
    rax_10 = *(rax_12 + (rdx_4 << 3))

int128_t var_100
var_100.q = rax_10
int32_t var_c8 = 0
sub_1419870b0(arg1, &var_120, 2)
int64_t r15 = *(arg1 + 0x1a0)
sub_141080ac0(rbx_2, arg1, r15, *(arg3 + 0x10))
int64_t* r14_2 = data_14395fa10
int64_t rax_14 = *(*arg4 + 0x10)

if (*(rbx_2 + 0x11a) u> 0)
    int64_t* var_158
    var_158.d = zx.d(*(rbx_2 + 0x118))
    void*** rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_16 = &rcx_11[5]
    
    if (rax_16 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_16 = &rcx_11[5]
    
    *(arg1 + 0x30) = rax_16
    int64_t* rax_17 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_17 = rcx_11
    *(arg1 + 8) = &rcx_11[1]
    rcx_11[1] = 0
    *rcx_11 = &data_142d5a070
    rcx_11[3].d = var_158.d
    rcx_11[4] = rax_14
    rcx_11[2] = r15

if (*(rbx_2 + 0x11e) u> 0)
    uint32_t rdi_3 = zx.d(*(rbx_2 + 0x11c))
    
    if ((*(*r14_2 + 8))(r14_2) == 0)
        void*** rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_23 = &rcx_18[5]
        
        if (rax_23 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_23 = &rcx_18[5]
        
        *(arg1 + 0x30) = rax_23
        void**** rax_24 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_24 = rcx_18
        *(arg1 + 8) = &rcx_18[1]
        rcx_18[1] = 0
        *rcx_18 = &data_142d5a080
        rcx_18[2] = r15
        rcx_18[3].d = rdi_3
        rcx_18[4] = r14_2

void* r9_3
uint128_t zmm6
r9_3, zmm6 = sub_141080be0(r13, arg1, *(arg1 + 0x188), *(arg3 + 0x10))
uint128_t zmm8
zmm8.d = arg5.d f* 512f
uint128_t zmm1
zmm1.d = zmm8.d f* 0.001953125f
int32_t rcx_23 = int.d(zmm1.d)

if (rcx_23 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_23)).d f== zmm1.d))
    zmm1 =
        _mm_cvtepi32_ps(zx.o(rcx_23 + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1) ^ 1)))

int32_t result = (int.q(zmm1.d)).d

if (result != 0)
    uint128_t var_48_1 = zmm6
    int32_t r14_3 = 0
    zmm6 = zx.o(0)
    uint64_t r15_1 = zx.q(result)
    uint64_t i
    
    do
        int32_t var_160_1 = 1
        int32_t var_168_1 = 0
        int512_t zmm3
        zmm3.o = 0x44000000
        int512_t zmm2
        zmm2.o = zmm6
        var_148 = r13
        void* var_140_1 = var_128
        uint128_t zmm0_1
        zmm0_1.d = float.s(zx.q(r14_3))
        void** var_170_1 = &var_148
        int64_t var_178_1 = 0x20000000200
        int64_t var_180_1 = 0x200
        zmm1.d = zmm0_1.d f+ 512f
        zmm1.d = _mm_min_ss(zmm1.d, zmm8.d).d f- zmm0_1.d
        result, r9_3, zmm2, zmm3, zmm6 = sub_1413993b0(arg1, zmm6, zmm2, r9_3, zmm3, zmm1.d, 
            zmm6.d, zmm6.d, 0x44000000, zmm1.d, var_180_1, var_178_1, var_170_1, var_168_1, 
            var_160_1)
        r14_3 += 0x200
        i = r15_1
        r15_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
