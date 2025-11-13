// 函数: sub_1417d2040
// 地址: 0x1417d2040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f20c10(arg1, arg2, arg3)
int64_t rsi = 0
int64_t (** rdi)(int64_t* arg1, int64_t* arg2) = *(arg1 + 0x448)
void* result = &rdi[sx.q(*(arg1 + 0x450))]
uint64_t r14_1 = sx.q(*(arg1 + 0x450)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t (* rbx_1)(int64_t* arg1, int64_t* arg2) = *rdi
        int64_t r9
        r9.b = 1
        sub_1422214a0(rbx_1, arg1 + 0x1c0, arg3)
        float zmm1_1[0x4] = *(arg1 + 0x1e0)
        float var_28 = zmm1_1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        float var_20_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        float var_24_1 = temp0_1[0]
        result, r9 = sub_142226370(rbx_1, &var_28, 0)
        rsi += 1
        rdi = &rdi[1]
    while (rsi != r14_1)

return result
