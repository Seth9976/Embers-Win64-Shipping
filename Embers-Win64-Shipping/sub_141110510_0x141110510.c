// 函数: sub_141110510
// 地址: 0x141110510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
void* rdi = nullptr

if (rax != 0)
    int64_t rdx = sx.q(*(rax + 0x10c))
    int64_t* rbx_1 = *(arg2[1] + 0x10)
    int64_t rdi_1 = rbx_1[3]
    
    if (*(rdi_1 + (rdx << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx.d)
        rdi_1 = rbx_1[3]
    
    rdi = *(rdi_1 + (rdx << 3))

void* rsi_2 = *arg1
*(rsi_2 + 0x1b0) = rdi
sub_14198aa60(rdi)
void*** rcx_4 = (*(rsi_2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_4[3]

if (rax_2 u> *(rsi_2 + 0x38))
    sub_140b0e3d0(rsi_2 + 0x30, 0x20)
    rcx_4 = (*(rsi_2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_4[3]

*(rsi_2 + 0x30) = rax_2
float zmm0[0x4] = zx.o(0)
*(rsi_2 + 0x14) += 1
void* rbx_2 = *arg2
**(rsi_2 + 8) = rcx_4
*(rsi_2 + 8) = &rcx_4[1]
rcx_4[2] = rdi
rcx_4[1] = 0
*rcx_4 = &data_142dd5b40
void* r8 = arg1[2]
void* rdx_1 = *arg1
void* r9 = *arg1[1]
void* rdi_3 = *(r9 + 0x5b0) + 8
int32_t* rax_7 = arg1[4]
zmm0[0] = float.s(zx.q(*arg1[3]))
int64_t zmm1
zmm1.d = float.s(zx.q(*rax_7))
int64_t var_28 = *arg1[7]
sub_141119530(rbx_2, rdx_1, r8, r9, rdi_3, (_mm_unpacklo_ps(zmm0, zmm1)).q, arg1[5], *arg1[6])
sub_1419cd1c0(*arg1, rbx_2, *arg1[3], *arg1[4], 1)
void* rsi_3 = *arg1
sub_14077cfd0(rbx_2 + 0x118, rsi_3, *(rsi_3 + 0x1b0))
int64_t rax_13 = *(rdi_3 + 0x10)
int64_t* rbx_5 = (*(rsi_3 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_15 = &rbx_5[1]

if (rcx_15 u> *(rsi_3 + 0x38))
    sub_140b0e3d0(rsi_3 + 0x30, 0x10)
    rbx_5 = (*(rsi_3 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_15 = &rbx_5[1]

*(rsi_3 + 0x30) = rcx_15
*rbx_5 = rax_13
void*** rcx_19 = (*(rsi_3 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_19[6]

if (rax_14 u> *(rsi_3 + 0x38))
    sub_140b0e3d0(rsi_3 + 0x30, 0x38)
    rcx_19 = (*(rsi_3 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_19[6]

*(rsi_3 + 0x30) = rax_14
void**** rax_15 = *(rsi_3 + 8)
*(rsi_3 + 0x14) += 1
*rax_15 = rcx_19
*(rsi_3 + 8) = &rcx_19[1]
rcx_19[1] = 0
rcx_19[3] = rbx_5
rcx_19[4].d = 0
rcx_19[5] = 0
*rcx_19 = &data_142da7798
rcx_19[2].d = 1
*(rcx_19 + 0x24) = 1
return &data_142da7798
