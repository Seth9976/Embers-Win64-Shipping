// 函数: sub_140400390
// 地址: 0x140400390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rcx = 0
int64_t rdi = 0
int128_t zmm11 = *arg2
int128_t zmm12 = *(arg2 + 4)
int128_t zmm13 = *(arg2 + 8)
int128_t zmm14 = *(arg2 + 0xc)
int128_t zmm15 = arg2[1].d
int128_t zmm10 = *arg5
int128_t zmm9 = *(arg5 + 4)
int128_t zmm7 = *(arg5 + 8)
int128_t zmm8 = *(arg5 + 0xc)
int128_t zmm6 = arg5[1].d
int128_t zmm2
float zmm3

if (arg4 s>= 4)
    void* r11_2 = arg1 - arg3
    void* rbx_1 = arg3 + 4
    result = zx.q(((arg4 - 4) u>> 2) + 1)
    rcx = (result << 2).d
    rdi = result << 2
    void* const* i
    
    do
        zmm2 = *(r11_2 + rbx_1 - 4)
        zmm6.d = zmm6.d f* zmm15.d
        rbx_1 += 0x10
        float zmm5 = zmm7.d
        float zmm4 = zmm8.d f* zmm15.d
        float zmm0 = zmm8.d
        zmm8 = zmm2
        zmm3 = zmm10.d f* zmm11.d f+ zmm2.d + zmm9.d f* zmm12.d + zmm7.d f* zmm13.d
        zmm2.d = zmm2.d f* zmm11.d
        zmm3 = zmm3 + zmm0 f* zmm14.d f+ zmm6.d
        zmm6 = zmm10
        *(rbx_1 - 0x14) = zmm3
        zmm7 = *(r11_2 + rbx_1 - 0x10)
        zmm2.d = zmm2.d f+ zmm7.d
        zmm2.d = zmm2.d f+ zmm6.d f* zmm12.d
        zmm2.d = zmm2.d f+ zmm9.d f* zmm13.d
        zmm2.d = zmm2.d f+ zmm5 f* zmm14.d
        zmm2.d = zmm2.d f+ zmm4
        zmm4 = zmm9.d
        *(rbx_1 - 0x10) = zmm2.d
        zmm9 = *(r11_2 + rbx_1 - 0xc)
        zmm2.d = zmm9.d f* zmm11.d
        *(rbx_1 - 0xc) = zmm7.d f* zmm11.d f+ zmm9.d + zmm8.d f* zmm12.d + zmm6.d f* zmm13.d
            + zmm4 f* zmm14.d + zmm5 f* zmm15.d
        zmm10 = *(r11_2 + rbx_1 - 8)
        zmm2.d = zmm2.d f+ zmm10.d
        zmm2.d = zmm2.d f+ zmm7.d f* zmm12.d
        zmm2.d = zmm2.d f+ zmm8.d f* zmm13.d
        zmm2.d = zmm2.d f+ zmm6.d f* zmm14.d
        zmm2.d = zmm2.d f+ zmm4 f* zmm15.d
        *(rbx_1 - 8) = zmm2.d
        i = result
        result -= 1
    while (i != 1)

if (rcx s< arg4)
    result = arg3 + (rdi << 2)
    uint64_t i_2 = zx.q(arg4 - rcx)
    uint64_t i_1
    
    do
        zmm2 = *(result + arg1 - arg3)
        zmm6.d = zmm6.d f* zmm15.d
        result += 4
        zmm3 = zmm10.d f* zmm11.d f+ zmm2.d + zmm9.d f* zmm12.d + zmm7.d f* zmm13.d
            + zmm8.d f* zmm14.d f+ zmm6.d
        zmm6 = zmm8
        zmm8 = zmm7
        zmm7 = zmm9
        *(result - 4) = zmm3
        zmm9 = zmm10
        zmm10 = zmm2
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*arg5 = zmm10.d
*(arg5 + 4) = zmm9.d
*(arg5 + 8) = zmm7.d
*(arg5 + 0xc) = zmm8.d
arg5[1].d = zmm6.d
return result
