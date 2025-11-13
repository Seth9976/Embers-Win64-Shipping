// 函数: sub_141ceb670
// 地址: 0x141ceb670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_88 = arg6
int64_t rsi = 0
void* r14 = *arg1
int32_t var_54 = data_143a1c6b0
int64_t var_b0 = 0
int64_t var_a8 = 0
int32_t rdi = *(arg1[1] + (sx.q(arg3) << 2))
int32_t var_b8 = data_143a1c6b4
int32_t rax_7 = sub_14090b490(r14 + 0x60, &var_b8)

if (var_b0 != 0)
    sub_140a74f90(var_b0)

sub_141cdb490(r14 + 0x28, rax_7, rdi)
int64_t rax_8 = arg1[1]
void* r14_1 = *arg1
int32_t var_60 = rax_7
int64_t var_b0_1 = 0
int32_t rdi_1 = *(rax_8 + (sx.q(arg4) << 2))
var_b8 = data_143a1c6b4
int64_t var_a8_1 = 0
int32_t rax_10 = sub_14090b490(r14_1 + 0x60, &var_b8)

if (var_b0_1 != 0)
    sub_140a74f90(var_b0_1)

sub_141cdb490(r14_1 + 0x28, rax_10, rdi_1)
void* r14_2 = *arg1
int64_t var_b0_2 = 0
int32_t rdi_2 = *(arg1[1] + (sx.q(arg5) << 2))
var_b8 = data_143a1c6b4
int64_t var_a8_2 = 0
int32_t rax_13 = sub_14090b490(r14_2 + 0x60, &var_b8)

if (var_b0_2 != 0)
    sub_140a74f90(var_b0_2)

sub_141cdb490(r14_2 + 0x28, rax_13, rdi_2)
void* r14_3 = *arg1
int64_t var_b0_3 = 0
int32_t rdi_3 = *(arg1[1] + (sx.q(var_88) << 2))
var_b8 = data_143a1c6b4
int64_t var_a8_3 = 0
int32_t rax_16 = sub_14090b490(r14_3 + 0x60, &var_b8)

if (var_b0_3 != 0)
    sub_140a74f90(var_b0_3)

sub_141cdb490(r14_3 + 0x28, rax_16, rdi_3)
int64_t* rcx_15 = *arg1
sub_14090a980(*((*(*rcx_15 + 0x270))(rcx_15) + 8) + 0x1a8, &var_88, data_143f360f0)
void* r8_5 = var_88.q
*(**(r8_5 + 0x18) + (sx.q(var_60) << 3)) = 0
*(**(r8_5 + 0x18) + (sx.q(rax_10) << 3)) = 0x3f800000
int64_t rdx_11 = sx.q(rax_13)
int64_t rcx_20 = **(r8_5 + 0x18)
*(rcx_20 + (rdx_11 << 3)) = 0x3f800000
*(rcx_20 + (rdx_11 << 3) + 4) = 0x3f800000
int64_t rdx_12 = sx.q(rax_16)
int64_t rcx_21 = **(r8_5 + 0x18)
*(rcx_21 + (rdx_12 << 3)) = 0
*(rcx_21 + (rdx_12 << 3) + 4) = 0x3f800000
uint64_t var_70 = 0
int32_t var_68 = 0
sub_1405dadb0(&var_70, 4)
void* rdi_4 = *arg1
int32_t rax_23 = data_143a1c6c4
int32_t rbx_4 = arg1[2].d
__builtin_memset(&var_b8, 0, 0x20)
int32_t var_98 = rax_23
*arg2 = sub_14090b0b0(rdi_4 + 0x108, &var_b8)
int64_t var_a8_4

if (var_a8_4 != 0)
    sub_140a74f90(var_a8_4)

int64_t rcx_25 = var_b8.q

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

var_88.q = &var_60
int32_t var_80 = 4
var_88.o = var_88.o
sub_141cda990(rdi_4 + 0x28, *arg2, rbx_4, &var_88, &var_70)
uint64_t rdi_5 = var_70
int64_t rcx_27 = rdi_5 + (sx.q(var_68) << 2)
uint64_t r14_7 = (rcx_27 - rdi_5 + 3) u>> 2

if (rdi_5 u> rcx_27)
    r14_7 = 0

if (r14_7 != 0)
    do
        int64_t* rcx_28 = *arg1
        int64_t rbx_5 = sx.q(*rdi_5)
        sub_14099b130(*((*(*rcx_28 + 0x270))(rcx_28) + 8) + 0x200, &var_88, data_143f36118)
        rdi_5 += 4
        rsi += 1
        *(rbx_5 + **(var_88.q + 0x18)) = 1
    while (rsi != r14_7)
    
    rdi_5 = var_70

if (rdi_5 != 0)
    sub_140a74f90(rdi_5)

__security_check_cookie(rax_1 ^ &var_e8)
return arg2
