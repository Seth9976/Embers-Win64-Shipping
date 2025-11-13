// 函数: sub_140a13ea0
// 地址: 0x140a13ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xa0)

if ((rax & 0xfffffffa) == 0 && rax != 5)
    rax.b = 0
    return rax

int512_t zmm1
zmm1.o = 0x43e0000000000000
int64_t rax_1 = 0
int64_t zmm0 = float.d(*arg2) f* 100.0

if (not(zmm0 f< zmm1.q))
    zmm0 = zmm0 f- zmm1.q
    
    if (not(zmm0 f>= zmm1.q))
        rax_1 = -0x8000000000000000

void* rax_2 = sub_142a37dc0(*(arg1 + 0x78), int.q(zmm0) + rax_1, zmm1)
int64_t* rcx_1 = *(arg1 + 0x30)
*(arg1 + 0x80) = rax_2
*(arg1 + 0x88) = 0
(*(*rcx_1 + 0x28))(rcx_1)
int64_t rax_4 = sx.q(*(arg1 + 0xa8))

if (rax_4.d != 0xffffffff)
    sub_140a13270(*(arg1 + 0x40), sub_141b25240(*(*(arg1 + 0x50) + (rax_4 << 3))))

int64_t rax_7 = sx.q(*(arg1 + 0xa4))

if (rax_7.d != 0xffffffff)
    void* rsi_1 = *(*(arg1 + 0x60) + (rax_7 << 3))
    int64_t arg_8
    char* rax_9 = sub_142a37ef0(rsi_1, &arg_8)
    void* r14_1 = *(arg1 + 0x48)
    int32_t rax_10 = sub_140bc8890(rsi_1)
    int32_t rbx_2 = int.d(sub_142a38630(rsi_1))
    sub_140a13150(r14_1, sub_141b25240(rsi_1), rbx_2, rax_10, rax_9, arg_8)

int64_t* rcx_11 = *(arg1 + 0x28)
*(arg1 + 0xb0) = *arg2
*(arg1 + 0xb8) = 0
(**rcx_11)(rcx_11, 8)
int64_t rax_14
rax_14.b = 1
return rax_14
