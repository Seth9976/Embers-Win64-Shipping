// 函数: sub_140d0a4d0
// 地址: 0x140d0a4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x78)
(*(*rbx + 0x70))(rbx)
sub_140ce9f20(rbx)
int64_t* rcx_2 = *(arg1 + 0x78)
int32_t rbx_2 = *(rcx_2 + 0x3c) * rcx_2[7].d
int32_t rax_2 = (*(*rcx_2 + 0x108))()
*(arg1 + 0x3c) = 0x50
int32_t rdx = rax_2
int32_t r8 = 4

if (rax_2 s<= 0)
    rdx = 0

int32_t rax_6 = (rbx_2 + 3 + ((rax_2 - 1) & neg.d(rax_2))) & 0xfffffffc
int32_t rcx_5 = 4

if (rdx s>= 4)
    rcx_5 = rdx

int32_t rax_8 = (rax_6 + 7) & 0xfffffffc
int32_t rdx_1 = 4
int32_t var_24 = rax_8

if (rcx_5 s>= 4)
    rdx_1 = rcx_5

int32_t rcx_8 = (rax_8 + 3 + rdx_1) & not.d(rdx_1 - 1)
int32_t rax_11 = 8
int32_t var_20 = rcx_8

if (rdx_1 s>= 4)
    r8 = rdx_1

if (rcx_8 s>= 8)
    rax_11 = rcx_8

int32_t arg_c = rax_11
int32_t result = r8.q:4.d
*(arg1 + 0x80) = rax_6.o
*(arg1 + 0x90) = result
return result
