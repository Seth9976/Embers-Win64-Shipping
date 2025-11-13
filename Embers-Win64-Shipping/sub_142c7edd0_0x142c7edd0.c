// 函数: sub_142c7edd0
// 地址: 0x142c7edd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
char arg_8 = 0
*(rbx + 0xd8) = -1
sub_142c6f1b0(rbx, 0)
sub_142c6f0c0(rbx, 0)
sub_142c6f270(rbx, -1)
sub_142c6f180(rbx, -1)
*(arg1 + 0x729) = 1
int32_t rax
int64_t zmm1
int512_t zmm2
rax, zmm1, zmm2 = sub_142c7eb10(arg1, &arg_8, arg2, arg3)
int32_t rbx_1 = rax

if (rax != 0)
    sub_142c7e3d0(&arg1[0xd3])
else
    if (*arg2 == rax.b)
        return rax
    
    rax = sub_142c7e480(arg1, arg_8, zmm2, zmm1)
    rbx_1 = rax
    
    if (rax != 0)
        return rax

return rbx_1
