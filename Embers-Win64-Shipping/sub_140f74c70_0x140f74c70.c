// 函数: sub_140f74c70
// 地址: 0x140f74c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
void* result = (*(*rcx + 0x1a0))(rcx)

if (result.b == 0)
    void* rcx_1 = *(*(arg1 + 8) + 0x2b0)
    
    if (*(rcx_1 + 0x888) == 0)
        if (*(rcx_1 + 0x890) != 0)
            result = *(rcx_1 + 0x898)
        
        if (*(rcx_1 + 0x890) == 0 || result == 0 || *(result + 8) s<= 0)
            result.b = 0
            return result

result.b = 1
return result
