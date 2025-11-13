// 函数: sub_1428f2080
// 地址: 0x1428f2080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rdi = 1
char* const var_18 = &data_1437020ab
int32_t var_20 = arg4 + 2
int64_t var_28 = arg2
sub_1428b6f70(arg1, "%*s%s:\n%*s", zx.q(arg4))
char const (** const rbx_1)[0x7] = &data_143517228

do
    if (sub_14291c010(arg3, rbx_1[-1].d) != 0)
        if (rdi == 0)
            sub_14289a750(arg1, &data_14321f660)
        else
            rdi = 0
        
        sub_14289a750(arg1, *rbx_1)
    
    rbx_1 = &rbx_1[3]
while (*rbx_1 != 0)

char const* const rdx_2 = "<EMPTY>\n"

if (rdi == 0)
    rdx_2 = &data_14370209c

sub_14289a750(arg1, rdx_2)
return 1
