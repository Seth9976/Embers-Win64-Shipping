// 函数: sub_142432a20
// 地址: 0x142432a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x100)
void* rbx = arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x100) = 0

if (*(arg1 + 0x104) != arg2)
    sub_142442760(arg1, arg2)
