// 函数: sub_1406c8a40
// 地址: 0x1406c8a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_24

if (arg2 u< 4)
    var_24 = 1
else
    uint32_t temp0_1 = divu.dp.d(0:arg2, 2)
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(temp0_1 + 8)
    int32_t rax_5
    rax_5.b = temp0_1 != 0xfffffff8
    int32_t var_34_1
    
    if (zx.d(rax_5.b) == 0)
        var_34_1 = 0x20
    else
        var_34_1 = 0x1f - temp0_2
    
    uint64_t rflags_2
    bool temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(temp0_1 + 7)
    char var_28_1
    
    if (temp0_1 == 0xfffffff9)
        var_28_1 = 0x20
    else
        var_28_1 = 0x1f - temp0_3
    
    int32_t var_14_1 = 1
    var_24 = 1 << ((0x20 - var_28_1) & (not.d(var_34_1 << 0x1a s>> 0x1f)).b)

uint64_t result

if (arg2 s<= 0 || (*(arg1 + 0x48) != 0 && *(arg1 + 0x48) s>= var_24
        && (*(arg1 + 0x48) s<= var_24 || zx.d(arg3) == 0)))
    result.b = 0
else
    *(arg1 + 0x48) = var_24
    sub_1405c1850(arg1)
    result.b = 1

return result
