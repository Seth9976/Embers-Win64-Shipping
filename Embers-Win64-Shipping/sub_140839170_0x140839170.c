// 函数: sub_140839170
// 地址: 0x140839170
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
void* rax_1 = sub_140a756e0(&var_48, &data_143958018)
int32_t rdx = 8
int64_t r13_1 = 8

if (r12_2 s>= 0x10)
    r13_1 = 0x10

int64_t r8_1 = not.q(r13_1 - 1)
int64_t rcx_3 = (r13_1 - 1 + *(rax_1 + 0x10)) & r8_1
int64_t rax = sx.q(r12_2) + rcx_3

if (rax u> *(rax_1 + 0x18))
    if (r12_2 s>= 0x10)
        rdx = 0x10
    
    sub_140b0e3d0(rax_1 + 0x10, rdx + r12_2)
    rcx_3 = (r13_1 - 1 + *(rax_1 + 0x10)) & r8_1
    rax = sx.q(r12_2) + rcx_3

*(rax_1 + 0x10) = rax
*arg1 = rcx_3

if (rbp_1 == 0 || rbx_1 == 0)
    return 

if (arg3 s<= rbx_1)
    rbx_1 = arg3

memcpy(rcx_3, rbp_1, rbx_1 * arg4)
