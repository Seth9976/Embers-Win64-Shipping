// 函数: sub_142c85390
// 地址: 0x142c85390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
*(arg1 + 0xbc) = 2
char* rax = strstr(*(rbx + 0x4e38), ";mode=")

if (rax != 0)
label_142c853dc:
    *rax = 0
    char rax_1 = sub_142c70430(zx.d(rax[6]))
    
    if (rax_1 != 0x41 && rax_1 != 0x4e)
        *(rbx + 0x5db) = 0
        return 0
    
    *(rbx + 0x5db) = 1
else
    rax = strstr(arg1[0x18], ";mode=")
    
    if (rax != 0)
        goto label_142c853dc

return 0
