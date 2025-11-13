// 函数: sub_1413652a0
// 地址: 0x1413652a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t var_2a0 = 0
void* rax_2 = sub_14139ce70(arg1)
int64_t rdi = arg1[0x28]
int32_t rdx_1 = *(rax_2 + 0x14)
int32_t var_27c = *(rax_2 + 0x18)
void* rax_4 = *arg2
int32_t rcx = *(rax_4 + 0x1598)
int32_t rdx_2 = *(rax_4 + 0x15a4)
int32_t rcx_1 = *(rax_4 + 0x159c)
int32_t rcx_2 = *(rax_4 + 0x15a0)
int64_t* rax_5 = sub_1413a8300(&arg1[4], arg2)
int64_t r13 = 1
int64_t r15 = 1
int64_t* rax_6 = nullptr

if (*(arg1 + 0x14a) == 0)
    rax_6 = sub_1413a8300(&arg1[0x10], arg2)
    r13 = 2
    r15 = 2

int64_t var_258 = *rax_5
int64_t* var_2a8
int64_t* var_298
int64_t* rax_8
int64_t* rcx_6
int32_t rsi

if (rax_6 == 0)
    rax_8 = nullptr
    rcx_6 = nullptr
    var_298 = nullptr
    rsi = 2
else
    int64_t* rax_7 = *rax_6
    var_2a8 = rax_7
    
    if (rax_7 != 0)
        rax_7[1].d += 1
    
    rcx_6 = var_2a8
    rsi = 1
    rax_8 = var_298

int64_t* var_250 = rcx_6

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            if (var_298[2].b != 0)
                (**var_298)(var_298, 1)
            else
                char rax_9
                
                if (data_143f0f1d0 == 0)
                    rax_9 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_9 != 0)
                    (**var_298)(var_298, 1)
                else
                    bool z_1
                    
                    if (0 == *(var_298 + 0xc))
                        *(var_298 + 0xc) = 1
                        z_1 = true
                    else
                        *(var_298 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, var_298)

if ((rsi.b & 1) != 0 && var_2a8 != 0)
    var_2a8[1].d -= 1
    
    if (var_2a8[1].d == 1)
        if (var_2a8[2].b != 0)
            (**var_2a8)(var_2a8, 1)
        else
            char rax_13
            
            if (data_143f0f1d0 == 0)
                rax_13 = sub_1405949a0()
            
            if (data_143f0f1d0 == 0 && rax_13 != 0)
                (**var_2a8)(var_2a8, 1)
            else
                bool z_2
                
                if (0 == *(var_2a8 + 0xc))
                    *(var_2a8 + 0xc) = 1
                    z_2 = true
                else
                    *(var_2a8 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, var_2a8)

void* rax_18 = sub_14139d290((*(*arg1 + 0x10))(arg1, 0))
void var_160
void* rcx_13 = &var_160
int128_t zmm1 = data_142d3f5a0
int64_t rdx_7 = 0
int64_t rax_20 = *(*(rax_18 + 0x50) + 0x10)
int32_t var_90 = 0
int32_t var_8c
__builtin_memset(&var_8c, 0xff, 0x14)
int128_t var_78 = zmm1
int64_t var_68
__builtin_memset(&var_68, 0, 0x1a)

do
    int64_t rax_21 = (&var_258)[rdx_7]
    rdx_7 += 1
    *(rcx_13 - 8) = rax_21
    *rcx_13 = 0
    *(rcx_13 + 8) = 0xffffffff
    *(rcx_13 + 0xc) = 0x100
    rcx_13 += 0x18
while (rdx_7 s< r15)

int64_t var_a8
__builtin_memset(&var_a8, 0, 0x11)
int32_t var_94 = 0
void var_168
memset(&var_168 + r15 * 0x18, 0, 0xc0 - r13 * 0x18)
void* r13_1 = arg2[8]
int64_t rbx_5 = (*(r13_1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_23 = rbx_5 + 0x2c

if (rax_23 u> *(r13_1 + 0x38))
    sub_140b0e3d0(r13_1 + 0x30, 0x2e)
    rbx_5 = (*(r13_1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_23 = rbx_5 + 0x2c

wchar16 const* const rcx_16 = u"PostProcessSunMaskES2"
*(r13_1 + 0x30) = rax_23
wchar16 const i

do
    i = *rcx_16
    *(rcx_16 + rbx_5 - u"PostProcessSunMaskES2") = i
    rcx_16 = &rcx_16[1]
while (i != 0)
void*** rcx_19 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rcx_19[0x27]

if (rax_24 u> *(r13_1 + 0x38))
    sub_140b0e3d0(r13_1 + 0x30, 0x140)
    rcx_19 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_19[0x27]

*(r13_1 + 0x30) = rax_24
void**** rax_25 = *(r13_1 + 8)
*(r13_1 + 0x14) += 1
*rax_25 = rcx_19
*(r13_1 + 8) = &rcx_19[1]
sub_1405d11b0(rcx_19, &var_168, rbx_5)
*(r13_1 + 0x1c4) = 1
sub_1405d19b0(r13_1, &var_168)
int64_t var_58
*(r13_1 + 0x178) = var_58:7.b
*(r13_1 + 0x179) = 0
*(r13_1 + 0x1c4) = 1
void* rcx_24 = arg2[8]
int128_t var_218
__builtin_memset(&var_218, 0, 0x30)
int64_t var_1bc
__builtin_memset(&var_1bc, 0, 0x43)
int128_t var_1d0 = zx.o(0)
int16_t var_178 = 0
sub_140fdc870(rcx_24, &var_218)
int64_t var_1e8 = data_14395da00
int64_t var_1e0 = data_14395da18
int64_t var_1d8 = data_14395d9e8
void* var_248
int32_t r9 = sub_1419a2ec0(arg2[0xc], &var_248, &data_143ebb210, 0)
uint32_t rcx_26 = zx.d(arg1[0x29].b)
void* r13_2 = var_248
char var_2c7 = *(arg1 + 0x149)
char var_2c6 = *(arg1 + 0x14a)
char var_2c5 = *(arg1 + 0x14b)
int32_t rax_34 = rcx_26.b.d
char rdx_14 = rax_34:3.b

if (rcx_26.b == 0)
    rdx_14 = 0

uint32_t rax_36 = zx.d(rax_34:2.b)
char temp2 = rax_36.b
rax_36.b = neg.b(rax_36.b)
int32_t rax_39
rax_39.b = rax_34.b != 0
int128_t var_268
sub_1419a2ec0(arg2[0xc], &var_268, &data_143ebb100, 
    (sbb.d(r9, r9, rax_34:1.b != 0) & 2) + (sbb.d(rcx_26, rcx_26, temp2 != 0) & 4)
        + (sbb.d(rax_36, rax_36, rdx_14 != 0) & 8) + rax_39)
var_218.q = data_1439c9210
int64_t rax_41 = 0
int128_t var_228 = var_268
void* var_240

if (r13_2 != 0)
    int64_t rdx_16 = sx.q(*(r13_2 + 0x10c))
    int64_t* rbx_9 = *(var_240 + 0x10)
    int64_t rax_42 = rbx_9[3]
    
    if (*(rax_42 + (rdx_16 << 3)) == 0)
        sub_1419ccf30(rbx_9, rdx_16.d)
        rax_42 = rbx_9[3]
    
    rax_41 = *(rax_42 + (rdx_16 << 3))

var_218:8.q = rax_41
int64_t rax_43 = 0
void* rsi_2 = var_268.q

if (rsi_2 != 0)
    int64_t rdx_17 = sx.q(*(rsi_2 + 0x10c))
    int64_t* rbx_10 = *(var_268:8.q + 0x10)
    int64_t rax_45 = rbx_10[3]
    
    if (*(rax_45 + (rdx_17 << 3)) == 0)
        sub_1419ccf30(rbx_10, rdx_17.d)
        rax_45 = rbx_10[3]
    
    rax_43 = *(rax_45 + (rdx_17 << 3))

int64_t r14_2 = 0
int128_t var_1f8
var_1f8.q = rax_43
int32_t var_1c0 = 0
sub_1419870b0(arg2[8], &var_218, 2)
void* rdx_19 = arg2[8]
int64_t rbx_11 = *(rdx_19 + 0x188)
sub_141080be0(r13_2, rdx_19, rbx_11, *(*arg2 + 0x10))
sub_1413aa060(r13_2 + 0x118, rbx_11, arg2, data_14395f4d0, 0, nullptr)
void* r9_10
int512_t zmm2
int512_t zmm3
r9_10, zmm2, zmm3 = sub_141368060(rsi_2, arg2, &var_228, rax_20)
void* var_230 = var_240
zmm2.o = zx.o(rcx_1)
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
void* var_238 = r13_2
void* rcx_37 = arg2[8]
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rdx_2 - rcx_1))
zmm3.o = zx.o(rcx_2 - rcx)
int32_t var_2d0 = 1
int32_t var_2d8 = 1
void** var_2e0 = &var_238
int32_t var_2f8 = zmm0_1.d
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx))
int64_t* var_310
var_310.d = zmm1_1.d
sub_1413993b0(rcx_37, zmm1_1, zmm2, r9_10, zmm3, zmm0_1.d, var_310.d, zmm2.d, zmm3.d, var_2f8, rdi, 
    rdx_1.q, var_2e0, var_2d8, var_2d0)
sub_141096650(arg2[8])

do
    int64_t rax_52 = (&var_258)[r14_2]
    
    if (rax_52 != 0)
        void* rsi_3 = arg2[8]
        int64_t* rbx_14 = (*(rsi_3 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_39 = &rbx_14[1]
        
        if (rcx_39 u> *(rsi_3 + 0x38))
            sub_140b0e3d0(rsi_3 + 0x30, 0x10)
            rbx_14 = (*(rsi_3 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_39 = &rbx_14[1]
        
        *(rsi_3 + 0x30) = rcx_39
        *rbx_14 = rax_52
        void*** rcx_43 = (*(rsi_3 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_53 = &rcx_43[5]
        
        if (rax_53 u> *(rsi_3 + 0x38))
            sub_140b0e3d0(rsi_3 + 0x30, 0x30)
            rcx_43 = (*(rsi_3 + 0x30) + 7) & 0xfffffffffffffff8
            rax_53 = &rcx_43[5]
        
        *(rsi_3 + 0x30) = rax_53
        void**** rax_54 = *(rsi_3 + 8)
        *(rsi_3 + 0x14) += 1
        *rax_54 = rcx_43
        *(rsi_3 + 8) = &rcx_43[1]
        rcx_43[1] = 0
        *rcx_43 = &data_142d549c8
        rcx_43[2].d = 1
        rcx_43[3] = rbx_14
        rcx_43[4].d = 0
    
    r14_2 += 1
while (r14_2 s< r15)

int64_t var_60
int64_t result = sub_1405d1550(&var_60)
__security_check_cookie(rax_1 ^ &var_338)
return result
