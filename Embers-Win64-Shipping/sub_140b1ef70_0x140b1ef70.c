// 函数: sub_140b1ef70
// 地址: 0x140b1ef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
char const (* r9)[0x4] = data_14399ea08
int64_t* result = (*(r9 + 0x18))(&data_14399ea08, arg2, zx.q(arg3), r9)

if (result == 0)
    return result

int32_t rax_1 = (*(*result + 0x28))(result)
int32_t rcx_1 = *(arg1 + 0xc)
int32_t rdx_1 = 0
arg1[1].d = 0

if (rax_1 + 2 s> rcx_1)
    sub_1405c5510(arg1, rax_1 + 2)
    rdx_1 = arg1[1].d
    rcx_1 = *(arg1 + 0xc)

int32_t r8_2 = rdx_1 + rax_1
arg1[1].d = r8_2

if (r8_2 s> rcx_1)
    sub_1405daba0(arg1)
    r8_2 = arg1[1].d

(*(*result + 0x150))(result, *arg1, sx.q(r8_2))
char rax_4 = (*(*result + 0x1b8))(result)
int64_t r8_4 = *result
(*r8_4)(result, 1, r8_4)
return zx.q(rax_4)
