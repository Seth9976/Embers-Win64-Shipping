// 函数: sub_141e18090
// 地址: 0x141e18090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *arg2
int128_t zmm8 = zx.o(0)
void* r11 = &r9[sx.q(arg2[1].d) * 3]

if (r9 != r11)
    int64_t r10_1 = *arg1
    int128_t zmm6
    int128_t var_18_1 = zmm6
    int128_t zmm7
    int128_t var_28_1 = zmm7
    
    do
        int64_t r8_1 = sx.q(r9[2]) * 3
        float zmm1 = *(r10_1 + (r8_1 << 2) + 4)
        int128_t zmm2 = *(r10_1 + (r8_1 << 2) + 8)
        int64_t rdx_1 = sx.q(r9[1]) * 3
        int64_t rax_3 = sx.q(*r9)
        float zmm5 = *(r10_1 + (rdx_1 << 2) + 4)
        r9 = &r9[3]
        zmm7 = *(r10_1 + (rdx_1 << 2) + 8)
        zmm6.d = zmm2.d f* zmm5
        int64_t rcx = rax_3 * 3
        float zmm0 = zmm1 f* zmm7.d
        zmm2.d = zmm2.d f* *(r10_1 + (rcx << 2) + 4)
        zmm7.d = zmm7.d f* *(r10_1 + (rcx << 2) + 4)
        zmm6.d = zmm6.d f- zmm0
        zmm6.d = zmm6.d f* *(r10_1 + (rcx << 2))
        zmm2.d = zmm2.d f- zmm1 f* *(r10_1 + (rcx << 2) + 8)
        zmm7.d = zmm7.d f- zmm5 f* *(r10_1 + (rcx << 2) + 8)
        zmm2.d = zmm2.d f* *(r10_1 + (rdx_1 << 2))
        zmm7.d = zmm7.d f* *(r10_1 + (r8_1 << 2))
        zmm6.d = zmm6.d f- zmm2.d
        zmm6.d = zmm6.d f+ zmm7.d
        zmm8.d = zmm8.d f+ zmm6.d
    while (r9 != r11)

zmm8.d = zmm8.d f* 0.166666672f
return zmm8.d
