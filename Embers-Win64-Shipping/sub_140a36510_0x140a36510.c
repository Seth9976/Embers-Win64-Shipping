// 函数: sub_140a36510
// 地址: 0x140a36510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return sub_140b56590(arg2, 0) __tailcall

void* rbx = *arg1

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + arg1

int64_t var_20
sub_140a2e390(&var_20, u"FMemoryImageAllocator<%s>", *(arg3 + 8))
void var_28
sub_140b56840(arg2, &var_28, &var_20, 0)
int64_t rcx_2 = var_20

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140b4d360(&var_28, arg3)
sub_140b56010(&var_28, arg5)
return sub_140b566b0(&var_28, rbx, arg3, arg4)
