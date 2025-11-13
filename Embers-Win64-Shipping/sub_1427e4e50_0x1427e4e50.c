// 函数: sub_1427e4e50
// 地址: 0x1427e4e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e4f10(arg1)
int64_t* r8 = *arg1
char const* const var_28 = "__child"
char rax = arg1[9].b
uint64_t rcx = zx.q(r8[2].d)
char var_20 = 0

if ((*(r8 + 0x14) & 0x7fffffff) u> rcx.d)
    int128_t* rdx_1 = r8[1] + rcx * 0x18
    
    if (rdx_1 != 0)
        *rdx_1 = var_28.o
        rdx_1[1].q = rax.q
    
    r8[2].d += 1
else
    sub_1427e5380(r8, &var_28)

if (arg1[9].b != 0)
    int64_t* rcx_3 = arg1[5]
    arg1[9].b = (*(*rcx_3 + 0x20))(rcx_3)

void* rcx_4 = *arg1
*(*(rcx_4 + 8) + zx.q(*(rcx_4 + 0x10) - 1) * 0x18 + 0x10) = arg1[9].b
void* rcx_6 = *arg1
*(*(rcx_6 + 8) + zx.q(*(rcx_6 + 0x10) - 1) * 0x18 + 8) = arg1[9].b
return zx.q(arg1[9].b)
