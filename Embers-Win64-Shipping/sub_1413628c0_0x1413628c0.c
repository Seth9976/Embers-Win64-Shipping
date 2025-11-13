// 函数: sub_1413628c0
// 地址: 0x1413628c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
void* rax_2 = sub_14139ce70(arg1)
int32_t rsi = arg1[0x1c].d
int32_t r14 = arg1[0x1b].d
int32_t r12 = *(arg1 + 0xdc)
int32_t var_1e8 = rsi
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi - r14)
int32_t var_1e4 = r14
int32_t var_1ec = r12
int32_t rax_7 = (temp1 - temp0) s>> 1
int32_t r13 = rax_7

if (rax_7 s<= 1)
    r13 = 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0xe4) - r12)
int32_t rax_12 = (temp3 - temp2) s>> 1
int32_t var_1f4 = rax_12
int64_t rbx = rax_7.q
int32_t rdx_3 = rax_12

if (rax_12 s<= 1)
    rdx_3 = 1

int32_t var_1c8 = rdx_3
int32_t var_1f8_1
uint32_t rax_14

if (arg1[0x1d].b == 0)
    var_1f8_1 = rax_7
    rax_14 = (rbx u>> 0x20).d
    var_1e4 = 0
    var_1ec = 0
    var_1e8 = r13
else
    rdx_3 = *(arg1 + 0xe4)
    var_1f8_1 = *(rax_2 + 0x14)
    rax_14 = *(rax_2 + 0x18)

uint32_t var_1f4_1 = rax_14
int64_t* rax_16 = sub_1413a8300(&arg1[8], arg2)
void* rcx_2 = *rax_16
int512_t zmm3
zmm3.o = *(rcx_2 + 0x30)

if (data_14399f5e0.d.d f!= *(rcx_2 + 0x24) || (*(rcx_2 + 0x28)).d f!= data_14399f5e0:4.d
        || (*(rcx_2 + 0x2c)).d f!= data_14399f5e0:8.d || zmm3.d f!= data_14399f5e0:0xc.d)
    r12.b = 1
else
    r12.b = 0

int128_t zmm1 = data_142d3f5a0
void* var_188 = rcx_2
char var_173 = (r12.b ^ 1) << 3 | 1
int32_t var_b0 = 0
int32_t var_ac
__builtin_memset(&var_ac, 0xff, 0x14)
int128_t var_98 = zmm1
int64_t var_88
__builtin_memset(&var_88, 0, 0x19)
int64_t var_180 = 0
int32_t var_178 = 0xffffffff
char var_174 = 0
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x11)
int32_t var_b4 = 0
bool var_6f = *(rcx_2 + 0x38) u> 1
void var_170
memset(&var_170, 0, 0xa8)
void* r14_1 = arg2[8]
int64_t rdi_3 = (*(r14_1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_18 = rdi_3 + 0x16

if (rax_18 u> *(r14_1 + 0x38))
    sub_140b0e3d0(r14_1 + 0x30, 0x18)
    rdi_3 = (*(r14_1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_18 = rdi_3 + 0x16

wchar16 const* const rcx_5 = u"DofDownES2"
*(r14_1 + 0x30) = rax_18
wchar16 const i

do
    i = *rcx_5
    *(rdi_3 - u"DofDownES2" + rcx_5) = i
    rcx_5 = &rcx_5[1]
while (i != 0)
void*** rcx_8 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_19 = &rcx_8[0x27]

if (rax_19 u> *(r14_1 + 0x38))
    sub_140b0e3d0(r14_1 + 0x30, 0x140)
    rcx_8 = (*(r14_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rcx_8[0x27]

*(r14_1 + 0x30) = rax_19
void**** rax_20 = *(r14_1 + 8)
*(r14_1 + 0x14) += 1
*rax_20 = rcx_8
*(r14_1 + 8) = &rcx_8[1]
sub_1405d11b0(rcx_8, &var_188, rdi_3)
*(r14_1 + 0x1c4) = 1
sub_1405d19b0(r14_1, &var_188)
int64_t var_78
*(r14_1 + 0x178) = var_78:7.b
*(r14_1 + 0x179) = 0
*(r14_1 + 0x1c4) = 1

if (r12.b != 0)
    sub_14199cb60(arg2[8], 1, 1, &data_14399f5e0, 0, 0, 0, 0)

uint64_t rdi_6 = zx.q(var_1c8)
zmm3.o = 0x3f800000
int64_t var_1d8 = 0
int32_t var_1cc = rdi_6.d
int32_t var_1d0 = r13
var_1d8.o = var_1d8.o
sub_1410b7780(arg2, &var_1d8, zx.o(0), zmm3.o)

if (*(*arg2 + 0x50d0) == 0)
    sub_141336560(arg2)
else
    sub_141336310(arg2)

void* r9 = sub_1419a2ec0(arg2[0xc], &var_1d8, &data_143ebb760, 0)
zmm3.o = zx.o(0)
int32_t var_200 = 1
int32_t var_208 = 1
var_1d8.o = var_1d8.o
void* rcx_18 = arg2[8]
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(var_1ec))
int512_t zmm2_1
zmm2_1.o = zx.o(var_1e8 - var_1e4)
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
zmm3.d = float.s(zx.q(r13))
int128_t zmm0_2
zmm0_2.d = float.s(rdi_6)
int32_t var_230_2 = zmm2_1.d
zmm2_1.o = zx.o(0)
char var_238
var_238.d = zmm4.d
char var_248
var_248.d = zmm0_2.d
sub_1413993b0(rcx_18, zx.o(0), zmm2_1, r9, zmm3, var_248, _mm_cvtepi32_ps(zx.o(var_1e4)).d, 
    var_238, var_230_2, _mm_cvtepi32_ps(zx.o(rdx_3 - var_1ec)).d, rbx, var_1f8_1.q, &var_1d8, 
    var_208, var_200)
sub_141096650(arg2[8])
void* rsi_1 = arg2[8]
int128_t var_1c4 = data_142d57d10
int128_t zmm0_3 = data_142d57920
int64_t r12_1 = rax_16[1]
int64_t* r14_3 = *rax_16
int128_t var_1b4 = data_142d3f800
void*** rbx_3 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_30 = &rbx_3[0xa]

if (rax_30 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x58)
    rbx_3 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_30 = &rbx_3[0xa]

*(rsi_1 + 0x30) = rax_30
*(rsi_1 + 0x14) += 1
**(rsi_1 + 8) = rbx_3
*(rsi_1 + 8) = &rbx_3[1]
rbx_3[1] = 0
*rbx_3 = &data_142d56628
rbx_3[2].d = var_1c4.d
__builtin_memset(rbx_3 + 0x14, 0xff, 0x20)
*(rbx_3 + 0x34) = zmm0_3:4.d
rbx_3[7].d = zmm0_3:8.d
*(rbx_3 + 0x3c) = zmm0_3:0xc.d
rbx_3[8] = r14_3
rbx_3[9] = r12_1

if ((*(*r14_3 + 8))(r14_3) == 0)
    int64_t* rcx_22 = rbx_3[8]
    
    if ((*(*rcx_22 + 0x18))(rcx_22) == 0)
        int64_t* rcx_23 = rbx_3[8]
        
        if ((*(*rcx_23 + 0x20))(rcx_23) == 0)
            int64_t* rcx_24 = rbx_3[8]
            (*(*rcx_24 + 0x10))(rcx_24)

int64_t* rcx_25 = rbx_3[9]

if ((*(*rcx_25 + 8))(rcx_25) == 0)
    int64_t* rcx_26 = rbx_3[9]
    
    if ((*(*rcx_26 + 0x18))(rcx_26) == 0)
        int64_t* rcx_27 = rbx_3[9]
        
        if ((*(*rcx_27 + 0x20))(rcx_27) == 0)
            int64_t* rcx_28 = rbx_3[9]
            (*(*rcx_28 + 0x10))(rcx_28)

int64_t var_80
int64_t result = sub_1405d1550(&var_80)
__security_check_cookie(rax_1 ^ &var_268)
return result
