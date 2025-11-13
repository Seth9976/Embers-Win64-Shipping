// 函数: sub_1405bdd80
// 地址: 0x1405bdd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d3c6e0(arg1) == 0)
    *(arg1 + 8) = 0
else
    sub_140cea340()
    bool rcx
    void* result
    
    if (*(arg1 + 8) == 0)
        rcx = true
        result = nullptr
    else
        char rax_1 = sub_140d3e110(&arg1[4])
        result = *(arg1 + 8)
        rcx = rax_1 == 0
    
    if (rcx == 0 || arg1[8] == 0)
        goto label_1405bddf9
    
    void* result_1 = sub_140cd0630(&arg1[2], nullptr, 0)
    result = result_1
    
    if (result_1 != 0 && (data_143e1b828 & *(*(result_1 + 8) + 0x10)) != 0)
        *(arg1 + 8) = result
    label_1405bddf9:
        
        if (result != 0 && *(arg1 + 0x28) != 0 && (*(result + 0x30) & 0x18000) == 0)
            return result
    else if (*(arg1 + 8) != 0)
        arg1[4] = 0xffffffff
        arg1[5] = 0
        *(arg1 + 8) = 0

return 0
