// 函数: sub_1414314c0
// 地址: 0x1414314c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_8 = data_1439b70d8

if (rax_8 != 0)
    int64_t rax = *(rax_8 + 0x10)
    *(arg1 + 0xef0) = rax
    
    if (rax == 0)
        *(arg1 + 0xef0) = *(data_143f10e68 + 0x10)

*(arg1 + 0xef8) = data_1439b54b8
void* rax_3 = data_1439b70e0

if (rax_3 != 0)
    int64_t rax_4 = *(rax_3 + 0x10)
    *(arg1 + 0xf00) = rax_4
    
    if (rax_4 == 0)
        int64_t rcx = *(data_143f111a8 + 0x10)
        *(arg1 + 0xf00) = rcx
        
        if (rcx == 0)
            *(arg1 + 0xf00) = *(data_143f10e68 + 0x10)

*(arg1 + 0xf08) = data_14396ee58
void* result = data_1439b70e8

if (result != 0)
    result = *(result + 0x10)
    *(arg1 + 0xf10) = result
    
    if (result == 0)
        result = data_143f10e68
        *(arg1 + 0xf10) = *(result + 0x10)

return result
