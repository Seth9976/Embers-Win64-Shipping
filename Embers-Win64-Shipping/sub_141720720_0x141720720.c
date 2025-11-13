// 函数: sub_141720720
// 地址: 0x141720720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(*(arg2 + 0x18))

if (*(arg3 + 0x18) != 0)
    sub_1417502a0(arg3, 0)

int32_t rcx_1 = (r14 * 2).d

if (rcx_1 != 0)
    sub_1417502a0(arg3, *(arg3 + 0x18) + rcx_1)

uint128_t zmm3 = arg5
uint32_t r9 = 0
uint128_t zmm0
int64_t zmm1
uint128_t zmm2

if (r14.d s>= 4)
    uint64_t rax_3 = zx.q(((r14 - 4).d u>> 2) + 1)
    void* r8 = 0x18
    uint64_t i_3 = zx.q(rax_3.d)
    int64_t r11_1 = r14 * 3
    r9 = (rax_3 << 2).d
    uint64_t i
    
    do
        int64_t rax_4 = *(arg2 + 0x28)
        uint64_t* rdx_2 = r8 + (r14 - 2) * 0xc
        int64_t rcx_3 = *(arg3 + 0x28)
        *(r8 + rcx_3 - 0x18) = *(r8 + rax_4 - 0x18)
        *(r8 + rcx_3 - 0x10) = *(r8 + rax_4 - 0x10)
        zmm0.d = zmm3.d f* arg4[2]
        int64_t rax_6 = *(arg2 + 0x28)
        zmm2.d = zmm3.d f* *arg4
        int64_t rcx_4 = *(arg3 + 0x28)
        zmm1.d = zmm3.q.d f* arg4[1]
        zmm0.d = zmm0.d f+ *(r8 + rax_6 - 0x10)
        zmm2.d = zmm2.d f+ *(r8 + rax_6 - 0x18)
        zmm1.d = zmm1.d f+ *(r8 + rax_6 - 0x14)
        *(rdx_2 + rcx_4) = (_mm_unpacklo_ps(zmm2, zmm1)).q
        *(rdx_2 + rcx_4 + 8) = zmm0.d
        int64_t rax_8 = *(arg2 + 0x28)
        int64_t rcx_5 = *(arg3 + 0x28)
        *(r8 + rcx_5 - 0xc) = *(r8 + rax_8 - 0xc)
        *(r8 + rcx_5 - 4) = *(r8 + rax_8 - 4)
        zmm0.d = zmm3.d f* arg4[2]
        int64_t rax_10 = *(arg2 + 0x28)
        zmm2.d = zmm3.d f* *arg4
        int64_t rcx_6 = *(arg3 + 0x28)
        zmm1.d = zmm3.q.d f* arg4[1]
        zmm0.d = zmm0.d f+ *(r8 + rax_10 - 4)
        zmm2.d = zmm2.d f+ *(r8 + rax_10 - 0xc)
        zmm1.d = zmm1.d f+ *(r8 + rax_10 - 8)
        *(rdx_2 + rcx_6 + 0xc) = (_mm_unpacklo_ps(zmm2, zmm1)).q
        *(rdx_2 + rcx_6 + 0x14) = zmm0.d
        uint64_t* rdx_3 = r8 + (r11_1 << 2)
        int64_t rax_12 = *(arg2 + 0x28)
        int64_t rcx_7 = *(arg3 + 0x28)
        *(r8 + rcx_7) = *(r8 + rax_12)
        *(r8 + rcx_7 + 8) = *(r8 + rax_12 + 8)
        int64_t rax_14 = *(arg2 + 0x28)
        zmm2.d = zmm3.d f* *arg4
        int64_t rcx_8 = *(arg3 + 0x28)
        zmm0.d = zmm3.d f* arg4[2]
        zmm2.d = zmm2.d f+ *(r8 + rax_14)
        zmm1.d = zmm3.q.d f* arg4[1]
        zmm0.d = zmm0.d f+ *(r8 + rax_14 + 8)
        zmm1.d = zmm1.d f+ *(r8 + rax_14 + 4)
        *(rdx_3 + rcx_8) = (_mm_unpacklo_ps(zmm2, zmm1)).q
        *(rdx_3 + rcx_8 + 8) = zmm0.d
        int64_t rax_16 = *(arg2 + 0x28)
        int64_t rcx_9 = *(arg3 + 0x28)
        *(r8 + rcx_9 + 0xc) = *(r8 + rax_16 + 0xc)
        *(r8 + rcx_9 + 0x14) = *(r8 + rax_16 + 0x14)
        int64_t rax_18 = *(arg2 + 0x28)
        zmm2.d = zmm3.d f* *arg4
        zmm2.d = zmm2.d f+ *(r8 + rax_18 + 0xc)
        int64_t rcx_10 = *(arg3 + 0x28)
        void* rdx_4 = r8 + (r11_1 << 2)
        zmm0.d = zmm3.d f* arg4[2]
        zmm1.d = zmm3.q.d f* arg4[1]
        zmm0.d = zmm0.d f+ *(r8 + rax_18 + 0x14)
        zmm1.d = zmm1.d f+ *(r8 + rax_18 + 0x10)
        r8 += 0x30
        *(rdx_4 + rcx_10 + 0xc) = (_mm_unpacklo_ps(zmm2, zmm1)).q
        *(rdx_4 + rcx_10 + 0x14) = zmm0.d
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r9 s>= r14.d)
    return 

int64_t r8_2 = sx.q(r9) * 0xc
uint64_t i_2 = zx.q(r14.d - r9)
uint64_t i_1

do
    int64_t rax_20 = *(arg2 + 0x28)
    uint64_t* rdx_5 = r8_2 + r14 * 0xc
    int64_t rcx_11 = *(arg3 + 0x28)
    *(r8_2 + rcx_11) = *(r8_2 + rax_20)
    *(r8_2 + rcx_11 + 8) = *(r8_2 + rax_20 + 8)
    int64_t rax_22 = *(arg2 + 0x28)
    zmm0.d = zmm3.d f* arg4[2]
    int64_t rcx_12 = *(arg3 + 0x28)
    zmm2.d = zmm3.d f* *arg4
    zmm0.d = zmm0.d f+ *(r8_2 + rax_22 + 8)
    zmm1.d = zmm3.q.d f* arg4[1]
    zmm2.d = zmm2.d f+ *(r8_2 + rax_22)
    zmm1.d = zmm1.d f+ *(r8_2 + rax_22 + 4)
    r8_2 += 0xc
    *(rdx_5 + rcx_12) = (_mm_unpacklo_ps(zmm2, zmm1)).q
    *(rdx_5 + rcx_12 + 8) = zmm0.d
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
