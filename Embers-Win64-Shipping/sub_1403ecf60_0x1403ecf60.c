// 函数: sub_1403ecf60
// 地址: 0x1403ecf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = 0
float zmm3 = arg3
int64_t r10 = sx.q(arg2 - 1)
float zmm0

if (r10 s>= 4)
    void* rax = arg1 + 8
    int64_t i_1 = ((r10 - 4) u>> 2) + 1
    r8 = i_1 << 2
    int64_t i
    
    do
        zmm0 = zmm3
        zmm3 = zmm3 * arg3
        rax += 0x10
        *(rax - 0x18) = zmm0 f* *(rax - 0x18)
        zmm0 = zmm3
        zmm3 = zmm3 * arg3
        float zmm1 = zmm3 f* *(rax - 0x10)
        zmm3 = zmm3 * arg3
        *(rax - 0x14) = zmm0 f* *(rax - 0x14)
        *(rax - 0x10) = zmm1
        zmm0 = zmm3 f* *(rax - 0xc)
        zmm3 = zmm3 * arg3
        *(rax - 0xc) = zmm0
        i = i_1
        i_1 -= 1
    while (i != 1)

while (r8 s< r10)
    zmm0 = zmm3
    r8 += 1
    zmm3 = zmm3 * arg3
    *(arg1 + (r8 << 2) - 4) = zmm0 f* *(arg1 + (r8 << 2) - 4)

int64_t result = sx.q(arg2)
*(arg1 + (result << 2) - 4) = zmm3 f* *(arg1 + (result << 2) - 4)
return result
