// 函数: sub_14128d440
// 地址: 0x14128d440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* r15 = *arg2
arg2[8]
int64_t* rax_2 = sub_1413a8300(arg1 + 0x20, arg2)
int128_t zmm1 = data_142d3f5a0
int64_t rdx_1 = *rax_2
int64_t var_168 = rdx_1
int32_t var_90 = 0
int32_t var_8c
__builtin_memset(&var_8c, 0xff, 0x14)
int128_t var_78 = zmm1
int64_t var_68
__builtin_memset(&var_68, 0, 0x19)
int64_t var_160 = 0
int32_t var_158 = 0xffffffff
int16_t var_154 = 0x900
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x11)
int32_t var_94 = 0
bool var_4f = *(rdx_1 + 0x38) u> 1
void var_150
memset(&var_150, 0, 0xa8)
void* r14 = arg2[8]
int64_t rbx_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_3 = rbx_2 + 0x2a

if (rax_3 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x2c)
    rbx_2 = (*(r14 + 0x30) + 1) & 0xfffffffffffffffe
    rax_3 = rbx_2 + 0x2a

wchar16 const* const rcx_4 = u"DistortionAccumulate"
*(r14 + 0x30) = rax_3
wchar16 const i

do
    i = *rcx_4
    *(rcx_4 + rbx_2 - u"DistortionAccumulate") = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_7[0x27]

if (rax_4 u> *(r14 + 0x38))
    sub_140b0e3d0(r14 + 0x30, 0x140)
    rcx_7 = (*(r14 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_7[0x27]

*(r14 + 0x30) = rax_4
void**** rax_5 = *(r14 + 8)
*(r14 + 0x14) += 1
*rax_5 = rcx_7
*(r14 + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_168, rbx_2)
*(r14 + 0x1c4) = 1
sub_1405d19b0(r14, &var_168)
int64_t var_58
*(r14 + 0x178) = var_58:7.b
*(r14 + 0x179) = 0
*(r14 + 0x1c4) = 1
int128_t var_1e8 = *(r15 + 0x1598)
sub_1410b7780(arg2, &var_1e8, zx.o(0), 0x3f800000)

if (sub_141405870(*(arg1 + 0xc0) + 0x20, r15, 1) != 0)
    int64_t rcx_15 = arg2[8]
    int128_t var_1d8
    __builtin_memset(&var_1d8, 0, 0x60)
    int128_t var_178_1 = data_142d3f660
    sub_1411465d0(rcx_15, r15, &var_1d8)
    int64_t* rcx_16 = data_143f0f180
    (*(*rcx_16 + 0x100))(rcx_16, *(*(arg1 + 0xc0) + 0xe8), &var_1d8)

sub_141267530(&r15[0x60a], nullptr, arg2[8])
sub_141096650(arg2[8])
void* rsi_1 = arg2[8]
int64_t r15_1 = rax_2[1]
int64_t* r14_1 = *rax_2
int128_t var_218 = data_142d57d10
int128_t zmm0_2 = data_142d57920
int128_t var_208 = data_142d3f800
void*** rbx_7 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rbx_7[0xa]

if (rax_10 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x58)
    rbx_7 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rbx_7[0xa]

*(rsi_1 + 0x30) = rax_10
*(rsi_1 + 0x14) += 1
**(rsi_1 + 8) = rbx_7
*(rsi_1 + 8) = &rbx_7[1]
rbx_7[1] = 0
*rbx_7 = &data_142d56628
rbx_7[2].d = var_218.d
__builtin_memset(rbx_7 + 0x14, 0xff, 0x20)
*(rbx_7 + 0x34) = zmm0_2:4.d
rbx_7[7].d = zmm0_2:8.d
*(rbx_7 + 0x3c) = zmm0_2:0xc.d
rbx_7[8] = r14_1
rbx_7[9] = r15_1

if ((*(*r14_1 + 8))(r14_1) == 0)
    int64_t* rcx_21 = rbx_7[8]
    
    if ((*(*rcx_21 + 0x18))(rcx_21) == 0)
        int64_t* rcx_22 = rbx_7[8]
        
        if ((*(*rcx_22 + 0x20))(rcx_22) == 0)
            int64_t* rcx_23 = rbx_7[8]
            (*(*rcx_23 + 0x10))(rcx_23)

int64_t* rcx_24 = rbx_7[9]

if ((*(*rcx_24 + 8))(rcx_24) == 0)
    int64_t* rcx_25 = rbx_7[9]
    
    if ((*(*rcx_25 + 0x18))(rcx_25) == 0)
        int64_t* rcx_26 = rbx_7[9]
        
        if ((*(*rcx_26 + 0x20))(rcx_26) == 0)
            int64_t* rcx_27 = rbx_7[9]
            (*(*rcx_27 + 0x10))(rcx_27)

int64_t var_60
int64_t result = sub_1405d1550(&var_60)
__security_check_cookie(rax_1 ^ &var_238)
return result
