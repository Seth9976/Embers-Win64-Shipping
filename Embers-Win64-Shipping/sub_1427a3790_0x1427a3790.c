// 函数: sub_1427a3790
// 地址: 0x1427a3790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d19010(arg4, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result = sub_140d2dfc0(sub_1427bf870(), arg4, 0, 0, 0, 0, 0, 0, 0)
sub_140d3a3a0(result + 0x30, arg1)
sub_14065da90(result + 0x38, arg2)
*(result + 0x58) = arg3
int64_t rax_1

if (arg3 == 0)
    rax_1 = 0
else
    int64_t rdx_3 = *arg3
    rax_1 = (*(rdx_3 + 8))(arg3, rdx_3)

*(result + 0x50) = rax_1

if (rax_1 == 0)
    *(result + 0x58) = 0

return result
