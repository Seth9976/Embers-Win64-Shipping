// 函数: sub_141cfd030
// 地址: 0x141cfd030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141cfe6b0(arg1, arg2, arg4)
arg4[5] = 0
sub_140a30eb0(&arg4[5], 0, arg2[6].d, 4, 0)
void* rdx = arg2[5]

if ((rdx.b & 1) != 0)
    rdx = (rdx s>> 1) + &arg2[5]

void* rcx_1 = arg4[5]

if ((rcx_1.b & 1) != 0)
    rcx_1 = (rcx_1 s>> 1) + &arg4[5]

memcpy(rcx_1, rdx, arg2[6].d << 2)
int32_t result = arg2[6].d
arg4[6].d = result
return result
