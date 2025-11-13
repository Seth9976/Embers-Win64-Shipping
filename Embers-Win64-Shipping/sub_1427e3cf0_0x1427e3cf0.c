// 函数: sub_1427e3cf0
// 地址: 0x1427e3cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e4f10(arg1)
int64_t* r8 = *arg1
char const* const var_28 = "Shapes"
uint64_t rcx = zx.q(r8[2].d)
char var_20 = 0

if ((*(r8 + 0x14) & 0x7fffffff) u> rcx.d)
    int128_t* rdx_1 = r8[1] + rcx * 0x18
    
    if (rdx_1 != 0)
        int64_t zmm1 = arg1[9].b.q
        *rdx_1 = var_28.o
        rdx_1[1].q = zmm1
    
    r8[2].d += 1
else
    sub_1427e5380(r8, &var_28)

sub_1427e59d0(arg1, arg2)
return sub_1427e5c70(arg1) __tailcall
