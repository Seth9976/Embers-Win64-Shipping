// 函数: sub_142b67e00
// 地址: 0x142b67e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
char rdi_1 = arg2 & 0xfd
int64_t rbx
rbx.b = 0
void var_28
sub_142b8be40(arg1, &var_28)
void arg_10
int32_t rax = sub_142b8bf20(arg1, rdi_1, &arg_10, &arg_18)

if (rax - 0x5b u<= 1)
    int32_t rax_1 = sub_142b8bf20(arg1, rdi_1 & 0xfb, &arg_10, &arg_18)
    
    if (rax == 0x5b)
        rbx.b = rax_1 == 0x3a
    else if (((rax_1 - 0x4e) & 0xffffffdd) != 0 || rax_1 == 0x6e)
        rbx.b = 0
    else
        rbx.b = 1

sub_142b8c1f0(arg1, &var_28)
int64_t result

if (rbx.b != 0 && arg_18 s<= 0)
    result.b = 1
    return result

result.b = 0
return result
