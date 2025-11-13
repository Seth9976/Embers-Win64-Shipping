// 函数: sub_14149c780
// 地址: 0x14149c780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2.d

if (arg2.d == *(arg1 + 0xc))
    return 

int32_t rsi_1 = arg1[1].d
*(arg1 + 0xc) = arg2.d
int64_t rbp_1 = *arg1

if (arg2.d == 0)
    return 

char arg_10
char* var_30_1 = &arg_10
int32_t r15_2 = (arg2 * 3).d << 3
arg_10 = 0
void*** (* var_38)() = j_sub_140597fc0
void* rax_1 = sub_140a756e0(&var_38, &data_143958018)
int32_t rdx = 8
int64_t r13_1 = 8

if (r15_2 s>= 0x10)
    r13_1 = 0x10

int64_t r12_2 = not.q(r13_1 - 1)
int64_t rcx_3 = (r13_1 - 1 + *(rax_1 + 0x10)) & r12_2
int64_t rax = sx.q(r15_2) + rcx_3

if (rax u> *(rax_1 + 0x18))
    if (r15_2 s>= 0x10)
        rdx = 0x10
    
    sub_140b0e3d0(rax_1 + 0x10, rdx + r15_2)
    rcx_3 = (r13_1 - 1 + *(rax_1 + 0x10)) & r12_2
    rax = sx.q(r15_2) + rcx_3

*(rax_1 + 0x10) = rax
*arg1 = rcx_3

if (rbp_1 == 0 || rsi_1 == 0)
    return 

if (rbx s<= rsi_1)
    rsi_1 = rbx

memcpy(rcx_3, rbp_1, rsi_1 * 0x18)
