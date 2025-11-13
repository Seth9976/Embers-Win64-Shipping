// 函数: sub_141f62b70
// 地址: 0x141f62b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg5
char* r14 = arg7
char* r15 = arg8
*arg2 = 0
*arg3 = 0
*arg4 = 0
*rax = 0
*r14 = 0
*r15 = 0
int64_t rax_1 = *arg1
arg5.d = 0
int32_t arg_8 = 0
(*(rax_1 + 0x8c8))(arg1, &arg5, &arg_8)
arg8.d = 0
arg7.d = 0
*arg6 = arg5.d
(*(*arg1 + 0x648))(arg1, &arg8, &arg7)

if (sub_141f1d600(arg1) == 0 || arg1[0x88] == 0)
    return 0

char rax_6 = (*(*arg1 + 0x8b8))(arg1)
uint64_t r8_2 = zx.q(arg7.d)
uint64_t rdx_2 = zx.q(arg8.d)
*r15 = rax_6
char rax_8 = (*(*arg1 + 0x8b0))(arg1, rdx_2, r8_2)
uint64_t r8_3 = zx.q(arg_8)
uint64_t rdx_3 = zx.q(arg5.d)
*r14 = rax_8
(*(*arg1 + 0x8c0))(arg1, rdx_3, r8_3, arg2, arg3)
return 1
