// 函数: sub_1428636a0
// 地址: 0x1428636a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rbx = 0x1000

if (arg4 == 0)
    rbx = arg4

int32_t arg_28

if (arg_28 == 0)
    if (sub_142863940(arg1, arg2, arg3, rbx | 0x60011) == 0)
        return 0x18d
else if (sub_142863940(arg1, arg2, arg3, rbx | 0x60010) == 0)
    return 0x18f

int32_t rbx_1 = rbx | 0x60012

if (not(test_bit(sub_1428aea30(arg3), 0xd)))
    int32_t var_18
    int32_t arg_20
    int32_t rax_4 = sub_1428a3ac0(arg3, &arg_20, &var_18, &arg_28, nullptr)
    int32_t r9_4 = arg_20
    int32_t r8_1 = arg_28
    
    if (rax_4 == 0)
        r8_1 = -1
    
    arg_28 = r8_1
    
    if (r9_4 == 0)
        r9_4 = var_18
    
    arg_20 = r9_4
    int32_t rax_5
    
    if (arg1 == 0)
        rax_5 = sub_142854690(arg2, rbx_1, r8_1, r9_4, arg3)
    else
        rax_5 = sub_1428546e0(arg1, rbx_1, r8_1, r9_4, arg3)
    
    if (rax_5 == 0)
        return 0x18e

return 1
