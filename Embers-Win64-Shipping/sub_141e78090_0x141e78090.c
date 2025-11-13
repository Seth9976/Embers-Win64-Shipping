// 函数: sub_141e78090
// 地址: 0x141e78090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t* rax = sub_140958c20(&var_38, arg4, 0xff)
int128_t* rbx = &arg2[4]
void* rdx_1 = *rax
*(rdx_1 + 0x10) = *arg2
*(rdx_1 + 0x20) = arg2[2]
arg2[2] = 0
*(rdx_1 + 0x30) = *rbx
*(rdx_1 + 0x40) = rbx[1]

if (*(rdx_1 + 0x10) != 0)
    *arg2 = 0

*(rdx_1 + 0x50) = arg5
int32_t r8 = rax[2].d
int64_t* rdx_2 = rax[1]
void* rcx_2 = *rax
void* rax_4 = *(rcx_2 + 0x68)
*arg1 = rax_4

if (rax_4 != 0)
    *(rax_4 + 0x48) += 1

sub_1409787e0(rcx_2, rdx_2, r8, 1)

if (*arg2 != 0)
    int128_t* rdx_3 = arg2[2]
    
    if (rdx_3 != 0)
        rbx = rdx_3
    
    int64_t rdx_4 = *rbx
    (*(rdx_4 + 0x10))(rbx, rdx_4)

return arg1
