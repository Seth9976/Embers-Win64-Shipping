// 函数: sub_141e58b50
// 地址: 0x141e58b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
uint128_t zmm1 = data_143a2d3d0
int32_t rax_2 = data_143a2d418
int64_t r14
r14.b = 0
int128_t var_d8 = data_143a2d3c0
int32_t rcx = 0
int32_t var_80 = rax_2
char* r9 = arg1
uint128_t var_c8 = zmm1
int32_t r8 = 0
int128_t var_b8 = data_143a2d3e0
int64_t r13 = sx.q(arg2)
int32_t i = 0
int64_t var_5c = 0
uint128_t var_a8 = data_143a2d3f0
int32_t var_64 = data_143a2d438
zmm1 = zx.o(data_143a2d410)
int128_t var_98 = data_143a2d400
uint64_t var_88 = zmm1.q
zmm1 = zx.o(data_143a2d430)
int128_t var_7c = data_143a2d420
uint64_t var_6c = zmm1.q

do
    char rax_4 = *r9
    r9 = &r9[1]
    r8 += 1
    r14.b |= rax_4 << rcx.b
    i += 1
    rcx += 8
while (i u< 1)

int16_t rdi = 0
void* r10_1 = &arg1[sx.q(r8)]
int32_t i_1 = 0
int32_t r9_1 = 0

do
    uint16_t rdx = zx.w(*(r10_1 + 1))
    uint16_t rax_5 = zx.w(*r10_1)
    r10_1 += 2
    rdx <<= r9_1.b + 8
    r8 += 2
    i_1 += 2
    rax_5 <<= r9_1.b
    r9_1 += 0x10
    rdi |= rdx | rax_5
while (i_1 u< 2)

int32_t rdi_1 = sx.d(rdi)
int16_t rsi = 0
int32_t i_2 = 0
int32_t var_60 = rdi_1
void* r10_3 = &arg1[sx.q(r8)]
int32_t r9_2 = 0

do
    uint16_t rdx_1 = zx.w(*(r10_3 + 1))
    uint16_t rax_6 = zx.w(*r10_3)
    r10_3 += 2
    rdx_1 <<= r9_2.b + 8
    r8 += 2
    i_2 += 2
    rax_6 <<= r9_2.b
    r9_2 += 0x10
    rsi |= rdx_1 | rax_6
while (i_2 u< 2)

int32_t r15 = sx.d(rsi)
int32_t i_3 = 0
int16_t rsi_1 = 0
int16_t result_1 = r15.w
void* r10_5 = &arg1[sx.q(r8)]
int32_t r9_3 = 0

do
    uint16_t rdx_2 = zx.w(*(r10_5 + 1))
    uint16_t rax_7 = zx.w(*r10_5)
    r10_5 += 2
    rdx_2 <<= r9_3.b + 8
    r8 += 2
    i_3 += 2
    rax_7 <<= r9_3.b
    r9_3 += 0x10
    rsi_1 |= rdx_2 | rax_7
while (i_3 u< 2)

uint64_t rax_8 = zx.q(r14.b)
int32_t r12 = sx.d(rsi_1)
int32_t var_50 = r12
char* r10_6 = sx.q(r8)
int32_t rcx_7 = *(&var_98 + (rax_8 << 2))
var_5c.d = rcx_7
int32_t rax_9 = *(&var_7c + (rax_8 << 2))
var_5c:4.d = rax_9
*arg3 = r12.w
int16_t result = result_1
arg3[1] = result

if (r10_6 s< r13)
    char r8_1 = var_f8
    int64_t r14_1 = 2
    char r9_4 = var_f8
    
    do
        i_3.b = 0
        int32_t i_4 = 0
        int32_t rcx_9 = 0
        
        do
            i_4 += 1
            char rax_11 = *(r10_6 + arg1) << rcx_9.b
            r10_6 = &r10_6[1]
            i_3.b |= rax_11
            rcx_9 += 8
        while (i_4 u< 1)
        
        uint8_t rsi_2 = i_3.b u>> 4
        r8_1 ^= (r8_1 ^ rsi_2) & 0xf
        char temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_9 * r12 + rcx_7 * r15)
        int32_t rax_19 = ((temp1_1 + zx.d(temp0_1)) s>> 8) + (sx.d(r8_1 << 4) s>> 4) * rdi_1
        int16_t rcx_13
        
        if (rax_19 s>= 0xffff8000)
            rcx_13 = 0x7fff
            
            if (rax_19 s< 0x7fff)
                rcx_13 = rax_19.w
        else
            rcx_13 = -0x8000
        
        r12 = sx.d(rcx_13)
        int32_t rsi_3 = 0x10
        int32_t var_50_1 = r15
        int32_t var_54 = r12
        char temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(*(&var_d8 + (zx.q(rsi_2) << 2)) * rdi_1)
        int32_t rax_25 = (temp3_1 + zx.d(temp2_1)) s>> 8
        
        if (rax_25 s>= 0x10)
            rsi_3 = rax_25
        
        int32_t var_60_1 = rsi_3
        arg3[r14_1] = r12.w
        i_3.b &= 0xf
        r9_4 = (r9_4 & 0xf0) | i_3.b
        char temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r12 * rcx_7 + r15 * rax_9)
        int32_t rdi_5 = (sx.d(r9_4 << 4) s>> 4) * rsi_3 + ((temp5_1 + zx.d(temp4_1)) s>> 8)
        int16_t rax_33
        
        if (rdi_5 s>= 0xffff8000)
            rax_33 = 0x7fff
            
            if (rdi_5 s< 0x7fff)
                rax_33 = rdi_5.w
        else
            rax_33 = -0x8000
        
        rdi_1 = 0x10
        r15 = sx.d(rax_33)
        int32_t var_50_2 = r12
        int32_t var_54_1 = r15
        char temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(*(&var_d8 + (zx.q(i_3.b) << 2)) * rsi_3)
        int32_t rax_39 = (temp7_1 + zx.d(temp6_1)) s>> 8
        
        if (rax_39 s>= 0x10)
            rdi_1 = rax_39
        
        result = r15.w
        arg3[r14_1 + 1] = result
        r14_1 += 2
        int32_t var_60_2 = rdi_1
    while (r10_6 s< r13)

__security_check_cookie(rax_1 ^ &var_f8)
return result
