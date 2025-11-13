// 函数: sub_14281ef68
// 地址: 0x14281ef68
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14281f074(arg1)
void* rax = *(arg1 + 0xb8)
int64_t rax_1

if (*(arg1 + 0xb0) != rax)
    rax_1 = *(*(rax - 8) + 8)
else
    rax_1 = 0

*(arg1 + 0xc8) += rax_1
int32_t* rax_3 = j_sub_140a82f30(0x38)
int32_t* rdi = rax_3
int32_t* arg_8 = rax_3

if (rax_3 == 0)
    rdi = nullptr
else
    *rax_3 = arg2
    __builtin_memset(&rax_3[1], 0, 0x15)
    __builtin_memset(&rax_3[8], 0, 0x18)

arg_8 = rdi
sub_14281e610(&rdi[8], arg1 + 0x80)
int32_t rcx_2
rcx_2.b = sub_14281ebf0(arg1, arg2) == 0x1d
rdi[1] = rcx_2 + 1
void* result = *(arg1 + 0x48)
*(rdi + 8) = result
int64_t* rdx_2 = *(arg1 + 0xb8)
int32_t* rbx_1

if (rdx_2 == *(arg1 + 0xc0))
    result = sub_14281d98c(arg1 + 0xb0, rdx_2, &arg_8)
    rbx_1 = arg_8
else
    rbx_1 = nullptr
    *rdx_2 = rdi
    *(arg1 + 0xb8) += 8

if (rbx_1 == 0)
    return result

sub_14281e584(&rbx_1[8])
return j_sub_140a74f90(rbx_1)
