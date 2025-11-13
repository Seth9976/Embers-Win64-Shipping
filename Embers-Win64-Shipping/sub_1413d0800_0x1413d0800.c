// 函数: sub_1413d0800
// 地址: 0x1413d0800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x4000)
void* r8 = arg1

if (rax != 0)
    r8 = rax

void* rdx_2 = (sx.q(*(arg1 + 0x4008)) << 6) + r8

if (r8 != rdx_2)
    void* rcx = r8 + 0x18
    
    do
        uint128_t zmm2 = zx.o(*arg2)
        r8 += 0x40
        float rax_1 = arg2[1].d
        float zmm0 = zmm2.d f+ *(rcx - 8)
        uint128_t zmm1
        zmm1.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f+ *(rcx - 4)
        *(rcx - 8) = zmm0
        zmm0 = rax_1 f+ *rcx
        *(rcx - 4) = zmm1.d
        *rcx = zmm0
        rcx += 0x40
    while (r8 != rdx_2)

int32_t rbx_1 = arg3 & 0xfffffff0
uint8_t result

do
    int64_t rcx_1 = *(arg1 + ((zx.q(rbx_1) & 7) << 3) + 0x4018)
    
    if (rcx_1 != 0)
        sub_1413d0800(rcx_1, arg2)
    
    if ((rbx_1.b & 7) u>= 7)
        rbx_1 |= 8
    else
        rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    
    result = (rbx_1 u>> 3).b
while ((result & 1) == 0)

return result
