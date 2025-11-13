// 函数: sub_1423892a0
// 地址: 0x1423892a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x638)

if (rax == 0)
    *(arg1 + 0x638) = 0
    return rax

void* rcx = *(arg1 + 0x150)

if (rcx == 0 || *(rax + 0xc8) == 0)
    *(arg1 + 0x638) = 0
    return rax

int32_t i = 0

if (*(rcx + 0x18) s<= 0)
    *(arg1 + 0x638) = 0
    return rax

void* rax_4

do
    int64_t* rcx_1 = *(arg1 + 0x108)
    int64_t rdi_1 = sx.q(i) * 0x430
    int64_t r9_1 = *rcx_1
    (*(r9_1 + 0x210))(rcx_1, *(*(arg1 + 0x150) + 0x10) + 0x210 + rdi_1, *(arg1 + 0x638), r9_1)
    int64_t* rcx_2 = *(arg1 + 0x108)
    int64_t r9_2 = *rcx_2
    (*(r9_2 + 0x210))(rcx_2, *(*(arg1 + 0x150) + 0x10) + rdi_1, *(arg1 + 0x638), r9_2)
    rax_4 = *(arg1 + 0x150)
    i += 1
while (i s< *(rax_4 + 0x18))

*(arg1 + 0x638) = 0
return rax_4
