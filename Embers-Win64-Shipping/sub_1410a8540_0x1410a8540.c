// 函数: sub_1410a8540
// 地址: 0x1410a8540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
void* rbx = *arg2
arg2[8]
sub_14139ce70(arg1)
void* rax_2 = *(rbx + 0x15a0)
int32_t rcx_2 = *(arg1 + 0xcc)
int64_t rsi = *(arg1 + 0x44)
void* var_248 = rax_2
var_248.d = divs.dp.d(sx.q(rax_2.d), rcx_2)
var_248:4.d = divs.dp.d(sx.q(var_248:4.d), rcx_2)
int64_t rax_8 = *(rbx + 0x1598)
void* rbx_1 = var_248
int64_t var_258 = rax_8
var_258.d = divs.dp.d(sx.q(rax_8.d), rcx_2)
var_258:4.d = divs.dp.d(sx.q(var_258:4.d), rcx_2)
int64_t* r14_2

if (arg1[0x19].b == 0)
    r14_2 = sub_1413a8300(&arg1[6], arg2)
else
    r14_2 = data_143ec4d20 + 8

TEB* gsbase

if (data_143e41328 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e41328)
    
    if (data_143e41328 == 0xffffffff)
        int64_t* rcx_39 = data_143db18d0
        
        if (rcx_39 == 0)
            sub_140a53c40()
            rcx_39 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_41 = (*(*rcx_39 + 0xb0))(rcx_39, u"r.AmbientOcclusion.Compute", r8_3)
        int64_t rax_39
        
        if (rax_41 == 0)
            rax_39 = 0
        else
            int64_t rdx_21 = *rax_41
            rax_39 = (*(rdx_21 + 0x58))(rax_41, rdx_21)
        
        data_143e41320 = rax_39
        _Init_thread_footer(&data_143e41328)

int64_t rax_15 = *r14_2
int128_t zmm1 = data_142d3f5a0
int32_t var_90 = 0
int32_t var_8c
__builtin_memset(&var_8c, 0xff, 0x14)
int128_t var_78 = zmm1
int64_t var_68
__builtin_memset(&var_68, 0, 0x19)
int64_t var_168 = rax_15
int64_t var_160 = 0
int32_t var_158 = 0xffffffff
int16_t var_154 = 0x500
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x11)
int32_t var_94 = 0
bool var_4f = *(rax_15 + 0x38) u> 1
void var_150
memset(&var_150, 0, 0xa8)
void* r13 = arg2[8]
int64_t r14_5 = (*(r13 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_16 = r14_5 + 0x2c

if (rax_16 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x2e)
    r14_5 = (*(r13 + 0x30) + 1) & 0xfffffffffffffffe
    rax_16 = r14_5 + 0x2c

wchar16 const* const rcx_8 = u"AmbientOcclusionSetup"
*(r13 + 0x30) = rax_16
wchar16 const i

do
    i = *rcx_8
    *(r14_5 - u"AmbientOcclusionSetup" + rcx_8) = i
    rcx_8 = &rcx_8[1]
while (i != 0)
void*** rcx_11 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_11[0x27]

if (rax_17 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x140)
    rcx_11 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_11[0x27]

*(r13 + 0x30) = rax_17
void**** rax_18 = *(r13 + 8)
*(r13 + 0x14) += 1
*rax_18 = rcx_11
*(r13 + 8) = &rcx_11[1]
sub_1405d11b0(rcx_11, &var_168, r14_5)
*(r13 + 0x1c4) = 1
sub_1405d19b0(r13, &var_168)
int64_t var_58
*(r13 + 0x178) = var_58:7.b
uint128_t var_238 = var_258.o
*(r13 + 0x179) = 0
*(r13 + 0x1c4) = 1
sub_1410b7780(arg2, &var_238, zx.o(0), 0x3f800000)
sub_1419a2ec0(arg2[0xc], &var_238, &data_143e41030, 0)
sub_1419a2ec0(arg2[0xc], &var_248, &data_143ed5e80, 0)
void* rcx_19 = arg2[8]
int64_t var_1bc
__builtin_memset(&var_1bc, 0, 0x43)
int128_t var_218
__builtin_memset(&var_218, 0, 0x30)
int128_t var_1d0 = zx.o(0)
int16_t var_178 = 0
sub_140fdc870(rcx_19, &var_218)
void* rcx_20 = var_248
int64_t var_1e8 = data_14395da00
int64_t var_1e0 = data_14395da18
int64_t var_1d8 = data_14395d9e8
var_218.q = data_1439c9210
int64_t rax_25 = 0
int32_t var_1c0 = 0

if (rcx_20 != 0)
    int64_t rdx_17 = sx.q(*(rcx_20 + 0x10c))
    void* var_240
    int64_t* r14_8 = *(var_240 + 0x10)
    int64_t rax_27 = r14_8[3]
    
    if (*(rax_27 + (rdx_17 << 3)) == 0)
        sub_1419ccf30(r14_8, rdx_17.d)
        rax_27 = r14_8[3]
    
    rax_25 = *(rax_27 + (rdx_17 << 3))

void* r15_2 = var_238.q
var_218:8.q = rax_25
int64_t rax_28 = 0

if (r15_2 != 0)
    int64_t rdx_18 = sx.q(*(r15_2 + 0x10c))
    int64_t* r14_9 = *(var_238:8.q + 0x10)
    int64_t rax_30 = r14_9[3]
    
    if (*(rax_30 + (rdx_18 << 3)) == 0)
        sub_1419ccf30(r14_9, rdx_18.d)
        rax_30 = r14_9[3]
    
    rax_28 = *(rax_30 + (rdx_18 << 3))

int128_t var_1f8
var_1f8.q = rax_28
sub_1419870b0(arg2[8], &var_218, 2)
void* r9
int512_t zmm2_1
int512_t zmm3_1
r9, zmm2_1, zmm3_1 = sub_1410b70a0(r15_2, arg2, rsi)
int32_t rbx_2 = rbx_1.d - var_258.d
int32_t rcx_25 = var_258:4.d
int32_t var_260 = 1
int32_t rax_32 = rbx_1:4.d - rcx_25
int32_t var_268 = 1
var_238 = var_248.o
var_248:4.d = rax_32
int128_t* var_270 = &var_238
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rax_32))
var_248.d = rbx_2
void* rax_33 = var_248
void* rcx_26 = arg2[8]
int32_t var_288 = zmm4.d
zmm3_1.o = zx.o(rbx_2)
zmm3_1.o = _mm_cvtepi32_ps(zmm3_1.o)
zmm2_1.o = zx.o(var_258.d)
int32_t var_290 = zmm3_1.d
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
int32_t var_2a0 = zmm2_1.d
zmm2_1.o = zx.o(0)
sub_1413993b0(rcx_26, zx.o(0), zmm2_1, r9, zmm3_1, zmm4.d, var_2a0, 
    _mm_cvtepi32_ps(zx.o(rcx_25)).d, var_290, var_288, rax_33, rsi, var_270, var_268, var_260)
sub_141096650(arg2[8])
int64_t var_60
sub_1405d1550(&var_60)
void* rsi_1 = arg2[8]
void* rax_35 = *r14_2
void** rbx_5 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
var_248 = rax_35
void* rcx_29 = &rbx_5[1]

if (rcx_29 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x10)
    rax_35 = var_248
    rbx_5 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_29 = &rbx_5[1]

*(rsi_1 + 0x30) = rcx_29
*rbx_5 = rax_35
void*** rcx_33 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_36 = &rcx_33[5]

if (rax_36 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x30)
    rcx_33 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_36 = &rcx_33[5]

*(rsi_1 + 0x30) = rax_36
void**** rax_37 = *(rsi_1 + 8)
*(rsi_1 + 0x14) += 1
*rax_37 = rcx_33
*(rsi_1 + 8) = &rcx_33[1]
rcx_33[1] = 0
*rcx_33 = &data_142d549c8
rcx_33[2].d = 1
rcx_33[3] = rbx_5
rcx_33[4].d = 0
__security_check_cookie(rax_1 ^ &var_2c8)
return &data_142d549c8
