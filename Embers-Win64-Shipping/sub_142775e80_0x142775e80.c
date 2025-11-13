// 函数: sub_142775e80
// 地址: 0x142775e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
j_sub_140b3db50()
void arg_8
int64_t* rax = sub_140b58170(&arg_8, "ChaosSolvers", 1)
void* rbx = arg1 + 0x38

if (arg1 == 0)
    rbx = nullptr

void* result = sub_140b3dbe0(*rax)
*(result + 8) = rbx
return result
