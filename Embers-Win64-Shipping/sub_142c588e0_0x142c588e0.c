// 函数: sub_142c588e0
// 地址: 0x142c588e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x8b0)
int64_t* result = nullptr

if (rbx == 0 || *(rbx + 0x14) == 0)
    return 0

for (void** i = *rbx; i != 0; i = *i)
    if (i[5] != 0)
        int64_t rax_1 = sub_142c59100(i)
        
        if (rax_1 == 0)
            sub_142c524d0(result)
            return 0
        
        int64_t* result_1 = sub_142c52400(result, rax_1)
        
        if (result_1 == 0)
            data_143ccb8a0(rax_1)
            sub_142c524d0(result)
            return 0
        
        result = result_1

return result
