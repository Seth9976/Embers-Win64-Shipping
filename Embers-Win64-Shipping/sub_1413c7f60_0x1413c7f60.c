// 函数: sub_1413c7f60
// 地址: 0x1413c7f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1[1] + 0xc0) != 0)
    void* rax_1 = *arg1
    *(rax_1 + 0x61c8) -= 1

int32_t i = 0
*(*arg1 + 0x1030) = 1
void* rax_3 = *arg1

if (*(rax_3 + 0xdc0) s> 0)
    int64_t rdi_1 = 0
    
    do
        sub_1413a3ce0(*(*(rax_3 + 0xdb8) + rdi_1))
        rax_3 = *arg1
        rdi_1 += 8
        i += 1
    while (i s< *(rax_3 + 0xdc0))

int32_t rdx = *(rax_3 + 0x1040)
int64_t rbx = sx.q(*(arg1[1] + 8))
int32_t rax_6 = rdx - rbx.d - 1

if (rax_6 s>= 1)
    rax_6 = 1

if (rax_6 != 0)
    int64_t rcx_3 = *(rax_3 + 0x1038)
    memcpy(rcx_3 + (rbx << 3), rcx_3 + (sx.q(rdx - rax_6) << 3), rax_6 << 3)
    rdx = *(rax_3 + 0x1040)

*(rax_3 + 0x1040) = rdx - 1
sub_1405c53d0(rax_3 + 0x1038)
void* r14_1 = *arg1
int32_t rcx_6 = *(r14_1 + 0x1050)
int32_t rdx_5 = rcx_6 - rbx.d - 1

if (rdx_5 s>= 1)
    rdx_5 = 1

if (rdx_5 != 0)
    int64_t r9_1 = *(r14_1 + 0x1048)
    memcpy(r9_1 + rbx * 0xc, r9_1 + sx.q(rcx_6 - rdx_5) * 0xc, rdx_5 * 0xc)
    rcx_6 = *(r14_1 + 0x1050)

*(r14_1 + 0x1050) = rcx_6 - 1
int64_t result = sub_140775970(r14_1 + 0x1048)

if (rbx.d s>= 0)
    result = *arg1
    
    if (rbx.d s< *(result + 0x1040))
        result = *(result + 0x1038)
        *(*(result + (rbx << 3)) + 8) = rbx.d

void* rbx_1 = arg1[1]

if (rbx_1 == 0)
    return result

sub_1405d1550(rbx_1 + 0x10)
return j_sub_140a74f90(rbx_1)
