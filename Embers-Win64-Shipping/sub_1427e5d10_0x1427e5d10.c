// 函数: sub_1427e5d10
// 地址: 0x1427e5d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e4f10(arg1)
int64_t* r8 = *arg1
char rax = arg1[9].b
int64_t var_28 = arg2
uint64_t rcx = zx.q(r8[2].d)
char var_20 = 0

if ((*(r8 + 0x14) & 0x7fffffff) u<= rcx.d)
    return sub_1427e5380(r8, &var_28)

int64_t result = r8[1]
int128_t* rdx_1 = result + rcx * 0x18

if (rdx_1 != 0)
    *rdx_1 = var_28.o
    rdx_1[1].q = rax.q

r8[2].d += 1
return result
