// 函数: sub_142c7b4c0
// 地址: 0x142c7b4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
*(rbx + 0xd8) = -1
sub_142c6f1b0(rbx, 0)
sub_142c6f0c0(rbx, 0)
sub_142c6f270(rbx, -1)
sub_142c6f180(rbx, -1)
void* rax = *arg1

if (*(rax + 0x5e8) != 0)
    **(rax + 0x250) = 1

*arg2 = false
int32_t result
int512_t zmm2
result, zmm2 = sub_142c7b310(arg1)

if (result == 0)
    result = sub_142c78a60(arg1, arg2, zmm2)
    
    if (result == 0 && *arg2 != 0)
        return 0

return result
