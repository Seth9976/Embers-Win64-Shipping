// 函数: sub_1428673b0
// 地址: 0x1428673b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x18)
uint128_t zmm0 = *arg1
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q

if (rcx u>= 2)
    char* rax_1 = zmm0.q
    uint128_t var_18
    var_18:8.q = rcx - 2
    uint64_t r8_3 = zx.q(*rax_1) << 8 | zx.q(rax_1[1])
    var_18.q = &rax_1[2]
    
    if (rcx - 2 u>= r8_3)
        var_18.q = &rax_1[2 + r8_3]
        var_18:8.q = rcx - 2 - r8_3
        *arg1 = var_18
        *arg2 = &rax_1[2]
        arg2[1] = r8_3
        return 1

return 0
