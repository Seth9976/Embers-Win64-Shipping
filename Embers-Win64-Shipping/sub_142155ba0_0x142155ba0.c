// 函数: sub_142155ba0
// 地址: 0x142155ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x45]
void* result

if (rcx == 0)
    void* rax_1 = (*(*arg1 + 0x150))(arg1)
    result = *(rax_1 + 0x100)
    
    if (result == 0)
        result = sub_14243ab60(rax_1)
        goto label_142155bdc
    
    if ((*(result + 0x264) & 1) == 0)
        goto label_142155bea
else
    result = sub_141f3cbf0(rcx)
label_142155bdc:
    
    if (result == 0 || (*(result + 0x264) & 1) == 0)
    label_142155bea:
        
        if (arg1[0x45] != 0)
            result.b = 1
            return result

result.b = 0
return result
