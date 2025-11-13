// 函数: sub_1411d36a0
// 地址: 0x1411d36a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int128_t zmm0 = data_1439c7b68
wchar16 const* const var_a8 = u"UnknownTexture"
void* rsi = arg1
int32_t var_d4 = *arg3
int64_t r15 = 0
int32_t var_d0 = arg3[1]
int16_t rax_4 = 8

if (data_1439b60cc s<= 4)
    rax_4 = 4

int16_t var_c0 = rax_4
int32_t var_d8 = data_1439c7b78
int32_t var_c8 = 1
int32_t var_c4 = 0x10000
int16_t var_b0 = 0x100
int16_t var_a0 = 1
char var_9e = 0
int32_t var_cc = 0
int64_t var_bc = 0xb
int32_t var_b4 = 0xc
int128_t var_e8 = zmm0
void*** result = sub_141188e50(rsi, &var_e8, u"HairVisibilityDepthTexture", 0)
int64_t* rax_6 = sub_14081d830(0xb0, *(rsi + 8), 1, 0)
int64_t* r12 = rax_6

if (rax_6 == 0)
    r12 = nullptr
else
    __builtin_memset(rax_6, 0, 0x20)
    sub_14117af20(&rax_6[4])

memset(r12, 0, 0xb0)
sub_1405d16e0(&r12[3], *(arg2 + 0x10))
void*** result_1 = result
int16_t var_120 = 2
char var_11e = 0
*r12 = *arg5
int32_t var_11c = 2
*(r12 + 0xa0) = result_1.o
int128_t var_108
sub_1419a2ec0(*(arg2 + 0x5150), &var_108, &data_143ed5e80, 0)
int128_t zmm7 = var_108
sub_1419a2ec0(*(arg2 + 0x5150), &var_108, &data_143e77dc0, 0)
bool cond:1 = data_143e75950 s<= 0
int32_t rcx_7 = 0
int128_t zmm9 = *(arg2 + 0x1598)
void*** result_2 = nullptr
int32_t var_11c_1 = 0
int128_t zmm8 = var_108
int32_t rdi_1 = 0
result_1 = nullptr

if (cond:1)
    var_120.d = 1
    rcx_7 = sub_1405a4f90(&result_1)
    result_2 = result_1
    rdi_1 = var_120.d
    *result_2 = zmm9
else
    void* rsi_1 = *arg4
    void* r13_2 = sx.q(arg4[1].d) * 0xe0 + rsi_1
    
    if (rsi_1 != r13_2)
        int128_t* r15_1 = rsi_1 + 0xbc
        
        do
            int64_t rbx_1 = sx.q(rdi_1)
            rdi_1 = (rbx_1 + 1).d
            var_120.d = rdi_1
            
            if (rdi_1 s> rcx_7)
                sub_1405a4f90(&result_1)
                rcx_7 = var_11c_1
                rdi_1 = var_120.d
                result_2 = result_1
            
            int128_t zmm0_2 = *r15_1
            rsi_1 += 0xe0
            r15_1 = &r15_1[0xe]
            *(result_2 + rbx_1 * 0x10) = zmm0_2
        while (rsi_1 != r13_2)
        
        r15 = 0
    
    rsi = arg1

int512_t zmm6
zmm6.o = zx.o(0)
result_1.o = sub_1411e3400(rcx_7.b)
sub_141998c50(var_108.q, &data_143e7d870, r12)
var_e8.q = r12
var_c0.q = 0
var_bc:4.d = rdi_1
var_e8 = zmm7
var_d0.o = zmm8
int32_t r13_3

if (rdi_1 != 0)
    sub_1405a4be0(&var_c0, rdi_1, 0)
    r15 = var_c0.q
    memcpy(r15, result_2, rdi_1 << 4)
    r13_3 = var_b4
    rdi_1 = var_bc:4.d
    zmm8 = var_d0.o
    zmm7 = var_e8
else
    r13_3 = 0

int64_t rbx_3 = *arg3
void*** rax_11
char rcx_13
rax_11, rcx_13 = sub_14081d830(0x90, *(rsi + 8), 1, 0)
void*** rsi_2 = rax_11

if (rax_11 == 0)
    rsi_2 = nullptr
else
    var_108.q = r12
    sub_1411e3400(rcx_13)
    var_108:8.q = &data_143e7d8a0
    var_108 = var_108
    void var_118
    sub_141992bd0(rsi_2, &var_118, &var_108, 1)
    *rsi_2 = &data_142f38958
    rsi_2[7] = var_e8.q
    *(rsi_2 + 0x40) = zmm7
    *(rsi_2 + 0x50) = zmm8
    rsi_2[0xc] = r15
    r15 = 0
    rsi_2[0xd].d = rdi_1
    *(rsi_2 + 0x6c) = r13_3
    *(rsi_2 + 0x70) = zmm9
    rsi_2[0x10] = rbx_3
    rsi_2[0x11] = arg2

sub_1419968d0(arg1, rsi_2)

if (r15 != 0)
    sub_140a74f90(r15)

if (result_2 != 0)
    sub_140a74f90(result_2)

__security_check_cookie(rax_1 ^ &var_148)
return result
