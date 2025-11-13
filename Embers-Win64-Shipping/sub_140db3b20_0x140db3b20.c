// 函数: sub_140db3b20
// 地址: 0x140db3b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d9bab0(arg3)
char result = sub_140dbe040(arg1)

if (result != 0)
    return result

void* rax = sub_140d99610(arg1)
void*** rax_1
int32_t r8
rax_1, r8 = sub_140d8b7f0(arg1, rax)
int128_t zmm0_1 = *arg6
*(rax_1 + 0x3c) = arg7
rax_1[7].d = arg8
*(rax_1 + 8) = zmm0_1

if (&rax_1[3] != arg4)
    r8 = *(rax_1 + 0x24)
    int64_t rdi_1 = sx.q(arg4[1].d)
    int64_t rsi_1 = *arg4
    rax_1[4].d = rdi_1.d
    
    if (rdi_1.d != 0 || r8 != 0)
        sub_1406387e0(&rax_1[3], rdi_1.d, r8)
        memcpy(rax_1[3], rsi_1, (rdi_1 << 3).d)
    else
        *(rax_1 + 0x24) = rdi_1.d

r8.b = 5
char rdx_3 = arg5 | 0x10

if (arg7 == 0)
    rdx_3 = arg5

return sub_140db26f0(rax, arg1, r8.b, arg2, arg3, rdx_3)
