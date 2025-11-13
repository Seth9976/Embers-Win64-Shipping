// 函数: sub_1414d5e70
// 地址: 0x1414d5e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x20)

if (data_1439b7064 != 0 && *(rbx + 0x13c) - 1 u<= 2)
    char rax = *(rbx + 0x138)
    
    if ((rax & 4) == 0 && (rax & 0x10) != 0 && (*(rbx + 0x139) & 1) != 0)
        void* rdi = *(rbx + 0x108)
        
        if (sub_14122cc00(arg1) == 0 || rdi == 0 || *(rdi + 0x48) == 0 || *(rdi + 0x10) == 0)
            rdi.b = 0
        else
            rdi.b = 1
        
        void* result = sub_1414cba40(rbx, arg2)
        
        if (result == 0 && rdi.b == 0)
            return result
        
        result.b = 1
        return result

return 0
