// 函数: sub_1404028b0
// 地址: 0x1404028b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t r14 = arg6
uint128_t* rbx = arg4
int32_t r8_1 = *arg1 s>> r14.b
int32_t rax_3 = r8_1 s>> 1
int32_t rsi_1 = r8_1 s>> 2
int64_t rdi = sx.q(rax_3)
int64_t rcx_1 = rdi << 2
int64_t rax_4 = rcx_1 + 0xf

if (rax_4 u<= rcx_1)
    rax_4 = 0xffffffffffffff0

int64_t rax_5 = rax_4 & 0xfffffffffffffff0
__chkstk(rax_5)
void var_d8
void* rsp = &var_d8 - rax_5
int64_t rax_6 = rcx_1 + 0xf

if (rax_6 u<= rcx_1)
    rax_6 = 0xffffffffffffff0

int64_t rax_7 = rax_6 & 0xfffffffffffffff0
__chkstk(rax_7)
int64_t rdx = sx.q(arg5)
void* r15 = rsp - rax_7 + 0x20
uint32_t r13 = 0
int64_t rcx_3 = rdx s>> 1
void* r8_2 = rsp + 0x20
int128_t zmm6
zmm6.d = 0.785398185f f/ _mm_cvtepi32_ps(zx.o(r8_1)).d
void* r10 = arg2 + (rcx_3 << 2)
int128_t* r11 = rbx + (rcx_3 << 2)
void* var_90 = r15
int32_t rax_10 = (rdx + 3).d s>> 2
void* r9_2 = arg2 + ((rcx_3 + rdi) << 2) - 4
int128_t* r12_1 = r11 - 4
var_b8 = rax_10
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3

if (rax_10 s>= 4)
    void* rcx_5 = r10 + 8 + (rdi << 2)
    int64_t rax_13 = neg.q(rdi)
    uint64_t i_16 = zx.q(((var_b8 - 4) u>> 2) + 1)
    uint64_t i_8 = i_16
    r13 = (i_16 << 2).d
    uint64_t i
    
    do
        zmm2 = *r12_1
        zmm3 = *r11
        r8_2 += 0x20
        r10 += 0x20
        rcx_5 += 0x20
        r9_2 -= 0x20
        r11 = &r11[2]
        r12_1 -= 0x20
        i = i_8
        i_8 -= 1
        zmm0 = zmm3
        zmm3.d = zmm3.d f* *(r10 - 0x20)
        zmm1.d = zmm2.d f* *(rcx_5 - 0x28)
        zmm0.d = zmm0.d f* *(r9_2 + 0x20)
        zmm2.d = zmm2.d f* *(r9_2 + ((2 - rdi) << 2) + 0x18)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm3.d = zmm3.d f- zmm2.d
        zmm2 = *(r12_1 + 0x18)
        zmm0.d = zmm2.d f* *(rcx_5 - 0x20)
        zmm2.d = zmm2.d f* *(r9_2 + (rax_13 << 2) + 0x18)
        *(r8_2 - 0x20) = zmm1.d
        *(r8_2 - 0x1c) = zmm3.d
        zmm3 = *(r11 - 0x18)
        zmm1.d = zmm3.d f* *(r9_2 + 0x18)
        zmm3.d = zmm3.d f* *(rcx_5 + (rax_13 << 2) - 0x20)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm3.d = zmm3.d f- zmm2.d
        zmm2 = r12_1[1].d
        zmm0.d = zmm2.d f* *(rcx_5 - 0x18)
        zmm2.d = zmm2.d f* *(r9_2 + ((-2 - rdi) << 2) + 0x18)
        *(r8_2 - 0x18) = zmm1.d
        *(r8_2 - 0x14) = zmm3.d
        zmm3 = r11[-1].d
        zmm1.d = zmm3.d f* *(r9_2 + 0x10)
        zmm3.d = zmm3.d f* *(rcx_5 + ((2 - rdi) << 2) - 0x20)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm3.d = zmm3.d f- zmm2.d
        zmm2 = *(r12_1 + 8)
        zmm0.d = zmm2.d f* *(rcx_5 - 0x10)
        zmm2.d = zmm2.d f* *(r9_2 + ((-4 - rdi) << 2) + 0x18)
        *(r8_2 - 0x10) = zmm1.d
        *(r8_2 - 0xc) = zmm3.d
        zmm3 = *(r11 - 8)
        zmm1.d = zmm3.d f* *(r9_2 + 8)
        zmm3.d = zmm3.d f* *(rcx_5 + ((4 - rdi) << 2) - 0x20)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm3.d = zmm3.d f- zmm2.d
        *(r8_2 - 8) = zmm1.d
        *(r8_2 - 4) = zmm3.d
    while (i != 1)
    r14 = arg6
    r15 = var_90
    rax_10 = var_b8

if (r13 s< rax_10)
    int32_t i_17 = rax_10 - r13
    void* r11_1 = r11 - r10
    uint128_t* r12_2 = r12_1 - r9_2
    r13 += i_17
    uint64_t i_12 = zx.q(i_17)
    uint64_t i_1
    
    do
        zmm2 = *(r12_2 + r9_2)
        zmm3 = *(r11_1 + r10)
        r8_2 += 8
        r10 += 8
        r9_2 -= 8
        zmm0 = zmm3
        zmm3.d = zmm3.d f* *(r10 - 8)
        zmm1.d = zmm2.d f* *(rcx_1 + r10 - 8)
        zmm0.d = zmm0.d f* *(r9_2 + 8)
        zmm2.d = zmm2.d f* *(neg.q(rcx_1) + r9_2 + 8)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm3.d = zmm3.d f- zmm2.d
        *(r8_2 - 8) = zmm1.d
        *(r8_2 - 4) = zmm3.d
        i_1 = i_12
        i_12 -= 1
    while (i_1 != 1)
    rax_10 = var_b8

int32_t rdx_5 = rsi_1 - rax_10
uint128_t* rcx_9 = rbx + ((rdx - 1) << 2)

if (r13 s< rdx_5)
    if (rdx_5 - r13 s>= 4)
        uint64_t rax_27 = zx.q(((rdx_5 - r13 - 4) u>> 2) + 1)
        uint64_t i_15 = zx.q(rax_27.d)
        r13 += (rax_27 << 2).d
        uint64_t i_2
        
        do
            r8_2 += 0x20
            r10 += 0x20
            *(r8_2 - 0x20) = *r9_2
            r9_2 -= 0x20
            *(r8_2 - 0x1c) = *(r10 - 0x20)
            *(r8_2 - 0x18) = *(r9_2 + 0x18)
            *(r8_2 - 0x14) = *(r10 - 0x18)
            *(r8_2 - 0x10) = *(r9_2 + 0x10)
            *(r8_2 - 0xc) = *(r10 - 0x10)
            *(r8_2 - 8) = *(r9_2 + 8)
            *(r8_2 - 4) = *(r10 - 8)
            i_2 = i_15
            i_15 -= 1
        while (i_2 != 1)
    
    if (r13 s< rdx_5)
        int64_t i_13 = sx.q(rdx_5 - r13)
        r13 += i_13.d
        int64_t i_3
        
        do
            r8_2 += 8
            r10 += 8
            *(r8_2 - 8) = *r9_2
            r9_2 -= 8
            *(r8_2 - 4) = *(r10 - 8)
            i_3 = i_13
            i_13 -= 1
        while (i_3 != 1)

if (r13 s< rsi_1)
    if (rsi_1 - r13 s>= 4)
        void* rdx_7 = r10 + ((2 - rdi) << 2)
        uint64_t i_9 = zx.q(((rsi_1 - r13 - 4) u>> 2) + 1)
        r13 += (i_9 << 2).d
        uint64_t i_4
        
        do
            zmm2 = *rcx_9
            zmm3 = *rbx
            r8_2 += 0x20
            r10 += 0x20
            rdx_7 += 0x20
            r9_2 -= 0x20
            rbx = &rbx[2]
            rcx_9 -= 0x20
            zmm0 = zmm3
            zmm3.d = zmm3.d f* *(r9_2 + (rdi << 2) + 0x20)
            zmm1.d = zmm2.d f* *(r9_2 + 0x20)
            zmm0.d = zmm0.d f* *(rdx_7 - 0x28)
            zmm2.d = zmm2.d f* *(r10 - 0x20)
            zmm1.d = zmm1.d f- zmm0.d
            zmm3.d = zmm3.d f+ zmm2.d
            zmm2 = *(rcx_9 + 0x18)
            *(r8_2 - 0x20) = zmm1.d
            *(r8_2 - 0x1c) = zmm3.d
            zmm3 = *(rbx - 0x18)
            zmm1 = zmm2
            zmm2.d = zmm2.d f* *(rcx_1 + rdx_7 - 0x20)
            zmm1.d = zmm1.d f* *(r9_2 + 0x18)
            zmm0 = zmm3
            zmm3.d = zmm3.d f* *(rcx_1 + r9_2 + 0x18)
            zmm0.d = zmm0.d f* *(rdx_7 - 0x20)
            zmm1.d = zmm1.d f- zmm0.d
            zmm3.d = zmm3.d f+ zmm2.d
            zmm2 = rcx_9[1].d
            *(r8_2 - 0x18) = zmm1.d
            *(r8_2 - 0x14) = zmm3.d
            zmm3 = rbx[-1].d
            zmm1 = zmm2
            zmm2.d = zmm2.d f* *(rdx_7 + (rdi << 2) - 0x18)
            zmm1.d = zmm1.d f* *(r9_2 + 0x10)
            zmm0 = zmm3
            zmm3.d = zmm3.d f* *(r9_2 + (rdi << 2) + 0x10)
            zmm0.d = zmm0.d f* *(rdx_7 - 0x18)
            zmm1.d = zmm1.d f- zmm0.d
            zmm3.d = zmm3.d f+ zmm2.d
            zmm2 = *(rcx_9 + 8)
            *(r8_2 - 0x10) = zmm1.d
            *(r8_2 - 0xc) = zmm3.d
            zmm3 = *(rbx - 8)
            zmm1 = zmm2
            zmm2.d = zmm2.d f* *(rdx_7 + (rdi << 2) - 0x10)
            zmm1.d = zmm1.d f* *(r9_2 + 8)
            zmm0.d = zmm3.d f* *(rdx_7 - 0x10)
            zmm3.d = zmm3.d f* *(r9_2 + (rdi << 2) + 8)
            zmm1.d = zmm1.d f- zmm0.d
            zmm3.d = zmm3.d f+ zmm2.d
            *(r8_2 - 8) = zmm1.d
            *(r8_2 - 4) = zmm3.d
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)
    
    if (r13 s< rsi_1)
        int64_t i_14 = sx.q(rsi_1 - r13)
        int64_t i_5
        
        do
            zmm2 = *rcx_9
            zmm3 = *rbx
            r8_2 += 8
            r10 += 8
            r9_2 -= 8
            rbx += 8
            rcx_9 -= 8
            zmm0 = zmm3
            zmm3.d = zmm3.d f* *(rcx_1 + r9_2 + 8)
            zmm1.d = zmm2.d f* *(r9_2 + 8)
            zmm0.d = zmm0.d f* *(r10 + (neg.q(rdi) << 2) - 8)
            zmm2.d = zmm2.d f* *(r10 - 8)
            zmm1.d = zmm1.d f- zmm0.d
            zmm3.d = zmm3.d f+ zmm2.d
            *(r8_2 - 8) = zmm1.d
            *(r8_2 - 4) = zmm3.d
            i_5 = i_14
            i_14 -= 1
        while (i_5 != 1)

void* r12_3 = rsp + 0x20
int64_t r11_3 = *(arg1 + 0x28)
int32_t i_7 = 0
void* r8_3 = r12_3
int32_t i_6 = 0
int32_t rdi_3 = 2
uint128_t zmm4
uint128_t zmm5

if (rsi_1 s>= 4)
    int32_t r12_4 = 2
    int32_t r10_1 = rsi_1 - 2
    
    do
        char rcx_10 = r14.b
        zmm1 = *(r11_3 + (sx.q(i_6 << rcx_10) << 2))
        zmm4 = zmm1
        zmm1.d = zmm1.d f* *(r8_3 + 4)
        zmm4.d = zmm4.d f* *r8_3
        zmm5 = *(r11_3 + (sx.q((r10_1 + 2) << rcx_10) << 2))
        zmm0.d = zmm5.d f* *(r8_3 + 4)
        zmm5.d = zmm5.d f* *r8_3
        zmm4.d = (zmm4 ^ 0x80000000).d f- zmm0.d
        zmm5.d = zmm5.d f- zmm1.d
        zmm1 = *(r11_3 + (sx.q((r12_4 - 1) << rcx_10) << 2))
        zmm0.d = zmm5.d f* zmm6.d
        zmm0.d = zmm0.d f+ zmm4.d
        zmm4.d = zmm4.d f* zmm6.d
        *r8_3 = zmm0.d
        zmm5.d = zmm5.d f- zmm4.d
        *(r8_3 + 4) = zmm5.d
        zmm5 = *(r11_3 + (sx.q((r10_1 + 1) << rcx_10) << 2))
        zmm4.d = zmm1.d f* *(r8_3 + 8)
        zmm1.d = zmm1.d f* *(r8_3 + 0xc)
        zmm0.d = zmm5.d f* *(r8_3 + 0xc)
        zmm5.d = zmm5.d f* *(r8_3 + 8)
        zmm4.d = (zmm4 ^ 0x80000000).d f- zmm0.d
        zmm5.d = zmm5.d f- zmm1.d
        zmm1 = *(r11_3 + (sx.q(r12_4 << rcx_10) << 2))
        zmm0.d = zmm5.d f* zmm6.d
        zmm0.d = zmm0.d f+ zmm4.d
        zmm4.d = zmm4.d f* zmm6.d
        *(r8_3 + 8) = zmm0.d
        zmm5.d = zmm5.d f- zmm4.d
        void* rdx_9 = r8_3 + 0x14
        *(r8_3 + 0xc) = zmm5.d
        zmm5 = *(r11_3 + (sx.q(r10_1 << rcx_10) << 2))
        zmm4.d = zmm1.d f* *(r8_3 + 0x10)
        zmm1.d = zmm1.d f* *rdx_9
        zmm0 = zmm5
        zmm5.d = zmm5.d f* *(r8_3 + 0x10)
        zmm0.d = zmm0.d f* *rdx_9
        zmm4.d = (zmm4 ^ 0x80000000).d f- zmm0.d
        zmm5.d = zmm5.d f- zmm1.d
        zmm1 = *(r11_3 + (sx.q((r12_4 + 1) << rcx_10) << 2))
        zmm0.d = zmm5.d f* zmm6.d
        zmm0.d = zmm0.d f+ zmm4.d
        zmm4.d = zmm4.d f* zmm6.d
        *(r8_3 + 0x10) = zmm0.d
        zmm5.d = zmm5.d f- zmm4.d
        *rdx_9 = zmm5.d
        zmm4 = zmm1
        zmm1.d = zmm1.d f* *(rdx_9 + 8)
        i_6 += 4
        r8_3 = rdx_9 + 0xc
        int64_t rax_70 = sx.q((r10_1 - 1) << rcx_10)
        r12_4 += 4
        r10_1 -= 4
        zmm4.d = zmm4.d f* *(rdx_9 + 4)
        zmm5 = *(r11_3 + (rax_70 << 2))
        zmm0 = zmm5
        zmm5.d = zmm5.d f* *(rdx_9 + 4)
        zmm0.d = zmm0.d f* *(r8_3 - 4)
        zmm5.d = zmm5.d f- zmm1.d
        zmm4.d = (zmm4 ^ 0x80000000).d f- zmm0.d
        zmm0.d = zmm5.d f* zmm6.d
        zmm0.d = zmm0.d f+ zmm4.d
        zmm4.d = zmm4.d f* zmm6.d
        zmm5.d = zmm5.d f- zmm4.d
        *(rdx_9 + 4) = zmm0.d
        *(r8_3 - 4) = zmm5.d
    while (i_6 s< rsi_1 - 3)
    
    r15 = var_90
    r12_3 = rsp + 0x20

if (i_6 s< rsi_1)
    int32_t r10_3 = rsi_1 - i_6
    
    do
        int32_t i_10 = i_6
        char rcx_11 = r14.b
        i_6 += 1
        r8_3 += 8
        zmm1 = *(r11_3 + (sx.q(i_10 << rcx_11) << 2))
        int32_t rax_73 = r10_3
        r10_3 -= 1
        zmm4 = zmm1
        zmm1.d = zmm1.d f* *(r8_3 - 4)
        zmm4.d = zmm4.d f* *(r8_3 - 8)
        zmm5 = *(r11_3 + (sx.q(rax_73 << rcx_11) << 2))
        zmm0 = zmm5
        zmm5.d = zmm5.d f* *(r8_3 - 8)
        zmm0.d = zmm0.d f* *(r8_3 - 4)
        zmm4.d = (zmm4 ^ 0x80000000).d f- zmm0.d
        zmm5.d = zmm5.d f- zmm1.d
        zmm0.d = zmm5.d f* zmm6.d
        zmm0.d = zmm0.d f+ zmm4.d
        zmm4.d = zmm4.d f* zmm6.d
        *(r8_3 - 8) = zmm0.d
        zmm5.d = zmm5.d f- zmm4.d
        *(r8_3 - 4) = zmm5.d
    while (i_6 s< rsi_1)

float zmm6_1 = sub_1403fff80(*(arg1 + (sx.q(r14) << 3) + 8), r12_3, r15)
float* r8_7 = arg3
int64_t r9_3 = *(arg1 + 0x28)
int64_t result = sx.q((rax_3 - 1) * arg7)
float* rdx_11 = &r8_7[result]
float zmm2_1
float zmm4_1
float zmm5_1

if (rsi_1 s>= 4)
    int32_t r11_4 = rsi_1 - 2
    int64_t r10_5 = sx.q(arg7 * 2) << 2
    
    do
        zmm5_1 = *r15
        float zmm3_1 = *(r15 + 4)
        char rcx_14 = r14.b
        float zmm0_1 = zmm5_1
        zmm2_1 = *(r9_3 + (sx.q((r11_4 + 2) << rcx_14) << 2))
        zmm4_1 = zmm3_1 * zmm2_1
        zmm5_1 = zmm5_1 * zmm2_1
        float zmm1_1 = *(r9_3 + (sx.q(i_7 << rcx_14) << 2))
        zmm0_1 = zmm0_1 * zmm1_1
        zmm1_1 = zmm1_1 * zmm3_1
        zmm3_1 = *(r15 + 0xc)
        zmm2_1 = *(r9_3 + (sx.q((r11_4 + 1) << rcx_14) << 2))
        zmm4_1 = zmm4_1 + zmm0_1
        zmm5_1 = zmm5_1 - zmm1_1
        int64_t rax_91 = sx.q((rdi_3 - 1) << rcx_14)
        zmm0_1 = zmm4_1
        zmm1_1 = zmm5_1
        zmm4_1 = zmm4_1 * zmm6_1 + zmm5_1
        zmm5_1 = *(r15 + 8)
        *rdx_11 = zmm4_1
        void* rdx_12 = rdx_11 - r10_5
        zmm4_1 = zmm5_1 f* *(r9_3 + (rax_91 << 2))
        *r8_7 = zmm0_1 - zmm1_1 * zmm6_1
        void* r8_8 = &r8_7[sx.q(arg7 * 2)]
        zmm4_1 = zmm4_1 + zmm3_1 * zmm2_1
        zmm5_1 = zmm5_1 * zmm2_1 - zmm3_1 f* *(r9_3 + (rax_91 << 2))
        zmm0_1 = zmm4_1
        zmm1_1 = zmm5_1
        zmm4_1 = zmm4_1 * zmm6_1 + zmm5_1
        zmm5_1 = *(r9_3 + (sx.q(r11_4 << rcx_14) << 2))
        zmm2_1 = *(r9_3 + (sx.q(rdi_3 << rcx_14) << 2))
        *rdx_12 = zmm4_1
        zmm4_1 = zmm5_1
        zmm5_1 = zmm5_1 f* *(r15 + 0x10)
        void* rdx_13 = rdx_12 - r10_5
        zmm4_1 = zmm4_1 f* *(r15 + 0x14)
        *r8_8 = zmm0_1 - zmm1_1 * zmm6_1
        void* r8_9 = r8_8 + r10_5
        zmm5_1 = zmm5_1 - zmm2_1 f* *(r15 + 0x14)
        zmm4_1 = zmm4_1 + zmm2_1 f* *(r15 + 0x10)
        *r8_9 = zmm4_1 - zmm5_1 * zmm6_1
        void* r8_10 = r8_9 + r10_5
        *rdx_13 = zmm4_1 * zmm6_1 + zmm5_1
        zmm5_1 = *(r15 + 0x18)
        zmm3_1 = *(r15 + 0x1c)
        void* rdx_14 = rdx_13 - r10_5
        i_7 += 4
        int64_t rax_100 = sx.q((r11_4 - 1) << rcx_14)
        r15 += 0x20
        r11_4 -= 4
        zmm2_1 = *(r9_3 + (rax_100 << 2))
        int32_t rax_101 = rdi_3 + 1
        rdi_3 += 4
        result = sx.q(rax_101 << rcx_14)
        zmm4_1 = zmm5_1 f* *(r9_3 + (result << 2)) + zmm3_1 * zmm2_1
        zmm5_1 = zmm5_1 * zmm2_1 - zmm3_1 f* *(r9_3 + (result << 2))
        *rdx_14 = zmm4_1 * zmm6_1 + zmm5_1
        rdx_11 = rdx_14 - r10_5
        *r8_10 = zmm4_1 - zmm5_1 * zmm6_1
        r8_7 = r8_10 + r10_5
    while (i_7 s< rsi_1 - 3)

if (i_7 s< rsi_1)
    int32_t r10_7 = rsi_1 - i_7
    
    do
        char rcx_15 = r14.b
        r15 += 8
        int32_t rax_105 = r10_7 << rcx_15
        r10_7 -= 1
        zmm5_1 = *(r9_3 + (sx.q(rax_105) << 2))
        int32_t i_11 = i_7
        i_7 += 1
        result = sx.q(i_11 << rcx_15)
        zmm2_1 = *(r9_3 + (result << 2))
        zmm4_1 = zmm2_1 f* *(r15 - 8) + zmm5_1 f* *(r15 - 4)
        zmm5_1 = zmm5_1 f* *(r15 - 8) - zmm2_1 f* *(r15 - 4)
        *rdx_11 = zmm4_1 * zmm6_1 + zmm5_1
        rdx_11 -= sx.q(arg7 * 2) << 2
        *r8_7 = zmm4_1 - zmm5_1 * zmm6_1
        r8_7 = &r8_7[sx.q(arg7 * 2)]
    while (i_7 s< rsi_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
