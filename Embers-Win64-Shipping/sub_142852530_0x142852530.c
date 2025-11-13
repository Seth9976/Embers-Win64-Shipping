// 函数: sub_142852530
// 地址: 0x142852530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rax = *(arg1 + 0x16d0)

if (rax == 0)
    rax = sub_1428ac890()
    *(arg1 + 0x16d0) = rax
    
    if (rax == 0)
        return 0xffffffff

int32_t result_1
int32_t rax_2 = sub_1428ac900(arg1 + 0x16c8, rax, &result_1, arg3, arg2, 0x28)
int64_t var_18

if (rax_2 == 0)
    var_18.d = 0x685
    *(arg1 + 0x28) = 1
    sub_1428a5670(0x14, 0x185, 0x195, "ssl\ssl_lib.c", var_18.d)
else if (rax_2 == 1)
    *(arg1 + 0x28) = 6
else if (rax_2 == 2)
    *(arg1 + 0x28) = 5
else
    if (rax_2 == 3)
        uint64_t result = zx.q(result_1)
        *(arg1 + 0x16c8) = 0
        return result
    
    var_18.d = 0x692
    *(arg1 + 0x28) = 1
    sub_1428a5670(0x14, 0x185, 0x44, "ssl\ssl_lib.c", var_18.d)
return 0xffffffff
