// 函数: sub_14095d700
// 地址: 0x14095d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result = sub_140d2dfc0(sub_140981760(), rax, 0, 0, 0, 0, 0, 0, 0)
sub_140d3a3a0(result + 0x50, arg2)
*(result + 0x58) = arg1
sub_140597df0(result + 0x68, arg4)
*(result + 0x78) = arg5
*(result + 0x7c) = arg6
int64_t rcx_6 = *arg4

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return result
