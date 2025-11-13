// 函数: sub_140401ea0
// 地址: 0x140401ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rsi = sx.q(arg6)
int128_t* r14 = arg3
int32_t r8_1 = *arg1 s>> rsi.b
void* rdi = arg4
var_a8 = arg4
int32_t r9_1 = r8_1 s>> 1
int32_t r15_1 = r8_1 s>> 2
int64_t rax_2 = sx.q(r9_1)
int64_t rax_3 = rax_2 << 2
int64_t rcx_1 = rax_3 + 0xf

if (rcx_1 u<= rax_3)
    rcx_1 = 0xffffffffffffff0

int64_t rcx_2 = rcx_1 & 0xfffffffffffffff0
__chkstk(rcx_2)
int64_t r11 = *(arg1 + 0x28)
int32_t rcx_3 = arg7
uint32_t r13 = 0
void var_c8
void* r8_2 = &var_c8 - rcx_2 + 0x20
int128_t zmm9
zmm9.d = 0.785398185f f/ _mm_cvtepi32_ps(zx.o(r8_1)).d
int32_t i = 0
int128_t* r9_2 = arg2 + (sx.q((r9_1 - 1) * rcx_3) << 2)
uint128_t zmm0
uint128_t zmm2
uint128_t zmm4
uint128_t zmm5

if (r15_1 s>= 4)
    int32_t r12_1 = 2
    int32_t r13_1 = r15_1 - 2
    int64_t rbx_2 = sx.q(rcx_3 * 2) << 2
    
    do
        zmm5 = *r9_2
        uint128_t zmm3 = *arg2
        char rcx_4 = rsi.b
        void* r9_3 = r9_2 - rbx_2
        void* rdx = arg2 + rbx_2
        zmm0 = zmm5
        float zmm1 = *(r11 + (sx.q((r13_1 + 2) << rcx_4) << 2))
        zmm4.d = zmm3.d f* zmm1
        zmm5.d = zmm5.d f* zmm1
        zmm2 = *(r11 + (sx.q(i << rcx_4) << 2))
        zmm0.d = zmm0.d f* zmm2.d
        zmm2.d = zmm2.d f* zmm3.d
        zmm4.d = zmm4.d f- zmm0.d
        zmm5.d = (zmm5 ^ 0x80000000).d f- zmm2.d
        zmm0 = zmm4
        zmm4.d = zmm4.d f* zmm9.d
        zmm1 = zmm5.d f* zmm9.d
        zmm4.d = zmm4.d f+ zmm5.d
        zmm5 = *(r11 + (sx.q((r13_1 + 1) << rcx_4) << 2))
        zmm2 = *(r11 + (sx.q((r12_1 - 1) << rcx_4) << 2))
        zmm0.d = zmm0.d f- zmm1
        *r8_2 = zmm0.d
        *(r8_2 + 4) = zmm4.d
        zmm4 = zmm5
        zmm5.d = zmm5.d f* *r9_3
        zmm4.d = zmm4.d f* *rdx
        zmm0.d = zmm2.d f* *r9_3
        zmm2.d = zmm2.d f* *rdx
        void* r9_4 = r9_3 - rbx_2
        void* rdx_1 = rdx + rbx_2
        zmm3 = *rdx_1
        zmm4.d = zmm4.d f- zmm0.d
        zmm0 = zmm4
        zmm4.d = zmm4.d f* zmm9.d
        zmm5.d = (zmm5 ^ 0x80000000).d f- zmm2.d
        zmm2 = *(r11 + (sx.q(r13_1 << rcx_4) << 2))
        int64_t rax_26 = sx.q(r12_1 << rcx_4)
        zmm4.d = zmm4.d f+ zmm5.d
        zmm1 = zmm5.d
        zmm5 = *r9_4
        zmm0.d = zmm0.d f- zmm1 f* zmm9.d
        *(r8_2 + 8) = zmm0.d
        *(r8_2 + 0xc) = zmm4.d
        zmm0 = zmm5
        zmm5.d = zmm5.d f* zmm2.d
        zmm4 = zmm3
        zmm0.d = zmm0.d f* *(r11 + (rax_26 << 2))
        zmm3.d = zmm3.d f* *(r11 + (rax_26 << 2))
        zmm4.d = zmm4.d f* zmm2.d
        zmm4.d = zmm4.d f- zmm0.d
        zmm0 = zmm4
        zmm4.d = zmm4.d f* zmm9.d
        zmm5.d = (zmm5 ^ 0x80000000).d f- zmm3.d
        zmm0.d = zmm0.d f- zmm5.d f* zmm9.d
        *(r8_2 + 0x10) = zmm0.d
        zmm4.d = zmm4.d f+ zmm5.d
        void* r9_5 = r9_4 - rbx_2
        void* rdx_2 = rdx_1 + rbx_2
        *(r8_2 + 0x14) = zmm4.d
        i += 4
        int32_t rax_28 = (r13_1 - 1) << rcx_4
        r8_2 += 0x20
        r13_1 -= 4
        zmm5 = *(r11 + (sx.q(rax_28) << 2))
        int32_t rax_30 = r12_1 + 1
        r12_1 += 4
        zmm4 = zmm5
        zmm5.d = zmm5.d f* *r9_5
        zmm4.d = zmm4.d f* *rdx_2
        zmm2 = *(r11 + (sx.q(rax_30 << rcx_4) << 2))
        zmm0.d = zmm2.d f* *r9_5
        zmm2.d = zmm2.d f* *rdx_2
        arg2 = rdx_2 + rbx_2
        r9_2 = r9_5 - rbx_2
        zmm4.d = zmm4.d f- zmm0.d
        zmm5.d = (zmm5 ^ 0x80000000).d f- zmm2.d
        zmm0 = zmm4
        zmm4.d = zmm4.d f* zmm9.d
        zmm4.d = zmm4.d f+ zmm5.d
        zmm0.d = zmm0.d f- zmm5.d f* zmm9.d
        *(r8_2 - 8) = zmm0.d
        *(r8_2 - 4) = zmm4.d
    while (i s< r15_1 - 3)
    
    rdi = var_a8
    rcx_3 = arg7
    r13 = 0

if (i s< r15_1)
    int64_t r12_3 = sx.q(rcx_3 * 2) << 2
    int32_t rbx_4 = r15_1 - i
    
    do
        char rcx_5 = rsi.b
        r8_2 += 8
        int32_t rax_35 = rbx_4 << rcx_5
        rbx_4 -= 1
        zmm5 = *(r11 + (sx.q(rax_35) << 2))
        int32_t i_4 = i
        i += 1
        zmm4 = zmm5
        zmm5.d = zmm5.d f* *r9_2
        zmm4.d = zmm4.d f* *arg2
        zmm2 = *(r11 + (sx.q(i_4 << rcx_5) << 2))
        zmm0.d = zmm2.d f* *r9_2
        zmm2.d = zmm2.d f* *arg2
        arg2 += r12_3
        r9_2 -= r12_3
        zmm4.d = zmm4.d f- zmm0.d
        zmm5.d = (zmm5 ^ 0x80000000).d f- zmm2.d
        zmm0 = zmm4
        zmm4.d = zmm4.d f* zmm9.d
        zmm4.d = zmm4.d f+ zmm5.d
        zmm0.d = zmm0.d f- zmm5.d f* zmm9.d
        *(r8_2 - 8) = zmm0.d
        *(r8_2 - 4) = zmm4.d
    while (i s< r15_1)

int64_t rbx_6 = sx.q(arg5) s>> 1
uint64_t r12_4 = r14 + (rbx_6 << 2)
int32_t zmm9_1
int128_t zmm10
zmm9_1, zmm10 = sub_1404001a0(*(arg1 + (rsi << 3) + 8), &var_c8 - rcx_2 + 0x20, r12_4)
int32_t r10_2 = (r15_1 + 1) s>> 1
int32_t i_1 = 0
void* rdx_4 = r14 + ((rax_2 - 2 + rbx_6) << 2)
int64_t r9_6 = *(arg1 + 0x28)
int128_t zmm0_1
int128_t zmm1_1
int128_t zmm2_1
int128_t zmm3_1
int128_t zmm4_1
int128_t zmm5_1
int128_t zmm6_1

if (r10_2 s>= 4)
    int32_t rbx_7 = r15_1 - 2
    int32_t r11_1 = 2
    
    do
        zmm6_1 = *(rdx_4 + 4)
        char rcx_7 = rsi.b
        zmm5_1 = *(r9_6 + (sx.q(i_1 << rcx_7) << 2))
        zmm4_1 = zmm5_1
        zmm5_1.d = zmm5_1.d f* *(r12_4 + 4)
        zmm4_1.d = zmm4_1.d f* *r12_4
        zmm1_1 = *(r9_6 + (sx.q((rbx_7 + 2) << rcx_7) << 2))
        zmm0_1.d = zmm1_1.d f* *(r12_4 + 4)
        zmm1_1.d = zmm1_1.d f* *r12_4
        zmm4_1.d = zmm4_1.d f- zmm0_1.d
        zmm5_1.d = zmm5_1.d f+ zmm1_1.d
        zmm1_1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* zmm9_1
        zmm0_1.d = zmm5_1.d f* zmm9_1
        zmm4_1.d = zmm4_1.d f+ zmm5_1.d
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        *(rdx_4 + 4) = zmm4_1.d
        zmm4_1 = *(r9_6 + (sx.q((rbx_7 + 1) << rcx_7) << 2))
        zmm3_1.d = zmm4_1.d f* *rdx_4
        zmm2_1.d = zmm4_1.d f* zmm6_1.d
        int128_t zmm8_1 = *(r9_6 + (sx.q((r11_1 - 1) << rcx_7) << 2))
        *r12_4 = (zmm1_1 ^ zmm10).d
        zmm0_1.d = zmm8_1.d f* zmm6_1.d
        zmm6_1 = *(r9_6 + (sx.q(rbx_7 << rcx_7) << 2))
        zmm3_1.d = zmm3_1.d f- zmm0_1.d
        int128_t zmm7_1 = *(r9_6 + (sx.q(r11_1 << rcx_7) << 2))
        zmm0_1.d = zmm8_1.d f* *rdx_4
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm0_1 = zmm3_1
        zmm3_1.d = zmm3_1.d f* zmm9_1
        zmm3_1.d = zmm3_1.d f+ zmm2_1.d
        *(r12_4 + 4) = zmm3_1.d
        zmm1_1.d = zmm2_1.d f* zmm9_1
        zmm0_1.d = zmm0_1.d f- zmm1_1.d
        zmm3_1.d = zmm8_1.d f* *(r12_4 + 8)
        zmm8_1.d = zmm8_1.d f* *(r12_4 + 0xc)
        *rdx_4 = (zmm0_1 ^ zmm10).d
        zmm0_1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* *(r12_4 + 8)
        zmm0_1.d = zmm0_1.d f* *(r12_4 + 0xc)
        zmm8_1.d = zmm8_1.d f+ zmm4_1.d
        zmm4_1 = *(rdx_4 - 4)
        zmm3_1.d = zmm3_1.d f- zmm0_1.d
        zmm0_1.d = zmm8_1.d f* zmm9_1
        zmm1_1 = zmm3_1
        zmm3_1.d = zmm3_1.d f* zmm9_1
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        zmm3_1.d = zmm3_1.d f+ zmm8_1.d
        *(rdx_4 - 4) = zmm3_1.d
        *(r12_4 + 8) = (zmm1_1 ^ zmm10).d
        zmm3_1.d = zmm6_1.d f* *(rdx_4 - 8)
        zmm0_1.d = zmm7_1.d f* zmm4_1.d
        zmm2_1.d = zmm6_1.d f* zmm4_1.d
        zmm4_1 = *(rdx_4 - 0xc)
        zmm3_1.d = zmm3_1.d f- zmm0_1.d
        zmm0_1.d = zmm7_1.d f* *(rdx_4 - 8)
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm0_1 = zmm3_1
        zmm3_1.d = zmm3_1.d f* zmm9_1
        zmm3_1.d = zmm3_1.d f+ zmm2_1.d
        *(r12_4 + 0xc) = zmm3_1.d
        zmm1_1.d = zmm2_1.d f* zmm9_1
        zmm0_1.d = zmm0_1.d f- zmm1_1.d
        zmm3_1.d = zmm7_1.d f* *(r12_4 + 0x10)
        zmm7_1.d = zmm7_1.d f* *(r12_4 + 0x14)
        *(rdx_4 - 8) = (zmm0_1 ^ zmm10).d
        zmm0_1 = zmm6_1
        zmm6_1.d = zmm6_1.d f* *(r12_4 + 0x10)
        zmm0_1.d = zmm0_1.d f* *(r12_4 + 0x14)
        zmm7_1.d = zmm7_1.d f+ zmm6_1.d
        zmm6_1 = *(r9_6 + (sx.q((rbx_7 - 1) << rcx_7) << 2))
        zmm2_1.d = zmm6_1.d f* zmm4_1.d
        zmm3_1.d = zmm3_1.d f- zmm0_1.d
        zmm0_1.d = zmm7_1.d f* zmm9_1
        zmm1_1 = zmm3_1
        zmm3_1.d = zmm3_1.d f* zmm9_1
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        zmm3_1.d = zmm3_1.d f+ zmm7_1.d
        zmm7_1 = *(r9_6 + (sx.q((r11_1 + 1) << rcx_7) << 2))
        *(rdx_4 - 0xc) = zmm3_1.d
        *(r12_4 + 0x10) = (zmm1_1 ^ zmm10).d
        zmm0_1.d = zmm7_1.d f* zmm4_1.d
        zmm3_1.d = zmm6_1.d f* *(rdx_4 - 0x10)
        zmm4_1 = *(rdx_4 - 0x14)
        zmm3_1.d = zmm3_1.d f- zmm0_1.d
        zmm0_1.d = zmm7_1.d f* *(rdx_4 - 0x10)
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm0_1 = zmm3_1
        zmm3_1.d = zmm3_1.d f* zmm9_1
        zmm3_1.d = zmm3_1.d f+ zmm2_1.d
        *(r12_4 + 0x14) = zmm3_1.d
        zmm1_1.d = zmm2_1.d f* zmm9_1
        zmm0_1.d = zmm0_1.d f- zmm1_1.d
        zmm3_1.d = zmm7_1.d f* *(r12_4 + 0x18)
        zmm7_1.d = zmm7_1.d f* *(r12_4 + 0x1c)
        *(rdx_4 - 0x10) = (zmm0_1 ^ zmm10).d
        zmm0_1 = zmm6_1
        zmm6_1.d = zmm6_1.d f* *(r12_4 + 0x18)
        zmm0_1.d = zmm0_1.d f* *(r12_4 + 0x1c)
        zmm7_1.d = zmm7_1.d f+ zmm6_1.d
        zmm3_1.d = zmm3_1.d f- zmm0_1.d
        zmm0_1.d = zmm7_1.d f* zmm9_1
        zmm1_1 = zmm3_1
        zmm3_1.d = zmm3_1.d f* zmm9_1
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        zmm3_1.d = zmm3_1.d f+ zmm7_1.d
        *(r12_4 + 0x18) = (zmm1_1 ^ zmm10).d
        *(rdx_4 - 0x14) = zmm3_1.d
        i_1 += 4
        rdx_4 -= 0x20
        int32_t rax_69 = (rbx_7 - 2) << rcx_7
        r12_4 += 0x20
        rbx_7 -= 4
        zmm3_1 = *(r9_6 + (sx.q(rax_69) << 2))
        int32_t rax_71 = r11_1 + 2
        r11_1 += 4
        zmm2_1 = zmm3_1
        zmm3_1.d = zmm3_1.d f* zmm4_1.d
        zmm2_1.d = zmm2_1.d f* *(rdx_4 + 8)
        zmm1_1 = *(r9_6 + (sx.q(rax_71 << rcx_7) << 2))
        zmm0_1 = zmm1_1
        zmm1_1.d = zmm1_1.d f* *(rdx_4 + 8)
        zmm0_1.d = zmm0_1.d f* zmm4_1.d
        zmm3_1.d = zmm3_1.d f+ zmm1_1.d
        zmm2_1.d = zmm2_1.d f- zmm0_1.d
        zmm0_1.d = zmm3_1.d f* zmm9_1
        zmm1_1 = zmm2_1
        zmm2_1.d = zmm2_1.d f* zmm9_1
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        zmm2_1.d = zmm2_1.d f+ zmm3_1.d
        *(rdx_4 + 8) = (zmm1_1 ^ zmm10).d
        *(r12_4 - 4) = zmm2_1.d
    while (i_1 s< r10_2 - 3)
    
    rdi = var_a8

if (i_1 s< r10_2)
    int32_t r15_2 = r15_1 - i_1
    
    do
        zmm5_1 = *(rdx_4 + 4)
        char rcx_8 = rsi.b
        rdx_4 -= 8
        r12_4 += 8
        zmm6_1 = *(r9_6 + (sx.q(i_1 << rcx_8) << 2))
        zmm4_1 = zmm6_1
        zmm6_1.d = zmm6_1.d f* *(r12_4 - 4)
        zmm1_1 = *(r9_6 + (sx.q(r15_2 << rcx_8) << 2))
        zmm4_1.d = zmm4_1.d f* *(r12_4 - 8)
        int32_t rax_81 = (r15_2 - 1) << rcx_8
        i_1 += 1
        r15_2 -= 1
        zmm0_1 = zmm1_1
        zmm1_1.d = zmm1_1.d f* *(r12_4 - 8)
        zmm0_1.d = zmm0_1.d f* *(r12_4 - 4)
        zmm3_1 = *(r9_6 + (sx.q(rax_81) << 2))
        zmm6_1.d = zmm6_1.d f+ zmm1_1.d
        zmm4_1.d = zmm4_1.d f- zmm0_1.d
        zmm2_1.d = zmm3_1.d f* *(rdx_4 + 8)
        zmm3_1.d = zmm3_1.d f* zmm5_1.d
        zmm1_1 = zmm4_1
        zmm0_1.d = zmm6_1.d f* zmm9_1
        zmm4_1.d = zmm4_1.d f* zmm9_1
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        zmm4_1.d = zmm4_1.d f+ zmm6_1.d
        *(r12_4 - 8) = (zmm1_1 ^ zmm10).d
        zmm1_1 = *(r9_6 + (sx.q(i_1 << rcx_8) << 2))
        *(rdx_4 + 0xc) = zmm4_1.d
        zmm0_1 = zmm1_1
        zmm1_1.d = zmm1_1.d f* *(rdx_4 + 8)
        zmm0_1.d = zmm0_1.d f* zmm5_1.d
        zmm3_1.d = zmm3_1.d f+ zmm1_1.d
        zmm2_1.d = zmm2_1.d f- zmm0_1.d
        zmm0_1.d = zmm3_1.d f* zmm9_1
        zmm1_1 = zmm2_1
        zmm2_1.d = zmm2_1.d f* zmm9_1
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        zmm2_1.d = zmm2_1.d f+ zmm3_1.d
        *(rdx_4 + 8) = (zmm1_1 ^ zmm10).d
        *(r12_4 - 4) = zmm2_1.d
    while (i_1 s< r10_2)

int64_t rcx_9 = sx.q(arg5)
int32_t temp0_1
int32_t temp1
temp0_1:temp1 = sx.q(arg5)
int128_t* r8_5 = r14 + ((rcx_9 - 1) << 2)
void* r9_8 = rdi + ((rcx_9 - 1) << 2)
uint64_t result = zx.q((temp1 - temp0_1) s>> 1)

if (result.d s>= 4)
    void* rdx_7 = r14 - rdi
    uint64_t rcx_12 = zx.q(((result - 4).d u>> 2) + 1)
    uint64_t i_5 = zx.q(rcx_12.d)
    r13 = (rcx_12 << 2).d
    uint64_t i_2
    
    do
        zmm4_1 = *r8_5
        zmm5_1 = *r14
        rdi += 0x10
        r8_5 -= 0x10
        r14 = &r14[1]
        r9_8 -= 0x10
        zmm0_1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* *(r9_8 + 0x10)
        zmm1_1.d = zmm5_1.d f* *(r9_8 + 0x10)
        zmm5_1.d = zmm5_1.d f* *(rdi - 0x10)
        zmm0_1.d = zmm0_1.d f* *(rdi - 0x10)
        zmm5_1.d = zmm5_1.d f+ zmm4_1.d
        zmm4_1 = *(rdx_7 + rdi - 0xc)
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        r14[-1].d = zmm1_1.d
        r8_5[1].d = zmm5_1.d
        zmm5_1 = *(r8_5 + 0xc)
        zmm1_1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* *(rdi - 0xc)
        zmm1_1.d = zmm1_1.d f* *(r9_8 + 0xc)
        zmm0_1 = zmm5_1
        zmm5_1.d = zmm5_1.d f* *(r9_8 + 0xc)
        zmm0_1.d = zmm0_1.d f* *(rdi - 0xc)
        zmm4_1.d = zmm4_1.d f+ zmm5_1.d
        zmm5_1 = *(r8_5 + 8)
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        zmm0_1 = zmm5_1
        zmm5_1.d = zmm5_1.d f* *(r9_8 + 8)
        zmm0_1.d = zmm0_1.d f* *(rdi - 8)
        *(r8_5 + 0xc) = zmm4_1.d
        zmm4_1 = *(rdx_7 + rdi - 8)
        *(rdx_7 + rdi - 0xc) = zmm1_1.d
        zmm1_1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* *(rdi - 8)
        zmm1_1.d = zmm1_1.d f* *(r9_8 + 8)
        zmm4_1.d = zmm4_1.d f+ zmm5_1.d
        zmm5_1 = *(r8_5 + 4)
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        zmm0_1.d = zmm5_1.d f* *(rdi - 4)
        zmm5_1.d = zmm5_1.d f* *(r9_8 + 4)
        *(r8_5 + 8) = zmm4_1.d
        zmm4_1 = *(rdx_7 + rdi - 4)
        *(rdx_7 + rdi - 8) = zmm1_1.d
        zmm1_1.d = zmm4_1.d f* *(r9_8 + 4)
        zmm4_1.d = zmm4_1.d f* *(rdi - 4)
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        zmm4_1.d = zmm4_1.d f+ zmm5_1.d
        *(rdx_7 + rdi - 4) = zmm1_1.d
        *(r8_5 + 4) = zmm4_1.d
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

if (r13 s< result.d)
    int128_t* r9_9 = r9_8 - r8_5
    int128_t* rdi_3 = rdi - r14
    result = zx.q(result.d - r13)
    uint64_t i_3
    
    do
        zmm2_1 = *r14
        zmm5_1 = *(rdi_3 + r14)
        zmm4_1 = *(r9_9 + r8_5)
        r14 += 4
        r8_5 -= 4
        zmm1_1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* *(r8_5 + 4)
        zmm0_1.d = zmm5_1.d f* *(r8_5 + 4)
        zmm1_1.d = zmm1_1.d f* zmm2_1.d
        zmm5_1.d = zmm5_1.d f* zmm2_1.d
        zmm5_1.d = zmm5_1.d f+ zmm4_1.d
        zmm1_1.d = zmm1_1.d f- zmm0_1.d
        *(r8_5 + 4) = zmm5_1.d
        *(r14 - 4) = zmm1_1.d
        i_3 = result
        result -= 1
    while (i_3 != 1)

__security_check_cookie(rax_1 ^ &var_a8)
return result
