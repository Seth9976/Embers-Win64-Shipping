// 函数: sub_141ef7be0
// 地址: 0x141ef7be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0xa) & 2) != 0 && sub_140d23dc0(arg1, 0x30) == 0)
    void* rdi_1 = *(arg1 + 0xa0)
    void* rdi_2
    
    if (rdi_1 == 0)
        rdi_2 = *(sub_1405be820(arg1) + 0x30)
    label_141ef7c49:
        char rdx
        
        if ((*(arg2 + 0xa) & 4) != 0 || *(arg2 + 0xb) != 0)
            rdx = 1
        else
            rdx = 0
        
        sub_1423c9cb0(arg2, rdx)
        sub_1423c6c10(arg2, rdi_2)
        char* result
        result.b = 1
        return result
    
    if (sub_140d23dc0(rdi_1, 0x30) == 0)
        rdi_2 = sub_141dc9840(rdi_1)
        goto label_141ef7c49

return 0
