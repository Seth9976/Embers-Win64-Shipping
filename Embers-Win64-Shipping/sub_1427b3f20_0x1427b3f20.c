// 函数: sub_1427b3f20
// 地址: 0x1427b3f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141f4a580(arg2, arg1 + 0x10, 0, 0, 0)

if (*(arg1 + 0x70) == 0)
    return result

void* rax = *(arg1 + 0x80)
void* rcx_1 = arg1 + 0x90
char arg_8 = 0
int64_t* arg_10 = arg2

if (rax != 0)
    rcx_1 = rax

void* arg_18 = arg1
return (*(arg1 + 0x70))((*(*rcx_1 + 8))(rcx_1), &arg_18, &arg_10, &arg_8)
