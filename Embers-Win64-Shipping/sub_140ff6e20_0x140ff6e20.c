// 函数: sub_140ff6e20
// 地址: 0x140ff6e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* entry_r8
int32_t entry_r9
char var_10

if (data_143f01c92 == 0)
label_140ff6e52:
    
    if (sub_140a80f40() != 0)
        var_10 = arg6
        return sub_140ff6d70(arg1, entry_r8, entry_r9, arg2, arg3, arg4, arg5)
else
    char rax_1 = sub_140a80f10()
    
    if (rax_1 != 0)
        var_10 = arg6
        return sub_140ff6d70(arg1, entry_r8, entry_r9, arg2, arg3, arg4, arg5)
    
    if (data_143f01c92 == rax_1)
        goto label_140ff6e52

if (arg4 == 0)
    int32_t rsi = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rsi)
    int128_t entry_zmm2
    int128_t entry_zmm3
    
    if (data_143f02bac u> 0)
        j_sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_2
    rdx_2.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rsi)
    char var_10_1 = arg6
    return sub_140ff6d70(arg1, entry_r8, entry_r9, arg2, arg3, 0, arg5)

int32_t rdx_5

if (entry_r9 == 1)
    rdx_5 = 1
else if (entry_r9 == 2)
    rdx_5 = 2
else if (entry_r9 == 3)
    rdx_5 = 3
else if (entry_r9 == 4)
    rdx_5 = 4
else if (entry_r9 == 5)
    rdx_5 = 5
else
    rdx_5 = 0

int32_t var_28
var_28.q = arg5
return sub_140fec020(entry_r8, arg3, rdx_5 + arg2 * 6, arg4, var_28, 1)
