// 函数: sub_1410b8fb0
// 地址: 0x1410b8fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14108cb90(arg4, arg2[0x2a8])
sub_1411463f0(arg2, &arg4[0x1ac])
int128_t* rdx_3

if (sub_1422eb5d0(arg2) == 0)
    rdx_3 = arg2[0x2a8]
    sub_14108cb90(&arg4[0xa0], rdx_3)
    int128_t zmm1_1 = *(arg4 + 0x6c0)
    *(arg4 + 0x750) = *(arg4 + 0x6b0)
    int128_t zmm0_1 = *(arg4 + 0x6d0)
    *(arg4 + 0x760) = zmm1_1
    zmm1_1 = *(arg4 + 0x6e0)
    *(arg4 + 0x770) = zmm0_1
    zmm0_1 = *(arg4 + 0x6f0)
    *(arg4 + 0x780) = zmm1_1
    zmm1_1 = *(arg4 + 0x700)
    *(arg4 + 0x790) = zmm0_1
    zmm0_1 = *(arg4 + 0x710)
    *(arg4 + 0x7a0) = zmm1_1
    zmm1_1 = *(arg4 + 0x730)
    *(arg4 + 0x7b0) = zmm0_1
    *(arg4 + 0x7c0) = *(arg4 + 0x720)
    zmm0_1 = *(arg4 + 0x740)
    *(arg4 + 0x7d0) = zmm1_1
    *(arg4 + 0x7e0) = zmm0_1
else
    void* rbx_1 = *(**arg2 + 8)
    sub_14108cb90(&arg4[0xa0], *(rbx_1 + 0x1540))
    rdx_3 = &arg4[0x1d4]
    sub_1411463f0(rbx_1, rdx_3)

int64_t* rcx_5 = *(*arg2 + 0x20)
void* rax_4

if (rcx_5 != 0)
    rax_4 = (*(*rcx_5 + 0x248))(rcx_5, rdx_3)

void* const rbx_2

if (rcx_5 == 0 || rax_4 == 0)
    rbx_2 = nullptr
else
    rbx_2 = sub_1413e9440(rax_4)

sub_14123d450(arg2, &arg4[0x140])
sub_1412998b0(arg2, rbx_2, &arg4[0x158])
void* rax_6 = sub_1422c6ca0(arg1)

if (rax_6 == 0)
    rax_6 = data_1439b70c8

int64_t result = *(rax_6 + 0x10)
*(arg4 + 0x7f0) = result
return result
