// 函数: sub_14095dc00
// 地址: 0x14095dc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result = sub_140d2dfc0(sub_140981890(), rax, 0, 0, 0, 0, 0, 0, 0)
sub_140d3a3a0(result + 0x50, arg2)
*(result + 0x58) = arg1
sub_140597df0(result + 0x60, arg3)
*(result + 0x70) = *arg4
int64_t rcx_5 = *arg3

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return result
