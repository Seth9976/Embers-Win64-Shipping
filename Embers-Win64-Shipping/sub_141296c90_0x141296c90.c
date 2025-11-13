// 函数: sub_141296c90
// 地址: 0x141296c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t rax_3 = *(arg2 + 0x1a0)
int64_t var_1c0 = rax_3
sub_141080ac0(arg1, arg2, rax_3, arg3[2])
int32_t r8_1 = arg3[0x2a9].d
float var_1c8

if (*(arg1 + 0x12c) != 0xffff)
    int32_t* rcx = &var_1c8
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8_1)
    
    sub_141083500(arg2, &var_1c0, arg1 + 0x12c, var_1c8.q)
    sub_1405d1550(&var_1c8)

float zmm0[0x4] = *(arg4 + 0x78)
int32_t zmm1 = (zx.o(0)).d

if (not(zmm0[0] f< zmm1))
    zmm1 = __minss_xmmss_memss(zmm0[0], 0x3d23d70a)[0]

int32_t var_1d8 = 0
int32_t var_1b8 = zmm1 f* 0.5f f* _mm_cvtepi32_ps(zx.o(arg6))[0]
sub_1405eb490(arg2, &var_1c0, arg1 + 0x118, &var_1b8, var_1d8)
int32_t var_1d8_1 = 0
var_1c8 = 1f / __maxss_xmmss_memss(*(arg4 + 0x7c), 0x3727c5ac)
sub_1405eb490(arg2, &var_1c0, arg1 + 0x11e, &var_1c8, var_1d8_1)
int64_t* r14 = data_14395f4d0

if (*(arg1 + 0x126) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x124))
    void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_7[5]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_7[5]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_7
    *(arg2 + 8) = &rcx_7[1]
    rcx_7[1] = 0
    *rcx_7 = &data_142d5a070
    rcx_7[2] = var_1c0
    rcx_7[4] = arg5
    rcx_7[3].d = r15_1

if (*(arg1 + 0x12a) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x128))
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_11 = &rcx_14[5]
        
        if (rax_11 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_11 = &rcx_14[5]
        
        *(arg2 + 0x30) = rax_11
        void**** rax_12 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_12 = rcx_14
        *(arg2 + 8) = &rcx_14[1]
        rcx_14[1] = 0
        *rcx_14 = &data_142d5a080
        rcx_14[2] = var_1c0
        rcx_14[3].d = r15_2
        rcx_14[4] = r14

int128_t zmm0_2 = data_142d3f660
int128_t var_1a8
__builtin_memcpy(&var_1a8, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x40)
int512_t zmm1_2
zmm1_2.o = zmm0_2
int128_t var_98
__builtin_memcpy(&var_98, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f", 
    0x20)
int128_t var_68 = zx.o(0)
sub_1412998b0(arg3, arg4, &var_1a8)
int32_t result_1 = 0
int64_t rdi = sx.q(*(arg1 + 0xe0))

if (rdi s> 0)
    int64_t rdx_5 = 0
    
    while (true)
        void* rcx_20 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_20 = (rcx_20 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_20 + (rdx_5 << 3)) == data_143e901d0)
            break
        
        result_1 += 1
        rdx_5 += 1
        
        if (rdx_5 s>= rdi)
            goto label_141296fac

int64_t result
int16_t* rdi_1

if (rdi s<= 0 || result_1 == 0xffffffff)
label_141296fac:
    TEB* gsbase
    result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143ce8564 s> *(0x14 + result))
        result = _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            result = _Init_thread_footer(&data_143ce8564)
    
    rdi_1 = &data_143ce8560
else
    void* rcx_33 = *(arg1 + 0xe8)
    
    if ((rcx_33.b & 1) != 0)
        rcx_33 = (rcx_33 s>> 1) + arg1 + 0xe8
    
    result = sx.q(result_1)
    rdi_1 = rcx_33 + (result << 1)

if (*rdi_1 != 0xffff)
    int64_t* rcx_23 = data_143f0f180
    (*(*rcx_23 + 0xf8))(rcx_23, &var_1c8, &var_1a8, &data_143e901e0, 0, 1)
    int64_t rsi_1 = var_1c8.q
    uint32_t r14_1 = zx.d(*rdi_1)
    void*** rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_18 = &rcx_26[5]
    
    if (rax_18 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_18 = &rcx_26[5]
    
    *(arg2 + 0x30) = rax_18
    void**** rax_19 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_19 = rcx_26
    *(arg2 + 8) = &rcx_26[1]
    rcx_26[1] = 0
    *rcx_26 = &data_142f11618
    rcx_26[2] = var_1c0
    rcx_26[3].d = r14_1
    rcx_26[4] = rsi_1
    result = sub_1405d1550(&var_1c8)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
