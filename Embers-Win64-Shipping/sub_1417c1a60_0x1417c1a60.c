// 函数: sub_1417c1a60
// 地址: 0x1417c1a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x30)

if (rcx == 0)
    return sub_1417bedc0(arg1, arg2, arg3) __tailcall

if (rcx == 1)
    return sub_1417bd460(arg1, arg2, arg3) __tailcall

if (rcx == 2)
    return sub_1417bdd90(arg1, arg2, arg3) __tailcall

if (rcx == 3)
    return sub_1417be610(arg1, arg2, arg3) __tailcall

if (rcx != 4)
    return 

int64_t rbp_1 = sx.q((*arg2)[1].d)

if (rbp_1 s<= 0)
    return 

int64_t rbx_1 = 0

do
    int64_t r15_1 = **arg2
    *(*arg3 + (sx.q(*(r15_1 + (rbx_1 << 3) + 4)) << 2)) = *(arg1 + 0x1c)
    int64_t rdx_1 = sx.q(*(r15_1 + (rbx_1 << 3))) * 3
    int64_t rcx_5 = *arg2[1]
    float zmm1 = *(arg1 + 0x24) f- *(rcx_5 + (rdx_1 << 2))
    float zmm2 = *(arg1 + 0x28) f- *(rcx_5 + (rdx_1 << 2) + 4)
    float zmm0 = *(arg1 + 0x2c) f- *(rcx_5 + (rdx_1 << 2) + 8)
    zmm2 = zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0
    zmm0 = *(arg1 + 0x20)
    zmm1 = _mm_sqrt_ss(0, zmm2)
    
    if (not(zmm1 >= zmm0))
        *(*arg3 + (sx.q(*(r15_1 + (rbx_1 << 3) + 4)) << 2)) =
            logf(zmm0 - zmm1 + 1f) * 0.434294492f f* *(arg1 + 0x10)
    
    rbx_1 += 1
while (rbx_1 s< rbp_1)
