// 函数: sub_1414d9ce0
// 地址: 0x1414d9ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = nullptr

if (arg3 == 0)
    sub_1414c6e90(arg1, arg2, &arg_8)

void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rcx_2[2]

if (rax u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rcx_2[2]

*(arg2 + 0x30) = rax
int64_t* rax_1 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_1 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
*rcx_2 = &data_142da7758
char rax_3 = sub_1422dd780(arg1 + 0x10)
int64_t* r9 = arg_8
uint64_t rdx = arg2
char var_18 = arg3
void* rcx_7 = arg1
int32_t r8_1

if (rax_3 == 0)
    r8_1 = 3
else
    sub_1414da410(rcx_7, rdx, 0, r9, var_18)
    sub_1414da410(arg1, arg2, 1, arg_8, arg3)
    r9 = arg_8
    r8_1 = 2
    rdx = arg2
    var_18 = arg3
    rcx_7 = arg1

sub_1414da410(rcx_7, rdx, r8_1, r9, var_18)
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_11[2]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_11[2]

*(arg2 + 0x30) = rax_4
int64_t* rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_11
*(arg2 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142da7768
int64_t* rcx_15 = arg_8

if (rcx_15 == 0)
    return &data_142da7768

return (*(*rcx_15 + 0x38))(rcx_15)
