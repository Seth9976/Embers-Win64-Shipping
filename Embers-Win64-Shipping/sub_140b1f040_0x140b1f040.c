// 函数: sub_140b1f040
// 地址: 0x140b1f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
char const (* r9)[0x4] = data_14399ea08
int64_t* result = (*(r9 + 0x18))(&data_14399ea08, arg2, zx.q(arg3), r9)

if (result == 0)
    return result

int64_t rax_1 = (*(*result + 0x28))(result)
int64_t rcx_1 = arg1[2]
int64_t rdx_1 = 0
arg1[1] = 0

if (rax_1 + 2 s> rcx_1)
    sub_140a4fbe0(arg1, rax_1 + 2)
    rdx_1 = arg1[1]
    rcx_1 = arg1[2]

int64_t r8_2 = rdx_1 + rax_1
arg1[1] = r8_2

if (r8_2 s> rcx_1)
    sub_140a4f990(arg1)
    r8_2 = arg1[1]

(*(*result + 0x150))(result, *arg1, r8_2)
char rax_4 = (*(*result + 0x1b8))(result)
int64_t r8_3 = *result
(*r8_3)(result, 1, r8_3)
return zx.q(rax_4)
