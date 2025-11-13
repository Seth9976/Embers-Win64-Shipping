// 函数: sub_140b51490
// 地址: 0x140b51490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg2 + 0x70)

if (rsi == 0)
    arg1[1] = 0x29
    *arg1 = 8
    return 

char rax_2 = (*(*rsi + 0x78))(rsi)
int64_t r8_1 = *rsi
int64_t var_18
int64_t* rax_3
int64_t rdx_1
rax_3, rdx_1 = (*(r8_1 + 0x38))(rsi, &var_18, r8_1)
int64_t* rax_4 = sub_140b1a910(rax_3, rdx_1, arg3)
int32_t rcx_3 = 1
arg1[1] = 1

if (rax_2 != 0)
    rcx_3 = 0x11
    arg1[1] = 0x11

if (*(rax_4 + 0x3f) != 0)
    rcx_3 |= 0x20
    arg1[1] = rcx_3

if (*(rax_4 + 0x3c) != 0)
    rcx_3 |= 2
    arg1[1] = rcx_3

if (*(rax_4 + 0x3d) != 0)
    rcx_3 |= 4
    arg1[1] = rcx_3

if (*(rax_4 + 0x3e) != 0)
    arg1[1] = rcx_3 | 8

int64_t rcx_5 = var_18
*arg1 = rax_4[7].d

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)
