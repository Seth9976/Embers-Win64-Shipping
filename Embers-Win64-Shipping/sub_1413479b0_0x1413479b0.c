// 函数: sub_1413479b0
// 地址: 0x1413479b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_48 = arg3
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* rax_2 = *arg1
int64_t r13 = 0

if (rax_2 != 0)
    int64_t rdx = sx.q(*(rax_2 + 0x10c))
    int64_t* rbx_1 = *(arg1[1] + 0x10)
    int64_t rax_4 = rbx_1[3]
    
    if (*(rax_4 + (rdx << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx.d)
        rax_4 = rbx_1[3]
    
    r13 = *(rax_4 + (rdx << 3))

void* rcx_1 = arg1[2]
int64_t var_108 = data_1439c9228
int64_t rax_6 = 0
int64_t var_e0 = 0
int64_t var_ac
__builtin_memset(&var_ac, 0, 0x43)
int16_t var_68 = 0
int64_t var_100 = r13
int128_t var_f8 = zx.o(0)
int128_t var_c0 = zx.o(0)

if (rcx_1 != 0)
    int64_t rdx_1 = sx.q(*(rcx_1 + 0x10c))
    int64_t* rbx_2 = *(arg1[3] + 0x10)
    int64_t rax_8 = rbx_2[3]
    
    if (*(rax_8 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_1.d)
        rax_8 = rbx_2[3]
    
    rax_6 = *(rax_8 + (rdx_1 << 3))

int64_t var_e8 = rax_6
int64_t var_d0 = data_14395da18
int32_t var_b0 = 0
sub_140fdc870(arg2, &var_108)
uint128_t zmm7 = zx.o(arg1[4].d)
void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
arg3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x24)))
void* rax_10 = &rcx_6[5]
zmm7 = _mm_cvtepi32_ps(zmm7)

if (rax_10 u> *(arg2 + 0x38))
    arg3 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_6[5]

*(arg2 + 0x30) = rax_10
void**** rax_11 = *(arg2 + 8)
int32_t i = 0
*(arg2 + 0x14) += 1
*rax_11 = rcx_6
*(arg2 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142d54998
*(rcx_6 + 0x1c) = zmm7.d
rcx_6[4].d = arg3.d
rcx_6[2] = 0
rcx_6[3].d = 0
*(rcx_6 + 0x24) = 0x3f800000
int512_t zmm6

do
    int64_t rax_14
    
    if (i != 0)
        int64_t var_d8_2 = data_1439b6988
        rax_14 = data_1439b6218
    else
        int64_t var_d8_1 = data_14395da00
        rax_14 = data_1439b6970
    
    int64_t var_c8_1 = rax_14
    sub_1419870b0(arg2, &var_108, 2)
    *arg1[5] = i
    int64_t r9_2
    r9_2, zmm6 = sub_141341730(arg2, arg1, r13, arg1[5])
    void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_14[5]
    
    if (rax_17 u> *(arg2 + 0x38))
        r9_2, zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_14[5]
    
    *(arg2 + 0x30) = rax_17
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_14
    *(arg2 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142d56618
    rcx_14[2].d = 0
    rcx_14[3] = 0
    rcx_14[4].d = 0
    int64_t r15_1 = data_1439b6958
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(*(arg1 + 0x24) * arg1[4].d + 7)
    
    if (r15_1 == 0)
        sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
            r9_2)
        sub_140afbb40()
    
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_20[6]
    
    if (rax_24 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_20[6]
    
    *(arg2 + 0x30) = rax_24
    i += 1
    void**** rax_25 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_25 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[2] = r15_1
    rcx_20[1] = 0
    *(rcx_20 + 0x2c) = ((temp0_2 & 7) + temp1_1) s>> 3
    *rcx_20 = &data_142f11598
    rcx_20[3] = 0
    rcx_20[4] = 0x20
    rcx_20[5].d = 0x10
while (i u< 2)

__security_check_cookie(rax_1 ^ &var_128)
zmm6.o = var_48
return &data_142f11598
