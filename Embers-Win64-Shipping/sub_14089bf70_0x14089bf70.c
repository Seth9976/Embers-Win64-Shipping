// 函数: sub_14089bf70
// 地址: 0x14089bf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
sub_1420197c0(arg1, sub_140d20910())
sub_140591530(&arg1[0x66])
void* arg_10 = &arg1[0x90]
sub_14089bea0(&arg1[0x90], std::wcerr, 2)
arg_10 = &arg1[0xa6]
sub_14089bea0(&arg1[0xa6], std::wclog, 5)
*arg1 = &data_142dfb808
arg1[5] = &data_142dfbb50
arg1[7] = &data_142dfbd20
__builtin_memset(&arg1[0xbc], 0, 0x28)
void** rax_1 = j_sub_140a82f30(0x10)
rax_1[1] = 0
arg1[0xbc] = rax_1
*rax_1 = &arg1[0xbc]
arg1[0xc1] = 0
int32_t rax_2 = data_143f0f1a0

if (rax_2 == 0 || rax_2 == 0xe)
    rax_2.b = 1
else
    rax_2.b = 0

arg1[0xc2].b = rax_2.b
*(arg1 + 0x611) = 0
return arg1
