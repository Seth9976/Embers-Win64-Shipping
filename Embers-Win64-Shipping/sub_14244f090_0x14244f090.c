// 函数: sub_14244f090
// 地址: 0x14244f090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
void* result = sub_140d23dc0(arg1, 0x30)

if (result.b == 0)
    result = sub_140d21d80(arg1)
    
    if (((*(result + 0x50) u>> 0x14).b & 1) == 0)
        return sub_14244f580(arg1) __tailcall

return result
