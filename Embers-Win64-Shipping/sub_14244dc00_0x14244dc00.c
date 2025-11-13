// 函数: sub_14244dc00
// 地址: 0x14244dc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rdx
int32_t rbx

if ((*(arg1 + 0x22d) & 0x10) == 0)
    int64_t var_38
    __builtin_memset(&var_38, 0, 0x18)
    rdx = &var_38
    rbx = 2
else
    void var_20
    rdx = sub_141dc5010(&var_20)
    rbx = 1

*arg2 = *rdx
sub_140596d10(&arg2[1], &rdx[1])

if ((rbx.b & 2) != 0)
    rbx &= 0xfffffffd
    int64_t var_30
    
    if (var_30 != 0)
        sub_140a74f90(var_30)

int64_t var_18

if ((rbx.b & 1) != 0 && var_18 != 0)
    sub_140a74f90(var_18)

return arg2
