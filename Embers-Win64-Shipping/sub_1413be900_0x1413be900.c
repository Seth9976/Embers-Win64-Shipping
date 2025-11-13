// 函数: sub_1413be900
// 地址: 0x1413be900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422d6d20(arg1, arg2)
*(arg1 + 0x600) = 0

if (*(arg2 + 0x600) == 0)
    memmove(&arg1[0x540], &arg2[0x540], 0xc0)

int64_t rcx_1 = *(arg1 + 0x600)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0x600) = *(arg2 + 0x600)
*(arg2 + 0x600) = 0
*(arg1 + 0x608) = *(arg2 + 0x608)
*(arg1 + 0x60c) = *(arg2 + 0x60c)
*(arg2 + 0x608) = 0
*(arg2 + 0x60c) = 8
*(arg1 + 0x690) = 0

if (*(arg2 + 0x690) == 0)
    memmove(&arg1[0x610], &arg2[0x610], 0x80)

int64_t rcx_3 = *(arg1 + 0x690)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*(arg1 + 0x690) = *(arg2 + 0x690)
void* rcx_4 = &arg1[0x6f0]
*(arg2 + 0x690) = 0
*(arg1 + 0x698) = *(arg2 + 0x698)
*(arg1 + 0x69c) = *(arg2 + 0x69c)
*(arg2 + 0x698) = 0
*(arg2 + 0x69c) = 8
*(arg1 + 0x6a0) = 0
*(arg1 + 0x6a0) = *(arg2 + 0x6a0)
*(arg2 + 0x6a0) = 0
*(arg1 + 0x6a8) = *(arg2 + 0x6a8)
*(arg1 + 0x6ac) = *(arg2 + 0x6ac)
*(arg2 + 0x6a8) = 0
*(arg1 + 0x6b0) = *(arg2 + 0x6b0)
*(arg1 + 0x6b8) = *(arg2 + 0x6b8)
*(arg1 + 0x6c0) = *(arg2 + 0x6c0)
arg1[0x6c8] = arg2[0x6c8]
*(arg1 + 0x6d0) = 0
*(arg1 + 0x6d0) = *(arg2 + 0x6d0)
*(arg2 + 0x6d0) = 0
*(arg1 + 0x6d8) = *(arg2 + 0x6d8)
*(arg1 + 0x6dc) = *(arg2 + 0x6dc)
*(arg2 + 0x6d8) = 0
*(arg1 + 0x6e0) = 0
*(arg1 + 0x6e8) = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_16 = *(rcx_4 + 0x10)

if (rax_16 != 0)
    rcx_4 = rax_16

*rcx_4 = 0
*(rcx_4 + 8) = 0
*(arg1 + 0x710) = 0xffffffff
*(arg1 + 0x714) = 0
*(arg1 + 0x720) = 0
*(arg1 + 0x728) = 0
sub_1413c6350(&arg1[0x6e0], &arg2[0x6e0])

if (*(arg2 + 0x720) == 0)
    memmove(&arg1[0x718], &arg2[0x718], 4)

int64_t rcx_7 = *(arg1 + 0x720)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*(arg1 + 0x720) = *(arg2 + 0x720)
*(arg2 + 0x720) = 0
*(arg1 + 0x728) = *(arg2 + 0x728)
*(arg2 + 0x728) = 0
*(arg1 + 0x730) = 0
*(arg1 + 0x730) = *(arg2 + 0x730)
*(arg2 + 0x730) = 0
*(arg1 + 0x738) = *(arg2 + 0x738)
*(arg1 + 0x73c) = *(arg2 + 0x73c)
*(arg2 + 0x738) = 0
return arg1
