// 函数: sub_142867330
// 地址: 0x142867330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x18)
uint128_t zmm0 = *arg1
int64_t rcx = _mm_bsrli_si128(zmm0, 8).q

if (rcx != 0)
    char* rax_1 = zmm0.q
    uint128_t var_18
    var_18:8.q = rcx - 1
    uint64_t r8_1 = zx.q(*rax_1)
    var_18.q = &rax_1[1]
    
    if (rcx - 1 u>= r8_1)
        var_18.q = &rax_1[1 + r8_1]
        var_18:8.q = rcx - 1 - r8_1
        *arg1 = var_18
        *arg2 = &rax_1[1]
        arg2[1] = r8_1
        return 1

return 0
