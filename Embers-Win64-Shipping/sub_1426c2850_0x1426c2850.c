// 函数: sub_1426c2850
// 地址: 0x1426c2850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x20)
sub_140d19010(rbx, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int32_t rdi = 0
int64_t arg_8 = 0
void* result = sub_140d2dfc0(sub_14272dfc0(), rbx, 0, 0, 0, 0, 0, 0, 0)
sub_140597df0(result + 0x38, arg1 + 0x30)
*(result + 0x30) = *(arg1 + 0x40)

if (*(arg1 + 0x40) != 0 && *(arg1 + 0x38) s> 1)
    rdi = 1

*(result + 0x48) &= 0xfffffffe
*(result + 0x48) |= rdi
return result
