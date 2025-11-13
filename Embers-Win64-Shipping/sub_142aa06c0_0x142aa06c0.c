// 函数: sub_142aa06c0
// 地址: 0x142aa06c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0x1c))
int32_t r9 = 0
int32_t r10 = 0
int64_t rdi = sx.q((temp1 - temp0) s>> 1)
int32_t r8 = 0
int64_t rbx = 0

if (rdi s>= 2)
    void* rcx_1 = *(arg1 + 0x10) + 0xc
    int64_t i_1 = ((rdi - 2) u>> 1) + 1
    rbx = i_1 * 2
    int64_t i
    
    do
        int32_t rax_5 = *(rcx_1 - 8) - *(rcx_1 - 0xc)
        rcx_1 += 0x10
        r9 += rax_5
        r10 += *(rcx_1 - 0x10) - *(rcx_1 - 0x14)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbx s< rdi)
    int64_t rax_8 = *(arg1 + 0x10)
    r8 = *(rax_8 + (rbx << 3) + 4) - *(rax_8 + (rbx << 3))

int32_t r8_2 = r8 + r10 + r9
void* rax_10 = *(arg1 + 0x50)

if (rax_10 != 0)
    return zx.q(*(rax_10 + 8) + r8_2)

return zx.q(r8_2)
