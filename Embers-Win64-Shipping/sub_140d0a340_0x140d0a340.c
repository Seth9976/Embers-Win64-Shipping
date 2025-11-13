// 函数: sub_140d0a340
// 地址: 0x140d0a340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x78)
(*(*rbx + 0x70))(rbx)
sub_140ce9f20(rbx)
int64_t* rbx_1 = *(arg1 + 0x80)
(*(*rbx_1 + 0x70))(rbx_1, arg2)
sub_140ce9f20(rbx_1)
void* rax_2 = *(arg1 + 0x80)
int64_t* rcx_4 = *(arg1 + 0x78)
int32_t rsi_1 = *(rax_2 + 0x3c) * *(rax_2 + 0x38)
int32_t rdi_2 = *(rcx_4 + 0x3c) * rcx_4[7].d
int32_t rax_4 = (*(*rcx_4 + 0x108))()
int64_t* rcx_5 = *(arg1 + 0x80)
int64_t rdx_1 = *rcx_5
int32_t rdx_2 = rax_4
int32_t r10 = (*(rdx_1 + 0x108))(rcx_5, rdx_1)

if (rax_4 s<= 0)
    rdx_2 = 0

int32_t r9_2 = (rdi_2 - 1 + ((rax_4 - 1) & neg.d(rax_4)) + r10) & neg.d(r10)

if (rdx_2 s>= r10)
    r10 = rdx_2

int32_t r8 = r10
int32_t rdx_4 = neg.d(r10)

if (r10 s<= 0)
    r8 = 0

int32_t r9_3 = 4
int32_t rax_8 = 4
int32_t rdx_7 = ((rdx_4 & (r10 - 1)) + ((rsi_1 - 1 + r10 + r9_2) & rdx_4) + 3) & 0xfffffffc

if (r8 s>= 4)
    rax_8 = r8

int32_t rdx_9 = (rdx_7 + 7) & 0xfffffffc
int32_t r8_1 = 4
int32_t var_34 = rdx_9

if (rax_8 s>= 4)
    r8_1 = rax_8

int32_t rcx_17 = not.d(r8_1 - 1) & (rdx_9 + 3 + r8_1)
int32_t rax_11 = 8
int32_t var_30 = rcx_17

if (r8_1 s>= 4)
    r9_3 = r8_1

if (rcx_17 s>= 8)
    rax_11 = rcx_17

void* rcx_18 = *(arg1 + 0x80)
int32_t arg_c = rax_11
int32_t result = r9_3.q:4.d
int32_t result_1 = result
*(arg1 + 0x88) = r9_2.o
*(arg1 + 0x98) = rdx_7.o:0xc.q
sub_140ce9f10(rcx_18, *(arg1 + 0x88))
*(arg1 + 0x3c) = 0x50
return result
