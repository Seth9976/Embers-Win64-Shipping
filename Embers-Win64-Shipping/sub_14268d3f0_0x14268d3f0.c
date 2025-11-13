// 函数: sub_14268d3f0
// 地址: 0x14268d3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x4a8)

if (result == 0 || *(result + 8) == 0)
    result.b = 1
else
    result.b = 0

int64_t* rcx = *(arg1 + 0x2e0)

if (rcx != 0)
    if (result.b == 0 && (*(*rcx + 0x40))(rcx).d s<= 0)
        result.b = 0
        return result
    
    result.b = 1

return result
