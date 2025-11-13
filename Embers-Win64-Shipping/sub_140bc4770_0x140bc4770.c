// 函数: sub_140bc4770
// 地址: 0x140bc4770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x188)
int64_t* r9 = *(arg1 + 0xd8)
*(arg1 + 0xf0) = rax
uint64_t rax_1 = zx.q(rax + 3)
uint64_t rcx_1 = rax_1 * 0x30
int64_t r8_1 = *r9
*r9 += zx.q(rax_1.d)
r9[2]
r9[2] += rcx_1
*(arg1 + 0xe0) = sub_140a82f30(rcx_1, 0, r8_1)
int64_t rdx = 0
int64_t r8_2 = arg2
int64_t i_2 = 3
int64_t i

do
    void* rcx_3 = *(arg1 + 0xe0) + rdx
    rdx += 0x30
    *(rcx_3 + 8) = 0
    *(rcx_3 + 0x10) = 0
    *(rcx_3 + 0x14) = 0
    *(rcx_3 + 0x15) = 0
    *(rcx_3 + 0x15)
    *(rcx_3 + 0x18) = r8_2
    r8_2 += 0x18
    *(rcx_3 + 0x20) = arg1
    *(rcx_3 + 0x28) = 0xffffffff
    i = i_2
    i_2 -= 1
while (i != 1)
void* r8_3 = *(arg1 + 0xe0)
*(r8_3 + 0x40) += 1
void* rax_6 = *(arg1 + 0xe0)
*(rax_6 + 0x70) += 1
int32_t i_1 = 0
uint64_t result = *(arg1 + 0xe0) + 0x90
*(arg1 + 0xe8) = result

if (*(arg1 + 0x188) s> 0)
    do
        void* rcx_6 = zx.q(i_1) * 0x30 + *(arg1 + 0xe8)
        *(rcx_6 + 8) = 0
        *(rcx_6 + 0x10) = 0
        *(rcx_6 + 0x14) = 0
        *(rcx_6 + 0x15) = 0
        result = zx.q(*(rcx_6 + 0x15))
        *(rcx_6 + 0x18) = arg2 + 0x48
        *(rcx_6 + 0x20) = arg1
        *(rcx_6 + 0x28) = i_1
        *(rcx_6 + 0x10) += 1
        i_1 += 1
    while (i_1 s< *(arg1 + 0x188))

*(r8_3 + 0x10) += 1
return result
