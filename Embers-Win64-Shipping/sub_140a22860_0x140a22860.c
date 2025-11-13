// 函数: sub_140a22860
// 地址: 0x140a22860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x60, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e51e28
    result_1[2] = *(arg1 + 0x10)
    result_1[4] = 0
    
    if (result_1[2] != 0)
        void* rax = *(arg1 + 0x20)
        void* rcx = arg1 + 0x30
        
        if (rax != 0)
            rcx = rax
        
        (**rcx)(rcx)
    
    result = *(arg1 + 0x58)
    result_1[0xb] = result

return result
