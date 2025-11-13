// 函数: sub_1419a3e00
// 地址: 0x1419a3e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = GetCurrentThreadId()
bool cond:0 = data_143f01c92 != 0
data_143de5474 = result

if (not(cond:0))
    *(arg1 + 8) = 1
    int32_t rbx_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_1)
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
    sub_140b38680("FlushRHIThreadTotal", rbx_1)
    int64_t* rcx_3 = data_143f0f180
    (*(*rcx_3 + 0x390))(rcx_3)

result.b = 1
return result
