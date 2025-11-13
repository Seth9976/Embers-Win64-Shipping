// 函数: sub_14172ebf0
// 地址: 0x14172ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t i_1 = arg2
int32_t rax = rdi.d + arg2
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_141750030(arg1)

void* r8_1 = rdi * 0x3c + *arg1

if (i_1 != 0)
    void* rdx_1 = r8_1 + 0x14
    int32_t i
    
    do
        uint128_t zmm2 = data_142e1c900
        r8_1 += 0x3c
        *(rdx_1 - 0x10) = 0x7f7fffff
        *(rdx_1 - 0xc) = 0x7f7fffff
        *(rdx_1 + 0x1c) = 0
        *(rdx_1 + 0x24) = 0
        rdx_1 += 0x3c
        *(r8_1 - 0x3c) = zmm2.q
        int32_t var_18_1 = 0xff7fffff
        int32_t var_14_1 = 0xff7fffff
        int128_t var_28
        __builtin_memcpy(&var_28, 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        *(rdx_1 - 0x44) = var_28:0xc.q
        *(rdx_1 - 0x3c) = 0xff7fffff
        *(r8_1 - 0x34) = _mm_bsrli_si128(zmm2, 8).d
        zmm2 = data_142e1c900
        *(rdx_1 - 0x38) = zmm2.q
        int128_t var_28_1
        __builtin_memcpy(&var_28_1, 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        *(rdx_1 - 0x2c) = var_28_1:0xc.q
        uint128_t temp0_2 = _mm_bsrli_si128(zmm2, 8)
        *(rdx_1 - 0x24) = 0xff7fffff
        *(rdx_1 - 0x30) = temp0_2.d
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rdi.d)
