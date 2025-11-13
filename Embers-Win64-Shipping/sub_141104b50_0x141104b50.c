// 函数: sub_141104b50
// 地址: 0x141104b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rbp_1 = *arg1
char arg_18
char* var_40_1 = &arg_18
int32_t rbx_1 = arg2
void*** (* var_48)() = j_sub_140597fc0
arg_18 = 0
int32_t r12_2 = arg4 * arg3
uint64_t rcx_1 = 0x10
int64_t* rsi_1 = sub_140a756e0(&var_48, &data_143958018) + 0x10
int32_t rax_2 = 8

if (r12_2 s>= 0x10)
    rax_2 = 0x10

if (r12_2 s>= 0x10)
    rcx_1 = zx.q(rax_2)

uint64_t r13_1 = zx.q(rcx_1.d)
int64_t rdx_1 = not.q(rcx_1 - 1)
int64_t rcx_5 = (*rsi_1 - 1 + r13_1) & rdx_1
int64_t rax = sx.q(r12_2) + rcx_5

if (rax u> rsi_1[1])
    sub_140b0e3d0(rsi_1, r12_2 + r13_1.d)
    rcx_5 = (*rsi_1 - 1 + r13_1) & rdx_1
    rax = sx.q(r12_2) + rcx_5

*rsi_1 = rax
*arg1 = rcx_5

if (rbp_1 == 0 || rbx_1 == 0)
    return 

if (arg3 s<= rbx_1)
    rbx_1 = arg3

memcpy(rcx_5, rbp_1, rbx_1 * arg4)
