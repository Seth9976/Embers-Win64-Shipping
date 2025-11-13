// 函数: sub_1421536e0
// 地址: 0x1421536e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x290))()
void* rax_1 = arg1[0xb]
*(rax_1 + 0x264) += 1
void* rax_2 = arg1[0xb]
*(rax_2 + 0x26c) += 1
int64_t rax_3 = arg1[0x73]
*(arg1 + 0x271) = 1
(*(rax_3 + 0x98))(&arg1[0x73])
sub_140b560b0(&arg1[0x73], (*(arg2 + 0xf0) & 6) != 0)
uint8_t rdx_1 = *(arg2 + 0xf0)

if ((rdx_1 & 6) != 0)
    sub_140b560b0(&arg1[0x73], rdx_1 u>> 1 & 1)
    sub_140b560b0(&arg1[0x73], *(arg2 + 0xf0) u>> 2 & 1)
    rdx_1 = *(arg2 + 0xf0)
    
    if ((rdx_1 & 4) != 0)
        uint32_t arg_18 = zx.d(*(arg2 + 0xf2))
        (*(arg1[0x73] + 0x160))(&arg1[0x73], &arg_18, 0xf)
        rdx_1 = *(arg2 + 0xf0)

sub_140b560b0(&arg1[0x73], rdx_1 u>> 4 & 1)
sub_140b560b0(&arg1[0x73], *(arg2 + 0xf0) u>> 5 & 1)
int32_t arg_8 = *(arg2 + 0xd8)
(*(arg1[0x73] + 0x168))(&arg1[0x73], &arg_8)
sub_140b560b0(&arg1[0x73], *(arg2 + 0xf1) u>> 1 & 1)
sub_140b560b0(&arg1[0x73], *(arg2 + 0xf1) u>> 2 & 1)
int512_t zmm0 = sub_140b560b0(&arg1[0x73], *(arg2 + 0xf0) u>> 6 & 1)
uint8_t rcx_11 = *(arg2 + 0xf0)

if ((rcx_11 & 0x20) != 0 && ((*(arg1 + 0xa4) u>> 1).b & 1) == 0)
    zmm0 = sub_140b56350(&arg1[0x73], *(arg2 + 0xe8), 0x400)
    rcx_11 = *(arg2 + 0xf0)

if ((rcx_11 & 0x40) != 0)
    sub_140b560b0(&arg1[0x73], rcx_11 u>> 7)
    zmm0 = sub_140b560b0(&arg1[0x73], *(arg2 + 0xf1) & 1)
    rcx_11 = *(arg2 + 0xf0)

if ((rcx_11 & 0x22) != 0)
    arg4 = sub_140ca89d0(&arg1[0x73], arg2 + 0xe0, zmm0, arg4)

sub_140b56350(&arg1[0x73], *(arg2 + 0xa0), arg1[0x14].d << 3)
arg1[0x4e].b = arg3
int32_t rbx_1 = *(arg2 + 0xa0)
*(arg2 + 0xd0) = *(arg1[0xb] + 0x218)
int32_t rdi_1 = arg1[0x87].d
sub_14214ee30(arg1, rdi_1, rbx_1, arg4)
int32_t rax_11 = sub_142158960(arg1, arg1[0x85], rdi_1, *(arg2 + 0x90), rbx_1, 1)
int32_t rdi_2 = *(arg2 + 0xd8)
*(arg2 + 0xec) = rax_11

if (rax_11 != arg1[0x2e6].d)
    int32_t r8_4 = arg1[0x2e2].d
    int64_t rdx_18 = zx.q(r8_4 - *(arg1 + 0x1714)) + 1
    
    if (rdx_18 u> sx.q(arg1[0x2e5].d))
        sub_142154fa0(&arg1[0x2e2], rdx_18.d)
        r8_4 = arg1[0x2e2].d
    
    arg1[0x2e2].d = r8_4 + 1
    *(arg1[0x2e4] + ((zx.q(arg1[0x2e3].d) & zx.q(r8_4)) << 2)) = rax_11 | 0x80000000
    arg1[0x2e6].d = rax_11

int32_t r8_5 = arg1[0x2e2].d
int64_t rdx_21 = zx.q(r8_5 - *(arg1 + 0x1714)) + 1

if (rdx_21 u> sx.q(arg1[0x2e5].d))
    sub_142154fa0(&arg1[0x2e2], rdx_21.d)
    r8_5 = arg1[0x2e2].d

arg1[0x2e2].d = r8_5 + 1
*(arg1[0x2e4] + ((zx.q(arg1[0x2e3].d) & zx.q(r8_5)) << 2)) = rdi_2 & 0x7fffffff
int64_t* rcx_26 = arg1[0xd]

if (rcx_26 == 0)
    goto label_1421539e5

if ((*(arg2 + 0xf1) & 2) != 0)
    (*(*rcx_26 + 0x298))(rcx_26, zx.q(*(arg2 + 0xec)), arg2)
label_1421539e5:
    
    if ((*(arg2 + 0xf1) & 2) != 0)
        void* rcx_27 = arg1[0xb]
        *(rcx_27 + 0x248) += ((*(arg2 + 0xa0) + arg1[0x87]) s>> 3).d

return zx.q(*(arg2 + 0xec))
