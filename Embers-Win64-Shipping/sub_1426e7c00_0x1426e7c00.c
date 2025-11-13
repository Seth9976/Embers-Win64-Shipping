// 函数: sub_1426e7c00
// 地址: 0x1426e7c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg3

if (arg3 == 0)
    *(arg1 + 0x55) |= 8
    int64_t rsi_1 = *(arg2 + 0xc0)
    void var_28
    int64_t rbx_1 = *sub_140b58260(&var_28, u"Behavior", (result + 1).d)
    void* rax_2 = sub_140cde0b0()
    sub_140d19010(rax_2, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    int64_t arg_18 = 0
    void* result_1 = sub_140d2dfc0(sub_14272b440(), rax_2, 0, 0, 0, 0, 0, 0, 0)
    result = result_1
    *(result_1 + 0x30) = rbx_1
    sub_14271dd40(result_1, rsi_1, arg1 + 0x28)

if (result != 0)
    sub_1427217f0(result, *(result + 0x68), arg4)

return result
