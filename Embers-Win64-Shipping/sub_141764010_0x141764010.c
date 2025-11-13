// 函数: sub_141764010
// 地址: 0x141764010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0xa8)
int32_t* rax = j_sub_140a82f30(0x10)
int32_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rax = rbx
    *(rax + 8) = arg1

int64_t rbp = sx.q(*(arg1 + 0xa8))
int32_t rax_1 = (rbp + 1).d
*(arg1 + 0xa8) = rax_1

if (rax_1 s> *(arg1 + 0xac))
    sub_1405a4d70(arg1 + 0xa0)

*(*(arg1 + 0xa0) + (rbp << 3)) = rdi
int64_t rbp_1 = sx.q(*(arg1 + 0x88))
int32_t rax_3 = (rbp_1 + 1).d
*(arg1 + 0x88) = rax_3

if (rax_3 s> *(arg1 + 0x8c))
    sub_1405a4f90(arg1 + 0x80)

*(*(arg1 + 0x80) + rbp_1 * 0x10) = *arg2
int64_t rbp_2 = sx.q(*(arg1 + 0x68))
int32_t rax_5 = (rbp_2 + 1).d
*(arg1 + 0x68) = rax_5

if (rax_5 s> *(arg1 + 0x6c))
    sub_1408094f0(arg1 + 0x60)

int128_t* rdx_6 = rbp_2 * 0xc0 + *(arg1 + 0x60)
*rdx_6 = *arg4
rdx_6[1] = arg4[1]
rdx_6[2] = arg4[2]
rdx_6[3] = arg4[3]
rdx_6[4] = arg4[4]
rdx_6[5] = arg4[5]
rdx_6[6] = arg4[6]
rdx_6[7] = arg4[7]
rdx_6[8] = arg4[8]
rdx_6[9] = arg4[9]
rdx_6[0xa] = arg4[0xa]
rdx_6[0xb] = arg4[0xb]
int64_t rbp_3 = sx.q(*(arg1 + 0x78))
int32_t rax_6 = (rbp_3 + 1).d
*(arg1 + 0x78) = rax_6

if (rax_6 s> *(arg1 + 0x7c))
    sub_14090a6a0(arg1 + 0x70)

int64_t rax_7 = *(arg1 + 0x70)
int64_t rcx_8 = rbp_3 * 0x60
*(rcx_8 + rax_7) = *arg3
*(rcx_8 + rax_7 + 0x10) = arg3[1]
*(rcx_8 + rax_7 + 0x20) = arg3[2]
*(rcx_8 + rax_7 + 0x30) = arg3[3]
*(rcx_8 + rax_7 + 0x40) = arg3[4]
*(rcx_8 + rax_7 + 0x50) = arg3[5]
int64_t rdi_1 = sx.q(*(arg1 + 0x98))
int32_t rax_8 = (rdi_1 + 1).d
*(arg1 + 0x98) = rax_8

if (rax_8 s> *(arg1 + 0x9c))
    sub_14083a7e0(arg1 + 0x90)

int64_t rax_9 = *(arg1 + 0x90)
int64_t rcx_10 = rdi_1 * 3
*(rax_9 + (rcx_10 << 2)) = -1
*(rax_9 + (rcx_10 << 2) + 8) = 0xffffffff
return *(*(arg1 + 0xa0) + (sx.q(*(arg1 + 0xa8)) << 3) - 8)
