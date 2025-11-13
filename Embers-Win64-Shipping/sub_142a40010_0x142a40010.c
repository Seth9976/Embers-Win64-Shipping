// 函数: sub_142a40010
// 地址: 0x142a40010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_3
int64_t r9_1

do
    r9_1 = *(arg1 + 0x28)
    int64_t r8_1 = r9_1
    int32_t rax_2 = r9_1.d & 3
    
    if (rax_2 u< 2)
        r8_1 |= 3
    
    if ((r8_1.d & 3) == rax_2)
        break
    
    rax_3 = r9_1
    
    if (rax_3 == *(arg1 + 0x28))
        *(arg1 + 0x28) = r8_1
    else
        rax_3 = *(arg1 + 0x28)
while (r9_1 != rax_3)
void* rbx = **(arg1 + 0x38)
sub_142a40d10(arg2, arg1)
return sub_142a3ee10(arg1, rbx + 0x18) __tailcall
